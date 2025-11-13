// 函数: sub_141f96c30
// 地址: 0x141f96c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 f>= arg4)
    return 

int32_t r9_1 = *(arg1 + 0x80)
int32_t rax = 0
int32_t r8_1 = -1
int32_t r10_1 = -1

if (r9_1 s<= 0)
    return 

int32_t* rdx_1 = *(arg1 + 0x78)

do
    int32_t zmm0 = *rdx_1
    
    if (arg3 f>= zmm0)
        r8_1 = rax
    
    if (zmm0 f>= arg4)
        r10_1 = rax
        break
    
    rax += 1
    rdx_1 = &rdx_1[2]
while (rax s< r9_1)

if (r8_1 != 0xffffffff && r10_1 != 0xffffffff)
    return sub_141f97360(arg1, arg2, r8_1, r10_1) __tailcall
