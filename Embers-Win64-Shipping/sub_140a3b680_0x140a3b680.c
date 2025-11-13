// 函数: sub_140a3b680
// 地址: 0x140a3b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
*arg1 = &data_142e5ec58
arg1[1] = 0
arg1[2] = 0
arg1[3].d = arg3
arg1[4] = 0
arg1[5].d = 0
arg1[6].b = 0

if (arg1[1] == arg2)
    return arg1

int32_t rbx_1

if (arg2 == 0 || *arg2 == 0)
    rbx_1 = 0
else
    int64_t rbx = -1
    
    do
        rbx += 1
    while (arg2[rbx] != 0)
    
    rbx_1 = rbx.d + 1

arg1[2].d = 0

if (*(arg1 + 0x14) != rbx_1)
    sub_1405947f0(&arg1[1], rbx_1)
    rdx = arg1[2].d

int32_t rax = rdx + rbx_1
arg1[2].d = rax

if (rax s> *(arg1 + 0x14))
    sub_140594770(&arg1[1])

if (rbx_1 != 0)
    memcpy(arg1[1], arg2, rbx_1 * 2)

return arg1
