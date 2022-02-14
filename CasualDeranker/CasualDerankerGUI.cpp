#include "pch.h"
#include "CasualDeranker.h"

/* Plugin Settings Window code here
std::string CasualDeranker::GetPluginName() {
	return "CasualDeranker";
}

void CasualDeranker::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> CasualDeranker
void CasualDeranker::RenderSettings() {
	ImGui::TextUnformatted("CasualDeranker plugin settings");
}
*/

/*
// Do ImGui rendering here
void CasualDeranker::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string CasualDeranker::GetMenuName()
{
	return "casualderanker";
}

// Title to give the menu
std::string CasualDeranker::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void CasualDeranker::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool CasualDeranker::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool CasualDeranker::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void CasualDeranker::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void CasualDeranker::OnClose()
{
	isWindowOpen_ = false;
}
*/
