// 函数: sub_142826d60
// 地址: 0x142826d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x20)
int64_t rcx = *(arg1 + 0x10)

if (rcx u<= r8 + 1)
    sub_142828a7c(arg1, 1)
    rcx = *(arg1 + 0x10)
    r8 = *(arg1 + 0x20)

*(arg1 + 0x18) &= rcx - 1
int64_t rcx_2 = *(arg1 + 8)
int64_t rdi_2 = (*(arg1 + 0x18) + r8) & (rcx - 1)

if (*(rcx_2 + (rdi_2 << 3)) == 0)
    *(*(arg1 + 8) + (rdi_2 << 3)) = sub_14058b9f0(0x58)
    rcx_2 = *(arg1 + 8)

int32_t* result = sub_142827100(*(rcx_2 + (rdi_2 << 3)), arg2)
*(arg1 + 0x20) += 1
return result
