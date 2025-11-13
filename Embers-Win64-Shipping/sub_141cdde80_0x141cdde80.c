// 函数: sub_141cdde80
// 地址: 0x141cdde80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t r8 = sx.q(arg2)
void* r9_1
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && r8.d s< *(arg1 + 0x68))
    r9_1 = arg1 + 0x70
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    temp0_1:temp1_1 = sx.q(r8.d)

uint64_t result

if (arg2 s< 0 || r8.d s>= *(arg1 + 0x68)
        || not(test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r8.d & 0x1f)))
    result = 0
else
    int64_t rax_8 = *(arg1 + 0x60)
    int64_t rbp_1 = r8 * 0x18
    int64_t rdi_1 = 0
    void* var_48_1 = nullptr
    void* r9_2 = nullptr
    int32_t var_3c_1 = 8
    int32_t rdx_3 = *(rax_8 + rbp_1 + 0x10)
    void var_68
    int32_t result_1
    
    if (rdx_3 s> 8)
        int32_t result_2 = 0
        sub_141a64350(&var_68, rdx_3)
        rax_8 = *(arg1 + 0x60)
        r9_2 = var_48_1
        result_1 = result_2
    else
        result_1 = 0
        int32_t var_40_1 = 0
    
    int32_t* rsi_1 = *(rax_8 + rbp_1 + 8)
    uint64_t r12_2 = sx.q(*(rax_8 + rbp_1 + 0x10)) << 2 u>> 2
    
    if (rsi_1 u> &rsi_1[sx.q(*(rax_8 + rbp_1 + 0x10))])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* r8_1 = &var_68
            void* r14_3 = (sx.q(*rsi_1) << 4) + *(arg1 + 0xd0)
            
            if (r9_2 != 0)
                r8_1 = r9_2
            
            void* rax_11 = r8_1
            void* rdx_4 = r8_1 + (sx.q(result_1) << 2)
            
            if (r8_1 != rdx_4)
                while (*rax_11 != *(r14_3 + 0xc))
                    rax_11 += 4
                    
                    if (rax_11 == rdx_4)
                        goto label_141cddfd2
            
            if (r8_1 == rdx_4 || ((rax_11 - r8_1) s>> 2).d == 0xffffffff)
            label_141cddfd2:
                
                if (result_1 + 1 s> var_3c_1)
                    sub_14083a280(&var_68, result_1)
                    r9_2 = var_48_1
                
                void* rdx_6 = &var_68
                
                if (r9_2 != 0)
                    rdx_6 = r9_2
                
                *(rdx_6 + (sx.q(result_1) << 2)) = *(r14_3 + 0xc)
                result_1 += 1
                r9_2 = var_48_1
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
        while (rdi_1 != r12_2)
    
    if (r9_2 != 0)
        sub_140a74f90(r9_2)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_88)
return result
