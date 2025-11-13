// 函数: sub_142347ae0
// 地址: 0x142347ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi

if (arg2 == 0)
    sub_140d9b7e0(arg1 + 0xd8, 2, 1)
    return zx.q(rdi)

int64_t rdx = 0
int64_t* rbx = *(arg1 + 0x250)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdx = *(arg1 + 0x248)

int64_t var_18 = rdx
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_140dbdce0(arg1 + 0xd8, &var_18, 2, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rdi)
