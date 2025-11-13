// 函数: sub_142611820
// 地址: 0x142611820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].q = arg2[1].q
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *arg2
arg1[2].d = *(arg2 + 4)
*(arg1 + 0x24) = *(arg2 + 8)
*(arg1 + 0x28) = *(arg2 + 0xc)
*(arg1 + 0x2c) = arg2[1].d
int32_t r8 = *(arg2 + 0x14)
arg1[3].d = r8
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x14))
int32_t rdx_5 = ((((temp0 & 3) + temp1) s>> 2) - 1) | ((((temp0 & 3) + temp1) s>> 2) - 1) u>> 1
int32_t rdx_6 = rdx_5 | rdx_5 u>> 2
int32_t rdx_7 = rdx_6 | rdx_6 u>> 4
int32_t rdx_8 = rdx_7 | rdx_7 u>> 8
int32_t rax_10 = rdx_8 u>> 0x10 | rdx_8
int32_t rax_11 = rax_10 + 1
*(arg1 + 0x34) = rax_11

if (rax_10 == 0xffffffff)
    *(arg1 + 0x34) = 1
    rax_11 = 1

*(arg1 + 0x38) = rax_11 - 1
int64_t rax_13 = data_143b50290(zx.q(r8 * 0xb0), 0)
arg1[9].q = rax_13

if (rax_13 != 0)
    int64_t rax_14 = data_143b50290(zx.q(*(arg1 + 0x34) << 3), 0)
    arg1[8].q = rax_14
    
    if (rax_14 != 0)
        memset(arg1[9].q, 0, sx.q(arg1[3].d) * 0xb0)
        memset(arg1[8].q, 0, sx.q(*(arg1 + 0x34)) << 3)
        int32_t r8_4 = arg1[3].d
        int32_t r10 = 0
        int32_t r8_5 = r8_4 - 1
        *(arg1 + 0x88) = 0
        
        if (r8_4 - 1 s>= 0)
            int64_t rcx_13 = arg1[9].q
            int32_t* rdx_9 = sx.q(r8_5) * 0xb0
            int32_t* r9_1 = rdx_9
            int32_t temp4_1
            
            do
                temp4_1 = r8_5
                r8_5 -= 1
                *(rdx_9 + rcx_13) = 1
                rdx_9 = &rdx_9[-0x2c]
                *(rdx_9 + arg1[9].q + 0x118) = *(arg1 + 0x88)
                rcx_13 = arg1[9].q
                *(arg1 + 0x88) = r9_1 + rcx_13
                r9_1 = &r9_1[-0x2c]
            while (temp4_1 - 1 s>= 0)
        
        int32_t rcx_16 = *(arg2 + 0x14) - 1
        int32_t rcx_17 = rcx_16 | rcx_16 u>> 1
        int32_t rcx_18 = rcx_17 | rcx_17 u>> 2
        int32_t rcx_19 = rcx_18 | rcx_18 u>> 4
        int32_t rcx_20 = rcx_19 | rcx_19 u>> 8
        int32_t rax_27 = 0
        
        if ((rcx_20 u>> 0x10 | rcx_20) + 1 u> 0xffff)
            rax_27 = 0x10
        
        uint32_t r8_10 = ((rcx_20 u>> 0x10 | rcx_20) + 1) u>> rax_27.b
        int32_t rcx_22 = 0
        
        if (r8_10 u> 0xff)
            rcx_22 = 8
        
        uint32_t r8_11 = r8_10 u>> rcx_22.b
        int32_t rcx_23 = 0
        
        if (r8_11 u> 0xf)
            rcx_23 = 4
        
        uint32_t r8_12 = r8_11 u>> rcx_23.b
        int32_t rcx_24 = 0
        
        if (r8_12 u> 3)
            rcx_24 = 2
        
        int32_t r8_16 = r8_12 u>> rcx_24.b u>> 1 | rcx_24 | rax_27 | rcx_22 | rcx_23
        *(arg1 + 0x9c) = r8_16
        int32_t rcx_26 = *(arg2 + 0x18) - 1
        int32_t rcx_27 = rcx_26 | rcx_26 u>> 1
        int32_t rcx_28 = rcx_27 | rcx_27 u>> 2
        int32_t rcx_29 = rcx_28 | rcx_28 u>> 4
        int32_t rcx_30 = rcx_29 | rcx_29 u>> 8
        int32_t rax_38 = 0
        
        if ((rcx_30 u>> 0x10 | rcx_30) + 1 u> 0xffff)
            rax_38 = 0x10
        
        uint32_t rdx_14 = ((rcx_30 u>> 0x10 | rcx_30) + 1) u>> rax_38.b
        int32_t rcx_32 = 0
        
        if (rdx_14 u> 0xff)
            rcx_32 = 8
        
        uint32_t rdx_15 = rdx_14 u>> rcx_32.b
        int32_t rcx_33 = 0
        
        if (rdx_15 u> 0xf)
            rcx_33 = 4
        
        uint32_t rdx_16 = rdx_15 u>> rcx_33.b
        
        if (rdx_16 u> 3)
            r10 = 2
        
        int32_t rdx_20 = rdx_16 u>> r10.b u>> 1 | r10 | rax_38 | rcx_32 | rcx_33
        arg1[0xa].d = rdx_20
        int32_t rcx_36 = 0x40 - rdx_20 - r8_16
        
        if (rcx_36 u> 0x1f)
            rcx_36 = 0x1f
        
        *(arg1 + 0x98) = rcx_36
        
        if (rcx_36 u< 5)
            return 0x80000008
        
        return 0x40000000

return 0x80000004
