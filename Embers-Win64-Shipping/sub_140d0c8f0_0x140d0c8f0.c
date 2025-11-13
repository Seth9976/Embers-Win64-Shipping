// 函数: sub_140d0c8f0
// 地址: 0x140d0c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
void* rcx = r10
char rbx = *arg1 & 1

if (rbx != 0)
    rcx = &arg1[rcx s>> 1]

int32_t rbp = arg3[4]
void* rdx = *(arg1 + 0x28)
void* rsi_1 = sx.q(rbp * arg2) + rcx

if ((rdx.b & 1) != 0)
    rdx = &arg1[0x28 + (rdx s>> 1)]

int64_t rcx_3 = sx.q(*(sx.q(arg3[1]) + rsi_1)) & sx.q(*(arg1 + 0x30) - 1)
void* r8 = rdx + (rcx_3 << 2)

for (int32_t i = *(rdx + (rcx_3 << 2)); i != 0xffffffff; i = *r8)
    if (i == arg2)
        *r8 = *(sx.q(*arg3) + rsi_1)
        break
    
    void* rdx_2 = r10
    
    if (rbx != 0)
        rdx_2 = &arg1[rdx_2 s>> 1]
    
    r8 = sx.q(*arg3) + sx.q(rbp * i) + rdx_2

if (*(arg1 + 0x24) != 0)
    void* rcx_6 = *arg1
    
    if ((rcx_6.b & 1) != 0)
        rcx_6 = &arg1[rcx_6 s>> 1]
    
    *(sx.q(*(arg1 + 0x20) * arg3[4]) + rcx_6) = arg2

void* rcx_9 = *arg1

if ((rcx_9.b & 1) != 0)
    rcx_9 = &arg1[rcx_9 s>> 1]

int32_t* rdx_4 = sx.q(arg3[4] * arg2)
int32_t rax_17 = -1
*(rdx_4 + rcx_9) = 0xffffffff

if (*(arg1 + 0x24) s> 0)
    rax_17 = *(arg1 + 0x20)

*(rdx_4 + rcx_9 + 4) = rax_17
*(arg1 + 0x24) += 1
*(arg1 + 0x20) = arg2
void* r8_2 = *(arg1 + 0x10)

if ((r8_2.b & 1) != 0)
    r8_2 = &arg1[0x10 + (r8_2 s>> 1)]

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r8_2 + (result_1 << 2)) &= not.d(rol.d(1, arg2.b))
return result
