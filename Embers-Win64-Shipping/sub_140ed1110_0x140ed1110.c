// 函数: sub_140ed1110
// 地址: 0x140ed1110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = arg2
int64_t arg_8 = 0
int64_t rax = *(*(arg1 + 0x3a0) + 0x60)
arg2.b = 1
char var_108 = 0
int128_t var_e8 = zx.o(0)
int128_t var_d0 = zx.o(0)
void** var_a8
sub_140e961b0(&var_a8, arg2.b, &var_d0, &var_e8, 0, rax, 1, 0)
void* rax_1 = *(arg1 + 0x3c0)
int32_t i

if (rax_1 == 0)
    i = *(*(arg1 + 0x3d0) + 0x30c)
else
    i = *(rax_1 + 0x300)

void* r14_1 = *(arg1 + 0x3a0)

if (i s< *(r14_1 + 0x58))
    int64_t i_1 = sx.q(i)
    int64_t rbx_2 = i_1 << 4
    int64_t i_2 = i_1
    
    do
        int64_t* rcx_2
        
        if (i_1 != i_2)
            rcx_2 = *(rbx_2 + *(r14_1 + 0x50))
            (*(*rcx_2 + 8))(rcx_2, &var_a8)
        else
            char rax_4 = *(*(rbx_2 + *(r14_1 + 0x50)) + 0x88)
            
            if (rax_4 != 5 && rax_4 != 8)
                rcx_2 = *(rbx_2 + *(r14_1 + 0x50))
                (*(*rcx_2 + 8))(rcx_2, &var_a8)
        i += 1
        i_1 += 1
        rbx_2 += 0x10
    while (i s< *(r14_1 + 0x58))

int64_t var_b8 = 0
int32_t var_b0 = 0
int32_t var_c0 = 0x447a0000
char var_bc = 1
var_e8.d = 0x447a0000
var_e8:4.b = 1
var_e8:8.q = 0
int32_t var_d8 = 0
sub_140692f90(&var_e8:8, &var_b8)
var_108.q = &var_e8
void* var_a0
char var_2f
void** rax_7 = sub_140ec4a10(var_a0, &var_d0, var_2f, nullptr, var_108)
*result = *rax_7
void* rcx_6 = rax_7[1]
result[1] = rcx_6

if (rcx_6 != 0)
    *(rcx_6 + 8) += 1

int64_t* rbx_3 = var_d0:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_140745b20(&var_b8)
sub_140e982f0(&var_a8)
return result
