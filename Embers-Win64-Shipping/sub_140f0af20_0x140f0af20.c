// 函数: sub_140f0af20
// 地址: 0x140f0af20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
char r8 = *arg4

if (r8 == 3)
    return arg2

int64_t* rbx = *(arg1 + 0x4d8)

if (rbx != 0)
    rbx[1].d += 1

int64_t var_18 = *(arg1 + 0x4d0)
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_140dbdce0(arg2, &var_18, r8, 0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
