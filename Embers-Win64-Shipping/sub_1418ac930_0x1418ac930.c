// 函数: sub_1418ac930
// 地址: 0x1418ac930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x78)

if (arg1 + 0xa0 != arg2)
    int128_t zmm2 = *(arg1 + 0xa0)
    int128_t zmm3 = *(arg1 + 0xb0)
    int128_t zmm4_1 = *(arg1 + 0xc0)
    int128_t zmm5_1 = *(arg1 + 0xd0)
    *(arg1 + 0xa0) = *arg2
    *(arg1 + 0xb0) = arg2[1]
    *(arg1 + 0xc0) = arg2[2]
    *(arg1 + 0xd0) = arg2[3]
    *arg2 = zmm2
    arg2[1] = zmm3
    arg2[2] = zmm4_1
    arg2[3] = zmm5_1

if (arg1 != -0x78)
    result = LeaveCriticalSection(arg1 + 0x78)

if (*arg2 == 0)
    return result

void* rax = arg2[1].q
void* rcx_2 = &arg2[2]

if (rax != 0)
    rcx_2 = rax

return (*(*rcx_2 + 0x10))(rcx_2)
