// 函数: sub_142c3b8c0
// 地址: 0x142c3b8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20

if (sub_142bf49d0(arg3, 0x627, 0, &arg_20, arg4) != 0 && arg_20 == 0xc7
        && sub_142bf49d0(arg3, 0x644, 0, &arg_20, arg4) != 0 && arg_20 == 0xe1
        && sub_142bf49d0(arg3, 0x649, 0, &arg_20, arg4) != 0 && arg_20 == 0xec
        && sub_142bf49d0(arg3, 0x64a, 0, &arg_20, arg4) != 0 && arg_20 == 0xed
        && sub_142bf49d0(arg3, 0x652, 0, &arg_20, arg4) != 0 && arg_20 == 0xfa)
    int32_t i = 0
    int32_t rsi = 0
    int32_t rax_7
    
    do
        int128_t* const rcx_5 = &data_1436a1140 + ((zx.q(i) * 3 + 1) << 1)
        rax_7 = sub_142c3c690(arg2 + 0x28, 
            (zx.d(*(rcx_5 + 1)) << 0x10) + (zx.d(*(rcx_5 + 2)) << 8) + (zx.d(*rcx_5) << 0x18)
                + zx.d(*(rcx_5 + 3)))
        uint64_t r8 = zx.q(rsi)
        arg1[r8 + 2] = rax_7
        
        if (rax_7 != 0)
            int128_t* const rax_8
            
            if (i u< 5)
                rax_8 = &data_1436a1140 + ((zx.q(i) * 3 + 1) << 1)
            else
                rax_8 = &data_14369a5d0
            
            uint16_t rdx_5 = zx.w(*(rax_8 + 4))
            uint64_t r9_5 = zx.q(*(rax_8 + 5))
            void* rdx_6
            
            if (0 != rdx_5 * 0x100 + r9_5.w)
                rdx_6 = (zx.q(rdx_5.b) << 8) + r9_5 + &data_1436a1140
            else
                rdx_6 = &data_14369a5d0
            
            *(arg1 + (r8 << 3) + 0x20) = rdx_6
            
            if (rdx_6 != 0)
                sub_142c3b130(&arg1[0x12 + r8 * 8], rdx_6)
                rsi += 1
        
        i += 1
    while (i u< 5)
    
    rax_7.b = rsi != 0
    *arg1 = rsi
    arg1[1].b = 0
    return rax_7

int32_t rax
rax.b = 0
return rax
