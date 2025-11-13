// 函数: sub_14183d070
// 地址: 0x14183d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xf8)
int64_t result = sx.q(*(arg1 + 0x100))

for (void* rsi_2 = &i[result * 0xc]; i != rsi_2; i = &i[0xc])
    int32_t var_28
    sub_140598750(arg2, &var_28)
    int64_t* var_20
    sub_140596d10(var_20, i)
    var_20[2].d = 0xffffffff
    int32_t rax = var_20[1].d
    int16_t* rdx_2
    
    if (rax == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *var_20
    
    int32_t rcx_2 = rax - 1
    
    if (rax == 0)
        rcx_2 = 0
    
    void arg_8
    result = sub_14059a6d0(arg2, &arg_8, sub_1405969c0(rcx_2, rdx_2), var_20, var_28, nullptr)

return result
