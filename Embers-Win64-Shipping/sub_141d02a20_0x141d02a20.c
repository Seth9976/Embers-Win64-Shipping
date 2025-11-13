// 函数: sub_141d02a20
// 地址: 0x141d02a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 8)
void* r9 = *rax

if ((r9.b & 1) != 0)
    r9 = (r9 s>> 1) + rax

int32_t rbx = rax[1].d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx - 1)
uint64_t rax_2 = zx.q(temp1)
int64_t rdx_2 = sx.q(*arg1)
int32_t r11_1 = ((temp0 & 0x1f) + rax_2.d) s>> 5
int32_t i = *(r9 + (rdx_2 << 2)) & arg1[4]

while (i == 0)
    arg1[6] += 0x20
    rdx_2 = zx.q(rdx_2.d + 1)
    *arg1 = rdx_2.d
    
    if (rdx_2.d s> r11_1)
        arg1[5] = rbx
        return rax_2
    
    rax_2 = sx.q(rdx_2.d)
    i = *(r9 + (rax_2 << 2))
    arg1[4] = 0xffffffff

int32_t rax_5 = neg.d(i) & i
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(rax_5)
arg1[1] = rax_5
int32_t rcx

if (rax_5 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0_1

int32_t rax_8 = arg1[6] - rcx + 0x1f

if (rax_8 s> rbx)
    rax_8 = rbx

arg1[5] = rax_8
return rax_8
