// 函数: sub_1422a4550
// 地址: 0x1422a4550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = *(arg1 + 0xc)
uint32_t result

if (result_1 != 4)
    result = zx.d(result_1)
else
    result = data_1439c7a08

if (result s< 3)
    return result

int32_t rdx = *(arg1 + 0x34)
int32_t rcx = *(arg1 + 0x38)

if (*(arg1 + 0x30) s>= rdx)
    rdx = *(arg1 + 0x30)

if (rdx s>= rcx)
    rcx = rdx

int64_t var_18

if (rcx s> 0)
    int32_t rax = *(arg1 + 0x38)
    var_18 = *(arg1 + 0x30)
    int32_t var_10_1 = rax
    sub_1422973d0(arg1 + 0x40, &var_18)

int32_t rdx_2 = *(arg1 + 0x80)
int32_t rcx_2 = *(arg1 + 0x84)

if (*(arg1 + 0x7c) s>= rdx_2)
    rdx_2 = *(arg1 + 0x7c)

if (rdx_2 s>= rcx_2)
    rcx_2 = rdx_2

if (rcx_2 s> 0)
    int32_t rax_1 = *(arg1 + 0x84)
    var_18 = *(arg1 + 0x7c)
    int32_t var_10_2 = rax_1
    sub_1422973d0(arg1 + 0x88, &var_18)
    
    for (int32_t i = 0; i u< 6; i += 1)
        int32_t var_10_3 = *(arg1 + 0x84)
        var_18 = *(arg1 + 0x7c)
        sub_1422973d0(sx.q(i) * 0x38 + 0xc0 + arg1, &var_18)
    
    if (*(arg1 + 0x220) s> 0)
        int32_t rax_4 = *(arg1 + 0x84)
        var_18 = *(arg1 + 0x7c)
        int32_t var_10_4 = rax_4
        sub_1422973d0(arg1 + 0x210, &var_18)
    
    int32_t rax_5 = *(arg1 + 0x84)
    var_18 = *(arg1 + 0x7c)
    int32_t var_10_5 = rax_5
    sub_1422973d0(arg1 + 0x248, &var_18)

sub_1422a4d20(&data_143a2fab0, 0x7fffffff, arg1)
return sub_1422a91b0(arg1 + 0x88) __tailcall
