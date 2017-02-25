#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x10428807, "module_layout" },
	{ 0xc41c1c7, "netdev_info" },
	{ 0x28176ccd, "kmalloc_caches" },
	{ 0xd5935806, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x22269ec9, "pci_enable_sriov" },
	{ 0x55cbe4de, "debugfs_create_dir" },
	{ 0xb5285165, "mem_map" },
	{ 0xb85f3bbe, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xd0d8621b, "strlen" },
	{ 0x2670340a, "skb_pad" },
	{ 0x6acfa58f, "page_address" },
	{ 0xffd85cf8, "dev_set_drvdata" },
	{ 0x77c631aa, "__alloc_workqueue_key" },
	{ 0x2d37342e, "cpu_online_mask" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6d4857b8, "dma_set_mask" },
	{ 0x504b7066, "napi_complete" },
	{ 0xd967a5ad, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcf12b3b6, "pci_disable_msix" },
	{ 0xcc55b689, "netif_carrier_on" },
	{ 0x87a45ee9, "_raw_spin_lock_bh" },
	{ 0xe16292d9, "pci_disable_sriov" },
	{ 0xa1c075a8, "skb_clone" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x313db43, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x43b032cd, "queue_work" },
	{ 0xaaa6b672, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e1bdc28, "init_timer_key" },
	{ 0x3e1575fa, "mutex_unlock" },
	{ 0x76da3ac6, "pci_bus_write_config_word" },
	{ 0x464318b7, "debugfs_create_file" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0xe5068fc7, "debugfs_remove_recursive" },
	{ 0xe47157e7, "__alloc_pages_nodemask" },
	{ 0x41ab9ff9, "netif_napi_del" },
	{ 0xb2910c64, "sock_queue_err_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5a985850, "__netdev_alloc_skb" },
	{ 0x364598f1, "netif_rx" },
	{ 0xe48c67d2, "__pskb_pull_tail" },
	{ 0xc8ed3b0d, "pci_set_master" },
	{ 0xe1bc7ede, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0xbb8efec8, "dcb_setapp" },
	{ 0xb8936005, "pci_enable_pcie_error_reporting" },
	{ 0xe99c6b45, "pci_enable_msix" },
	{ 0xbb41495f, "pci_restore_state" },
	{ 0x2ec391ce, "dev_err" },
	{ 0xb16c504c, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x5b330f09, "ethtool_op_get_link" },
	{ 0x42224298, "sscanf" },
	{ 0x5152e605, "memcmp" },
	{ 0x8e0b7743, "ipv6_ext_hdr" },
	{ 0xbff91b77, "free_netdev" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xdf6c24e5, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc2c28318, "mutex_lock" },
	{ 0x7a0e3e65, "destroy_workqueue" },
	{ 0x4c1182cb, "bitmap_scnprintf" },
	{ 0x6ef1a15b, "sk_free" },
	{ 0x3c55fe76, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xce095088, "mod_timer" },
	{ 0xb74c895f, "netif_set_real_num_tx_queues" },
	{ 0xb18da57e, "netif_napi_add" },
	{ 0x1dfc6aa, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x41cee2ab, "__get_page_tail" },
	{ 0xf7472197, "dev_kfree_skb_any" },
	{ 0x819d2678, "contig_page_data" },
	{ 0x6a90e9fb, "dma_alloc_from_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x45ae827a, "pci_find_capability" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x69fab93f, "pci_select_bars" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x53e01fbd, "napi_gro_receive" },
	{ 0x129cef9d, "_dev_info" },
	{ 0x3b789ced, "__free_pages" },
	{ 0x3af98f9e, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x675cc500, "pci_bus_read_config_word" },
	{ 0x38e6a2aa, "ipv6_skip_exthdr" },
	{ 0x1cc3f6d, "__napi_schedule" },
	{ 0x6223cafb, "_raw_spin_unlock_bh" },
	{ 0xa3262797, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8daedfe8, "skb_checksum_help" },
	{ 0x677584ae, "kfree_skb" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x962d0e8, "irq_set_affinity_notifier" },
	{ 0x50ad8cee, "eth_type_trans" },
	{ 0xd3dcb157, "dev_driver_string" },
	{ 0xe222894b, "pskb_expand_head" },
	{ 0xe194b033, "netdev_err" },
	{ 0xd84cf86a, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1cf366cd, "kmem_cache_alloc_trace" },
	{ 0x6443d74d, "_raw_spin_lock" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x6212614c, "pci_set_power_state" },
	{ 0xfbb6d083, "netdev_warn" },
	{ 0xa0190fef, "eth_validate_addr" },
	{ 0xa86641dd, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x50f5e532, "call_rcu_sched" },
	{ 0xf59f197, "param_array_ops" },
	{ 0x74a74f92, "pci_disable_msi" },
	{ 0xe2a41d9c, "dma_supported" },
	{ 0x7b14d8a2, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x46d46139, "__pci_register_driver" },
	{ 0x2288378f, "system_state" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdeebb49d, "dev_warn" },
	{ 0x20d4c7de, "unregister_netdev" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xc6890bb5, "pci_enable_msi_block" },
	{ 0x983368ee, "__netif_schedule" },
	{ 0x7bc82c7b, "consume_skb" },
	{ 0x399d48a, "pci_enable_device_mem" },
	{ 0x14efbb1a, "skb_tstamp_tx" },
	{ 0x5a6906a, "pci_wake_from_d3" },
	{ 0xbf707a25, "pci_release_selected_regions" },
	{ 0xea65d438, "pci_request_selected_regions" },
	{ 0xa0208e02, "irq_set_affinity_hint" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x36d6e9eb, "__skb_tx_hash" },
	{ 0xb1e5788, "skb_copy_bits" },
	{ 0x1a6bce2, "dev_get_drvdata" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5b338114, "dma_ops" },
	{ 0x1241a5b, "device_set_wakeup_enable" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x709316b, "pci_save_state" },
	{ 0x68bb9182, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001572sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001580sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001581sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001583sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001584sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001585sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001586sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001589sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001587sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001588sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000374Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000037CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000037CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000037D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000037D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000037D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000037D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000158Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000158Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FC4C3AD935BAB46123CFFBB");
