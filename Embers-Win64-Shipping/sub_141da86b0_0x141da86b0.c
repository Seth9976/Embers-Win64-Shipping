// 函数: sub_141da86b0
// 地址: 0x141da86b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int32_t var_58 = 0

if (*(arg1 + 0x230) s<= 1)
    int64_t var_80 = 6
    void** const var_88 = &data_1432388c8
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x1c)
    int64_t* var_68
    
    if (arg6[1].d != 0)
        int64_t* rcx = *arg6
        
        if (rcx != 0)
            if ((*(*rcx + 0x28))(rcx) != 0)
                if (arg6[1].d != 0)
                    rbx = *arg6
                
                (*(*rbx + 0x50))(rbx, &var_88)
            
            rbx = var_68
    
    int32_t i_3
    int32_t i_2 = i_3
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx = &rbx[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx = var_68
    
    if (rbx != 0)
        sub_140a74f90(rbx)
    
    return sub_141d8e6b0(&var_78)

int64_t* rax_5 = sub_141802500()
int64_t r8 = *rax_5
int64_t* var_98
(*(r8 + 0x40))(rax_5, &var_98, r8)

if (arg2[1].d != 0)
    *arg2

int16_t* const r8_1

if (*(arg1 + 0x230) == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *(arg1 + 0x228)

int64_t var_a8
sub_140a2e390(&var_a8, u"%sreplay?app=%s", r8_1)
uint64_t r8_2 = zx.q(*(arg2 + 0x14))
int16_t* var_c8
int32_t var_c0

if (r8_2.d != 0)
    sub_140a2e390(&var_c8, u"&cl=%u", r8_2)
    int32_t r8_4
    
    if (var_c0 == 0)
        r8_4 = 0
    else
        r8_4 = var_c0 - 1
    
    sub_140a20ba0(&var_a8, var_c8, r8_4)
    int16_t* rcx_9 = var_c8
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

uint64_t r8_5 = zx.q(arg2[2].d)

if (r8_5.d != 0)
    sub_140a2e390(&var_c8, u"&version=%u", r8_5)
    int32_t r8_7
    
    if (var_c0 == 0)
        r8_7 = 0
    else
        r8_7 = var_c0 - 1
    
    sub_140a20ba0(&var_a8, var_c8, r8_7)
    int16_t* rcx_12 = var_c8
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

int64_t* rax_6 = data_143f38838
int16_t* r12 = nullptr
var_c8 = nullptr
int32_t rdi_2 = rax_6[1].d
int64_t rsi_1 = *rax_6

if (rdi_2 != 0)
    sub_1405a4c70(&var_c8, rdi_2, 0)
    r12 = var_c8
    memcpy(r12, rsi_1, rdi_2 * 2)
    rax_6 = data_143f38838

int64_t var_b8 = 0
int32_t var_b0
int32_t var_ac
int64_t rsi_2
int64_t rdi_4
int32_t r14_2

if (rdi_2 s<= 1)
    int32_t rsi_3 = arg4[1].d
    rdi_4 = 0
    int64_t r14_3 = *arg4
    var_b0 = rsi_3
    
    if (rsi_3 != 0)
        sub_1405a4c70(&var_b8, rsi_3, 0)
        rdi_4 = var_b8
        memcpy(rdi_4, r14_3, rsi_3 * 2)
    else
        var_ac = 0
    
    rsi_2 = var_b8
    r14_2 = 2
else
    int32_t rdi_3 = rax_6[1].d
    rsi_2 = 0
    int64_t r14_1 = *rax_6
    var_b0 = rdi_3
    
    if (rdi_3 != 0)
        sub_1405a4c70(&var_b8, rdi_3, 0)
        rsi_2 = var_b8
        memcpy(rsi_2, r14_1, rdi_3 * 2)
        rdi_4 = var_b8
        r14_2 = 1
    else
        r14_2 = rdi_3 + 1
        var_ac = 0
        rdi_4 = var_b8

var_c8 = nullptr
int32_t r15 = var_b0
int32_t var_c0_2 = r15
int16_t* r13

if (r15 == 0)
    r13 = var_c8
else
    sub_1405a4c70(&var_c8, r15, 0)
    r13 = var_c8
    memcpy(r13, var_b8, r15 * 2)
    r15 = var_c0_2

if ((r14_2.b & 2) != 0)
    r14_2 &= 0xfffffffd
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)

if ((r14_2.b & 1) != 0 && rsi_2 != 0)
    sub_140a74f90(rsi_2)

if (r12 != 0)
    sub_140a74f90(r12)

if (r15 s> 1)
    int16_t* const r8_16 = &data_142d40450
    
    if (r15 != 0)
        r8_16 = r13
    
    sub_140a2e390(&var_c8, u"&meta=%s", r8_16)
    int32_t r8_18
    
    if (var_c0_2 == 0)
        r8_18 = 0
    else
        r8_18 = var_c0_2 - 1
    
    sub_140a20ba0(&var_a8, var_c8, r8_18)
    int16_t* rcx_26 = var_c8
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)

int64_t var_50
sub_141da9ca0(&var_50, arg3)
int32_t var_48

if (var_48 s> 1)
    int64_t* rax_7 = sub_14180a750(&var_b8, &var_50)
    int16_t* const r8_19
    
    if (rax_7[1].d == 0)
        r8_19 = &data_142d40450
    else
        r8_19 = *rax_7
    
    sub_140a2e390(&var_c8, u"&user=%s", r8_19)
    int32_t r8_21
    
    if (var_c0_2 == 0)
        r8_21 = 0
    else
        r8_21 = var_c0_2 - 1
    
    sub_140a20ba0(&var_a8, var_c8, r8_21)
    int16_t* rcx_31 = var_c8
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    int64_t rcx_32 = var_b8
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)

int32_t i_1 = 0

if (arg5[1].d s> 0)
    int64_t* rdi_5 = nullptr
    
    do
        int64_t rax_8 = *arg5
        int16_t* const r8_22
        
        if (*(rdi_5 + rax_8 + 8) == 0)
            r8_22 = &data_142d40450
        else
            r8_22 = *(rdi_5 + rax_8)
        
        sub_140a2e390(&var_c8, u"&%s", r8_22)
        int32_t r8_24
        
        if (var_c0_2 == 0)
            r8_24 = 0
        else
            r8_24 = var_c0_2 - 1
        
        sub_140a20ba0(&var_a8, var_c8, r8_24)
        int16_t* rcx_35 = var_c8
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        i_1 += 1
        rdi_5 = &rdi_5[2]
    while (i_1 s< arg5[1].d)

int64_t* rcx_36 = var_98
(*(*rcx_36 + 0x50))(rcx_36, &var_a8)
var_b8 = 0
var_b0.q = 0
sub_1405947f0(&var_b8, 4)
int32_t var_b0_1 = var_b0 + 4

if (var_b0 + 4 s> var_ac)
    sub_140594770(&var_b8)

UnDecorator::getReferenceType(var_b8, &data_142d85f90, 8)
int64_t* rcx_40 = var_98
(*(*rcx_40 + 0x48))(rcx_40, &var_b8)
int64_t rcx_41 = var_b8

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

int64_t* rdi_6 = var_98
var_c8 = nullptr
int32_t var_c0_3 = 0

if (arg6 != &var_c8 && arg6[1].d != 0)
    int64_t* rcx_42 = *arg6
    
    if (rcx_42 != 0)
        (*(*rcx_42 + 0x40))(rcx_42, &var_c8)

sub_141da4650((*(*rdi_6 + 0x90))(rdi_6), arg1, sub_141dac120, &var_c8)
uint128_t zmm0 = var_98.o
var_c8.o = zmm0
void* rax_16 = _mm_bsrli_si128(zmm0, 8).q

if (rax_16 != 0)
    *(rax_16 + 8) += 1

void*** result = sub_141da6730(arg1, 8, &var_c8, 0, 0)
int64_t rcx_46 = var_50

if (rcx_46 != 0)
    result = sub_140a74f90(rcx_46)

if (r13 != 0)
    result = sub_140a74f90(r13)

int64_t rcx_48 = var_a8

if (rcx_48 != 0)
    result = sub_140a74f90(rcx_48)

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        result = (**var_90)(var_90)
        int32_t temp2_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_90 + 8))(var_90, 1)

return result
