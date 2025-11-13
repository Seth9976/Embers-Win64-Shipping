// 函数: sub_142101580
// 地址: 0x142101580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_2 = rbx << 5
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_2 + r9_1 + 0x1c))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_2 + r9_1 + 0x18)
            break
        
        rdx_1 = r9_1 + 0x18 + (sx.q(i) << 5)

int64_t rdx_3 = *arg1
int64_t rsi_1 = rbx << 5
int64_t rcx_2 = *(rdx_3 + rsi_1 + 8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    rdx_3 = *arg1

void* r9_2 = &arg1[2]

if (*(arg1 + 0x34) != 0)
    *((sx.q(arg1[6].d) << 5) + rdx_3) = rbx.d
    rdx_3 = *arg1

int32_t rax_9 = -1
*(rsi_1 + rdx_3) = 0xffffffff

if (*(arg1 + 0x34) s> 0)
    rax_9 = arg1[6].d

*(rsi_1 + rdx_3 + 4) = rax_9
*(arg1 + 0x34) += 1
arg1[6].d = rbx.d
void* rax_10 = *(r9_2 + 0x10)

if (rax_10 != 0)
    r9_2 = rax_10

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx.d)
int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r9_2 + (result_1 << 2)) &= not.d(rol.d(1, rbx.b))
return result
