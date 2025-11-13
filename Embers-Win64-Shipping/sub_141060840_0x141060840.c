// 函数: sub_141060840
// 地址: 0x141060840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int64_t var_30 = 0x1688
int64_t var_1c = 0
int32_t var_14 = 0
uint64_t r8 = *(rax + 0xc8)
int64_t rsi = *(rax + 0xc0)
uint64_t r10 = zx.q(*(rax + 0x18))
uint32_t temp0 = (divu.dp.q(0:r8, r10)).d
uint8_t r9_1 = (*(rax + 0x20) u>> 5).b

if (*(arg1 + 0x20) u<= r8.d)
    r8 = zx.q(*(arg1 + 0x20))

*(arg1 + 0x20) = r8.d
uint64_t r8_1 = zx.q(divu.dp.d(0:(r8.d), r10.d))
int32_t var_38

if ((r9_1 & 1) == 0)
    var_1c.d = r10.d
    var_38 = 0
else
    var_1c:4.d = 1
    r10 = 4
    var_38 = 0x27

int32_t rcx = *(arg1 + 0x24)
int32_t r11_1 = temp0 - r8_1.d
int32_t var_34 = 1

if (r11_1 u<= rcx)
    rcx = r11_1

int32_t var_20 = rcx
uint64_t var_28 = divu.dp.q(0:rsi, zx.q(r10.d)) + r8_1
sub_141025d40(*(arg1 + 0x18), &var_38, rax + 0x70, r10.d, 0)
void* rax_8 = *(arg1 + 0x18)
int64_t* rdx_5 = rax_8 + 0x88

if (rax_8 == 0)
    rdx_5 = nullptr

return sub_14105df70(*(arg1 + 0x10) + 0x28, rdx_5) __tailcall
