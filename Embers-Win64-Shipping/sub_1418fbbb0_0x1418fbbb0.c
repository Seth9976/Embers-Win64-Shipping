// 函数: sub_1418fbbb0
// 地址: 0x1418fbbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a80f40()
int32_t result

if (rax == 0 || data_143f01c92 == 0)
    result = sub_1418e0d30(*(arg1 + 0x1a50) + 0x248, arg2, arg3)
else
    void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    
    if (&rcx_2[4] u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x28)
        rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        data_143f02bc8 = &rcx_2[4]
    else
        data_143f02bc8 = &rcx_2[4]
    
    int64_t* rax_2 = data_143f02ba0
    data_143f02bac += 1
    *rax_2 = rcx_2
    data_143f02ba0 = &rcx_2[1]
    rcx_2[1] = 0
    result = 0x42ff1df8
    *rcx_2 = &data_142ff1df8
    rcx_2[2] = arg2
    rcx_2[3].d = arg3

if (rax != 0)
    int64_t* var_18
    result = sub_141980430(&data_143f02b98, &var_18, 1)
    int64_t* rcx_7 = var_18
    
    if (rcx_7 != 0)
        result = rcx_7[9].d
        rcx_7[9].d -= 1
        
        if (result == 1)
            return sub_140a2f6e0(rcx_7)

return result
