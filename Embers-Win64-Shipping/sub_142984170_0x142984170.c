// 函数: sub_142984170
// 地址: 0x142984170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2
int64_t* result_1 = result_2
int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t* result = sub_142984b20(arg1)
result_1 = result
result[3].w = 0
int128_t* rcx = *arg3
void* rdx = &result[4]
int64_t i_1 = 2
int64_t i

do
    *rdx = *rcx
    *(rdx + 0x10) = rcx[1]
    *(rdx + 0x20) = rcx[2]
    *(rdx + 0x30) = rcx[3]
    *(rdx + 0x40) = rcx[4]
    *(rdx + 0x50) = rcx[5]
    *(rdx + 0x60) = rcx[6]
    rdx += 0x80
    *(rdx - 0x10) = rcx[7]
    rcx = &rcx[8]
    i = i_1
    i_1 -= 1
while (i != 1)
result[0x24].d = 1
__builtin_memset(&result[0x25], 0, 0x18)
result[0x28].d = 1
*(result + 0x144) = 1
result[0x29] = 0
result[0x2a].w = 0
return result
