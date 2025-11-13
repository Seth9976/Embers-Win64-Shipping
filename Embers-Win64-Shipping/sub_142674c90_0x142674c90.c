// 函数: sub_142674c90
// 地址: 0x142674c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x4a8)

if (rax != 0)
    float* rcx = *(rax + 8)
    
    if (rcx != 0)
        int128_t zmm1 = *(arg2 + 4) ^ data_142d3f780
        int32_t var_18 = (*arg2 ^ data_142d3f780).d
        int32_t var_14_1 = (*(arg2 + 8)).d
        int32_t var_10_1 = zmm1.d
        sub_142603ec0(rcx, &var_18)

return sub_140594850() __tailcall
