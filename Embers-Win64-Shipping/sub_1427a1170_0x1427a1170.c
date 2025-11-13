// 函数: sub_1427a1170
// 地址: 0x1427a1170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 8)

if (result.b != 0)
    void*** rax = j_sub_140a82f30(0x18)
    void*** rcx_1 = rax
    
    if (rax == 0)
        rcx_1 = rax
    else
        *rcx_1 = &data_1434b69d8
        rcx_1[1] = 0
        rcx_1[2] = 0
    
    void arg_8
    
    if (arg1 + 0x10 != &arg_8)
        void*** r8_1 = *(arg1 + 0x10)
        *(arg1 + 0x10) = rcx_1
        
        if (r8_1 != 0)
            (*r8_1)[7](r8_1, 1)
    else if (rcx_1 != 0)
        (*rcx_1)[7](rcx_1, 1)
    
    result = sub_140d3c6e0(arg1 + 8)
    (*(arg1 + 0x10))[2] = *(result + 0x4c)

return result
