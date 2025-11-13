// 函数: sub_140fbd400
// 地址: 0x140fbd400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t rax_1 = __security_cookie ^ &var_518
void* rsi = nullptr
int64_t (* var_478)(void* arg1, int64_t* arg2, int32_t arg3) = sub_140fc3150
int32_t var_470 = 0
void var_418
int64_t* rax_2 = _vfprintf_p_l(&var_418, u"Color Label", u"ThemeColorBlock")
void var_2a0
int64_t* rax_3 = sub_140f99aa0(&var_2a0)
sub_14065da90(&rax_3[0x34], rax_2)
int64_t* rbx_1 = rax_2[1]

if (rbx_1 != 0)
    int32_t rdx_1 = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (rdx_1 == 1)
        (**rbx_1)(rbx_1, rdx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

int128_t var_448 = var_478.o
int64_t* var_4b0
sub_140692f90(&rax_3[0x3c], sub_140edf9f0(&var_4b0, arg1, &var_448))
int32_t var_4a8
int64_t* rax_8

if (var_4a8 == 0)
    rax_8 = var_4b0
label_140fbd525:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    int64_t* rcx_7 = var_4b0
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7, 0)
        rax_8 = var_4b0
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_4b0 = rax_8
        
        int32_t var_4a8_1 = 0
        goto label_140fbd525
void*** rax_9 = sub_140f96e00()
void* var_490 = &rax_9[2]
sub_140918950(&var_490, &rax_9[2])
int64_t var_4f8 = 0x3c0
void var_4b8
void* var_480 = &var_4b8
uint128_t var_438
sub_140f9e4c0(&var_490, &var_438, rax_3, sub_140e23ed0(&rax_9[2], "STextEntryPopup"))

if (rax_9 != 0)
    rax_9[1].d -= 1
    
    if (rax_9[1].d == 1)
        (**rax_9)(rax_9)
        int32_t temp2_1 = *(rax_9 + 0xc)
        *(rax_9 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_9)[1](rax_9, 1)

sub_140f9ae90(&var_2a0)
uint128_t zmm0_1 = var_438
uint128_t var_468 = zmm0_1
zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
int64_t* rdi_2 = zmm0_1.q

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t* rcx_16 = *(arg1 + 0x10)
int64_t* r14_1 = data_143e29f28
char var_4b5 = 0
int64_t* r8_3 = r14_1
int32_t var_4b4 = 4

if (rcx_16 != 0)
    int32_t rax_12 = rcx_16[1].d
    
    if (rax_12 != 0)
        rcx_16[1].d = rax_12 + 1
        rax_12.b = 1
        r14_1 = data_143e29f28
    
    if (rax_12.b == 0)
        rcx_16 = nullptr
    
    if (rcx_16 != 0)
        rsi = *(arg1 + 8)

void* var_4a0 = rsi
void var_458
int128_t* rax_14 = (*(*r8_3 + 0x58))(r8_3, &var_458)
void var_4b6
void* var_428
void var_400
sub_140e80850(r14_1, &var_428, &var_4a0, sub_140d947e0(&var_400), zmm0_1, &var_468, rax_14, 
    &var_4b4, 1, &data_143dbb1f0, &var_4b6, 1)
int64_t* var_420

if (var_420 != 0)
    var_420[1].d -= 1
    
    if (var_420[1].d == 1)
        (**var_420)(var_420)
        int32_t temp5_1 = *(var_420 + 0xc)
        *(var_420 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_420 + 8))(var_420, 1)

if (rcx_16 != 0)
    rcx_16[1].d -= 1
    
    if (rcx_16[1].d == 1)
        (**rcx_16)(rcx_16)
        int32_t temp7_1 = *(rcx_16 + 0xc)
        *(rcx_16 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rcx_16 + 8))(rcx_16, 1)

int64_t result = sub_140de0810(&var_400)
int64_t* rbx_7 = var_468:8.q

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        result = (**rbx_7)(rbx_7)
        int32_t temp9_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*rbx_7 + 8))(rbx_7, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp10_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp10_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, 1)

__security_check_cookie(rax_1 ^ &var_518)
return result
