// 函数: sub_140b6ff70
// 地址: 0x140b6ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14_1 = *(arg1 + 8) - arg2

if (arg3 s<= r14_1)
    r14_1 = arg3

int64_t r15_1 = arg2 & 0xffffffffffff0000
uint64_t dwNumberOfBytesToMap_1 = (zx.q(arg2.w) + 0xffff + r14_1) & 0xffffffffffff0000
uint64_t dwNumberOfBytesToMap = dwNumberOfBytesToMap_1

if (r15_1 + dwNumberOfBytesToMap_1 s> *(arg1 + 8))
    dwNumberOfBytesToMap = 0

struct MEMORY_MAPPED_VIEW_ADDRESS rax_1 =
    MapViewOfFile(*(arg1 + 0x18), FILE_MAP_READ, (r15_1 u>> 0x20).d, r15_1.d, dwNumberOfBytesToMap)

if (rax_1 == 0)
    return rax_1

void*** rax_2 = j_sub_140a82f30(0x48)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rbx_1[2] = r14_1
    *rbx_1 = &data_142e7ca58
    rbx_1[1] = rax_1 - r15_1 + arg2
    sub_140596d10(&rbx_1[3], arg1 + 0x20)
    rbx_1[5] = arg2
    *rbx_1 = &data_142e7caf8
    rbx_1[6] = arg1
    rbx_1[7] = rax_1
    rbx_1[8] = dwNumberOfBytesToMap_1

*(arg1 + 0x30) += 1
return rbx_1
