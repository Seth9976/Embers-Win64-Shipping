// 函数: sub_141d9b830
// 地址: 0x141d9b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rcx = 0
int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 8)

int64_t var_38 = rcx
int64_t* var_30 = rbx
void*** rax_2 = sub_141d93880(&var_38, &arg_10, arg3, arg4)
void*** var_20 = rax_2
void* var_28 = &rax_2[2]
sub_141c813a0(&var_28, &rax_2[2])

if (rax_2 != 0)
    rax_2[1].d += 1

int64_t rbp = sx.q(*(arg1 + 0x188))
int32_t rax_3 = (rbp + 1).d
*(arg1 + 0x188) = rax_3

if (rax_3 s> *(arg1 + 0x18c))
    sub_1405a4f90(arg1 + 0x180)

void** result = (rbp << 4) + *(arg1 + 0x180)
*result = &rax_2[2]
result[1] = rax_2

if (rax_2 != 0)
    result = zx.q(rax_2[1].d)
    rax_2[1].d -= 1
    
    if (result.d == 1)
        result = (**rax_2)(rax_2)
        int32_t rsi_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*rax_2)[1](rax_2, zx.q(rsi_1))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
