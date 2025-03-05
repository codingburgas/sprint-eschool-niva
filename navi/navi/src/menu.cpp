#include "../src/pch.h"
#include "../src/menu.h"

Menu::Menu()
{
	StartButton = { 350, 275, 150.f, 50.f };
	SettingsButton = { 350, 375, 150, 50 };
	ExitButton = { 350, 475, 150, 50 };
	Background = LoadTexture("Graphics/tester.png");
}
void Menu::Draw()
{
	ClearBackground(RAYWHITE);
	DrawTexture(Background, 0, 0, WHITE);
	DrawRectangleRec(StartButton, GREEN);
	DrawRectangleRec(SettingsButton, GRAY);
	DrawRectangleRec(ExitButton, RED);
}

bool Menu::IsStartClicked()
{
	if (CheckCollisionPointRec(GetMousePosition(), StartButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		return 1;
	else 
		return 0;
}
bool Menu::IsSettingsClicked(bool check)
{
	if (CheckCollisionPointRec(GetMousePosition(), SettingsButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT) || check)
		return 1;
	else
		return 0;
}
bool Menu::IsExitClicked()
{
	if (CheckCollisionPointRec(GetMousePosition(), ExitButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		return 1;
	else
		return 0;
}
void Menu::DrawSettings()
{
	ClearBackground(RAYWHITE);
	DrawTexture(Background, 0, 0, WHITE);

}