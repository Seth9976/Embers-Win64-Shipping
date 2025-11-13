// 函数: sub_140e69e20
// 地址: 0x140e69e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x3a0)
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    rax = rbx

void* rcx

if (rax != 0)
    rcx = *(arg1 + 0x398)

int64_t* rax_3

if (rax == 0 || rcx == 0)
    rax_3 = sub_1405d9400()
else
    rax_3 = sub_140d44910(rcx + 0x738)

*arg2 = *rax_3
void* rcx_3 = rax_3[1]
arg2[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

arg2[2].d = rax_3[2].d

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
