// 函数: sub_141ffaf90
// 地址: 0x141ffaf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg1[8].b)
int64_t var_18

if (rcx == 0)
    var_18 = 0
    int32_t var_10_1 = 0
    void*** rax_4 = sub_1405978f0(0x28, &var_18)
    
    if (rax_4 != 0)
        *rax_4 = &data_1432595c8
        sub_140d3a3a0(&rax_4[1], arg1)
        rax_4[2] = sub_140f28a78
        rax_4[4] = sub_140a387b0()
        *rax_4 = &data_143259620
    
    return sub_14201e590(arg1[0xc], &arg1[9], arg1[0xb].d, &var_18)

if (rcx != 1)
    jump(*(*arg1 + 0x290))

var_18 = 0
int32_t var_10 = 0
void*** rax_1 = sub_1405978f0(0x28, &var_18)

if (rax_1 != 0)
    *rax_1 = &data_14329d820
    sub_140d3a3a0(&rax_1[1], arg1)
    rax_1[2] = sub_14094eb04
    rax_1[4] = sub_140a387b0()
    *rax_1 = &data_14329d878

return sub_14201e460(&arg1[9], arg1[0xb].d, &var_18)
