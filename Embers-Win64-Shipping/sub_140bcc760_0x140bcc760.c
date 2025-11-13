// 函数: sub_140bcc760
// 地址: 0x140bcc760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xc].b == 0 && arg2 == 0)
    return 

int32_t i = 0
int64_t r14_1 = sx.q(arg1[1])
arg1[0xc].b = arg2
uint64_t rax

if (r14_1.d s< *arg1)
    int64_t r12_2 = r14_1 << 4
    
    do
        int64_t rbx_1 = *(arg1 + 0x18)
        
        if (*(r12_2 + rbx_1 + 0xc) == 0)
            void* r15_1 = *(r12_2 + rbx_1)
            
            if (r15_1 != 0)
                int32_t rax_1 = 0
                
                if (0 == *(r12_2 + rbx_1 + 8))
                    *(r12_2 + rbx_1 + 8) = 0
                else
                    rax_1 = *(r12_2 + rbx_1 + 8)
                
                if (rax_1 s<= 0)
                    int32_t rdi_2 = *(*(r12_2 + rbx_1) + 0xc)
                    *(r12_2 + rbx_1 + 4) = sub_140d18d10(&data_143e1d990, rdi_2).d
                    *(r12_2 + rbx_1) = rdi_2
                    *(r12_2 + rbx_1 + 0xc) = 1
                else
                    int32_t r9_1 = *(r15_1 + 0xc)
                    
                    if (r9_1 s>= data_143e1d9b4)
                        rax = 0
                    else
                        int16_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r9_1)
                        uint32_t rdx_1 = zx.d(temp2_1)
                        int32_t rax_4 = temp3_1 + rdx_1
                        rax = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3))
                            + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18
                    
                    if (((*(rax + 8) u>> 0x1a).b & 1) == 0)
                        void* const rax_14
                        
                        if (r9_1 s>= data_143e1d9b4)
                            rax_14 = nullptr
                        else
                            int16_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(r9_1)
                            uint32_t rdx_4 = zx.d(temp4_1)
                            int32_t rax_10 = temp5_1 + rdx_4
                            rax_14 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_10.w) - rdx_4) * 0x18
                        
                        *(rax_14 + 8) |= 0x4000000
                        int64_t rdi_1 = sx.q(arg1[0xa])
                        rax = zx.q((rdi_1 + 1).d)
                        arg1[0xa] = rax.d
                        
                        if (rax.d s> arg1[0xb])
                            sub_1405a4d70(&arg1[8])
                        
                        *(*(arg1 + 0x20) + (rdi_1 << 3)) = r15_1
        
        r14_1 = zx.q(r14_1.d + 1)
        r12_2 += 0x10
    while (r14_1.d s< *arg1)

if (arg2 != 0 || data_143e1d9b4 s<= 0)
    return 

do
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    uint32_t rdx_9 = zx.d(temp0_1)
    int32_t rax_18 = temp1_1 + rdx_9
    rax = *(*(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3)) + sx.q(zx.d(rax_18.w) - rdx_9) * 0x18)
    
    if (rax != 0)
        rax.b = (*(rax + 8) u>> 0x13).b & 1
        
        if (rax.b != 0)
            sub_140cddea0()
    
    i += 1
while (i s< data_143e1d9b4)
