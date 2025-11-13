// 函数: sub_142c535b0
// 地址: 0x142c535b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int128_t var_28
int128_t zmm6 = *sub_142c59600(&var_28)

if (arg1 == 0 || *arg1 != 0xbab1e)
    return 1

int64_t* i = *(arg1 + 8)

while (i != 0)
    var_28 = zmm6
    int32_t rax_1
    rax_1, arg4, arg5, arg3, zmm6 = sub_142c54020(arg1, &var_28, i, arg4, arg5, arg3)
    i = *i
    
    if (rax_1 != 0)
        rsi = rax_1

void* i_1

do
    int64_t* rdx_1 = *(arg1 + 0xb0)
    var_28 = zmm6
    int64_t* rax_2 = sub_142c6a3b0(&var_28, rdx_1, &i_1)
    void* i_2 = i_1
    *(arg1 + 0xb0) = rax_2
    
    if (i_2 == 0)
        break
    
    void* r8_3 = *(i_2 + 0x30)
    var_28 = zmm6
    sub_142c530b0(&var_28, arg1, r8_3)
while (i_1 != 0)
*arg2 = arg1[7]

if (rsi s<= 0)
    sub_142c556d0(arg1)

return zx.q(rsi)
