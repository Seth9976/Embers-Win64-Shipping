// 函数: sub_142bcfc60
// 地址: 0x142bcfc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[2]
int64_t rdi = *arg1

if (rdx != 0)
    int128_t* rax_1 = arg1[4]
    *(rdx + 0x98) = *rax_1
    *(rdx + 0xa8) = rax_1[1]
    *(rdx + 0xb8) = rax_1[2].q

int64_t result = arg1[0xe7]

if (result != 0)
    result(arg1[0xe6], rdx)
    result = sub_142b99980(rdi, arg1[0xe6])
    arg1[0xe6] = 0

return result
