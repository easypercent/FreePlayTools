#pragma once

#include <bakkesmod/plugin/bakkesmodplugin.h>
#include <imgui.h>
#include <imgui_internal.h>

class PluginComponent
{
public:
    explicit PluginComponent(BakkesMod::Plugin::BakkesModPlugin *plugin);

    virtual void onLoad() = 0;
    virtual void onUnload() = 0;
    virtual void render() = 0;

protected:
    BakkesMod::Plugin::BakkesModPlugin *plugin;
};