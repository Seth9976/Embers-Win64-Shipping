// 函数: sub_1417e8ea0
// 地址: 0x1417e8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_3 = *(arg2 + 0x20)
uint64_t r8_4 = zx.q(arg_8)
uint64_t rdx_4 = zx.q(arg_10)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
char result = (*(*arg1 + 0xdd0))(arg1, rdx_4, r8_4)

if (result != 0)
    return (*(*arg1 + 0xdd8))(arg1, zx.q(arg_10), zx.q(arg_8))

sub_140be4120(u"ClientInitSharedWorld_Validate")
return result
