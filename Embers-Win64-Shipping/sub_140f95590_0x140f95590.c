// 函数: sub_140f95590
// 地址: 0x140f95590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t* rbx = *(arg2 + 0x10)
int64_t rbp = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rbp = *(arg2 + 8)

int64_t var_38 = rbp
int64_t* rdi = rbx

if (rbx != 0)
    rbx[1].d += 1
    rdi = rbx
    rbp = var_38

*arg1 = 0
arg1[1].d = 0

if (rdi != 0)
    rdi[1].d += 1

void*** rax_2 = sub_1405978f0(0x38, arg1)

if (rax_2 != 0)
    *rax_2 = &data_142ef0318
    rax_2[1] = rbp
    rax_2[2] = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    *(rax_2 + 0x18) = zmm0
    rax_2[5].b = arg4
    rax_2[6] = sub_140a387b0()

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140f9a690(&var_38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
