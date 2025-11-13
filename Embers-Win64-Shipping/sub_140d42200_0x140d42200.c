// 函数: sub_140d42200
// 地址: 0x140d42200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int64_t* rbx = arg3[2]
int64_t rbp = *arg3
int64_t r14 = arg3[1]

if (rbx != 0)
    rbx[1].d += 1

void*** rax = sub_1405978f0(0x30, arg1)

if (rax != 0)
    int64_t var_38 = rbp
    int64_t var_30_1 = r14
    int64_t* var_28_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_140d42900(rax, arg2, &var_38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg3[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
