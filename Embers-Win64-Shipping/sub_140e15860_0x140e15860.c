// 函数: sub_140e15860
// 地址: 0x140e15860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x38)
int64_t rdx = 0
int64_t* rbx = r8

if (r8 != 0)
    int32_t rax_1 = r8[1].d
    
    if (rax_1 != 0)
        r8[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        r8 = nullptr
        rbx = nullptr

if (rbx != 0)
    rdx = *(arg1 + 0x30)

*arg2 = rdx
arg2[1] = r8

if (r8 != 0)
    r8[1].d += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
