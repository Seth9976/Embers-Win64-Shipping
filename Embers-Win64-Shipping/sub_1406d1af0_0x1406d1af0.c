// 函数: sub_1406d1af0
// 地址: 0x1406d1af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rax = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rax = ((rdi * 3) u>> 3) + 0x10 + rdi

int64_t result = 0x7fffffff
uint32_t r8_4 = (sub_140a846a0(rax * 0x70, 0) u/ 0x70).d

if (rdi.d s> r8_4)
    r8_4 = 0x7fffffff

*(arg1 + 0xc) = r8_4
int64_t rcx_1 = *arg1

if (rcx_1 != 0 || r8_4 != 0)
    result = sub_140a84c80(rcx_1, sx.q(r8_4) * 0x70, 0)
    *arg1 = result

return result
