extern MqttConnector* mqtt;

void register_receive_hooks() {
  mqtt->on_subscribe(NULL);
  mqtt->on_before_message_arrived_once(NULL);
  mqtt->on_message(NULL);
  mqtt->on_after_message_arrived(NULL);
}
