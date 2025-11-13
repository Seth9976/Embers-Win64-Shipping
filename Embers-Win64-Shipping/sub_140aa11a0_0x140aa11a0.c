// 函数: sub_140aa11a0
// 地址: 0x140aa11a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_8 = 0
char* rax = sub_140a752e0()
int64_t* r15 = *arg5
int64_t* rbx

if (r15 == 0)
    rbx = *(rax + 0x40)
    r15 = *(rax + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi = 1
else
    rbx = arg2

if ((rdi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t var_b8
sub_140a6a6a0(&var_b8, arg2, arg3, arg4, r15)
int64_t* r15_1 = arg5[1]
int64_t r13_1 = *arg5

if (r15_1 != 0)
    r15_1[1].d += 1

void var_98
int64_t* rax_5 = sub_140596d10(&var_98, arg4)
int64_t var_78 = *arg2
int64_t var_58 = r13_1
int16_t var_80 = *(sub_140aae970() + 0x120)
int64_t rcx_5 = *rax_5
*rax_5 = 0
void** const var_88 = &data_142e63af8
int32_t var_70 = arg3
int32_t rax_8 = *(rax_5 + 0xc)
int32_t var_60 = rax_5[1].d
rax_5[1] = 0
int64_t rcx_7 = *rax_5
int32_t var_5c = rax_8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

void*** rax_9 = sub_140a93720(&var_b8, &var_88)
uint128_t zmm0 = (&rax_9[2]).o
uint128_t var_a8 = zmm0
void* rax_10 = _mm_bsrli_si128(zmm0, 8).q

if (rax_10 != 0)
    *(rax_10 + 8) += 1

sub_140a95d80(arg1, &var_a8)

if (rax_9 != 0)
    rax_9[1].d -= 1
    
    if (rax_9[1].d == 1)
        (**rax_9)(rax_9)
        int32_t rax_13 = *(rax_9 + 0xc)
        *(rax_9 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*rax_9)[1](rax_9, 1)

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t rsi_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*r15_1 + 8))(r15_1, zx.q(rsi_1))

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[2].d |= 1
int64_t rcx_16 = var_b8

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg1
