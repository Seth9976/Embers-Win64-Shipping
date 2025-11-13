// 函数: sub_1422ef7b0
// 地址: 0x1422ef7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2
arg_10.d = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t rcx = 0
int32_t var_2c = 0
int64_t rbx = -1
arg_10.d = 0xffffffff
int64_t* var_18 = nullptr
int32_t i_2 = 0
int64_t var_38 = 0

if (arg1 != 0 && *arg1 != 0)
    do
        rbx += 1
    while (arg1[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx.d + 1)
        rcx = var_2c
        rdx = var_30
    
    int32_t rax_1 = rbx.d + 1 + rdx
    var_30 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg1, (rbx.d + 1) * 2)

sub_1422e9830(&var_38, &arg_10, &var_18)
int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t rdx_4 = arg_10.d
int64_t var_28
int64_t* result
int32_t rbx_2

if (rdx_4 != 0xffffffff)
    var_28 = 0
    int64_t var_20_1 = 0
    sub_140a20c40(&var_28, rdx_4)
    result = &var_28
    rbx_2 = 2
else
    var_38 = 0
    var_30.q = 0
    sub_1405947f0(&var_38, 9)
    int32_t var_30_1 = var_30 + 9
    
    if (var_30 + 9 s> var_2c)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"(custom)", 0x12)
    result = &var_38
    rbx_2 = 1

int64_t rdi_1 = *result
*result = 0
result[1] = 0

if ((rbx_2.b & 2) != 0)
    int64_t rcx_10 = var_28
    rbx_2 &= 0xfffffffd
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

int32_t i_1 = i_2
int64_t* rsi = var_18
int64_t* rbx_3 = rsi

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_13 = *rbx_3
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
