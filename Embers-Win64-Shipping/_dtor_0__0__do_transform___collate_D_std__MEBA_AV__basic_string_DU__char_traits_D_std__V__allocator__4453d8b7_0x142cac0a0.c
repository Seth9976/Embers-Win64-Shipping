// 函数: ?dtor$0@?0??do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z@4HA
// 地址: 0x142cac0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 1

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffffe
return sub_142a47ff0(*(arg2 + 0x58))
