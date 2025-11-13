// 函数: sub_140aa0310
// 地址: 0x140aa0310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_20 = 0
char* rax = sub_140a752e0()
int64_t* r15 = *arg6
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

int64_t var_a8
sub_140a6a260(&var_a8, arg2, arg3, arg4, arg5, r15)
int64_t* r15_1 = arg6[1]
int64_t* rax_5 = *arg6

if (r15_1 != 0)
    r15_1[1].d += 1

void var_88
int64_t* rax_6 = sub_140596d10(&var_88, arg5)
int64_t var_68 = *arg2
int32_t var_5c = arg4
int16_t rcx_4 = *(sub_140aae970() + 0x120)
void** const var_78 = &data_142e63b68
int16_t var_70 = rcx_4
int64_t rcx_5 = *rax_6
int32_t var_60 = arg3
*rax_6 = 0
int32_t var_50 = rax_6[1].d
int32_t rax_11 = *(rax_6 + 0xc)
rax_6[1] = 0
int64_t rcx_6 = *rax_6
int32_t var_4c = rax_11
int64_t* var_48 = rax_5

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

void*** rax_13 = sub_140a933f0(&var_a8, &var_78)
uint128_t zmm0 = (&rax_13[2]).o
uint128_t var_98 = zmm0
void* rax_14 = _mm_bsrli_si128(zmm0, 8).q

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_140a95d80(arg1, &var_98)

if (rax_13 != 0)
    rax_13[1].d -= 1
    
    if (rax_13[1].d == 1)
        (**rax_13)(rax_13)
        int32_t rax_17 = *(rax_13 + 0xc)
        *(rax_13 + 0xc) -= 1
        
        if (rax_17 == 1)
            (*rax_13)[1](rax_13, 1)

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
int64_t rcx_15 = var_a8

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg1
