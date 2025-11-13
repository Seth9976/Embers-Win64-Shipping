// 函数: sub_142a6aef0
// 地址: 0x142a6aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = __RTtypeid(arg2)
int32_t result

if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax + 8) == 0 && *(arg1 + 0xe8) == *(arg2 + 0xe8)
        && *(arg1 + 0xf8) == *(arg2 + 0xf8) && *(arg1 + 0xfc) == *(arg2 + 0xfc)
        && *(arg1 + 0x100) == *(arg2 + 0x100) && *(arg1 + 0x104) == *(arg2 + 0x104)
        && *(arg1 + 0x108) == *(arg2 + 0x108) && *(arg1 + 0x10c) == *(arg2 + 0x10c)
        && *(arg1 + 0x110) == *(arg2 + 0x110) && *(arg1 + 0x114) == *(arg2 + 0x114))
    int64_t* rcx_3 = *(arg1 + 0xf0)
    
    if ((*(*rcx_3 + 0x10))(rcx_3, *(arg2 + 0xf0)).b != 0)
        result.b = 1
        return result

result.b = 0
return result
