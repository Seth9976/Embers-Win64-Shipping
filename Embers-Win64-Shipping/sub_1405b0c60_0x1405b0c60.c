// 函数: sub_1405b0c60
// 地址: 0x1405b0c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
int64_t var_28 = r15
void* r13 = *(arg1 + 8)
int32_t r14_1 = arg1[8] + 1
int32_t rdx = arg1[6]

if (r14_1 s>= arg1[0x10] + rdx)
label_1405b0e12:
    arg1[9].b = 1
    *(arg1 + 0x30) = 0
    return 

int64_t r12_1 = sx.q(r14_1) << 3

while (true)
    void* rsi_1
    
    if (r14_1 s>= rdx)
        rsi_1 = *(*(arg1 + 0x38) + (sx.q(r14_1 - rdx) << 3))
    else
        rsi_1 = *(r12_1 + *(arg1 + 0x10))
    
    arg1[0xa] += 1
    
    if (rsi_1 != 0)
        uint64_t rax = sub_141dc9840(rsi_1)
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
                    label_1405b0dc7:
                        
                        if (Concurrency::details::_CancellationTokenRegistration::_GetToken(rdi_1)
                                == r13)
                            if (rdi_1 == *(r13 + 0x30))
                            label_1405b0e3b:
                                arg1[8] = r14_1
                                *(arg1 + 0x30) = rsi_1
                                break
                            
                            void* rax_15 = sub_1425bd0d0()
                            void* rdx_4 = *(rsi_1 + 0x10)
                            rax = sx.q(*(rax_15 + 0x38))
                            
                            if (rax.d s> *(rdx_4 + 0x38))
                                goto label_1405b0e3b
                            
                            if (*(*(rdx_4 + 0x30) + (rax << 3)) != rax_15 + 0x30)
                                goto label_1405b0e3b
                    else
                        if ((*(rdi_1 + 0x1f4) & 0x20) == 0 || (*(rdi_1 + 0x1f6) & 8) != 0)
                            rax = zx.q(*(rdi_1 + 0x1f5))
                        
                        if (((*(rdi_1 + 0x1f4) & 0x20) != 0 && (*(rdi_1 + 0x1f6) & 8) == 0)
                                || (rax.b & 0x40) != 0 || rax.b s< 0)
                            r15.b = 1
                        else
                            r15.b = 0
                        
                        void* rcx_9 = *(rdi_1 + 0xb8)
                        char* rbp_1 = *(rdi_1 + 0x248)
                        
                        if (rcx_9 != 0)
                            rax = sub_1424359b0(rcx_9)
                        
                        if (rcx_9 == 0 || rax == 0 || rbp_1 == rax)
                            rcx_9.b = 1
                        else
                            rcx_9.b = 0
                        
                        if (rbp_1 == 0 || *rbp_1 == 2)
                            rax.b = 1
                        else
                            rax.b = 0
                        
                        if (rcx_9.b != 0 || rax.b != 0)
                            rax.b = 1
                        
                        if (r15.b != 0 && rax.b != 0)
                            goto label_1405b0dc7
    
    r14_1 += 1
    rdx = arg1[6]
    r12_1 += 8
    
    if (r14_1 s>= arg1[0x10] + rdx)
        goto label_1405b0e12
