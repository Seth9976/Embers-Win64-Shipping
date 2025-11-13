// 函数: sub_141da7a40
// 地址: 0x141da7a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141802500()
int64_t r8 = *rax
int64_t* var_38
(*(r8 + 0x40))(rax, &var_38, r8)
int16_t* const r8_1 = &data_142d40450
int64_t* rdi = var_38

if (*(arg1 + 0x208) != 0)
    *(arg1 + 0x200)

if (*(arg1 + 0x230) != 0)
    r8_1 = *(arg1 + 0x228)

int64_t var_28
sub_140a2e390(&var_28, u"%sreplay/%s/file/replay.header", r8_1)
(*(*rdi + 0x50))(rdi, &var_28)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* var_68 = nullptr
int32_t var_60 = 0
sub_1405947f0(&var_68, 4)
int32_t rax_2 = var_60 + 4
var_60 = rax_2
int32_t var_5c

if (rax_2 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, &data_142d85f90, 8)
int64_t* rcx_7 = var_38
(*(*rcx_7 + 0x48))(rcx_7, &var_68)
int64_t* rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rdi_1 = var_38
var_68 = nullptr
var_60 = 0

if (arg2 != &var_68 && arg2[1].d != 0)
    int64_t* rcx_9 = *arg2
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x40))(rcx_9, &var_68)

int64_t* rax_6 = (*(*rdi_1 + 0x90))(rdi_1)
int64_t* rcx_11 = nullptr
int32_t rdx_5 = 0
int64_t* var_48 = nullptr
int32_t var_40 = 0

if (var_60 != 0)
    int64_t* rax_7 = var_68
    
    if (rax_7 != 0)
        int64_t r8_2 = *rax_7
        (*(r8_2 + 0x40))(rax_7, &var_48, r8_2)
        rdx_5 = var_40
        rcx_11 = var_48

int64_t* var_58 = nullptr
int32_t var_50 = 0

if (rdx_5 != 0 && rcx_11 != 0)
    (*(*rcx_11 + 0x40))(rcx_11, &var_58)

void*** rax_9 = sub_140a84c80(0, 0x30, 0)

if (rax_9 != 0)
    var_28 = 0
    int32_t var_20_1 = 0
    
    if (var_50 != 0)
        int64_t* rcx_13 = var_58
        
        if (rcx_13 != 0)
            int64_t r8_3 = *rcx_13
            (*(r8_3 + 0x40))(rcx_13, &var_28, r8_3)
    
    sub_141da5090(rax_9, arg1, sub_141dab9e0, &var_28)

sub_140745b20(&var_58)
sub_140745b20(&var_48)
void var_18

if (&var_18 == rax_6)
    goto label_141da7c3c

if (rax_9 != 0)
    (*rax_9)[8](rax_9, rax_6)
label_141da7c3c:
    
    if (rax_9 != 0)
        (*rax_9)[7](rax_9, 0)
        int64_t rax_12 = sub_140a84c80(rax_9, 0, 0)
        
        if (rax_12 != 0)
            sub_140a74f90(rax_12)
else if (rax_6[1].d != 0)
    int64_t* rcx_25 = *rax_6
    
    if (rcx_25 != 0)
        (*(*rcx_25 + 0x38))(rcx_25, 0)
        int64_t rcx_26 = *rax_6
        
        if (rcx_26 != 0)
            *rax_6 = sub_140a84c80(rcx_26, 0, 0)
        
        rax_6[1].d = 0

sub_140745b20(&var_68)
uint128_t zmm0 = var_38.o
var_28.o = zmm0
void* rax_13 = _mm_bsrli_si128(zmm0, 8).q

if (rax_13 != 0)
    *(rax_13 + 8) += 1

void*** result = sub_141da6730(arg1, 5, &var_28, 0, 0)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_30 + 8))(var_30, 1)

return result
