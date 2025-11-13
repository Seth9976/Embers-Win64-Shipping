// 函数: sub_1426453c0
// 地址: 0x1426453c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434513e8
int64_t* rbx = arg1[0x1a]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t result = sub_140596eb0(&arg1[0x10])
int64_t* rbx_1 = arg1[0xd]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        (**rbx_1)(rbx_1)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[3]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t* rcx_7 = arg1[2]

if (rcx_7 != 0)
    int32_t rdi_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (rdi_1 == 1 && rcx_7 != 0)
        return (*(*rcx_7 + 8))(rcx_7, zx.q(rdi_1))

return result
