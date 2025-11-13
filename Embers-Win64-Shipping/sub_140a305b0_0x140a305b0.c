// 函数: sub_140a305b0
// 地址: 0x140a305b0
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

for (void** i = &data_14399e700; i s>= &data_14399e6b0; i -= 0x10)
    if (arg3 == 0)
    label_140a30675:
        sub_140a306e0(&var_18, i[1], *i, 1)
    else
        for (int16_t* j = *arg3; j != &j[sx.q(arg3[1].d)]; j = &j[1])
            if (*j == **i)
                goto label_140a30675

*arg2 = var_18
arg2[1].d = rbx
*(arg2 + 0xc) = var_c
return arg2
