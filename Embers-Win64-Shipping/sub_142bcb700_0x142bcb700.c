// 函数: sub_142bcb700
// 地址: 0x142bcb700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg2
int32_t rdi = 0

if (rbp == 0)
    rdi = (rbp + 0x23).d
else if (arg3 u< *(rbp + 0x10))
    void* r12_1 = *(rbp + 0xa0)
    int16_t* r14_3 = (zx.q(arg3) << 4) + *(rbp + 0x1b0)
    *(arg1 + 0x68) = sx.d(r14_3[4]) + sx.d(r14_3[3])
    int32_t rcx_3 = sx.d(r14_3[1]) - sx.d(*r14_3)
    *(arg1 + 0x80) = 1
    *(arg1 + 0x6c) = rcx_3
    *(arg1 + 0x82) = 1
    int32_t rdx = 1 << ((*(rbp + 0x1d0)).b & 3)
    uint32_t rax_7
    
    if (rdx == 1)
        rax_7 = (*(arg1 + 0x6c) + 7) u>> 3
    else if (rdx == 2)
        rax_7 = (*(arg1 + 0x6c) + 0xf) u>> 3 & 0x1ffffffe
    else if (rdx == 4)
        rax_7 = (*(arg1 + 0x6c) + 0x1f) u>> 3 & 0x1ffffffc
    else
        if (rdx != 8)
            return 3
        
        rax_7 = (*(arg1 + 0x6c) + 0x3f) u>> 3 & 0x1ffffff8
    
    *(arg1 + 0x70) = rax_7
    __builtin_strncpy(arg1 + 0x60, "stib", 4)
    *(arg1 + 0x90) = sx.d(*r14_3)
    *(arg1 + 0x94) = sx.d(r14_3[3])
    *(arg1 + 0x40) = sx.d(r14_3[2]) << 6
    *(arg1 + 0x38) = sx.d(*r14_3) << 6
    *(arg1 + 0x3c) = sx.d(r14_3[3]) << 6
    *(arg1 + 0x30) = (sx.d(r14_3[1]) - sx.d(*r14_3)) << 6
    *(arg1 + 0x34) = *(arg1 + 0x68) << 6
    sub_142b9a4e0(arg1 + 0x30, (*(rbp + 0x154) + *(rbp + 0x150)) << 6)
    
    if (not(test_bit(arg4, 0x16)))
        uint32_t i_6 = *(arg1 + 0x68) * *(arg1 + 0x70)
        int32_t rax_27
        int512_t zmm0_1
        rax_27, zmm0_1 = sub_142b98ac0(arg1, i_6)
        rdi = rax_27
        
        if (rax_27 == 0)
            int32_t rax_28 = sub_142b97060(r12_1, *(r14_3 + 0xc), arg5)
            rdi = rax_28
            
            if (rax_28 == 0)
                int32_t rax_29 = sub_142b96990(r12_1, *(arg1 + 0x78), i_6, zmm0_1)
                rdi = rax_29
                
                if (rax_29 == 0)
                    if ((*(rbp + 0x1d0) & 8) == 0)
                        char* r8_1 = *(arg1 + 0x78)
                        uint64_t i_5 = zx.q(i_6)
                        
                        if (i_6 != 0)
                            uint64_t i
                            
                            do
                                uint32_t rax_30 = zx.d(*r8_1)
                                r8_1 = &r8_1[1]
                                int32_t rdx_16 = (rax_30 u>> 1 & 0x55) | ((rax_30 & 0x55) * 2)
                                int32_t rcx_13 = (rdx_16 u>> 2 & 0x33) | (rdx_16 & 0x33) << 2
                                int32_t rax_33 = rcx_13
                                rcx_13.b <<= 4
                                r8_1[-1] = ((rax_33 u>> 4).b & 0xf) | rcx_13.b
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                    
                    int32_t rcx_14 = *(rbp + 0x1d0)
                    
                    if ((((rcx_14 u>> 1).b ^ rcx_14.b) & 4) != 0)
                        int32_t r15_1 = 1 << ((rcx_14 u>> 4).b & 3)
                        
                        if (r15_1 == 2)
                            char* rdx_21 = *(arg1 + 0x78)
                            uint64_t i_8 = zx.q(i_6)
                            
                            if (i_8 u>= 2)
                                uint64_t i_4 = i_8 u>> 1
                                uint64_t i_1
                                
                                do
                                    char rcx_19 = *rdx_21
                                    *rdx_21 = rdx_21[1]
                                    rdx_21[1] = rcx_19
                                    rdx_21 = &rdx_21[2]
                                    i_1 = i_4
                                    i_4 -= 1
                                while (i_1 != 1)
                        else if (r15_1 == 4)
                            char* rax_38 = *(arg1 + 0x78)
                            uint64_t i_7 = zx.q(i_6)
                            
                            if (i_7 u>= 4)
                                uint64_t i_3 = i_7 u>> 2
                                uint64_t i_2
                                
                                do
                                    char rdx_19 = *rax_38
                                    *rax_38 = rax_38[3]
                                    char rcx_18 = rax_38[2]
                                    rax_38[3] = rdx_19
                                    char rdx_20 = rax_38[1]
                                    rax_38[1] = rcx_18
                                    rax_38[2] = rdx_20
                                    rax_38 = &rax_38[4]
                                    i_2 = i_3
                                    i_3 -= 1
                                while (i_2 != 1)
else
    rdi = 6

return zx.q(rdi)
