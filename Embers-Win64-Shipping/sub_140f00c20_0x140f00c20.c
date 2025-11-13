// 函数: sub_140f00c20
// 地址: 0x140f00c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x4d0)

if (rcx == 0)
    arg2[3].b = 0
    return arg2

int64_t var_28
sub_140f75c60(*(rcx + 0x2c0), &var_28)
int64_t* var_20
int64_t* rbx = var_20
*arg2 = var_28
arg2[1] = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx = var_20

int32_t var_18
arg2[2].d = var_18
arg2[3].b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

return arg2
