#pragma once

#include "PluginToolkitBase.h"
#include "../components/kismet/KismetViewerComponent.h"
#include "../components/kismet/KismetEditorComponent.h"

class KismetToolkit : public PluginToolkitBase
{
private:
    KismetViewerComponent kismetViewComponent;
    KismetEditorComponent kismetEditorComponent;

public:
    explicit KismetToolkit(BakkesMod::Plugin::BakkesModPlugin *plugin);

    std::string title() override;
    void onLoad() override;
    void render() override;
    void onEvent(const std::string &eventName, bool post, void *params) override;
};
