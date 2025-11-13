// 函数: sub_141038170
// 地址: 0x141038170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_38 = __security_cookie ^ &var_38
void* r8 = *(arg1 + 0x1c8)
uint64_t result = *(r8 + 0x18)
void* r14 = *(result + 0x158)

if (r14 != 0)
    int64_t* r15 = *(r8 + 0x40)
    
    if (r15 != 0)
        int32_t rcx = *(arg1 + 0x248)
        uint32_t i_3 = (*(r14 + 0x98) u>> 2).d
        uint32_t i_2 = rcx + 2
        result = zx.q(i_3 - 2)
        
        if (rcx s>= result.d)
            i_2 = i_3
        
        int64_t rsi_1 = sx.q(i_2) << 5
        uint64_t result_2
        
        if (rsi_1 u>= 0x1000)
            int512_t zmm0
            result, zmm0 = sub_140a82f30(rsi_1, 0)
            result_2 = result
        label_14103824b:
            
            if (result_2 != 0)
                int64_t i_1 = sx.q(i_2)
                uint64_t rdx = 0
                int64_t r11_3 = (i_1 << 4) + result_2
                
                if (i_2 s> 0)
                    uint32_t* r8_2 = -fffffffffffffff8
                    uint64_t result_3 = result_2
                    int64_t i
                    
                    do
                        *result_3 = sx.q((rdx << 2).d) + *(r14 + 0x108)
                        *(r11_3 + r8_2 + 8) = 1
                        uint32_t rax_4
                        
                        if (rdx.d == 0)
                            rax_4 = *(arg1 + 0x248)
                        else if (rdx.d != 1)
                            rax_4 = *(r8_2 + *(arg1 + 0x240))
                        else
                            rax_4 = zx.d(arg2)
                        
                        *(result_3 + 8) = rax_4
                        rdx = zx.q(rdx.d + 1)
                        result_3 += 0x10
                        r8_2 = &r8_2[1]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                result = (*(*r15 + 0x210))(nop)
        else
            if (rsi_1 != 0)
                int64_t rcx_1 = rsi_1 + 0x1e
                
                if (rcx_1 u<= rsi_1 + 0xf)
                    rcx_1 = 0xffffffffffffff0
                
                uint64_t result_1 = rcx_1 & 0xfffffffffffffff0
                result = result_1
                __chkstk(result)
                void var_58
                result_2 = (&var_58 - result_1 + 0x2f) & 0xfffffffffffffff0
                goto label_14103824b
            
            result_2 = 0
        
        if (rsi_1 u>= 0x1000)
            result = sub_140a74f90(result_2)

__security_check_cookie(var_38 ^ &var_38)
return result
