// 函数: sub_14085aba0
// 地址: 0x14085aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
(*(*arg2 + 0x1d8))(arg2, &data_14396e7c0)
int32_t rax_3 = sub_140b4e7c0(arg2, &data_14396e7c0)
void** var_f8
sub_14081a4a0(&var_f8)
int512_t zmm1
int512_t zmm2
zmm1, zmm2 = sub_140ce8e10(arg1, arg2)
uint64_t rdi

if (rax_3 s< 0x16)
    char rcx_4 = *(arg1 + 0x28)
    
    if (rcx_4 u< 3 || (rax_3 s>= 0xf && rcx_4 - 0xb u<= 1)
            || (rax_3 s>= 0x15 && ((rcx_4 - 5) & 0xfa) == 0 && rcx_4 != 6))
        rdi.b = 0
    else
    label_14085ac30:
        rdi.b = 1
    label_14085ac8c:
        
        if (rax_3 s< 0x2c)
            void* i = *(arg1 + 0x488)
            
            for (void* rbp_2 = sx.q(*(arg1 + 0x490)) * 0x38 + i; i != rbp_2; i += 0x38)
                int64_t rsi_1
                
                if (*(i + 0x18) != 1)
                    rsi_1 = 0
                else
                    rsi_1 = *(i + 0x10)
                
                int64_t rax_10 = sub_140873180()
                int64_t rax_11
                int64_t rsi_2
                
                if (rsi_1 != rax_10)
                    if (*(i + 0x18) != 1)
                        rsi_2 = 0
                    else
                        rsi_2 = *(i + 0x10)
                    
                    rax_11 = sub_1408729d0()
                
                if (rsi_1 == rax_10 || rsi_2 == rax_11)
                    rdi.b = 0
else if (rax_3 s>= 0x1d)
    char rax_9 = sub_14084ae10(arg1)
    rdi = zx.q(rax_9)
    
    if (rax_9 != 0)
        goto label_14085ac8c
else
    void* rax_7 = sub_140d226f0(arg1, sub_140876da0())
    
    if (rax_7 == 0 || *(rax_7 + 0xd8) == 0)
        rdi.b = 0
    else
        if (*(arg1 + 0x28) - 3 u<= 1)
            goto label_14085ac30
        
        rdi.b = 0

char rax_12 = arg2[5].b & 1

if (rax_12 == 0 && rdi.b != 0)
    sub_14085b1b0(nullptr, arg2, arg1 + 0x228, zmm1, zmm2)
else if (rax_12 != 0 && rax_3 s>= 5 && (rax_3 s< 0xe || rdi.b != 0))
    sub_14085b1b0(nullptr, arg2, arg1 + 0x228, zmm1, zmm2)

int64_t result = sub_14081ccd0(&var_f8)
__security_check_cookie(rax_1 ^ &var_118)
return result
