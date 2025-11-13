// 函数: sub_142411db0
// 地址: 0x142411db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14240da20(arg1 + 0x260, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0xf0 + *(arg1 + 0x260)

int64_t* rcx_1 = rax_2 + 0x18

if (rax_2 == 0)
    rcx_1 = nullptr

int64_t var_18
int32_t var_10

if (rcx_1 == 0)
    var_18 = 0
    var_10 = 0
else
    var_18 = *rcx_1
    var_10 = rcx_1[1].d

int64_t* rbx_1 = arg3[2]
*arg2 = var_18
arg2[1].d = var_10

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
