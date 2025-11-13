// 函数: sub_142034ba0
// 地址: 0x142034ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2f0))()
int64_t* rbx = arg1[0x1e]
int64_t* rcx = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = arg1[0x1d]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, zx.q(arg2), arg3)

int64_t result = sub_1405f1d00(&arg1[0x49], arg2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
