// 函数: sub_14135d830
// 地址: 0x14135d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 1
sub_1410b3fe0(arg2, u"POST_PROCESS_MATERIAL", 1)
int32_t rax = *(arg1 + 0x20)

if (rax == 0 || rax == 3)
    rdi = 0

sub_1410b3fe0(arg2, u"POST_PROCESS_MATERIAL_BEFORE_TONEMAP", zx.q(rdi))
int32_t result = *(arg1 + 4) & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

if (result != 1)
    return result

int32_t rbx
rbx.b = *(arg1 + 0x20) != 0
return sub_1410b3fe0(arg2, u"POST_PROCESS_MATERIAL_BEFORE_TONEMAP", zx.q(rbx))
