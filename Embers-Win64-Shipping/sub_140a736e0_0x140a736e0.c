// 函数: sub_140a736e0
// 地址: 0x140a736e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
int64_t r8 = sx.q(*arg1)
void* r10 = rdx
void* rax = *(rdx + 0x20)
int32_t rbx = *(rdx + 0x28)

if (rax != 0)
    r10 = rax

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx - 1)
uint64_t rax_2 = zx.q(temp1)
int32_t r11_1 = ((temp0 & 0x1f) + rax_2.d) s>> 5
int32_t i = *(r10 + (r8 << 2)) & arg1[4]

while (i == 0)
    arg1[6] += 0x20
    r8 = zx.q(r8.d + 1)
    *arg1 = r8.d
    
    if (r8.d s> r11_1)
        arg1[5] = rbx
        return rax_2
    
    rax_2 = sx.q(r8.d)
    i = *(r10 + (rax_2 << 2))
    arg1[4] = 0xffffffff

int32_t rax_5 = neg.d(i) & i
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(rax_5)
arg1[1] = rax_5
int32_t rdx_3

if (rax_5 == 0)
    rdx_3 = 0x20
else
    rdx_3 = 0x1f - temp0_1

int32_t rax_8 = arg1[6] - rdx_3 + 0x1f

if (rax_8 s> rbx)
    rax_8 = rbx

arg1[5] = rax_8
return rax_8
