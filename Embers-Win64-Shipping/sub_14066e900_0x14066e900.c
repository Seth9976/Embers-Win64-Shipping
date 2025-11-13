// 函数: sub_14066e900
// 地址: 0x14066e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa0) == 0)
    sub_140596d10(arg2, arg1 + 0x90)
    return arg2

void* rcx_1 = *(arg1 + 0xe8)

if (rcx_1 != 0 && sub_140d23de0(rcx_1) != 0)
    if (arg3 == 0)
        sub_14066cdb0(*(arg1 + 0xe8), arg2)
        return arg2
    
    int16_t* const rcx_3 = &data_142d40450
    int16_t* rdx_2 = &data_142d40450
    
    if (data_143cdcdb8 != 0)
        rdx_2 = data_143cdcdb0
    
    if (*(arg1 + 0x98) != 0)
        rcx_3 = *(arg1 + 0x90)
    
    if (sub_140a54510(rcx_3, rdx_2) == 0)
        int64_t var_18
        sub_140597da0(arg1 + 0x90, sub_14066cdb0(*(arg1 + 0xe8), &var_18))
        int64_t rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    sub_140596d10(arg2, arg1 + 0x90)
    return arg2

if (arg1 != &data_143cdcd20)
    int32_t rsi_1 = data_143cdcdb8
    int32_t r8 = *(arg1 + 0x9c)
    int64_t rbp_1 = data_143cdcdb0
    *(arg1 + 0x98) = rsi_1
    
    if (rsi_1 != 0 || r8 != 0)
        sub_1405a4c70(arg1 + 0x90, rsi_1, r8)
        memcpy(*(arg1 + 0x90), rbp_1, rsi_1 * 2)
    else
        *(arg1 + 0x9c) = 0

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x11)
int32_t rax_7 = arg2[1].d + 0x11
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"Invalid response", 0x22)
return arg2
