// 函数: sub_142375370
// 地址: 0x142375370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
int64_t arg_10

if (arg2[8].d s>= 0x1e5)
    sub_141ff4780(&arg_10, arg2, 0, 0xd6)

(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
uint32_t result = sub_140b4e7c0(arg2, &data_1439a9418)

if (result s>= 0x17)
    result = zx.d(arg2[5].b)
    
    if ((result.b & 1) != 0)
        return (*(*arg2 + 0x130))(arg2, arg1 + 0x70)
    
    if ((result.b & 2) != 0)
        int64_t rax_2
        
        if (sub_142377680(arg1) == 0)
            rax_2 = 0
        else
            rax_2 = *(arg1 + 0x70)
        
        arg_10 = rax_2
        return (*(*arg2 + 0x130))(arg2, &arg_10)

return result
