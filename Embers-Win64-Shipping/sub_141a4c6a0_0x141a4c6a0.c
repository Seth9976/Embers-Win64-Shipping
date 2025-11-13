// 函数: sub_141a4c6a0
// 地址: 0x141a4c6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg2 + 0x90)
int64_t r9 = zmm0.q
int64_t rdx = zmm0:8.q

if (r9.b != 2 && rdx.b != 2)
    uint32_t result = (rdx u>> 0x20).d
    
    if ((r9 u>> 0x20).d s>= result)
        return result

int64_t* r10_1 = *arg1
int64_t r8 = sx.q(arg1[1].d)
int64_t* rbx_1 = r10_1
void* rcx = &r10_1[r8]
char arg_10

if (r10_1 != rcx)
    do
        if (*rbx_1 == arg2)
            int32_t rbx_3 = ((rbx_1 - r10_1) s>> 3).d
            
            if (rbx_3 != 0xffffffff)
                int32_t arg_14
                
                if (rbx_3 s> 0 && rbx_3 - 1 s< r8.d)
                    void* r10_2 = r10_1[sx.q(rbx_3) - 1]
                    
                    if (*(r10_2 + 0xa8) == *(arg2 + 0xa8))
                        if (arg3 != 0)
                            int64_t rax_5 = *(r10_2 + 0x90)
                            uint32_t r9_4
                            
                            if (rax_5.b != 2)
                                r9_4 = (rax_5 u>> 0x20).d + 1
                                
                                if (rax_5.b == 1)
                                    r9_4 = (rax_5 u>> 0x20).d
                            
                            if (rax_5.b == 2 || (rdx u>> 0x20).d s> r9_4)
                                sub_141a686b0(r10_2, rdx)
                            
                            goto label_141a4c799
                        
                        int32_t rdx_1 = zmm0:4.d
                        
                        if (rdx_1 - (_mm_bsrli_si128(*(r10_2 + 0x90), 8).q u>> 0x20).d s> 0)
                            int32_t rax_10
                            
                            if (*(arg2 + 0x70) == 0)
                                rax_10 = *(arg2 + 0x58)
                            else
                                rax_10 = *(arg2 + 0x74)
                            
                            int32_t r8_3 = rdx_1 + rax_10
                            arg_10 = 0
                            int64_t rax_11 = *(r10_2 + 0x90)
                            arg_14 = r8_3
                            uint32_t rcx_6
                            
                            if (rax_11.b != 2)
                                rcx_6 = (rax_11 u>> 0x20).d + 1
                                
                                if (rax_11.b == 1)
                                    rcx_6 = (rax_11 u>> 0x20).d
                            
                            if (rax_11.b == 2 || r8_3 s> rcx_6)
                                sub_141a686b0(r10_2, arg_10.q)
                        
                        goto label_141a4c82c
                    
                label_141a4c799:
                    
                    if (arg3 == 0)
                        goto label_141a4c82c
                else if (arg3 == 0)
                    *(arg2 + 0x58) = 0
                label_141a4c82c:
                    
                    if (rbx_3 + 1 s< 0 || rbx_3 + 1 s>= arg1[1].d)
                        *(arg2 + 0x5c) = 0
                    else
                        void* r10_3 = *(*arg1 + (sx.q(rbx_3) << 3) + 8)
                        
                        if (*(r10_3 + 0xa8) == *(arg2 + 0xa8))
                            int32_t rax_15 = zmm0:0xc.d
                            
                            if ((*(r10_3 + 0x90) u>> 0x20).d - rax_15 s> 0)
                                int32_t rcx_12
                                
                                if (*(r10_3 + 0x70) == 0)
                                    rcx_12 = *(r10_3 + 0x58)
                                else
                                    rcx_12 = *(r10_3 + 0x74)
                                
                                int64_t rdx_5 = *(r10_3 + 0x98)
                                int32_t rax_16 = rax_15 - rcx_12
                                arg_10 = 1
                                arg_14 = rax_16
                                uint32_t r8_5
                                
                                if (rdx_5.b != 2)
                                    r8_5 = (rdx_5 u>> 0x20).d
                                    
                                    if (rdx_5.b == 1)
                                        r8_5 = (rdx_5 u>> 0x20).d + 1
                                
                                if (rdx_5.b == 2 || rax_16 s< r8_5)
                                    sub_141a69340(r10_3, arg_10.q)
            
            break
        
        rbx_1 = &rbx_1[1]
    while (rbx_1 != rcx)

int32_t rdx_7 = arg1[1].d
int64_t rcx_14 = *arg1
arg_10 = 0
return sub_141a2bc20(rcx_14, rdx_7, arg_10, &arg_10)
