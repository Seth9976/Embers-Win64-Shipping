// 函数: sub_142c02290
// 地址: 0x142c02290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
int32_t* rax = sub_142bf76f0(arg2 + 0x50)
int128_t* const rdi = &data_14369a5d0
int128_t* const r8 = &data_14369a5d0

if (rax[6] u>= 0x36)
    r8 = *(rax + 0x10)

uint32_t result = zx.d(*(r8 + 0x33))

if (zx.w(*(r8 + 0x32)) * 0x100 + result.w u<= 1)
    result = zx.d(*(r8 + 0x35))
    
    if (zx.w(*(r8 + 0x34)) * 0x100 == neg.w(result.w))
        uint16_t rax_1 = zx.w(*(r8 + 0x33))
        int16_t rdx_5 = zx.w(*(r8 + 0x32)) * 0x100
        int32_t var_48 = 0
        int128_t var_40
        __builtin_memset(&var_40, 0, 0x15)
        int32_t var_28_1 = 0
        int64_t var_20_1 = 0
        rax_1.b = 0 == rdx_5 + rax_1
        *arg1 = rax_1.b
        int32_t var_18_1 = sub_142bfb130(arg2)
        char var_14_1 = 1
        *(arg1 + 8) = sub_142bfb560(&var_48, sub_142bfb150(arg2, 0x6c6f6361))
        var_48 = 0
        int128_t var_40_1
        __builtin_memset(&var_40_1, 0, 0x15)
        int32_t var_28_2 = 0
        int64_t var_20_2 = 0
        int32_t var_18_2 = sub_142bfb130(arg2)
        char var_14_2 = 1
        int32_t* rax_7
        int32_t rcx_7
        rax_7, rcx_7 = sub_142bfb560(&var_48, sub_142bfb150(arg2, 0x676c7966))
        *(arg1 + 0x10) = rax_7
        int128_t* rax_8 = *(arg1 + 8)
        
        if (rax_8 != 0)
            rdi = rax_8
        
        uint32_t rax_11 = *(rdi + 0x18) u>> ((sbb.d(rcx_7, rcx_7, *arg1 != 0)).b + 2)
        
        if (rax_11 u< 1)
            rax_11 = 1
        
        result = rax_11 - 1
        *(arg1 + 4) = result

return result
