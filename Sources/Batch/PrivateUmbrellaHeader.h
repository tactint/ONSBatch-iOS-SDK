//  PrivateUmbrellaHeader.h
// clang-format off
//
//  This bridging header has been automatically generated by Bridgy
//  DO NOT EDIT MANUALLY.
//  USE THE TOOL TO REGENERATE IF YOU NEED TO ADD/REMOVE HEADERS.
//

#import <ONSBatch/BatchInbox.h>
#import <ONSBatch/BAWSQueryAttributesCheck.h>
#import <ONSBatch/BAWSQueryLocalCampaigns.h>
#import <ONSBatch/BAWSQueryStart.h>
#import <ONSBatch/BAWSQueryPushToken.h>
#import <ONSBatch/BAWSQuery.h>
#import <ONSBatch/BAWSQueryAttributes.h>
#import <ONSBatch/BAWSQueryTracking.h>
#import <ONSBatch/BAWSResponseAttributesCheck.h>
#import <ONSBatch/BAWSResponseAttributes.h>
#import <ONSBatch/BAPushTokenService.h>
#import <ONSBatch/BAWSResponseStart.h>
#import <ONSBatch/BAWSResponse.h>
#import <ONSBatch/BAWSResponseTracking.h>
#import <ONSBatch/BAWSResponseLocalCampaigns.h>
#import <ONSBatch/BAWSResponsePushToken.h>
#import <ONSBatch/BAEventTrackerService.h>
#import <ONSBatch/BALocalCampaignsService.h>
#import <ONSBatch/BAPushTokenService.h>
#import <ONSBatch/BAStartService.h>
#import <ONSBatch/BAUserDataServices.h>
#import <ONSBatch/BATWebserviceHMAC.h>
#import <ONSBatch/BAWebserviceStubCryptor.h>
#import <ONSBatch/BAWebserviceAESGCMCryptor.h>
#import <ONSBatch/BAWebserviceCryptor.h>
#import <ONSBatch/BAWebserviceAESGCMGzipCryptor.h>
#import <ONSBatch/BAWebserviceCryptorFactory.h>
#import <ONSBatch/BAWebserviceJsonClient.h>
#import <ONSBatch/BAWebserviceClientExecutor.h>
#import <ONSBatch/BAConnectionDelegate.h>
#import <ONSBatch/BAConnection.h>
#import <ONSBatch/BAConnectionContentType.h>
#import <ONSBatch/BAURLSessionProtocol.h>
#import <ONSBatch/BAWebserviceClient.h>
#import <ONSBatch/BAURLSession.h>
#import <ONSBatch/BAWebserviceMsgPackClient.h>
#import <ONSBatch/BAGETWebserviceClient.h>
#import <ONSBatch/BAResponseHelper.h>
#import <ONSBatch/BAWebserviceMetrics.h>
#import <ONSBatch/BAWebserviceURLBuilder.h>
#import <ONSBatch/BAQueryWebserviceClient.h>
#import <ONSBatch/BAQueryWebserviceIdentifiersProviding.h>
#import <ONSBatch/BAStandardQueryWebserviceIdentifiersProvider.h>
#import <ONSBatch/BAQueryWebserviceClientDelegate.h>
#import <ONSBatch/BAQueryWebserviceClientDatasource.h>
#import <ONSBatch/BALocalCampaignsJITService.h>
#import <ONSBatch/BatchUser.h>
#import <ONSBatch/BatchMessaging.h>
#import <ONSBatch/Batch.h>
#import <ONSBatch/BatchEventDataPrivate.h>
#import <ONSBatch/BatchPushPrivate.h>
#import <ONSBatch/BatchPush.h>
#import <ONSBatch/BatchMessagingPrivate.h>
#import <ONSBatch/Versions.h>
#import <ONSBatch/BatchMessagingModels.h>
#import <ONSBatch/BANotificationCenter.h>
#import <ONSBatch/BatchInboxPrivate.h>
#import <ONSBatch/BatchUserAttributePrivate.h>
#import <ONSBatch/Defined.h>
#import <ONSBatch/BatchCore.h>
#import <ONSBatch/BatchUserAttribute.h>
#import <ONSBatch/BatchEventData.h>
#import <ONSBatch/BatchLogger.h>
#import <ONSBatch/BatchActions.h>
#import <ONSBatch/BASecureDate.h>
#import <ONSBatch/BAErrorHelper.h>
#import <ONSBatch/BALocalCampaignsManager.h>
#import <ONSBatch/BALocalCampaignsGlobalCappings.h>
#import <ONSBatch/BALocalCampaignTriggerProtocol.h>
#import <ONSBatch/BANextSessionTrigger.h>
#import <ONSBatch/BAEventTrigger.h>
#import <ONSBatch/BAPublicEventTrackedSignal.h>
#import <ONSBatch/BANewSessionSignal.h>
#import <ONSBatch/BALocalCampaignSignalProtocol.h>
#import <ONSBatch/BAEventTrackedSignal.h>
#import <ONSBatch/BALocalCampaign.h>
#import <ONSBatch/BALocalCampaignTrackerProtocol.h>
#import <ONSBatch/BALocalCampaignCountedEvent.h>
#import <ONSBatch/BALocalCampaignsSQLTracker.h>
#import <ONSBatch/BALocalCampaignsTracker.h>
#import <ONSBatch/BALocalCampaignsPersisting.h>
#import <ONSBatch/BALocalCampaignsFilePersistence.h>
#import <ONSBatch/BALocalCampaignsCenter.h>
#import <ONSBatch/BALocalCampaignsParser.h>
#import <ONSBatch/BALocalCampaignLandingOutput.h>
#import <ONSBatch/BALocalCampaignOutputProtocol.h>
#import <ONSBatch/BAMetricWebserviceClient.h>
#import <ONSBatch/BAMetricManager.h>
#import <ONSBatch/BACounter.h>
#import <ONSBatch/BAMetricRegistry.h>
#import <ONSBatch/BAObservation.h>
#import <ONSBatch/BAMetric.h>
#import <ONSBatch/BAMetricProtocol.h>
#import <ONSBatch/BAInbox.h>
#import <ONSBatch/BAInboxDatasourceProtocol.h>
#import <ONSBatch/BAInboxFetchWebserviceClient.h>
#import <ONSBatch/BAInboxDBHelperProtocol.h>
#import <ONSBatch/BAInboxWebserviceClientType.h>
#import <ONSBatch/BAInboxSQLiteHelper.h>
#import <ONSBatch/BAInboxWebserviceResponse.h>
#import <ONSBatch/BAInboxSyncWebserviceClient.h>
#import <ONSBatch/BAInboxSQLiteDatasource.h>
#import <ONSBatch/BATUserActivity.h>
#import <ONSBatch/BABundleInfo.h>
#import <ONSBatch/BAUserProfile.h>
#import <ONSBatch/BACenterMulticastDelegate.h>
#import <ONSBatch/BASessionManager.h>
#import <ONSBatch/BAConfiguration.h>
#import <ONSBatch/BACoreCenter.h>
#import <ONSBatch/BAInstallationID.h>
#import <ONSBatch/BAApplicationLifecycle.h>
#import <ONSBatch/BANotificationAuthorization.h>
#import <ONSBatch/BAStatus.h>
#import <ONSBatch/BAEventDispatcherCenter.h>
#import <ONSBatch/BAPushEventPayload.h>
#import <ONSBatch/BAMessageEventPayload.h>
#import <ONSBatch/BAUserDataEnums.h>
#import <ONSBatch/BAEvent.h>
#import <ONSBatch/BAEventSQLiteDatasource.h>
#import <ONSBatch/BAEventDatasourceProtocol.h>
#import <ONSBatch/BATrackerSender.h>
#import <ONSBatch/BATrackerScheduler.h>
#import <ONSBatch/BATrackerSignpostHelper.h>
#import <ONSBatch/BAEventSQLiteHelper.h>
#import <ONSBatch/BATrackerCenter.h>
#import <ONSBatch/BAEventDBHelperProtocol.h>
#import <ONSBatch/BAUserDataManager.h>
#import <ONSBatch/BAUserDataOperation.h>
#import <ONSBatch/BAUserDataEditor.h>
#import <ONSBatch/BAUserDataEnums.h>
#import <ONSBatch/BAUserEmailSubscription.h>
#import <ONSBatch/BAUserAttribute.h>
#import <ONSBatch/BAUserDataDiff.h>
#import <ONSBatch/BAUserDatasourceProtocol.h>
#import <ONSBatch/BAUserCenter.h>
#import <ONSBatch/BAUserSQLiteDatasource.h>
#import <ONSBatch/BAPushSystemHelperProtocol.h>
#import <ONSBatch/BAPushSystemHelper.h>
#import <ONSBatch/BAPushPayload.h>
#import <ONSBatch/BAPushCenter.h>
#import <ONSBatch/BAUserDataBuiltinActions.h>
#import <ONSBatch/BAUserEventBuiltinActions.h>
#import <ONSBatch/BAActionsCenter.h>
#import <ONSBatch/BADisplayReceiptCenter.h>
#import <ONSBatch/BADisplayReceipt.h>
#import <ONSBatch/BADisplayReceiptWebserviceClient.h>
#import <ONSBatch/BADisplayReceiptCache.h>
#import <ONSBatch/BADelegatedUIAlertController.h>
#import <ONSBatch/BAMSGStackViewHorizontalItem.h>
#import <ONSBatch/BAMSGViewController.h>
#import <ONSBatch/BAMSGWindowHolder.h>
#import <ONSBatch/BAMSGInterstitialViewController.h>
#import <ONSBatch/BAMSGWebviewViewController.h>
#import <ONSBatch/BAMSGVideoView.h>
#import <ONSBatch/BAMSGBaseBannerViewController.h>
#import <ONSBatch/BAMSGBannerViewController.h>
#import <ONSBatch/BAMSGStackViewItem.h>
#import <ONSBatch/BAMSGStackView.h>
#import <ONSBatch/BAMSGModalViewController.h>
#import <ONSBatch/BAMSGImageViewController.h>
#import <ONSBatch/BAMSGAction.h>
#import <ONSBatch/BATHtmlParser.h>
#import <ONSBatch/BAMSGPayloadParser.h>
#import <ONSBatch/BACSSImportProvider.h>
#import <ONSBatch/BACSSToken.h>
#import <ONSBatch/BACSSBuiltinImportProvider.h>
#import <ONSBatch/BACSS.h>
#import <ONSBatch/BACSSParser.h>
#import <ONSBatch/BATWebviewUtils.h>
#import <ONSBatch/BATWebviewBridgeLegacyWKHandler.h>
#import <ONSBatch/BATWebviewJavascriptBridge.h>
#import <ONSBatch/BATWebviewBridgeWKHandler.h>
#import <ONSBatch/BAMessagingAnalyticsDelegate.h>
#import <ONSBatch/BAMSGOverlayWindow.h>
#import <ONSBatch/BAMSGImageDownloader.h>
#import <ONSBatch/BAMSGCTA.h>
#import <ONSBatch/BABatchMessagingDelegateWrapper.h>
#import <ONSBatch/BAMessagingAnalyticsDeduplicatingDelegate.h>
#import <ONSBatch/BAMessagingCenter.h>
#import <ONSBatch/BAMSGMessage.h>
#import <ONSBatch/BAMSGGradientView.h>
#import <ONSBatch/BAMSGPassthroughProtocol.h>
#import <ONSBatch/BAMSGPannableAnchoredContainerView.h>
#import <ONSBatch/BAMSGPannableAlertContainerView.h>
#import <ONSBatch/BAMSGCloseButton.h>
#import <ONSBatch/BAMSGActivityIndicatorView.h>
#import <ONSBatch/BAMSGLabel.h>
#import <ONSBatch/BAMSGBaseContainerView.h>
#import <ONSBatch/BAMSGCountdownView.h>
#import <ONSBatch/BAMSGViewToolbox.h>
#import <ONSBatch/BAMSGPannableContainerView.h>
#import <ONSBatch/BAMSGButton.h>
#import <ONSBatch/BAMSGStylableView.h>
#import <ONSBatch/BAMSGImageView.h>
#import <ONSBatch/BAMSGRemoteImageView.h>
#import <ONSBatch/BATMessagingCloseErrorCause.h>
#import <ONSBatch/BATGIFFile.h>
#import <ONSBatch/BATGIFAnimator.h>
#import <ONSBatch/BAOptOut.h>
#import <ONSBatch/BAOptOutEventTracker.h>
#import <ONSBatch/BAOptOutWebserviceClient.h>
#import <ONSBatch/BADBGLCListViewController.h>
#import <ONSBatch/BADBGFindMyInstallationHelper.h>
#import <ONSBatch/BADBGLCDetailsViewController.h>
#import <ONSBatch/BADBGCustomDataViewController.h>
#import <ONSBatch/BADBGCustomDataModels.h>
#import <ONSBatch/BADBGDebugViewController.h>
#import <ONSBatch/BADBGIdentifiersViewController.h>
#import <ONSBatch/BADBGModule.h>
#import <ONSBatch/BADBGLocalCampaignsViewController.h>
#import <ONSBatch/BADBGNameValueListItem.h>
#import <ONSBatch/BatchUserProfile.h>
#import <ONSBatch/BatchEventDispatcher.h>
#import <ONSBatch/BASHA.h>
#import <ONSBatch/BAAESB64Cryptor.h>
#import <ONSBatch/BAEncryptionProtocol.h>
#import <ONSBatch/BALogger.h>
#import <ONSBatch/BALoggerUnified.h>
#import <ONSBatch/BALoggerProtocol.h>
#import <ONSBatch/BATZAwareDate.h>
#import <ONSBatch/BASystemDateProvider.h>
#import <ONSBatch/BASecureDateProvider.h>
#import <ONSBatch/BAMultiDelegatesProxy.h>
#import <ONSBatch/BAMutableDateProvider.h>
#import <ONSBatch/BADateProviderProtocol.h>
#import <ONSBatch/BAUptimeProvider.h>
#import <ONSBatch/BATGZIP.h>
#import <ONSBatch/BAOverlayedInjectable.h>
#import <ONSBatch/BAInjection.h>
#import <ONSBatch/BAInjectionRegistrar.h>
#import <ONSBatch/BAInjectableImplementations.h>
#import <ONSBatch/BAOverlayedInjectable-Private.h>
#import <ONSBatch/BAInjectionRegistry.h>
#import <ONSBatch/BAInjectable.h>
#import <ONSBatch/BAPromise.h>
#import <ONSBatch/BATaskDebouncer.h>
#import <ONSBatch/BAConcurrentQueue.h>
#import <ONSBatch/BAReachabilityHelper.h>
#import <ONSBatch/BAReachability.h>
#import <ONSBatch/BAParameter.h>
#import <ONSBatch/BANetworkParameters.h>
#import <ONSBatch/BAUserDefaults.h>
#import <ONSBatch/BAPropertiesCenter.h>
#import <ONSBatch/BATMessagePackWriter.h>
#import <ONSBatch/msgpack-c.h>
#import <ONSBatch/BATMessagePackReader.h>
#import <ONSBatch/BATJsonDictionary.h>
#import <ONSBatch/BAThreading.h>
#import <ONSBatch/BANullHelper.h>
#import <ONSBatch/BARandom.h>
#import <ONSBatch/BAEmailUtils.h>
#import <ONSBatch/BAWindowHelper.h>
#import <ONSBatch/BAJson.h>
#import <ONSBatch/BADateFormatting.h>
#import <ONSBatch/BAOSHelper.h>
#import <ONSBatch/BADirectories.h>
#import <ONSBatch/BATJsonDictionary.h>
#import <ONSBatch/BADelegatedApplicationDelegate.h>
#import <ONSBatch/BAHTTPHeaders.h>
#import <ONSBatch/BAStringUtils.h>
#import <ONSBatch/BAPartialApplicationDelegate.h>

// clang-format on