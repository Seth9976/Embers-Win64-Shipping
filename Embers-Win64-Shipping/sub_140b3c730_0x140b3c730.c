// 函数: sub_140b3c730
// 地址: 0x140b3c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int16_t* r14 = *(arg2 + 8)
int64_t var_e8 = 0
int32_t rbx = 0
int32_t var_e0 = 0
int64_t var_108 = 0
int64_t r15 = 0
int32_t var_100 = 0
int32_t var_fc = 0
int32_t r12 = 0
int32_t rcx_3

if (r14 != 0 && *r14 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r14[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_108, rdi_1.d + 1)
        r12 = var_fc
        rbx = var_100
        r15 = var_108
    
    rbx += rdi_1.d + 1
    
    if (rbx s> r12)
        sub_140594770(&var_108)
        r12 = var_fc
        r15 = var_108
    
    UnDecorator::getReferenceType(r15, r14, (rdi_1.d + 1) * 2)
    rcx_3 = rbx - 1

if (r14 == 0 || *r14 == 0 || rbx == 0)
    rcx_3 = 0

int32_t r9 = rcx_3

if (rcx_3 s> 0xa)
    r9 = 0xa

int32_t rax_2 = rbx - 1
int32_t rcx_4 = rcx_3 - r9

if (rbx == 0)
    rax_2 = 0

int32_t rax_3 = rax_2 - r9

if (rcx_4 s>= 0)
    if (rcx_4 s< rax_3)
        rax_3 = rcx_4
    
    if (rax_3 != 0)
        rbx -= rax_3
        
        if (rbx != r9)
            memmove(r15 + (sx.q(r9) << 1), r15 + (sx.q(rax_3 + r9) << 1), (rbx - r9) * 2)
        
        int32_t var_100_2 = rbx

int64_t var_f8 = r15
int32_t rax_6
rax_6.b = rbx == 0
int32_t rdx_5 = rax_6 + 3 + rbx

if (rdx_5 s> r12)
    sub_1405947f0(&var_f8, rdx_5)

sub_140a20ba0(&var_f8, &data_142e1f8a0, 3)
int64_t var_d8 = var_f8
int32_t var_d0 = rbx
int32_t var_cc = r12
int32_t var_f0
var_f0.q = 0
var_f8 = 0
void var_c8
int64_t* rax_10 = sub_140aae2f0(&var_c8, &var_d8)
int64_t* rbx_1 = rax_10[1]
int64_t r15_1 = *rax_10

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t rdi_3 = sx.q(var_e0)
int32_t r14_1 = rax_10[2].d
int32_t rax_11 = (rdi_3 + 1).d
var_e0 = rax_11

if (rax_11 s> 0)
    sub_1405c4f50(&var_e8)

int32_t* rcx_15 = rdi_3 * 0x30 + var_e8
int64_t var_68
*(rcx_15 + 8) = var_68
*rcx_15 = 4
rcx_15[0xa].b = 0
*(rcx_15 + 0x10) = r15_1
*(rcx_15 + 0x18) = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

rcx_15[8] = r14_1
rcx_15[0xa].b = 1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_14 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t rax_18 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*var_c0 + 8))(var_c0, 1)

int64_t rcx_20 = var_d8

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

void var_b0
void var_98
char* var_80
int64_t* rax_22 = sub_140aac8f0(&var_b0, 
    sub_140a96390(&var_80, _vfprintf_p_l(&var_98, Invalid token definition at '{0}'", 
        StringFormatter")), &var_e8)
*arg1 = *rax_22
void* rax_24 = rax_22[1]
arg1[1] = rax_24

if (rax_24 != 0)
    *(rax_24 + 8) += 1

arg1[2].d = rax_22[2].d
int64_t* var_a8

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        (**var_a8)(var_a8)
        int32_t rax_28 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t rsi_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_6 = *var_90
            (*(r8_6 + 8))(var_90, zx.q(rsi_1), r8_6)

sub_140596f50(&var_e8)
__security_check_cookie(rax_1 ^ &var_128)
return arg1
