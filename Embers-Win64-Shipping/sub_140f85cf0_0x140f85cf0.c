// 函数: sub_140f85cf0
// 地址: 0x140f85cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x398)

if (rbx == 0)
label_140f85d3e:
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    *(arg2 + 0x18) = 0x100
else
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx == 0)
        goto label_140f85d3e
    
    int64_t* rcx = *(arg1 + 0x390)
    
    if (rcx == 0)
        goto label_140f85d3e
    
    (*(*rcx + 0x108))(rcx, arg2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
