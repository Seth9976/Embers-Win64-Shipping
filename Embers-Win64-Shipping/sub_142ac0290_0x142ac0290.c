// 函数: sub_142ac0290
// 地址: 0x142ac0290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int16_t rax = *(rcx + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(rcx + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

int32_t rdx = arg1[1].d
int32_t result

if (rdx != rax_2)
    result = sub_142a486d0(rcx, rdx)
else
    result = -1

int32_t rcx_1
rcx_1.b = result u> 0xffff
arg1[1].d += rcx_1 + 1
return result
