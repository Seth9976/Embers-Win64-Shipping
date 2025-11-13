// 函数: sub_142217f60
// 地址: 0x142217f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x23].d s> 0 && (arg1[0x1c].b & 1) != 0)
    void*** rax_1 = j_sub_140a82f30(0xf8)
    void*** result
    
    if (rax_1 == 0)
        result = nullptr
    else
        result = sub_142180b60(rax_1)
    
    if ((*(*arg1 + 0x218))(arg1, result) != 0)
        return result
    
    if (result != 0)
        (**result)(result, 1)

return 0
