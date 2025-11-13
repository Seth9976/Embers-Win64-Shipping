// 函数: sub_142a548d0
// 地址: 0x142a548d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_3 = sx.q(arg1)
int32_t rax = (rdx_3 - 0x41).d

if (rax u> 0x25 || not(test_bit(0x3f0000003f, sx.q(rax))))
    int32_t rax_2 = (rdx_3 - 0xff21).d
    
    if (rax_2 u> 0x25 || not(test_bit(0x3f0000003f, sx.q(rax_2))))
        if (rdx_3.d u< 0xd800)
            uint64_t rax_5
            rax_5.b = (*(&data_14361b8e0 + (
                zx.q((rdx_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (rdx_3 s>> 5 << 1))) << 2)) << 1))
                & 0x1f) == 9
            return rax_5
        
        if (rdx_3.d u<= 0xffff)
            int32_t rcx_2 = 0
            
            if (rdx_3.d s<= 0xdbff)
                rcx_2 = 0x140
            
            uint64_t rax_10
            rax_10.b = (*(&data_14361b8e0 + (zx.q((rdx_3.d & 0x1f)
                + (zx.d(*(&data_14361b8e0 + (sx.q((rdx_3.d s>> 5) + rcx_2) << 1))) << 2)) << 1))
                & 0x1f) == 9
            return rax_10
        
        if (rdx_3.d u> 0x10ffff)
            int64_t rax_11
            rax_11.b = false
            return 0x1100
        
        if (rdx_3.d s>= 0x110000)
            int64_t rax_12
            rax_12.b = false
            return 0x5500
        
        uint64_t rax_20 = zx.q((rdx_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (zx.q(
            zx.d(*(&data_14361b8e0 + (sx.q((rdx_3.d s>> 0xb) + 0x820) << 1)))
            + (rdx_3.d s>> 5 & 0x3f)) << 1))) << 2))
        rax_20.b = (*(&data_14361b8e0 + (rax_20 << 1)) & 0x1f) == 9
        return rax_20

int64_t rax_1
rax_1.b = 1
return rax_1
