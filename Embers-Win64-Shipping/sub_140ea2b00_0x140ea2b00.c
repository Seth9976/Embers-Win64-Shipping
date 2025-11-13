// 函数: sub_140ea2b00
// 地址: 0x140ea2b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x28))
int32_t var_10 = arg3[1].d
uint64_t var_18 = *arg3
int32_t rax_1 = (rsi + 1).d
int32_t r9
int32_t var_c = r9
*(arg1 + 0x28) = rax_1

if (rax_1 s> *(arg1 + 0x2c))
    sub_1405a4f90(arg1 + 0x20)

*(*(arg1 + 0x20) + rsi * 0x10) = var_18.o
int64_t* rbx = *(arg1 + 0x10)
int64_t rcx_3 = 0

if (rbx != 0)
    int32_t rax_3 = rbx[1].d
    
    if (rax_3 != 0)
        rbx[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_3 = *(arg1 + 8)

*arg2 = rcx_3
arg2[1] = rbx

if (rbx != 0)
    int32_t rax_4 = rbx[1].d
    rbx[1].d = rax_4
    
    if (rax_4 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
