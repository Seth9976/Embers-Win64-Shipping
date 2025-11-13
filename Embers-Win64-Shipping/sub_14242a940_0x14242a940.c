// 函数: sub_14242a940
// 地址: 0x14242a940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 8)
int32_t rbp_1 = arg1[8] + 1
int32_t rdx = arg1[6]

if (rbp_1 s>= arg1[0x10] + rdx)
label_14242ab13:
    arg1[9].b = 1
    *(arg1 + 0x30) = 0
    return 

int64_t r14_1 = sx.q(rbp_1) << 3

while (true)
    int64_t rsi_1
    
    if (rbp_1 s>= rdx)
        rsi_1 = *(*(arg1 + 0x38) + (sx.q(rbp_1 - rdx) << 3))
    else
        rsi_1 = *(r14_1 + *(arg1 + 0x10))
    
    arg1[0xa] += 1
    
    if (rsi_1 != 0)
        uint64_t rax
        int64_t rcx_4
        rax, rcx_4 = sub_141dc9840(rsi_1)
        uint64_t rdi_1 = rax
        
        if (rax != 0)
            void* const rax_10
            
            if ((*arg1 & 1) != 0)
                int32_t rax_4 = *(rsi_1 + 0xc)
                
                if (rax_4 s>= data_143e1d9b4)
                    rax_10 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_4)
                    uint32_t rdx_2 = zx.d(temp0_1)
                    int32_t rax_6 = temp1_1 + rdx_2
                    rax_10 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
            
            if ((*arg1 & 1) == 0 || ((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
                if (((*arg1 u>> 1).b & 1) != 0)
                    rax = sub_1405949a0()
                
                if (((*arg1 u>> 1).b & 1) == 0 || rax.b != 0)
                    if (((*arg1 u>> 2).b & 1) == 0)
                    label_14242aaca:
                        
                        if (Concurrency::details::_CancellationTokenRegistration::_GetToken(rdi_1)
                                == r15)
                            if (rdi_1 == *(r15 + 0x30))
                            label_14242ab38:
                                arg1[8] = rbp_1
                                *(arg1 + 0x30) = rsi_1
                                break
                            
                            void* rax_15 = sub_1425bd0d0()
                            void* rdx_5 = *(rsi_1 + 0x10)
                            rax = sx.q(*(rax_15 + 0x38))
                            
                            if (rax.d s> *(rdx_5 + 0x38))
                                goto label_14242ab38
                            
                            if (*(*(rdx_5 + 0x30) + (rax << 3)) != rax_15 + 0x30)
                                goto label_14242ab38
                    else
                        if ((*(rdi_1 + 0x1f4) & 0x20) == 0 || (*(rdi_1 + 0x1f6) & 8) != 0)
                            rax = zx.q(*(rdi_1 + 0x1f5))
                        
                        char r9_1
                        
                        if (((*(rdi_1 + 0x1f4) & 0x20) != 0 && (*(rdi_1 + 0x1f6) & 8) == 0)
                                || (rax.b & 0x40) != 0 || rax.b s< 0)
                            r9_1 = 1
                        else
                            r9_1 = 0
                        
                        void* rdx_4 = *(rdi_1 + 0xb8)
                        char* r8_2 = *(rdi_1 + 0x248)
                        
                        if (rdx_4 != 0)
                            rax = sx.q(*(rdx_4 + 0x168))
                            
                            if (rax.d s< 0 || rax.d s>= *(rdx_4 + 0x160))
                                rcx_4.b = 0
                            else
                                rcx_4.b = 1
                        
                        int64_t rcx_9
                        
                        if (rdx_4 == 0 || rcx_4.b == 0)
                            rcx_9 = 0
                        else
                            rcx_9 = rax * 0x78 + *(rdx_4 + 0x158)
                        
                        if (rcx_9 == 0 || r8_2 == rcx_9)
                            rcx_9.b = 1
                        else
                            rcx_9.b = 0
                        
                        if (r8_2 == 0 || *r8_2 == 2)
                            rax.b = 1
                        else
                            rax.b = 0
                        
                        if (rcx_9.b != 0 || rax.b != 0)
                            rax.b = 1
                        
                        if (r9_1 != 0 && rax.b != 0)
                            goto label_14242aaca
    
    rbp_1 += 1
    rdx = arg1[6]
    r14_1 += 8
    
    if (rbp_1 s>= arg1[0x10] + rdx)
        goto label_14242ab13
