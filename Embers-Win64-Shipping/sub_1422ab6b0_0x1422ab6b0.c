// 函数: sub_1422ab6b0
// 地址: 0x1422ab6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 0x18) + 0x38))(arg1 + 0x18, zx.q(arg3))
int32_t rsi = 0

if (arg2[8].d s< 0x115)
    void* var_30 = nullptr
    void** const var_38 = &data_142da8520
    int32_t var_28 = 0
    char var_20 = 0
    *(arg1 + 0x3c) = 0
    sub_141a043d0(&var_30, arg2, 0, arg4)
    *(arg1 + 0x28) = 0
    int32_t rbp = var_28 * 2
    
    if (*(arg1 + 0x2c) != rbp)
        sub_14083acb0(arg1 + 0x20, rbp)
        rsi = *(arg1 + 0x28)
    
    int32_t rax_2 = rsi + rbp
    *(arg1 + 0x28) = rax_2
    
    if (rax_2 s> *(arg1 + 0x2c))
        sub_1407c3da0(arg1 + 0x20, rsi)
    
    void* rdx_4
    
    if ((var_30.b & 1) == 0)
        rdx_4 = var_30
    else
        rdx_4 = &var_30 + (var_30 s>> 1)
    
    void* rcx_4 = *(arg1 + 0x20)
    
    if ((rcx_4.b & 1) != 0)
        rcx_4 = (rcx_4 s>> 1) + arg1 + 0x20
    
    memcpy(rcx_4, rdx_4, *(arg1 + 0x28))
    int32_t rcx_6 = 2
    
    if (*(arg1 + 0x3c) != 0)
        rcx_6 = 4
    
    *(arg1 + 0x38) = divs.dp.d(sx.q(*(arg1 + 0x28)), rcx_6)
    return sub_140a1d5c0(&var_30)

int64_t* rcx_8 = arg2[1]
int32_t* rdx_7 = *rcx_8
int32_t arg_8

if (&rdx_7[1] u> rcx_8[1])
    int32_t rax_11
    rax_11.b = *(arg1 + 0x3c) != 0
    arg_8 = rax_11
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x3c) = arg_8 != 0
else
    void* rax_9
    rax_9.b = *rdx_7 != 0
    *(arg1 + 0x3c) = rax_9.b
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4

sub_142292820(arg1 + 0x20, arg2, 0, arg4)
char r9 = *(arg1 + 0x3c)
int32_t rcx_11 = 2

if (r9 != 0)
    rcx_11 = 4

int32_t temp0_1 = divs.dp.d(sx.q(*(arg1 + 0x28)), rcx_11)
*(arg1 + 0x38) = temp0_1
int64_t* rcx_12 = arg2[0xe]
int32_t rax_16

if (rcx_12 == 0 || temp0_1 s<= 0 || r9 != 0)
    rax_16.b = 0
else
    *(arg1 + 0x20)
    rax_16 = (*(*rcx_12 + 0x1e0))()

*(arg1 + 0x3d) = rax_16.b
int64_t* rcx_13 = arg2[1]
int32_t* rdx_13 = *rcx_13

if (&rdx_13[1] u<= rcx_13[1])
    void* rax_18
    rax_18.b = *rdx_13 != 0
    *(arg1 + 0x3d) = rax_18.b
    int64_t* rax_19 = arg2[1]
    *rax_19 += 4
    return rax_19

int64_t rax_20 = *arg2
rsi.b = *(arg1 + 0x3d) != 0
arg_8 = rsi
(*(rax_20 + 0x150))(arg2, &arg_8, 4)
bool rax_21 = arg_8 != 0
*(arg1 + 0x3d) = rax_21
return rax_21
