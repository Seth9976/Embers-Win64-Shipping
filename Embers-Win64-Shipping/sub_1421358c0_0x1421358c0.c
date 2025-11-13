// 函数: sub_1421358c0
// 地址: 0x1421358c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[1]
int64_t rbp = *arg4

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d += 1

void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    int64_t var_38 = rbp
    int64_t* var_30_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_1421373c0(rax, arg3, &var_38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp5_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx + 8))(rbx, 1)

*arg2 = 0

if (rax != 0)
    sub_140599630(arg1, 1)
    void arg_10
    int64_t* rax_6 = (*rax)[6](rax, &arg_10)
    int64_t rbp_1 = sx.q(arg1[1].d)
    int64_t rbx_1 = *rax_6
    int32_t rax_7 = (rbp_1 + 1).d
    arg1[1].d = rax_7
    
    if (rax_7 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    *arg2 = rbx_1
    void**** rax_10 = (rbp_1 << 4) + *arg1
    *rax_10 = rax
    rax_10[1].d = 3

int64_t* rbx_2 = arg4[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
