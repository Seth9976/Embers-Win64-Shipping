// 函数: sub_1426f6980
// 地址: 0x1426f6980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x458))(arg1, 0)
void* result = (*(*arg1 + 0x4b0))(arg1)

if ((*(arg1 + 0x274) & 0x10) != 0)
    void* rax_2 = arg1[0x15]
    
    if (rax_2 == 0)
        rax_2 = sub_141ee69e0(arg1)
    
    result = sub_1426fbe40(rax_2)
    
    if (result != 0)
        result = sub_142715ad0(result, sub_140d21950(arg1, sub_142736f50()))
        *(arg1 + 0x274) &= 0xef
        arg1[0x4f].b = 2

return result
