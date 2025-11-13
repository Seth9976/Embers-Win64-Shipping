// 函数: sub_140e8fb30
// 地址: 0x140e8fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int64_t* rbx = arg2[1]
int64_t r12 = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t rax = *arg4
int128_t zmm0 = *arg3
int64_t* rax_1 = arg4[1]

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t rax_2 = arg4[2].d
char rax_3 = arg4[3].b
int64_t var_38 = 0
int32_t var_30 = 0
sub_140692f90(&var_38, &arg4[4])
void*** rax_4 = sub_1405978f0(0x60, arg1)

if (rax_4 != 0)
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_140692f90(&var_68, &var_38)
    *rax_4 = &data_142ede270
    rax_4[1] = r12
    rax_4[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax_4 + 0x18) = zmm0
    rax_4[5] = rax
    rax_4[6] = rax_1
    
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    rax_4[7].d = rax_2
    rax_4[8].b = rax_3
    rax_4[9] = 0
    rax_4[0xa].d = 0
    sub_140692f90(&rax_4[9], &var_68)
    rax_4[0xb] = sub_140a387b0()
    sub_140745b20(&var_68)
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t rax_15 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*rax_1 + 8))(rax_1, 1)

sub_140745b20(&var_38)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t rax_19 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rax_19 == 1)
            (*(*rax_1 + 8))(rax_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&arg4[4])
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg1
