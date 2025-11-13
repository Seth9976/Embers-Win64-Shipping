// 函数: sub_140b63b70
// 地址: 0x140b63b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int32_t r9 = arg1[1]
uint64_t rdi_1 = zx.q(rax u>> 0x10)
uint32_t arg_c = zx.d(rax.w)
int32_t arg_8 = rdi_1.d

if (r9 == 0)
    void* r8
    
    if (data_143e05168 == r9.b)
        r8 = sub_140b58510(&data_143e05180)
        data_143e05168 = 1
    else
        r8 = &data_143e05180
    
    sub_140b5e790(zx.q((arg_8.q u>> 0x20).d * 2) + *(r8 + (rdi_1 << 3) + 0x10), arg2)
    return arg2

int32_t rdx_1 = 0
uint64_t var_28 = 0
int32_t var_1c = 0
void* r8_1

if (data_143e05168 == 0)
    void* rax_5 = sub_140b58510(&data_143e05180)
    r9 = arg1[1]
    r8_1 = rax_5
    rdx_1 = var_1c
    data_143e05168 = 1
else
    r8_1 = &data_143e05180

int16_t* rdi_3 = zx.q((arg_8.q u>> 0x20).d * 2) + *(r8_1 + (zx.q(rdi_1.d) << 3) + 0x10)
uint32_t rax_9 = zx.d(*rdi_3) u>> 6
int32_t var_20 = 0

if (r9 != 0)
    if (rdx_1 != rax_9 + 6)
        sub_1405947f0(&var_28, rax_9 + 6)
    
    sub_140b5c5e0(rdi_3, &var_28)
    int32_t rdi_4 = var_20 - 1
    
    if (var_20 s<= 0)
        rdi_4 = 0
    
    int32_t rax_11
    rax_11.b = var_20 s<= 0
    int32_t rax_13 = rax_11 + 1 + var_20
    var_20 = rax_13
    
    if (rax_13 s> var_1c)
        sub_140594770(&var_28)
    
    int64_t rcx_9 = sx.q(rdi_4)
    *(var_28 + (rcx_9 << 1)) = 0x5f
    *(var_28 + (rcx_9 << 1) + 2) = 0
    sub_140a20c40(&var_28, arg1[1] - 1)
else
    if (rdx_1 != rax_9)
        sub_1405947f0(&var_28, rax_9)
    
    sub_140b5c5e0(rdi_3, &var_28)

*arg2 = var_28
arg2[1].d = var_20
*(arg2 + 0xc) = var_1c
return arg2
