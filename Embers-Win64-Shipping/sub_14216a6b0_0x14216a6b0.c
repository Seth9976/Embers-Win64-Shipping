// 函数: sub_14216a6b0
// 地址: 0x14216a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x140)

if (rcx == 0)
    return 

int64_t* var_18
sub_142436b20(rcx, &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rax = var_18
    
    if (i s>= rax[1].d)
        break
    
    void* rsi_1 = (*rax)[sx.q(i)]
    
    if (rsi_1 != 0)
        int64_t** rax_1 = sub_1420e4550(rsi_1)
        int64_t* j = *rax_1
        
        for (void* rbp_2 = sx.q(rax_1[1].d) * 0x38 + j; j != rbp_2; j = &j[7])
            sub_1421641e0(arg1, arg1, rsi_1, j, var_18.d)
        
        i = i_1
    
    i += 1
    i_1 = i
