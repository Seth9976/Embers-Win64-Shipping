// 函数: sub_1420cbc00
// 地址: 0x1420cbc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1423de540(data_143f5b298, arg1, 1)

if (result != 0)
    void* rcx_1 = *(result + 0x188)
    void* rdi_1
    
    if (rcx_1 == 0)
        rdi_1 = result + 0x308
    else
        rdi_1 = *(rcx_1 + 0xc8)
    
    void*** rax = j_sub_140a82f30(0x140)
    void*** rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        int128_t zmm0_1 = *arg3
        sub_1420af8a0(rax, arg2 + 0x10, arg4)
        *rbx_1 = &data_1432bfe10
        *(rbx_1 + 0x130) = zmm0_1
    
    result = sub_1420dc280(rdi_1, *(arg4 + 0x10), arg4[1], rbx_1)

int64_t rcx_4 = *(arg2 + 0x18)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
