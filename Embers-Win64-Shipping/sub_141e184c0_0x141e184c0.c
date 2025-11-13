// 函数: sub_141e184c0
// 地址: 0x141e184c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1[1]
uint64_t result = *arg1
uint32_t zmm1[0x4] = *(r8 + 0x94)
zmm1[0] = zmm1[0] f* *(result + 0x12c)

if (not(zmm1[0] f== *(arg1 + 0x14)))
    bool cond:0_1 = zmm1[0] f> 0f
    *(arg1 + 0x31) = 0
    *(arg1 + 0x14) = zmm1[0]
    result.b = cond:0_1
    arg1[4].b = result.b
    sub_141e63d00(&arg1[0xc], zmm1, r8 + 0x1a0)
    uint64_t i_4 = zx.q(*(arg1[1] + 0x150))
    arg1[8].d = 0
    
    if (i_4.d s> *(arg1 + 0x44))
        sub_1405dadb0(&arg1[7], i_4.d)
    
    arg1[8].d = 0
    
    if (*(arg1 + 0x44) != i_4.d)
        sub_1405dadb0(&arg1[7], i_4.d)
    
    if (i_4.d s> 0)
        uint64_t i_2 = i_4
        uint64_t i
        
        do
            int64_t rsi_1 = sx.q(arg1[8].d)
            int32_t rax_1 = (rsi_1 + 1).d
            arg1[8].d = rax_1
            
            if (rax_1 s> *(arg1 + 0x44))
                sub_1406105e0(&arg1[7])
            
            int32_t* rdx_4 = arg1[7] + (rsi_1 << 2)
            
            if (rdx_4 != 0)
                *rdx_4 = 0xbf800000
            
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg1[0xa].d = 0
    
    if (i_4.d s> *(arg1 + 0x54))
        sub_1405dadb0(&arg1[9], i_4.d)
    
    arg1[0xa].d = 0
    
    if (*(arg1 + 0x54) != i_4.d)
        sub_1405dadb0(&arg1[9], i_4.d)
    
    if (i_4.d s> 0)
        uint64_t i_3 = i_4
        uint64_t i_1
        
        do
            int64_t rdi_1 = sx.q(arg1[0xa].d)
            int32_t rax_3 = (rdi_1 + 1).d
            arg1[0xa].d = rax_3
            
            if (rax_3 s> *(arg1 + 0x54))
                sub_1406105e0(&arg1[9])
            
            int32_t* rdx_8 = arg1[9] + (rdi_1 << 2)
            
            if (rdx_8 != 0)
                *rdx_8 = 0xbf800000
            
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    result = zx.q(arg1[0xc].b)
    *(arg1 + 0x31) = result.b

return result
