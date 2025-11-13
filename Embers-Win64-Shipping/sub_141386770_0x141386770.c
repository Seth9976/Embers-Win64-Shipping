// 函数: sub_141386770
// 地址: 0x141386770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = arg2 & 0xfffffff0
uint8_t result

do
    int64_t rdi_1 = *(arg1 + ((zx.q(rbx_1) & 7) << 3) + 0x4018)
    
    if (rdi_1 != 0)
        sub_141386770(rdi_1)
        j_sub_140a74f90(rdi_1)
    
    if ((rbx_1.b & 7) u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    
    result = (rbx_1 u>> 3).b
while ((result & 1) == 0)

int64_t rcx_2 = *(arg1 + 0x4000)

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
