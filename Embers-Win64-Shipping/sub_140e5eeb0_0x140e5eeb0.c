// 函数: sub_140e5eeb0
// 地址: 0x140e5eeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140e12730(*arg1)
int64_t* rbx = *rax

if (rbx == &rbx[sx.q(rax[1].d) * 2])
    int64_t* rbx_2 = arg1[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    rax.b = 0
    return rax

if (sub_140e1acc0(*rbx) != 0 && sub_140e1ad10(*rbx) == 0)
    sub_140597060(arg1)
    int64_t rax_3
    rax_3.b = 1
    return rax_3

int64_t var_18 = *rbx
void* rax_5 = rbx[1]
void* var_10 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

char rax_6 = sub_140e5eeb0(&var_18)
int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_3 = *rbx_1
        (*rdx_3)(rbx_1, rdx_3)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rax_6)
