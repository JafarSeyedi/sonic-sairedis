#pragma once

#include "Notification.h"

namespace sairedis
{
    class NotificationSwitchShutdownRequest:
        public Notification
    {
        public:

            NotificationSwitchShutdownRequest(
                    _In_ const std::string& serializedNotification);

            virtual ~NotificationSwitchShutdownRequest() = default;

        public:

            virtual sai_object_id_t getSwitchId() const override;

            virtual sai_object_id_t getAnyObjectId() const override;

            virtual void processMetadata() const override;

            virtual void executeCallback(
                    _In_ const sai_switch_notifications_t& switchNotifications) const override;

        private:

            sai_object_id_t m_switchId; 
    };
}