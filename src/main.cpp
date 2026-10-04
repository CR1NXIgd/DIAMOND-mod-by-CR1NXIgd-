auto demonSprite = CCSprite::createWithSpriteFrameName("diffIcon_04_btn_001.png");
        if (!demonSprite) return;

        auto slayerBtn = CCMenuItemSpriteExtra::create(
            demonSprite,
            this,
            menu_selector(MyPauseMenu::onOpenSlayerMenu)
        );

        auto menu = this->getChildByID("center-button-menu");
        if (menu) {
            menu->addChild(slayerBtn);
            menu->updateLayout(); 
        }
    }

    void onOpenSlayerMenu(CCObject* sender) {
        auto layer = Cr1nxiSlayerMenu::create();
        if (layer) {
            CCDirector::sharedDirector()->getRunningScene()->addChild(layer, 500);
        }
    }
};