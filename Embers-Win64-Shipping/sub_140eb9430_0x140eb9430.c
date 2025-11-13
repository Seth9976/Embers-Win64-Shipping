// 函数: sub_140eb9430
// 地址: 0x140eb9430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rdx = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx != 0)
        rdx = *(arg1 + 8)

int96_t zmm0 = (*(arg1 + 0x18)).12
int64_t var_48 = *arg3
void* rax_4 = arg3[1]
void* var_40 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

void var_38
int64_t* rax_5 = zmm0.q(sx.q(zmm0:8.d) + rdx, &var_38, &var_48)
*arg2 = *rax_5
void* rcx_3 = rax_5[1]
arg2[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
