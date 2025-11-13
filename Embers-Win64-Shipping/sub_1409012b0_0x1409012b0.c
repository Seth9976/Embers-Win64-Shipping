// 函数: sub_1409012b0
// 地址: 0x1409012b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx_1

if (arg1[1].d == 0xffffffff || arg1[3].d s<= 1)
    rbx_1 = nullptr
else
    void* rax_1 = j_sub_140a82f30(0x60)
    rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        memset(rax_1, 0, 0x60)
        *(rbx_1 + 0x20) = 0
        *(rbx_1 + 0x30) = 0
        *(rbx_1 + 0x38) = 0
        *(rbx_1 + 0x40) = 0xea60
        *(rbx_1 + 0x44) = 1
    
    int64_t* rcx_1 = arg1[6]
    
    if ((*(*rcx_1 + 8))(rcx_1, &arg1[2], rbx_1) == 0)
        if (rbx_1 != 0)
            sub_1408ffda0(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rbx_1 = nullptr

return sub_140901b90(arg1, rbx_1) __tailcall
