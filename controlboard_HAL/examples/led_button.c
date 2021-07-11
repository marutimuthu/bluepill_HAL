/* Infinite loop */
/* USER CODE BEGIN WHILE */
while (1)
{
    /* USER CODE END WHILE */
    // IF Button Is Pressed
    if (HAL_GPIO_ReadPin(GPIOB, DI_1_Pin))
    {
        // Set The LED ON!
        HAL_GPIO_WritePin(GPIOC, LED1_Pin, GPIO_PIN_SET);
    }
    else
    {
        // Else .. Turn LED OFF!
        HAL_GPIO_WritePin(GPIOC, LED1_Pin, GPIO_PIN_RESET);
    }
    /* USER CODE BEGIN 3 */
}