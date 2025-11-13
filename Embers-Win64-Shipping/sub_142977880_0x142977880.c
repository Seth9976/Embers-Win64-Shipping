// 函数: sub_142977880
// 地址: 0x142977880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int128_t* rbx = arg2
int64_t* result = sub_142978400(arg1)
int64_t* result_1 = result
result[3].w = 0
void* rcx = result + 0x1c
int64_t i_1 = 2
int64_t i

do
    *rcx = *rbx
    *(rcx + 0x10) = rbx[1]
    *(rcx + 0x20) = rbx[2]
    *(rcx + 0x30) = rbx[3]
    *(rcx + 0x40) = rbx[4]
    *(rcx + 0x50) = rbx[5]
    *(rcx + 0x60) = rbx[6]
    rcx += 0x80
    *(rcx - 0x10) = rbx[7]
    rbx = &rbx[8]
    i = i_1
    i_1 -= 1
while (i != 1)
*rcx = *rbx
return result
