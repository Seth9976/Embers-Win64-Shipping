// 函数: sub_1425f77b0
// 地址: 0x1425f77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result

if (*(arg1 + 0x2c) u> 0x80)
    *(arg1 + 0x2c) = 0x80
    result = sub_1405a4410(&arg1[2], 0)
else
    result = arg1[4]
    void* result_1 = &arg1[2]
    uint32_t rdx_3 = (arg1[5].d + 0x1f) u>> 5
    
    if (result != 0)
        result_1 = result
    
    if (rdx_3 u> 8)
        result = memset(result_1, 0, zx.q(rdx_3) << 2)
    else if (rdx_3 != 0)
        result = nullptr
        __builtin_memset(result_1, 0, zx.q(rdx_3) << 2)

arg1[5].d = 0
int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

uint64_t rcx_4 = *arg1

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
