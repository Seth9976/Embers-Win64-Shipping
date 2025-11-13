// 函数: sub_140817960
// 地址: 0x140817960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rbp = &i[sx.q(arg1[1].d) * 3]; i != rbp; i = &i[3])
    int64_t var_18
    int64_t* rax_1 = sub_140d30800(arg2, &var_18)
    int64_t var_28
    int64_t* rax_2 = sub_140d30800(i, &var_28)
    int16_t* rdx_2
    
    if (rax_1[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_1
    
    int16_t* const rcx_3
    
    if (rax_2[1].d == 0)
        rcx_3 = &data_142d40450
    else
        rcx_3 = *rax_2
    
    int32_t rax_3 = sub_140a54510(rcx_3, rdx_2)
    int64_t rcx_4 = var_28
    int64_t* rsi_1
    rsi_1.b = rax_3 == 0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rsi_1.b != 0)
        return i

return nullptr
