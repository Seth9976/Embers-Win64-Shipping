// 函数: sub_140a30480
// 地址: 0x140a30480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
int32_t rax = rbx - 1

if (rbx == 0)
    rax = 0

if (rax s<= 0 || (arg3 != 0 && arg3[1].d s<= 0))
    sub_140596d10(arg2, arg1)
    return arg2

int64_t rsi = *arg1
int64_t var_18 = 0
int32_t var_c

if (rbx != 0)
    sub_1405a4c70(&var_18, rbx, 0)
    memcpy(var_18, rsi, rbx * 2)
else
    var_c = 0

wchar32 const (** rbx_1)[0x3] = &data_14399e6b0
int64_t i_1 = 6
int64_t i

do
    if (arg3 == 0)
    label_140a30543:
        sub_140a306e0(&var_18, *rbx_1, rbx_1[1], 1)
    else
        for (int16_t* j = *arg3; j != &j[sx.q(arg3[1].d)]; j = &j[1])
            if (*j == **rbx_1)
                goto label_140a30543
    
    rbx_1 = &rbx_1[2]
    i = i_1
    i_1 -= 1
while (i != 1)
*arg2 = var_18
arg2[1].d = rbx
*(arg2 + 0xc) = var_c
return arg2
