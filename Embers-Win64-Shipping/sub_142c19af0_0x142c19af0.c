// 函数: sub_142c19af0
// 地址: 0x142c19af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1[1])
uint32_t r9_1 = zx.d(*arg1) << 8
int32_t r9_2 = r9_1 + rax.d

if (r9_1 != neg.d(rax.d))
    void* rdx = *(arg2 + 0x90)
    int32_t rdx_1 = *(arg2 + 0xb4)
    int32_t r8_1 = *(*(rdx + 0x70) + zx.q(*(rdx + 0x5c)) * 0x14 + 4)
    char rcx_1
    
    if (rdx_1 != 0)
        uint64_t rflags_1
        char temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rdx_1)
        rcx_1 = temp0_1
    else
        rcx_1 = 0
    
    uint32_t rdx_3 = (rdx_1 & r8_1) u>> rcx_1
    
    if (rdx_3 == 0xff && *(arg2 + 0xcf) != 0)
        int32_t r8_3 = *(arg2 + 0xd0) * 0xbc8f u% 0x7fffffff
        *(arg2 + 0xd0) = r8_3
        rdx_3 = modu.dp.d(0:r8_3, r9_2) + 1
    
    if (rdx_3 u<= r9_2 && rdx_3 != 0)
        int128_t* const rax_4
        
        if (rdx_3 - 1 u< (zx.d(*arg1) << 8) + zx.d(arg1[1]))
            rax_4 = &arg1[(zx.q(rdx_3 - 1) + 1) << 1]
        else
            rax_4 = &data_14369a5d0
        
        sub_142c22da0(arg2, (zx.d(*rax_4) << 8) + zx.d(*(rax_4 + 1)))
        int64_t rax_8
        rax_8.b = 1
        return rax_8

rax.b = 0
return rax
