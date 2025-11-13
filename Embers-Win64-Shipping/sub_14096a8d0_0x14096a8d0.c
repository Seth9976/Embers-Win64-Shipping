// 函数: sub_14096a8d0
// 地址: 0x14096a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_3 = (*(*arg1 + 0x150))()
int64_t var_98 = 0
int32_t var_90 = 0

if (arg2 != &var_98 && arg2[1].d != 0)
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_98)

void*** rax_5 = sub_140a84c80(0, 0x30, 0)

if (rax_5 != 0)
    *rax_5 = &data_142e342c8
    rax_5[1] = 0
    rax_5[2].d = 0
    sub_1407473e0(&rax_5[1], &var_98)
    rax_5[4] = sub_140a387b0()
    *rax_5 = &data_142e34320

void* rax_7 = *(rax_3 + 0x188)
void* rdi_1

if (rax_7 == 0)
    rdi_1 = *(rax_3 + 0x300)
else
    rdi_1 = *(rax_7 + 0xc0)

int64_t var_78 = 0
int32_t var_70 = 0

if (rax_5 != 0)
    (*rax_5)[8](rax_5, &var_78)

void var_68
sub_140d3a3a0(&var_68, nullptr)
int64_t var_60 = 0
int64_t var_58 = 0
void* var_48 = nullptr
int64_t var_88[0x2]
sub_1423e6520(rdi_1, &var_88, &var_78)

if (var_58 != 0)
    void var_38
    void* rcx_5 = &var_38
    
    if (var_48 != 0)
        rcx_5 = var_48
    
    (*(*rcx_5 + 0x10))(rcx_5)

sub_140745b20(&var_78)

if (rax_5 != 0)
    (*rax_5)[7](rax_5, 0)
    int64_t rax_12 = sub_140a84c80(rax_5, 0, 0)
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)

uint64_t result = sub_140745b20(&var_98)
__security_check_cookie(rax_1 ^ &var_b8)
return result
