// 函数: sub_14095a720
// 地址: 0x14095a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = &data_142e20cf0
*(arg1 + 0x78) = 0
int64_t rcx = *(arg1 + 0x70)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_140925830(arg1 + 0x30, 0)
int64_t rcx_2 = *(arg1 + 0x50)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x30)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
