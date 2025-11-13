// 函数: sub_1418f8620
// 地址: 0x1418f8620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
int32_t i_3 = *(arg3 + 0x34)
int32_t i_4 = *(arg2 + 0x34)
int32_t i_2 = i_3

if (i_4 u<= i_3)
    i_2 = i_4

int32_t r12 = i_4 - i_2
int32_t rsi = i_3 - i_2
void*** rax_3 = sub_1418c0d30(*(arg1 + 0x240))
uint64_t i_1 = zx.q(i_2)
int64_t rax_4 = rax_3[8]
void var_408
memset(&var_408, 0, i_1 * 0x44)

if (i_2 != 0)
    void var_400
    void* rdx = &var_400
    int32_t rcx_3 = rsi
    uint64_t i
    
    do
        *(rdx + 0x18) = rcx_3
        *(rdx - 4) = r12 - rsi + rcx_3
        *rdx = 0
        *(rdx + 0x1c) = 0
        int32_t rax_6 = 1
        int32_t r8_2 = arg4 s>> rcx_3.b
        int32_t r9_2 = arg5 s>> rcx_3.b
        *(rdx - 8) = 1
        *(rdx + 4) = 1
        *(rdx + 0x14) = 1
        
        if (r8_2 u>= 1)
            rax_6 = r8_2
        
        *(rdx + 0x30) = rax_6
        int32_t rax_7 = 1
        *(rdx + 0x20) = 1
        *(rdx + 0x38) = 1
        rdx += 0x44
        
        if (r9_2 u>= 1)
            rax_7 = r9_2
        
        rcx_3 += 1
        *(rdx - 0x10) = rax_7
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rbx = *(arg3 + 0x80)
int64_t var_488 = 0
int32_t* var_480 = nullptr
int32_t var_478 = 1
int64_t var_470 = 0
int32_t var_468 = 0
sub_140775520(&var_480)
__builtin_memset(var_480, 0, 0x48)
int32_t* rax_9 = var_480
*rax_9 = 0x2d
*(rax_9 + 0x28) = rbx
rax_9[0xc] = 1
rax_9[0xe] = i_2
rax_9[0x10] = 1
*(rax_9 + 0x20) = -1
var_480[0xd] = rsi
int32_t* rax_11 = var_480
rax_11[4] = 0
rax_11[6] = 0
var_488.d |= 1
rax_11[5] = 0x1000
rax_11[7] = 7
var_488:4.d |= 0x1000
int32_t rax_14
int32_t* r8_3
rax_14, r8_3 = sub_1418e0d30(arg1 + 0x248, *(arg2 + 0x80), 0)
void* var_438
var_438.d = rax_14
int32_t rdi_2 = rax_14

if (rax_14 != 6)
    int64_t rbx_1 = sx.q(var_478)
    int64_t rdi_3 = *(arg2 + 0x80)
    int32_t rcx_6 = (rbx_1 + 1).d
    var_478 = rcx_6
    
    if (rcx_6 s> 0)
        sub_140775520(&var_480)
    
    int64_t rbx_2 = rbx_1 * 0x48
    __builtin_memset(&var_480[rbx_1 * 0x12], 0, 0x48)
    int32_t* rax_16 = var_480
    *(rbx_2 + rax_16 + 0x28) = rdi_3
    rdi_2 = var_438.d
    rax_16[rbx_1 * 0x12] = 0x2d
    rax_16[rbx_1 * 0x12 + 0xc] = 1
    rax_16[rbx_1 * 0x12 + 0xe] = i_2
    rax_16[rbx_1 * 0x12 + 0x10] = 1
    *(rbx_2 + rax_16 + 0x20) = -1
    var_480[rbx_1 * 0x12 + 0xd] = r12
    int32_t rax_18 = sub_1418e1d20(rdi_2)
    void* rbx_3 = &var_480[rbx_1 * 0x12]
    int32_t rax_19 = sub_1418bfb90(rax_18, rbx_3 + 0x10, rbx_3 + 0x18)
    var_488.d |= rax_19
    *(rbx_3 + 0x14) = 0x800
    *(rbx_3 + 0x1c) = 6
    var_488:4.d |= 0x1000

if (var_478 s> 0 || var_468 s> 0)
    r8_3.b = 1
    sub_1418c1fc0(&var_488, rax_3)

if (var_470 != 0)
    sub_140a74f90(var_470)

int32_t* rcx_13 = var_480

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

data_143efb9f8(rax_4, *(arg2 + 0x80), 6, *(arg3 + 0x80), 7, i_2, &var_408)
int64_t rbx_4 = *(arg3 + 0x80)
int32_t var_450 = 1
int64_t var_460 = 0
int32_t* var_458 = nullptr
int64_t var_448 = 0
int32_t var_440 = 0
sub_140775520(&var_458)
__builtin_memset(var_458, 0, 0x48)
int32_t* rax_21 = var_458
*rax_21 = 0x2d
*(rax_21 + 0x28) = rbx_4
rax_21[0xc] = 1
rax_21[0xe] = i_2
rax_21[0x10] = 1
*(rax_21 + 0x20) = -1
var_458[0xd] = rsi
int32_t* rax_23 = var_458
rax_23[4] = 0x1000
rax_23[6] = 7
var_460.d |= 0x1000
rax_23[5] = 0x20
rax_23[7] = 5
var_460:4.d |= 0x80

if (rdi_2 != 6)
    int64_t rbx_5 = sx.q(var_450)
    int64_t rdi_4 = *(arg2 + 0x80)
    int32_t rax_24 = (rbx_5 + 1).d
    var_450 = rax_24
    
    if (rax_24 s> 0)
        sub_140775520(&var_458)
    
    int64_t rbx_6 = rbx_5 * 0x48
    __builtin_memset(&var_458[rbx_5 * 0x12], 0, 0x48)
    int32_t* rax_26 = var_458
    rax_26[rbx_5 * 0x12] = 0x2d
    *(rbx_6 + rax_26 + 0x28) = rdi_4
    rax_26[rbx_5 * 0x12 + 0xc] = 1
    rax_26[rbx_5 * 0x12 + 0xe] = i_2
    rax_26[rbx_5 * 0x12 + 0x10] = 1
    *(rbx_6 + rax_26 + 0x20) = -1
    var_458[rbx_5 * 0x12 + 0xd] = r12
    int32_t rax_28 = sub_1418e1d20(var_438.d)
    int32_t* rcx_19 = var_458
    rcx_19[rbx_5 * 0x12 + 4] = 0x800
    rcx_19[rbx_5 * 0x12 + 6] = 6
    var_460.d |= 0x1000
    int32_t rax_29 = sub_1418bfb90(rax_28, &rcx_19[5 + rbx_5 * 0x12], &rcx_19[7 + rbx_5 * 0x12])
    var_460:4.d |= rax_29

if (var_450 s> 0 || var_440 s> 0)
    void* r8_4
    r8_4.b = 1
    sub_1418c1fc0(&var_460, rax_3)

if (var_448 != 0)
    sub_140a74f90(var_448)

int32_t* rcx_23 = var_458

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

*sub_1418e1230(arg1 + 0x248, *(arg3 + 0x80), 0) = 5
*arg6 -= 1
__security_check_cookie(rax_1 ^ &var_4c8)
return arg6
