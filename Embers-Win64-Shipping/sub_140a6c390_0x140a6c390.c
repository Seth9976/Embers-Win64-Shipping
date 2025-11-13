// 函数: sub_140a6c390
// 地址: 0x140a6c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140a752e0()
int64_t* rbx = *(rax + 0x30)

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_188
sub_140a78080(**(rax + 0x28), &var_188, arg3)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_4 = *arg1
int64_t* rax_6 = (*(*rcx_4 + 0x10))(rcx_4)
void** const var_140
sub_142a71720(&var_140)
int64_t* var_110 = rax_6
int64_t var_120 = 0
var_140 = &data_142e62778
int16_t* const rbx_1 = &data_142d40450
int64_t var_118 = 0
int32_t rcx_6 = rax_6[1].d
int32_t r8_1 = rcx_6 - 1

if (rcx_6 == 0)
    r8_1 = 0

int16_t* const rdx_1

if (rcx_6 == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_6

sub_142a72230(&var_140, rdx_1, r8_1)
void var_98
sub_142a55e40(&var_98, &var_140)
int64_t* rcx_9 = *arg2
int16_t** rax_8 = (*(*rcx_9 + 0x10))(rcx_9)
void** const var_178
sub_142a71720(&var_178)
var_178 = &data_142e62778
int64_t var_158 = 0
int64_t var_150 = 0
int16_t** var_148 = rax_8
int32_t rcx_11 = rax_8[1].d
int32_t r8_2 = rcx_11 - 1

if (rcx_11 == 0)
    r8_2 = 0

if (rcx_11 != 0)
    rbx_1 = *rax_8

sub_142a72230(&var_178, rbx_1, r8_2)
void var_108
sub_142a55e40(&var_108, &var_178)
int64_t* rcx_14 = var_188
int32_t arg_8 = 0
int32_t rax_10 = (*(*rcx_14 + 0x28))(rcx_14, &var_98, &var_108, &arg_8)
var_178 = &data_142e62778

if (var_158 != 0)
    int64_t* rcx_15 = data_143ddb3f0
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x30))(rcx_15, var_158)
    else
        sub_140a750a0()
        int64_t* rcx_16 = data_143ddb3f0
        int64_t r8_4 = *rcx_16
        (*(r8_4 + 0x30))(rcx_16, var_158, r8_4)

sub_142a717e0(&var_178)
var_140 = &data_142e62778

if (var_120 != 0)
    int64_t* rcx_18 = data_143ddb3f0
    
    if (rcx_18 == 0)
        sub_140a750a0()
        rcx_18 = data_143ddb3f0
    
    (*(*rcx_18 + 0x30))(rcx_18, var_120)

sub_142a717e0(&var_140)
int64_t* var_180

if (var_180 != 0)
    var_180[1].d -= 1
    
    if (var_180[1].d == 1)
        (**var_180)(var_180)
        int32_t rdi_1 = *(var_180 + 0xc)
        *(var_180 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_180 + 8))(var_180, zx.q(rdi_1))

return zx.q(rax_10)
