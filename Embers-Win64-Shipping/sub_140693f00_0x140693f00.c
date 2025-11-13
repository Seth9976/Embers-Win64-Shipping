// 函数: sub_140693f00
// 地址: 0x140693f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t var_98 = 0
int32_t rsi = *(rax + 0x110)
int64_t r14 = *(rax + 0x108)
int32_t rax_1 = 2

if (rsi != 0)
    rax_1 = 1

sub_1405a4c70(&var_98, rsi + rax_1, 0)
memcpy(var_98, r14, rsi * 2)
sub_140a20ba0(&var_98, &data_142d5a024, 1)
int64_t var_88 = var_98
int32_t var_80 = rsi
int32_t var_8c
int32_t var_7c = var_8c
int32_t var_90
var_90.q = 0
var_98 = 0
int64_t var_68
sub_140a9fca0(&var_68, &var_88)
int64_t var_50 = var_68
int64_t* var_60

if (var_60 != 0)
    var_60[1].d += 1

int32_t var_58
int32_t var_40 = var_58
char var_38 = 1
int64_t* var_30 = nullptr
int32_t var_28 = 0
sub_140f17c00(*(*arg1 + 0x258), &var_50)
int64_t* rcx_6 = var_30

if (var_28 == 0)
label_14069402b:
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
else
    if (rcx_6 != 0)
    label_14069400b:
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        rcx_6 = var_30
        
        if (rcx_6 != 0)
            int64_t* rax_10 = sub_140a84c80(rcx_6, 0, 0)
            rcx_6 = rax_10
            int64_t* var_30_1 = rax_10
        
        int32_t var_28_1 = 0
        goto label_14069402b
    
    if (var_28 == 0)
        goto label_14069402b
    
    if (rcx_6 != 0)
        goto label_14069400b

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t rax_13 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*var_60 + 8))(var_60, 1)

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t r14_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(r14_1))

int64_t rcx_11 = var_88

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

uint128_t zmm0 = sub_140f5d090(*(*arg1 + 0x238), 1)
void* rcx_14 = *arg1
int64_t var_78 = *(rcx_14 + 0x258)
int64_t* rax_19 = *(rcx_14 + 0x260)

if (rax_19 != 0)
    rax_19[1].d += 1

int64_t zmm0_1 = sub_140e892d0(data_143e29f28, &var_78, 2, zmm0)

if (rax_19 != 0)
    rax_19[1].d -= 1
    
    if (rax_19[1].d == 1)
        (**rax_19)(rax_19)
        int32_t temp2_1 = *(rax_19 + 0xc)
        *(rax_19 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rax_19 + 8))(rax_19, 1)

sub_140f152b0(*(*arg1 + 0x258), zmm0_1)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*arg2 = 1
arg2[0x20] = 0
*(arg2 + 0xb0) = 0x20702
return arg2
