/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::AccessControl::Structs::AccessControlEntry::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::BridgedActions::Structs::ActionStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ContentLauncher::Structs::AdditionalInfo::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::ApplicationBasic::Structs::ApplicationBasicApplication::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ApplicationLauncher::Structs::ApplicationEP::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::ApplicationLauncher::Structs::ApplicationLauncherApplication::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::GeneralCommissioning::Structs::BasicCommissioningInfoType::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PowerSource::Structs::BatChargeFaultChangeType::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PowerSource::Structs::BatFaultChangeType::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ContentLauncher::Structs::BrandingInformation::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Channel::Structs::ChannelInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ContentLauncher::Structs::ContentSearch::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Descriptor::Structs::DeviceType::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ContentLauncher::Structs::Dimension::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::DoorLock::Structs::DlCredential::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::DoubleNestedStructList::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::BridgedActions::Structs::EndpointListStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::AccessControl::Structs::ExtensionEntry::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::OperationalCredentials::Structs::FabricDescriptor::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GroupKeyManagement::Structs::GroupInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GroupKeyManagement::Structs::GroupKey::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GroupKeyManagement::Structs::GroupKeySet::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::IasAce::Structs::IasAceZoneStatusResult::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::MediaInput::Structs::InputInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::detail::Structs::LabelStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Channel::Structs::LineupInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ModeSelect::Structs::ModeOptionStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::OperationalCredentials::Structs::NOCStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ThreadNetworkDiagnostics::Structs::NeighborTable::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::NestedStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::NestedStructList::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::NetworkCommissioning::Structs::NetworkInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GeneralDiagnostics::Structs::NetworkInterfaceType::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::NullablesAndOptionalsStruct::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::ThreadNetworkDiagnostics::Structs::OperationalDatasetComponents::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::AudioOutput::Structs::OutputInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ContentLauncher::Structs::Parameter::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::MediaPlayback::Structs::PlaybackPosition::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PowerProfile::Structs::PowerProfileRecord::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::OtaSoftwareUpdateRequestor::Structs::ProviderLocation::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ThreadNetworkDiagnostics::Structs::RouteTable::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Scenes::Structs::SceneExtensionFieldSet::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PowerProfile::Structs::ScheduledPhase::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ThreadNetworkDiagnostics::Structs::SecurityPolicy::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ModeSelect::Structs::SemanticTag::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::SimpleStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::SoftwareDiagnostics::Structs::SoftwareFaultStruct::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ContentLauncher::Structs::StyleInformation::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::AccessControl::Structs::Target::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TargetNavigator::Structs::TargetInfo::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::TestFabricScoped::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Structs::TestListStructOctet::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::NetworkCommissioning::Structs::ThreadInterfaceScanResult::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::SoftwareDiagnostics::Structs::ThreadMetrics::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PowerProfile::Structs::TransferredPhase::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::NetworkCommissioning::Structs::WiFiInterfaceScanResult::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PowerSource::Structs::WiredFaultChangeType::DecodableType & value);

static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::AccessControl::Events::AccessControlEntryChanged::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::AccessControl::Events::AccessControlExtensionChanged::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::BridgedActions::Events::StateChanged::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::BridgedActions::Events::ActionFailed::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Basic::Events::StartUp::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Basic::Events::ShutDown::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Basic::Events::Leave::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Basic::Events::ReachableChanged::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::OtaSoftwareUpdateRequestor::Events::StateTransition::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::OtaSoftwareUpdateRequestor::Events::VersionApplied::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::OtaSoftwareUpdateRequestor::Events::DownloadError::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GeneralDiagnostics::Events::HardwareFaultChange::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GeneralDiagnostics::Events::RadioFaultChange::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GeneralDiagnostics::Events::NetworkFaultChange::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::GeneralDiagnostics::Events::BootReason::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::SoftwareDiagnostics::Events::SoftwareFault::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::ThreadNetworkDiagnostics::Events::ConnectionStatus::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::WiFiNetworkDiagnostics::Events::Disconnection::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::WiFiNetworkDiagnostics::Events::AssociationFailure::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::WiFiNetworkDiagnostics::Events::ConnectionStatus::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::SwitchLatched::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::InitialPress::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::LongPress::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::ShortRelease::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::LongRelease::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::MultiPressOngoing::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::Switch::Events::MultiPressComplete::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::BooleanState::Events::StateChange::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::DoorLock::Events::DoorLockAlarm::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::DoorLock::Events::DoorStateChange::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::DoorLock::Events::LockOperation::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::DoorLock::Events::LockOperationError::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::DoorLock::Events::LockUserChange::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::SupplyVoltageLow::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::SupplyVoltageHigh::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::PowerMissingPhase::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::SystemPressureLow::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::SystemPressureHigh::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::DryRunning::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::MotorTemperatureHigh::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::PumpMotorFatalFailure::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::ElectronicTemperatureHigh::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::PumpBlocked::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::SensorFailure::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::ElectronicNonFatalFailure::DecodableType & value);
static CHIP_ERROR
LogValue(const char * label, size_t indent,
         const chip::app::Clusters::PumpConfigurationAndControl::Events::ElectronicFatalFailure::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::GeneralFault::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::Leakage::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::AirDetection::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::PumpConfigurationAndControl::Events::TurbineOperation::DecodableType & value);
static CHIP_ERROR LogValue(const char * label, size_t indent,
                           const chip::app::Clusters::TestCluster::Events::TestEvent::DecodableType & value);
