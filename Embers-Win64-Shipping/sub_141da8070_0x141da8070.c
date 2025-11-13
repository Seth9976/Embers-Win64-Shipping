// 函数: sub_141da8070
// 地址: 0x141da8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x230) s<= 1)
    int64_t* rbx_1 = nullptr
    int64_t var_50_1 = 6
    int64_t var_40 = 0
    void** const var_58 = &data_1432388d0
    void** const var_48_1 = &data_143238880
    int64_t var_38_1 = 0
    
    if (arg4[1].d != 0)
        int64_t* rcx = *arg4
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            if (arg4[1].d != 0)
                rbx_1 = *arg4
            
            (*(*rbx_1 + 0x50))(rbx_1, &var_58)
    
    void** const var_48_2 = &data_143238880
    return sub_141d8e7a0(&var_40)

int64_t* rax_4 = sub_141802500()
int64_t r8 = *rax_4
int64_t* var_68
(*(r8 + 0x40))(rax_4, &var_68, r8)
int16_t* const r8_1 = &data_142d40450
int64_t* r15_1 = var_68
arg3[1].d

if (arg2[1].d != 0)
    *arg2

if (*(arg1 + 0x230) != 0)
    r8_1 = *(arg1 + 0x228)

int64_t var_98
sub_140a2e390(&var_98, u"%sreplay/%s/event?group=%s", r8_1)
(*(*r15_1 + 0x50))(r15_1, &var_98)
int64_t rcx_6 = var_98

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* var_a8 = nullptr
int32_t var_a0_1 = 0
sub_1405947f0(&var_a8, 4)
int32_t rax_6 = var_a0_1 + 4
var_a0_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_a8)

UnDecorator::getReferenceType(var_a8, &data_142d85f90, 8)
int64_t* rcx_10 = var_68
(*(*rcx_10 + 0x48))(rcx_10, &var_a8)
int64_t* rcx_11 = var_a8

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rsi_1 = var_68
var_a8 = nullptr
var_a0_1 = 0

if (arg4 != &var_a8 && arg4[1].d != 0)
    int64_t* rcx_12 = *arg4
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x40))(rcx_12, &var_a8)

int64_t* rax_10 = (*(*rsi_1 + 0x90))(rsi_1)
int64_t* rcx_14 = nullptr
int32_t rdx_6 = 0
int64_t* var_78 = nullptr
int32_t var_70_1 = 0

if (var_a0_1 != 0)
    int64_t* rax_11 = var_a8
    
    if (rax_11 != 0)
        int64_t r8_2 = *rax_11
        (*(r8_2 + 0x40))(rax_11, &var_78, r8_2)
        rdx_6 = var_70_1
        rcx_14 = var_78

int64_t* var_88 = nullptr
int32_t var_80_1 = 0

if (rdx_6 != 0 && rcx_14 != 0)
    (*(*rcx_14 + 0x40))(rcx_14, &var_88)

void*** rax_13 = sub_140a84c80(0, 0x30, 0)

if (rax_13 != 0)
    var_98 = 0
    int32_t var_90_1 = 0
    
    if (var_80_1 != 0)
        int64_t* rcx_16 = var_88
        
        if (rcx_16 != 0)
            int64_t r8_3 = *rcx_16
            (*(r8_3 + 0x40))(rcx_16, &var_98, r8_3)
    
    sub_141da5090(rax_13, arg1, sub_141dabed0, &var_98)

sub_140745b20(&var_88)
sub_140745b20(&var_78)
void var_30

if (&var_30 == rax_10)
    goto label_141da82ef

if (rax_13 != 0)
    (*rax_13)[8](rax_13, rax_10)
label_141da82ef:
    
    if (rax_13 != 0)
        (*rax_13)[7](rax_13, 0)
        int64_t rax_16 = sub_140a84c80(rax_13, 0, 0)
        
        if (rax_16 != 0)
            sub_140a74f90(rax_16)
else if (rax_10[1].d != 0)
    int64_t* rcx_28 = *rax_10
    
    if (rcx_28 != 0)
        (*(*rcx_28 + 0x38))(rcx_28, 0)
        int64_t rcx_29 = *rax_10
        
        if (rcx_29 != 0)
            *rax_10 = sub_140a84c80(rcx_29, 0, 0)
        
        rax_10[1].d = 0

sub_140745b20(&var_a8)
uint128_t zmm0_1 = var_68.o
var_98.o = zmm0_1
void* rax_17 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_17 != 0)
    *(rax_17 + 8) += 1

void*** result = sub_141da6730(arg1, 0xe, &var_98, 0, 0)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        result = (**var_60)(var_60)
        int32_t temp1_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_60 + 8))(var_60, 1)

return result
