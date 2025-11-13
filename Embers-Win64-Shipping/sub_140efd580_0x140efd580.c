// 函数: sub_140efd580
// 地址: 0x140efd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140efd170(arg1 + 0x10, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
int64_t rbx_1
void* rbx_2

if (rax.d != 0xffffffff)
    rbx_1 = rax * 0x78
    rbx_2 = rbx_1 + *(arg1 + 0x10)

int64_t* rbx_3
void* const rsi_1

if (rax.d == 0xffffffff || rbx_1 == neg.q(*(arg1 + 0x10)))
    rsi_1 = nullptr
    rbx_3 = nullptr
else
    rsi_1 = *(rbx_2 + 0x60)
    rbx_3 = *(rbx_2 + 0x68)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1

if (rsi_1 != 0 && sub_140db30e0(rsi_1) == 0)
    *arg2 = rsi_1
    arg2[1] = rbx_3
    return arg2

*arg2 = nullptr
arg2[1] = 0

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
