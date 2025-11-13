// 函数: sub_1405d6ab0
// 地址: 0x1405d6ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)
void arg_8
int32_t* rax_1 = (*(*rcx + 0x268))(rcx, &arg_8)
int32_t r8 = *rax_1
*(arg1 + 0xb8) = r8
int32_t rcx_1 = rax_1[1]
*(arg1 + 0xbc) = rcx_1

if (r8 != data_143cd7df0 || rcx_1 != data_143cd7df4)
    rax_1.b = 0
else
    rax_1.b = 1

int64_t* rcx_2 = *(arg1 + 0x50)
*(arg1 + 0xf8) = rax_1.b
int32_t rax_3 = (*(*rcx_2 + 0x270))(rcx_2)
int64_t* rcx_3 = *(arg1 + 0x50)
*(arg1 + 0xc0) = rax_3
char result = (*(*rcx_3 + 0x278))(rcx_3, zx.q(arg2))
*(arg1 + 0xe0) = result
return result
