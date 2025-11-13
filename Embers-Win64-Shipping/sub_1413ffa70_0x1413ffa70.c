// 函数: sub_1413ffa70
// 地址: 0x1413ffa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* r10 = arg1

if (rax != 0)
    r10 = rax

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t rbx = 1 << (arg2.b & 0x1f)
void* rdi = r10 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg3)
int32_t rax_9 = *rdi
void* rdx_5 = r10 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
int32_t r11 = 1 << (arg3.b & 0x1f)
int32_t rax_10

if ((*rdx_5 & r11) == 0)
    rax_10 = rax_9 & not.d(rbx)
else
    rax_10 = rax_9 | rbx

*rdi = rax_10
int32_t result = *rdx_5

if ((rax_9 & rbx) == 0)
    *rdx_5 = not.d(r11) & result
    return result

*rdx_5 = r11 | result
return result
