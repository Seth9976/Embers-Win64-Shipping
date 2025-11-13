// 函数: sub_140ee87b0
// 地址: 0x140ee87b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg4
int64_t* rax_1 = arg4[1]

if (rax_1 != 0)
    rax_1[1].d += 1

sub_140edfec0(arg1 + 0x10, arg3, &var_18)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t temp1_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_1 + 8))(rax_1, 1)

*arg2 = *arg4
void* rax_5 = arg4[1]
arg2[1] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
