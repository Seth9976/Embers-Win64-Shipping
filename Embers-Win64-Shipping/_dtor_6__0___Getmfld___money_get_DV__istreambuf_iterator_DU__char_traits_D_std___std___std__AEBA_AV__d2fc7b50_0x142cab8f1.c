// 函数: ?dtor$6@?0??_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@AEAY0M@D@Z@4HA
// 地址: 0x142cab8f1
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x40) & 2

if (result == 0)
    return result

*(arg2 + 0x40) &= 0xfffffffd
return sub_142a47ff0(arg2 + 0xc0)
