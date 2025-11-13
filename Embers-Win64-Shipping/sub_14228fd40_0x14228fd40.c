// 函数: sub_14228fd40
// 地址: 0x14228fd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 0x18) = 0

int64_t* rax_2 = j_sub_140a82f30(0x28)
int64_t* rcx_1 = rax_2

if (rax_2 == 0)
    rcx_1 = nullptr
else
    rax_2[2] = 0
    rax_2[3] = 0
    rcx_1[1] = &data_143314f28
    rcx_1[4].b = arg2
    *rcx_1 = &data_143316520

*(arg1 + 0x18) = rcx_1
int32_t result = (*(*rcx_1 + 0x20))()
*(arg1 + 0x30) = result
return result
