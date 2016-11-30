extern MqttConnector* mqtt;

void register_receive_hooks() {
  mqtt->on_subscribe(null);
  mqtt->on_before_message_arrived_once(null);
  mqtt->on_message(null);
  mqtt->on_after_message_arrived(null);
}
