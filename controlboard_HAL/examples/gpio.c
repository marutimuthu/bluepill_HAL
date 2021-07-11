while (1)
{
    /* USER CODE END WHILE */
    HAL_GPIO_TogglePin(GPIOC, LED3_Pin);
    HAL_Delay(100);
    HAL_GPIO_TogglePin(GPIOC, LED2_Pin);
    HAL_Delay(200);
    HAL_GPIO_TogglePin(GPIOC, LED1_Pin);
    HAL_Delay(300);
    /* USER CODE BEGIN 3 */
}