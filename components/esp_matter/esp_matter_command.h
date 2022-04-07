// Copyright 2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <esp_matter.h>

/** cluster: group key management */
esp_matter_command_t *esp_matter_command_create_key_set_write(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_key_set_read(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_key_set_remove(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_key_set_read_all_indices(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_key_set_read_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_key_set_read_all_indices_response(esp_matter_cluster_t *cluster);

/** cluster: general commissioning */
esp_matter_command_t *esp_matter_command_create_arm_fail_safe(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_set_regulatory_config(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_commissioning_complete(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_arm_fail_safe_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_set_regulatory_config_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_commissioning_complete_response(esp_matter_cluster_t *cluster);

/** cluster: network commissioning */
esp_matter_command_t *esp_matter_command_create_scan_networks(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_or_update_wifi_network(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_or_update_thread_network(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_network(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_connect_network(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_reorder_network(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_scan_networks_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_network_config_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_connect_network_response(esp_matter_cluster_t *cluster);

/** cluster: administrator commissioning */
esp_matter_command_t *esp_matter_command_create_open_commissioning_window(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_open_basic_commissioning_window(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_revoke_commissioning(esp_matter_cluster_t *cluster);

/** cluster: operational credentials */
esp_matter_command_t *esp_matter_command_create_attestation_request(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_certificate_chain_request(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_csr_request(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_noc(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_update_noc(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_update_fabric_label(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_fabric(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_trusted_root_certificate(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_trusted_root_certificate(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_attestation_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_certificate_chain_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_csr_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_noc_response(esp_matter_cluster_t *cluster);

/** cluster: ota provider */
esp_matter_command_t *esp_matter_command_create_query_image(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_apply_update_request(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_notify_update_applied(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_query_image_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_apply_update_response(esp_matter_cluster_t *cluster);

/** cluster: ota requestor */
esp_matter_command_t *esp_matter_command_create_announce_ota_provider(esp_matter_cluster_t *cluster);

/** cluster: identify */
esp_matter_command_t *esp_matter_command_create_identify(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_identify_query(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_identify_query_response(esp_matter_cluster_t *cluster);

/** cluster: groups */
esp_matter_command_t *esp_matter_command_create_add_group(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_view_group(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_get_group_membership(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_group(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_all_groups(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_group_if_identifying(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_group_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_view_group_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_get_group_membership_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_group_response(esp_matter_cluster_t *cluster);

/** cluster: scenes */
esp_matter_command_t *esp_matter_command_create_add_scene(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_view_scene(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_scene(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_all_scenes(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_store_scene(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_recall_scene(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_get_scene_membership(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_add_scene_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_view_scene_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_scene_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_remove_all_scenes_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_store_scene_response(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_get_scene_membership_response(esp_matter_cluster_t *cluster);

/** cluster: on off */
esp_matter_command_t *esp_matter_command_create_off(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_on(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_toggle(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_off_with_effect(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_on_with_recall_global_scene(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_on_with_timed_off(esp_matter_cluster_t *cluster);

/** cluster: level control */
esp_matter_command_t *esp_matter_command_create_move_to_level(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_step(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_stop(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move_to_level_with_on_off(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move_with_on_off(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_step_with_on_off(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_stop_with_on_off(esp_matter_cluster_t *cluster);

/** cluster: color control */
esp_matter_command_t *esp_matter_command_create_move_to_hue(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move_hue(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_step_hue(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move_to_saturation(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move_saturation(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_step_saturation(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_move_to_hue_and_saturation(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_stop_move_step(esp_matter_cluster_t *cluster);

/** cluster: thermostat */
esp_matter_command_t *esp_matter_command_create_setpoint_raise_lower(esp_matter_cluster_t *cluster);

/** cluster: door lock */
esp_matter_command_t *esp_matter_command_create_lock_door(esp_matter_cluster_t *cluster);
esp_matter_command_t *esp_matter_command_create_unlock_door(esp_matter_cluster_t *cluster);
