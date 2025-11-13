// 函数: sub_141c7fa00
// 地址: 0x141c7fa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int128_t zmm0 = *arg3
int64_t* rbx = arg5[1]
int64_t r13 = *arg5

if (rbx != 0)
    *(rbx + 0xc) += 1

void*** rax = sub_1405978f0(0x48, arg1)

if (rax == 0)
label_141c7fb01:
    
    if (rbx != 0)
        int32_t rax_6 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rbx + 8))(rbx, 1)
else
    if (rbx != 0)
        *(rbx + 0xc) += 1
        
        if (rbx != 0)
            *(rbx + 0xc) += 1
    
    *rax = &data_14320f870
    rax[1] = arg2
    *(rax + 0x10) = zmm0
    *(rax + 0x20) = *arg4
    rax[6] = r13
    rax[7] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    rax[8] = sub_140a387b0()
    
    if (rbx != 0)
        int32_t rax_2 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_2 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    *rax = &data_14320f8c8
    
    if (rbx != 0)
        int32_t rax_4 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rbx + 8))(rbx, 1)
        
        goto label_141c7fb01

int64_t* rcx_3 = arg5[1]

if (rcx_3 != 0)
    int32_t rdi_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (rdi_1 == 1 && rcx_3 != 0)
        (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return arg1
