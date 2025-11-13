// 函数: sub_142034ae0
// 地址: 0x142034ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2f0))()
int64_t r8
r8.b = 2
sub_140e8afd0(data_143e29f28, zx.q(arg2), r8, arg4)
int64_t* rbx = arg1[0x1e]
int64_t* rcx_1 = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_1 = arg1[0x1d]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x18))(rcx_1, zx.q(arg2), arg3)

int64_t result = sub_1405f1d00(&arg1[0x46], arg2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
