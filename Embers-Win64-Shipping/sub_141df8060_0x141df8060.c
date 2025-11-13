// 函数: sub_141df8060
// 地址: 0x141df8060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg3

if (arg2[3].w u<= 0)
    return 

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 8))
        break
    
    int64_t* rdx = arg2[2]
    void* rdi_2 = sx.q(i) * 0x98 + *arg1
    uint32_t rcx = zx.d(*(rdi_2 + 0x10))
    int16_t rdx_1
    
    if (rcx s>= rdx[1].d)
        rdx_1 = -1
    else
        rdx_1 = *(*rdx + (zx.q(rcx.w) << 1))
    
    if (rdx_1 != 0xffff)
        int64_t rax
        int32_t zmm0_1
        zmm0_1, rax, zmm6 = sub_141f86ef0(rdi_2 + 0x18, zmm6, zx.o(0))
        int64_t* rdx_2 = arg2[2]
        uint32_t rcx_3 = zx.d(*(rdi_2 + 0x10))
        int16_t rdx_3
        
        if (rcx_3 s>= rdx_2[1].d)
            rdx_3 = -1
        else
            rdx_3 = *(*rdx_2 + (zx.q(rcx_3.w) << 1))
        
        if (rdx_3 != 0xffff)
            rax = *arg2
            uint64_t rcx_5 = zx.q(rdx_3)
            *(rax + (rcx_5 << 3)) = zmm0_1
            *(rax + (rcx_5 << 3) + 4) = 1
