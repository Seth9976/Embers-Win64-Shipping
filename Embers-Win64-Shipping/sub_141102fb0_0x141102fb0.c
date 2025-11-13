// 函数: sub_141102fb0
// 地址: 0x141102fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
arg1[8]
int64_t* rdi = *arg1
void* rbx = *(*rdi + 0x20)
int128_t var_128
__builtin_memset(&var_128, 0, 0x120)
sub_1413aab70(&data_143ec4c60, rdi[0x2a9].d, 0xf, &var_128)
int64_t* rcx_1 = data_143f0f180
int64_t result = (*(*rcx_1 + 0x100))(rcx_1, *(rbx + 0x78), &var_128)

if (rdi[0x317].d s<= 0 || rbp.d u> 5)
    return result

int32_t rdx_2
int32_t r8_2

switch (rbp)
    case 0
        rdx_2 = 0
        r8_2 = 4
    case 1
        rdx_2 = 1
        r8_2 = 2
    case 2
        sub_1410f6410(arg1, 2, 5)
        sub_1410f6410(arg1, 2, 0)
        rdx_2 = 2
        r8_2 = 1
    case 3
        rdx_2 = 3
        r8_2 = 6
    case 4
        rdx_2 = 4
        r8_2 = 7
    case 5
        rdx_2 = 5
        r8_2 = 6

return sub_1410f6410(arg1, rdx_2, r8_2)
