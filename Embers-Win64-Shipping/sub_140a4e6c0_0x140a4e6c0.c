// 函数: sub_140a4e6c0
// 地址: 0x140a4e6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x30)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_140a3b5c0(rax, arg3, arg5)
    *rbx = &data_142e5f5f8
    rbx[4] = 0
    rbx[5].d = 0
    
    if (arg4 != &rbx[4] && arg4[1].d != 0)
        int64_t* rcx_1 = *arg4
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)

jump(*(*sub_140a3e430(arg1, arg2, rbx) + 0x70))
