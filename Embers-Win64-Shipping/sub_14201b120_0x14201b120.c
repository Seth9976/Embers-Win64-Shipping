// 函数: sub_14201b120
// 地址: 0x14201b120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[2].d
int64_t var_98 = 0
int64_t var_90 = 0
void*** rax = sub_1420278a0()
void** rdx = *rax
int64_t* rax_1 = rdx[8](rax, rdx)

if (rax_1 == 0)
label_14201b19c:
    int32_t rax_4 = var_90:4.d
    var_90.d = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405c5510(&var_98, 0)
else
    int32_t rdx_1 = arg1[1].d
    int32_t rcx_1 = rdx_1 - 1
    
    if (rdx_1 == 0)
        rcx_1 = 0
    
    if (rcx_1 s<= 0)
        goto label_14201b19c
    
    int16_t* const r8_1
    
    if (rdx_1 == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *arg1
    
    if ((*(*rax_1 + 0x20))(rax_1, 0, r8_1, zx.q(rdi), &var_98) == 0)
        goto label_14201b19c

int64_t var_88
sub_140596d10(&var_88, arg1)
int32_t rax_5 = arg1[2].d
int64_t* var_70 = nullptr
int32_t var_68 = 0

if (&arg1[3] != &var_70 && arg1[4].d != 0)
    int64_t* rcx_5 = arg1[3]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x40))(rcx_5, &var_70)

uint32_t count = var_90.d
int64_t rdi_2 = var_98
int64_t var_60 = 0
int32_t var_54

if (count != 0)
    sub_1405da9e0(&var_60, count, 0)
    memcpy(var_60, rdi_2, count)
else
    var_54 = 0

void*** rax_7 = sub_140a82f30(0x40, 8)
*rax_7 = &data_1432a4cd8
sub_140596d10(&rax_7[1], &var_88)
rax_7[3].d = rax_5
rax_7[4] = 0
rax_7[5].d = 0

if (&var_70 != &rax_7[4] && var_68 != 0)
    int64_t* rcx_10 = var_70
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x40))(rcx_10)

rax_7[6] = 0
rax_7[6] = var_60
var_60 = 0
rax_7[7].d = count
*(rax_7 + 0x3c) = var_54
uint32_t var_58
var_58.q = 0
*rax_7 = &data_1432a4cf8
void (* var_48)(void* arg1, int512_t arg2 @ zmm1)
void (* rax_12)(void* arg1, int512_t arg2 @ zmm1) = var_48

if (rax_7 != -8)
    rax_12 = j_sub_14201b320

void*** var_38 = rax_7
var_48 = rax_12
sub_140a20e40(2, &var_48)
int64_t rcx_11 = var_60

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

uint64_t result = sub_140745b20(&var_70)
int64_t rcx_13 = var_88

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_98

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
