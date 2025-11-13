// 函数: sub_140eb9020
// 地址: 0x140eb9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rdi = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
        rdi = *(arg1 + 8)

int96_t zmm0 = (*(arg1 + 0x18)).12
int64_t var_38 = *(arg1 + 0x28)
void* rax_4 = *(arg1 + 0x30)
void* var_30 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int32_t var_28 = *(arg1 + 0x38)
char rax_6 = *(arg1 + 0x40)
int64_t var_18 = 0
int32_t var_10 = 0
char var_20 = rax_6
sub_140692f90(&var_18, arg1 + 0x48)
void var_50
int64_t* rax_7 = zmm0.q(sx.q(zmm0:8.d) + rdi, &var_50, &var_38)
*arg2 = *rax_7
void* rcx_4 = rax_7[1]
arg2[1] = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

arg2[2].d = rax_7[2].d
int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t rbp_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*var_48 + 8))(var_48, zx.q(rbp_1))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
