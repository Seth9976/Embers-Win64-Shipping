// 函数: sub_1407fd5a0
// 地址: 0x1407fd5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = (data_143ce2d68.q).d
int32_t rax = 1
int32_t rbx = arg2[1].d
int64_t* result_3
int64_t* result_1
int32_t var_3c
int64_t* result

if (rsi s> 1)
    int32_t r14_1 = rbx - 1
    
    if (rbx == 0)
        r14_1 = 0
    
    if (rsi != 0 || r14_1 == 0)
        rax = 0
    
    int64_t rbx_1 = data_143ce2d60
    int32_t rcx_2 = r14_1 + rax
    result_1 = nullptr
    
    if (rsi != 0 || rcx_2 != 0)
        sub_1405a4c70(&result_1, rcx_2 + rsi, 0)
        memcpy(result_1, rbx_1, rsi * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&result_1, *arg2, r14_1)
    rbx = rsi
    result = result_1
    rax = 1
else
    int64_t rsi_1 = *arg2
    result = nullptr
    result_3 = nullptr
    
    if (rbx != 0)
        sub_1405a4c70(&result_3, rbx, 0)
        int64_t* result_2 = result_3
        result = result_2
        memcpy(result_2, rsi_1, rbx * 2)
        rax = 1

int32_t r14_2 = (data_143ce2d78.q).d
int32_t rsi_2 = arg2[1].d
int64_t* result_4

if (r14_2 s> 1)
    int32_t r15_1 = rsi_2 - 1
    
    if (rsi_2 == 0)
        r15_1 = 0
    
    if (r14_2 != 0 || r15_1 == 0)
        rax = 0
    
    int64_t rsi_3 = data_143ce2d70
    int32_t rcx_8 = rax + r15_1
    result_1 = nullptr
    
    if (r14_2 != 0 || rcx_8 != 0)
        sub_1405a4c70(&result_1, r14_2 + rcx_8, 0)
        memcpy(result_1, rsi_3, r14_2 * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&result_1, *arg2, r15_1)
    rsi_2 = r14_2
    result_4 = result_1
else
    int64_t r14_3 = *arg2
    result_4 = nullptr
    result_3 = nullptr
    
    if (rsi_2 != 0)
        sub_1405a4c70(&result_3, rsi_2, 0)
        int64_t* result_12 = result_3
        result_4 = result_12
        memcpy(result_12, r14_3, rsi_2 * 2)

int32_t rbx_2

if (rbx == 0)
    rbx_2 = 0
else
    rbx_2 = rbx - 1

result_3 = nullptr
int32_t var_4c = 0
int32_t rdx_10 = 0
int32_t var_50_3 = 0
int64_t* result_13 = nullptr
int32_t r15_2 = 0

if (rbx_2 + 0xb s> 0)
    sub_1405947f0(&result_3, rbx_2 + 0xb)
    rdx_10 = var_50_3
    r15_2 = var_4c
    result_13 = result_3

int32_t r12_1 = rbx_2 + 0xb + rdx_10

if (r12_1 s> r15_2)
    sub_140594770(&result_3)
    r15_2 = var_4c
    result_13 = result_3

int64_t rbx_3 = sx.q(rbx_2)
__builtin_memcpy(result_13, u"Texture2D ", 0x14)
memcpy(result_13 + 0x14, result, rbx_3.d * 2)
*(result_13 + (rbx_3 << 1) + 0x14) = 0
result_3 = result_13
int32_t rax_4
rax_4.b = r12_1 == 0
int32_t var_4c_1 = r15_2
int32_t rdx_14 = rax_4 + 2 + r12_1

if (rdx_14 s> r15_2)
    sub_1405947f0(&result_3, rdx_14)

sub_140a20ba0(&result_3, &data_142db0644, 2)
int64_t* result_7 = result_3
result_3 = nullptr
int32_t r8_11 = r12_1 - 1
int32_t var_50_5
var_50_5.q = 0

if (r12_1 == 0)
    r8_11 = 0

sub_140a20ba0(arg3, result_7, r8_11)

if (result_7 != 0)
    sub_140a74f90(result_7)

int32_t rbx_4 = rsi_2 - 1

if (rsi_2 == 0)
    rbx_4 = 0

result_3 = nullptr
int32_t var_4c_2 = 0
int32_t rdx_16 = 0
int32_t var_50_6 = 0
int64_t* result_9 = nullptr
int32_t r14_4 = 0

if (rbx_4 + 0xe s> 0)
    sub_1405947f0(&result_3, rbx_4 + 0xe)
    rdx_16 = var_50_6
    r14_4 = var_4c_2
    result_9 = result_3

int32_t r15_4 = rbx_4 + 0xe + rdx_16

if (r15_4 s> r14_4)
    sub_140594770(&result_3)
    r14_4 = var_4c_2
    result_9 = result_3

int64_t* result_11 = result_4
int64_t rbx_5 = sx.q(rbx_4)
__builtin_memcpy(result_9, u"SamplerState ", 0x1a)
memcpy(result_9 + 0x1a, result_11, rbx_5.d * 2)
*(result_9 + (rbx_5 << 1) + 0x1a) = 0
result_3 = result_9
int32_t rax_7
rax_7.b = r15_4 == 0
int32_t var_4c_3 = r14_4
int32_t rdx_20 = rax_7 + 2 + r15_4

if (rdx_20 s> r14_4)
    sub_1405947f0(&result_3, rdx_20)

sub_140a20ba0(&result_3, &data_142db0644, 2)
int64_t* result_8 = result_3
result_3 = nullptr
int32_t r8_13 = r15_4 - 1
int32_t var_50_8
var_50_8.q = 0

if (r15_4 == 0)
    r8_13 = 0

sub_140a20ba0(arg3, result_8, r8_13)

if (result_8 != 0)
    sub_140a74f90(result_8)

int32_t rax_9 = (data_143ce2d88.q).d
int32_t rbx_6 = rax_9 - 1

if (rax_9 == 0)
    rbx_6 = 0

result_3 = nullptr
int32_t var_4c_4 = 0
int32_t rdx_22 = 0
int32_t var_50_9 = 0
int64_t* result_10 = nullptr
int32_t r15_5 = 0

if (rbx_6 + 8 s> 0)
    sub_1405947f0(&result_3, rbx_6 + 8)
    rdx_22 = var_50_9
    r15_5 = var_4c_4
    result_10 = result_3

int32_t r14_6 = rbx_6 + 8 + rdx_22

if (r14_6 s> r15_5)
    sub_140594770(&result_3)
    r15_5 = var_4c_4
    result_10 = result_3

*result_10 = 0x61006f006c0066
result_10[1].d = 0x320074
*(result_10 + 0xc) = 0x20
int64_t rbx_7 = sx.q(rbx_6)
memcpy(result_10 + 0xe, data_143ce2d80, rbx_7.d * 2)
*(result_10 + (rbx_7 << 1) + 0xe) = 0
int32_t rbx_8 = arg2[1].d
int32_t rcx_29
int64_t* result_6

if (r14_6 s> 1)
    int32_t r12_2 = rbx_8 - 1
    
    if (rbx_8 == 0)
        r12_2 = 0
    
    int32_t rax_11
    
    if (r14_6 == 0)
        rax_11 = r14_6 + 1
    
    if (r14_6 != 0 || r12_2 == 0)
        rax_11 = 0
    
    result_3 = result_10
    int32_t rdx_28 = r14_6 + rax_11 + r12_2
    result_10 = nullptr
    
    if (rdx_28 s> r15_5)
        sub_1405947f0(&result_3, rdx_28)
    
    sub_140a20ba0(&result_3, *arg2, r12_2)
    rcx_29 = r15_5
    result_6 = result_3
    rbx_8 = r14_6
    result_11 = result_4
    int32_t var_50_11
    var_50_11.q = 0
    result_3 = nullptr
else
    int64_t r15_6 = *arg2
    result_6 = nullptr
    result_1 = nullptr
    
    if (rbx_8 != 0)
        sub_1405a4c70(&result_1, rbx_8, 0)
        result_6 = result_1
        memcpy(result_6, r15_6, rbx_8 * 2)
        rcx_29 = var_3c
    else
        rcx_29 = 0

result_1 = result_6
int32_t rax_12
rax_12.b = rbx_8 == 0
int32_t var_3c_1 = rcx_29
int32_t rdx_31 = rax_12 + 2 + rbx_8

if (rdx_31 s> rcx_29)
    sub_1405947f0(&result_1, rdx_31)

sub_140a20ba0(&result_1, &data_142db0644, 2)
int64_t* result_5 = result_1
result_1 = nullptr
int32_t r8_18 = rbx_8 - 1
int32_t var_40_4
var_40_4.q = 0

if (rbx_8 == 0)
    r8_18 = 0

sub_140a20ba0(arg3, result_5, r8_18)

if (result_5 != 0)
    sub_140a74f90(result_5)

if (result_10 != 0)
    sub_140a74f90(result_10)

if (result_11 != 0)
    sub_140a74f90(result_11)

if (result == 0)
    return result

return sub_140a74f90(result)
