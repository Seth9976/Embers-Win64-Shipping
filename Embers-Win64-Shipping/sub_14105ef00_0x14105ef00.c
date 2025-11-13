// 函数: sub_14105ef00
// 地址: 0x14105ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg3 + 0x58)

if (rax == 0)
    return sub_14105f7b0(arg1, arg2, arg3, 1)

int64_t r8 = sx.q(rax[1].d)

if (r8.d s<= 0)
    return rax

int32_t* rax_1 = *rax
int64_t r8_1 = 0

do
    int32_t rcx = *rax_1
    
    if (rcx != 0x10de)
        if (rcx == 0x1002)
            return sub_14105f7b0(arg1, arg2, arg3, 0) __tailcall
    else if (*(rax_1 + 0xa) == 4)
        int128_t zmm0 = *(arg3 + 0x10)
        int32_t var_10 = *(arg3 + 0x38)
        int128_t zmm1 = *(arg3 + 0x28)
        int32_t var_28 = *(arg3 + 0x20)
        int64_t var_40 = *(arg3 + 8)
        uint32_t var_4c = zx.d(*(rax_1 + 6))
        int64_t rcx_5 = *(arg2 + 0x18)
        int32_t var_24 = 0
        int32_t var_c = 0
        int32_t var_48 = 0
        int128_t var_38 = zmm0
        int32_t var_54 = 5
        int128_t var_20 = zmm1
        int32_t var_58 = 0x10008
        int32_t var_50 = 0x10014
        int32_t* arg_18 = &var_58
        return sub_142c488a0(rcx_5, &var_40, 1, &arg_18, arg1)
    
    r8_1 += 1
    rax_1 = &rax_1[3]
while (r8_1 s< r8)

return rax_1
