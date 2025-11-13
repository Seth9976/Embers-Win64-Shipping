// 函数: sub_142217ee0
// 地址: 0x142217ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x23].d s> 0 && (arg1[0x1c].b & 1) != 0)
    void*** rax_1 = j_sub_140a82f30(0xf0)
    void*** result
    
    if (rax_1 == 0)
        result = nullptr
    else
        result = sub_142180bc0(rax_1)
    
    if ((*(*arg1 + 0x218))(arg1, result) != 0)
        return result
    
    if (result != 0)
        (**result)(result, 1)

return 0
