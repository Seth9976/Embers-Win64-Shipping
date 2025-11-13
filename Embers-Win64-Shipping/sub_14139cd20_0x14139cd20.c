// 函数: sub_14139cd20
// 地址: 0x14139cd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1

if (*sub_14139d540(arg1) != 0)
    rax_1 = sub_14139d540(arg1)
else
    data_1439b6a99 = 0
    rax_1 = &data_1439b70c8

*arg2 = rax_1
int32_t rbx = 1
int32_t r14 = (*U"1111")[sx.q(*(arg1 + 0x3d0))]
char rax_3 = sub_1410a09e0(r14)
char rax_4

if (rax_3 == 0)
    rax_4 = sub_1419a4830(r14)

int64_t rbp

if (rax_3 != 0 || rax_4 != 0)
    rbp.b = 0
else
    rbp = 1
    arg2[1] = arg1 + 0x70
    rbx = 4
    arg2[2] = arg1 + 0x78
    arg2[3] = arg1 + 0x80

char rax_8

if (*(arg1 + 0x3d9) != 0)
    rax_8 = sub_1419a4830(r14)

if (*(arg1 + 0x3d9) == 0 || rax_8 != 0)
    *arg3 = 0xffffffff
else
    uint64_t rax_9 = zx.q(rbx)
    *arg3 = rbx
    rbx += 1
    arg2[rax_9] = arg1 + 0x50

if (rbp.b == 0 || *(arg1 + 0x423) == 0)
    *arg4 = 0xffffffff
else
    uint64_t rax_10 = zx.q(rbx)
    *arg4 = rbx
    rbx += 1
    arg2[rax_10] = arg1 + 0x98

if (rbp.b == 0)
    return zx.q(rbx)

arg2[zx.q(rbx)] = arg1 + 0x88
uint64_t result = zx.q(rbx + 1)

if (*(arg1 + 0x3b4) == 0)
    return result

arg2[result] = arg1 + 0x90
return zx.q(result.d + 1)
