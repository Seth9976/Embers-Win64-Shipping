// 函数: sub_142c31200
// 地址: 0x142c31200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rsi = &data_14369a5d0
int32_t r15 = *(arg4 + 0x50)

if ((*(arg1 + 0xf) & 1) == 0)
    void* r9_4 = zx.q(*(arg1 + 0x17)) + ((zx.q(*(arg1 + 0x16))
        + (((zx.q(*(arg1 + 0x14)) << 8) + zx.q(*(arg1 + 0x15))) << 8)) << 8) + arg1
    int16_t rdi_8
    
    if (zx.w(*r9_4) * 0x100 + zx.w(*(r9_4 + 1)) == 0xa)
        rdi_8 = sub_142c32100(r9_4, arg2)
    else
        void* rax_53 = sub_142c31d20(r9_4, arg2, r15)
        void* rdx_11 = &data_14369a5d0
        
        if (rax_53 != 0)
            rdx_11 = rax_53
        
        rdi_8 = zx.w(*rdx_11) * 0x100 + zx.w(*(rdx_11 + 1))
    
    void* rcx_33 = zx.q(*(arg1 + 0x1b)) + (((((zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19)))
        << 8) + zx.q(*(arg1 + 0x1a))) << 8) + arg1
    int16_t r9_7
    
    if (zx.w(*(rcx_33 + 1)) + zx.w(*rcx_33) * 0x100 == 0xa)
        r9_7 = sub_142c32100(rcx_33, arg3)
    else
        void* rax_63 = sub_142c31d20(rcx_33, arg3, r15)
        
        if (rax_63 != 0)
            rsi = rax_63
        
        r9_7 = zx.w(*rsi) * 0x100 + zx.w(*(rsi + 1))
    
    void* rdi_9 = zx.q(*(arg1 + 0x1f)) + ((((zx.q(*(arg1 + 0x1d)) + (zx.q(*(arg1 + 0x1c)) << 8))
        << 8) + zx.q(*(arg1 + 0x1e))) << 8) + arg1 + ((zx.q(rdi_8) + zx.q(r9_7)) << 1)
    
    if (sub_142bf7510(arg4 + 0x20, rdi_9, 2) != 0)
        uint32_t r8_17 = (zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8)
            + (zx.d(*(arg1 + 8)) << 0x18) + zx.d(*(arg1 + 0xb))
        int32_t result = sx.d(zx.w(*(rdi_9 + 1)) + zx.w(*rdi_9) * 0x100)
        
        if (r8_17 == 0)
            return result
        
        void* rbx_2 = zx.q(result) + zx.q(*(arg1 + 0x23)) + ((zx.q(*(arg1 + 0x22))
            + ((zx.q(*(arg1 + 0x21)) + (zx.q(*(arg1 + 0x20)) << 8)) << 8)) << 8) + arg1
        
        if (r8_17 u< 0x7fffffff && sub_142bf7510(arg4 + 0x20, rbx_2, r8_17 * 2) != 0)
            return sx.d(zx.w(*(rbx_2 + 1)) + zx.w(*rbx_2) * 0x100)
else
    char* rcx_1 = zx.q(*(arg1 + 0x17)) + ((zx.q(*(arg1 + 0x16))
        + (((zx.q(*(arg1 + 0x14)) << 8) + zx.q(*(arg1 + 0x15))) << 8)) << 8) + arg1
    uint32_t rdi_4
    
    if (zx.w(*rcx_1) * 0x100 + zx.w(rcx_1[1]) == 0xa)
        rdi_4 = sub_142c321c0(rcx_1, arg2)
    else
        void* rax_6 = sub_142c31de0(rcx_1, arg2, r15)
        void* rcx_2 = &data_14369a5d0
        
        if (rax_6 != 0)
            rcx_2 = rax_6
        
        rdi_4 = (zx.d(*(rcx_2 + 1)) << 0x10) + (zx.d(*(rcx_2 + 2)) << 8) + (zx.d(*rcx_2) << 0x18)
            + zx.d(*(rcx_2 + 3))
    
    void* rcx_6 = zx.q(*(arg1 + 0x1b)) + (((((zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19)))
        << 8) + zx.q(*(arg1 + 0x1a))) << 8) + arg1
    int32_t rcx_11
    
    if (zx.w(*(rcx_6 + 1)) + zx.w(*rcx_6) * 0x100 == 0xa)
        rcx_11 = sub_142c321c0(rcx_6, arg3)
    else
        void* rax_20 = sub_142c31de0(rcx_6, arg3, r15)
        
        if (rax_20 != 0)
            rsi = rax_20
        
        rcx_11 = (zx.d(*(rsi + 1)) << 0x10) + (zx.d(*(rsi + 2)) << 8) + (zx.d(*rsi) << 0x18)
            + zx.d(*(rsi + 3))
    
    uint64_t r8_4 = zx.q(rcx_11 + rdi_4)
    
    if (r8_4.d u>= rdi_4 && r8_4.d u< 0x3fffffff)
        void* rdi_6 = zx.q((r8_4 << 2).d) + zx.q(*(arg1 + 0x1f)) + ((zx.q(*(arg1 + 0x1e))
            + (((zx.q(*(arg1 + 0x1c)) << 8) + zx.q(*(arg1 + 0x1d))) << 8)) << 8) + arg1
        
        if (sub_142bf7510(arg4 + 0x20, rdi_6, 4) != 0)
            return sub_142c33050(
                (((((zx.d(*rdi_6) << 8) + zx.d(*(rdi_6 + 1))) << 8) + zx.d(*(rdi_6 + 2))) << 8)
                    + zx.d(*(rdi_6 + 3)), 
                (zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8)
                + (zx.d(*(arg1 + 8)) << 0x18) + zx.d(*(arg1 + 0xb)), 
                zx.q(*(arg1 + 0x23)) + ((zx.q(*(arg1 + 0x22))
                    + ((zx.q(*(arg1 + 0x21)) + (zx.q(*(arg1 + 0x20)) << 8)) << 8)) << 8) + arg1, 
                arg4)

return 0
