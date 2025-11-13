// 函数: sub_141454c60
// 地址: 0x141454c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
void* const r10 = &data_142f86048
int64_t r8 = sx.q(*arg1)
void* const r11 = &data_142f86048
void* rdx = rbx
void* rax = *(rbx + 0x10)

if (rax != 0)
    rdx = rax

if (rdx != 0)
    r11 = rdx

void* rdx_1 = *(arg1 + 0x10)
void* rax_1 = *(rdx_1 + 0x10)

if (rax_1 != 0)
    rdx_1 = rax_1

if (rdx_1 != 0)
    r10 = rdx_1

int32_t i = *(r10 + (r8 << 2)) & *(r11 + (r8 << 2)) & arg1[6]

while (i == 0)
    arg1[8] += 0x20
    r8 = zx.q(r8.d + 1)
    *arg1 = r8.d
    int32_t r9_1 = *(rbx + 0x18)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9_1 - 1)
    int32_t rax_5 = (temp1_1 + (temp0_1 & 0x1f)) s>> 5
    
    if (r8.d s> rax_5)
        arg1[7] = r9_1
        return rax_5
    
    int64_t rax_6 = sx.q(r8.d)
    i = *(r10 + (rax_6 << 2)) & *(r11 + (rax_6 << 2))
    arg1[6] = 0xffffffff

int32_t rax_9 = neg.d(i) & i
uint64_t rflags
int32_t temp0_2
temp0_2, rflags = _bit_scan_reverse(rax_9)
arg1[1] = rax_9

if (rax_9 == 0)
    int32_t rax_15 = arg1[8] - 1
    arg1[7] = rax_15
    return rax_15

int32_t rax_12 = arg1[8] - (0x1f - temp0_2) + 0x1f
arg1[7] = rax_12
return rax_12
