// 函数: sub_1421b6c00
// 地址: 0x1421b6c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[5]

if ((*(*arg1 + 0x118))(arg4, rbx) != 0 && (arg1[0x1c].b & 1) != 0)
    void*** rax_2 = sub_1421ab380(0x180)
    int64_t* result
    
    if (rax_2 == 0)
        result = nullptr
    else
        *(rbx + 0x30)
        result = sub_1421d6b50(rax_2)
    
    if ((*(*arg1 + 0x218))(arg1, &result[6]) != 0)
        void* r9_1 = arg1[0x3a]
        sub_1421f5a80(result, zx.q(arg2), arg1, *(r9_1 + 0x30), *(r9_1 + 0x44) & 1, *(r9_1 + 0x40), 
            arg3)
        return result
    
    if (result != 0)
        (**result)(result, 1)

return nullptr
