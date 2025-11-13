// 函数: sub_141c66bd0
// 地址: 0x141c66bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f34a18
void* rsi = arg2
sub_140b34200("SubmixEQ", rax)
*(rsi + 0xc)
sub_141c74970(arg1)
int64_t* r9 = *(rsi + 0x20)
int64_t* rax_1 = *arg3
int64_t* var_68 = r9

if (*(arg1 + 0x98) == 0 || *(arg1 + 0xf8) s<= 0)
    int32_t i = 0
    
    if (r9[1].d s> 0)
        int64_t r11_1 = *rax_1
        int64_t r9_1 = 0
        
        do
            r9_1 += 4
            i += 1
            *(r9_1 + r11_1 - 4) = *(r9_1 + *var_68 - 4)
        while (i s< var_68[1].d)
else
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(rsi + 0xc))
    int64_t i_2 = sx.q((temp1_1 - temp0_1) s>> 1)
    int64_t i_3 = i_2
    
    if (i_2 s> 0)
        int32_t r10_1 = 0
        int64_t rbp_1 = 0
        int32_t arg_8 = 0
        int64_t i_1
        
        do
            int32_t j = 0
            int64_t r13_1 = *(arg1 + 0x70)
            
            if (*(rsi + 8) s> 0)
                do
                    int64_t r8 = sx.q(j * *(rsi + 0xc) + r10_1)
                    *(arg1 + 0x80) = *(*r9 + (r8 << 2))
                    *(arg1 + 0x84) = *(*r9 + (r8 << 2) + 4)
                    int32_t k_2 = *(r13_1 + rbp_1 + 0x10)
                    
                    if (k_2 s> 0)
                        int64_t rbx_1 = 0
                        uint64_t k_1 = zx.q(k_2)
                        uint64_t k
                        
                        do
                            sub_141c42410(*(r13_1 + rbp_1 + 8) + rbx_1, arg1 + 0x80, arg1 + 0x88)
                            rbx_1 += 0x30
                            *(arg1 + 0x80) = *(arg1 + 0x88)
                            *(arg1 + 0x84) = *(arg1 + 0x8c)
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        rsi = arg2
                        r9 = var_68
                        r10_1 = arg_8
                    
                    j += 1
                    int64_t rcx_5 = *rax_1
                    *(rcx_5 + (r8 << 2)) = *(arg1 + 0x88)
                    *(rcx_5 + (r8 << 2) + 4) = *(arg1 + 0x8c)
                while (j s< *(rsi + 8))
                
                i_2 = i_3
            
            r10_1 += 2
            rbp_1 += 0x18
            i_1 = i_2
            i_2 -= 1
            arg_8 = r10_1
            i_3 = i_2
        while (i_1 != 1)

return sub_140b38680("SubmixEQ", rax) __tailcall
