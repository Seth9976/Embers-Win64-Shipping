// 函数: sub_141cddaa0
// 地址: 0x141cddaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t r8 = sx.q(arg2)
void* r9_1
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && r8.d s< *(arg1 + 0x30))
    void* rax_2 = *(arg1 + 0x48)
    r9_1 = arg1 + 0x38
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    temp0_1:temp1_1 = sx.q(r8.d)

uint64_t result

if (arg2 s< 0 || r8.d s>= *(arg1 + 0x30)
        || not(test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r8.d & 0x1f)))
    result = 0
else
    void* var_48_1 = nullptr
    int32_t r10_1 = 8
    int64_t* rax_10 = (r8 << 5) + *(arg1 + 0x28)
    void* r9_2 = nullptr
    int32_t var_3c_1 = 8
    int32_t result_1 = 0
    int32_t var_40_1 = 0
    int32_t* i = *rax_10
    
    for (void* r13_1 = &i[sx.q(rax_10[1].d)]; i != r13_1; i = &i[1])
        int64_t rdi_1 = 0
        int64_t rcx_2 = sx.q(*i) * 3
        int64_t rax_13 = *(arg1 + 0x60)
        int32_t* rsi_1 = *(rax_13 + (rcx_2 << 3) + 8)
        uint64_t r15_2 = sx.q(*(rax_13 + (rcx_2 << 3) + 0x10)) << 2 u>> 2
        
        if (rsi_1 u> &rsi_1[sx.q(*(rax_13 + (rcx_2 << 3) + 0x10))])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                void var_68
                void* r8_1 = &var_68
                void* r14_3 = (sx.q(*rsi_1) << 4) + *(arg1 + 0xd0)
                
                if (r9_2 != 0)
                    r8_1 = r9_2
                
                void* rax_16 = r8_1
                void* rdx_3 = r8_1 + (sx.q(result_1) << 2)
                
                if (r8_1 != rdx_3)
                    while (*rax_16 != *(r14_3 + 0xc))
                        rax_16 += 4
                        
                        if (rax_16 == rdx_3)
                            goto label_141cddbf2
                
                if (r8_1 == rdx_3 || ((rax_16 - r8_1) s>> 2).d == 0xffffffff)
                label_141cddbf2:
                    
                    if (result_1 + 1 s> r10_1)
                        sub_14083a280(&var_68, result_1)
                        r9_2 = var_48_1
                    
                    void* rdx_5 = &var_68
                    
                    if (r9_2 != 0)
                        rdx_5 = r9_2
                    
                    *(rdx_5 + (sx.q(result_1) << 2)) = *(r14_3 + 0xc)
                    r10_1 = var_3c_1
                    result_1 += 1
                    r9_2 = var_48_1
                
                rsi_1 = &rsi_1[1]
                rdi_1 += 1
            while (rdi_1 != r15_2)
    
    if (r9_2 != 0)
        sub_140a74f90(r9_2)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_88)
return result
