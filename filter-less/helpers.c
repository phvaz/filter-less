#include "helpers.h"
#include <math.h>
#include <stdint.h>
#include <string.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Calculate grayscale value
            float gray = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0;

            int roundedGray = round(gray);

            // Set grayscale value for each color channel
            image[i][j].rgbtRed = roundedGray;
            image[i][j].rgbtGreen = roundedGray;
            image[i][j].rgbtBlue = roundedGray;

        }
    }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < width; j++)
        {
            // Sets the original value
            uint8_t originalRed = image[i][j].rgbtRed;
            uint8_t originalGreen = image[i][j].rgbtGreen;
            uint8_t originalBlue = image[i][j].rgbtBlue;

            // Apply the sepia formula
            float sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue;
            float sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue;
            float sepiaBlue =  .272 * originalRed + .534 * originalGreen + .131 * originalBlue;

            //
            image[i][j].rgbtRed = (uint8_t)(sepiaRed > 255 ? 255 : round(sepiaRed));
            image[i][j].rgbtGreen = (uint8_t)(sepiaGreen > 255 ? 255 : round(sepiaGreen));
            image[i][j].rgbtBlue = (uint8_t)(sepiaBlue > 255 ? 255 : round(sepiaBlue));

        }

    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < width / 2; j++) // iterate only up to half of the width
        {
            // Swap pixels along the vertical axis
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of the original image
    RGBTRIPLE copy[height][width];
    memcpy(copy, image, sizeof(RGBTRIPLE) * height * width);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sumRed = 0;
            int sumGreen = 0;
            int sumBlue = 0;
            int count = 0;

            // Iterate over the neighboring pixels
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    // Check if neighboring pixel is within bounds
                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        // Accumulate color values
                        sumRed += copy[ni][nj].rgbtRed;
                        sumGreen += copy[ni][nj].rgbtGreen;
                        sumBlue += copy[ni][nj].rgbtBlue;
                        count++;
                    }
                }
            }

            // Update pixel values with the average
            image[i][j].rgbtRed = round((float)sumRed / count);
            image[i][j].rgbtGreen = round((float)sumGreen / count);
            image[i][j].rgbtBlue = round((float)sumBlue / count);
        }
    }
}

