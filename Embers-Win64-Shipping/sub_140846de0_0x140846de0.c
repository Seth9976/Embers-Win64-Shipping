// 函数: sub_140846de0
// 地址: 0x140846de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 8)
int64_t r8 = 0
void* result = &rdx[sx.q(*(arg1 + 0x10))]
uint64_t r9_1 = sx.q(*(arg1 + 0x10)) << 3 u>> 3

if (rdx u> result)
    r9_1 = 0

if (r9_1 != 0)
    do
        result = *rdx
        
        if (result != 0)
            *(result + 0x5b0) = 0xffffffff
        
        rdx = &rdx[1]
        r8 += 1
    while (r8 != r9_1)

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    result = sub_1405c5570(arg1 + 8, 0)

int64_t rcx_1 = *(arg1 + 0x28)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 8)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
