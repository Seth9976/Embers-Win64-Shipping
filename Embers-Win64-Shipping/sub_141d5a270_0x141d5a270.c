// 函数: sub_141d5a270
// 地址: 0x141d5a270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg6 = 0
void* result = sub_1423de540(data_143f5b298, arg2, 1)

if (result != 0)
    void* rdx = *(result + 0x188)
    int64_t* rbx_1
    
    if (rdx == 0)
        rbx_1 = result + 0x308
    else
        rbx_1 = *(rdx + 0xc8)
    
    result = sub_141d51f20(rbx_1, *(arg3 + 0x10), arg3[1])
    
    if (result == 0)
        void*** rax = j_sub_140a82f30(zx.q((result + 0x78).d))
        
        if (rax != 0)
            char* var_10_1 = arg6
            rax = sub_141d52190(rax, arg3, arg1, arg4, arg5)
        
        return sub_1420dc280(rbx_1, *(arg3 + 0x10), arg3[1], rax)

return result
