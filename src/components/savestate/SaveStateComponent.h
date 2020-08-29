#pragma once

#include "../../plugin/PluginComponent.h"
#include "../../models/GameState.h"

class SaveStateComponent : public PluginComponent
{
private:
    bool isSaved;
    GameState saveState;

public:
    explicit SaveStateComponent(BakkesMod::Plugin::BakkesModPlugin *plugin);

    void onLoad() override;
    void onUnload() override;
    void render() override;

    void save();
    void load();
    bool isStateSaved() const;

    bool isComponentEnabled();
    void setComponentEnabled(bool enabled);

private:
    void onComponentEnabledChanged();
};
