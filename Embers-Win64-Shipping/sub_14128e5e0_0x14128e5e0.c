// 函数: sub_14128e5e0
// 地址: 0x14128e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[8].d
int32_t rax_2 = *(sx.q(arg2) * 0x88 + *arg1 + 0x80)
int32_t rbx_1 = r8 & rax_2
int64_t rbp_1

while (true)
    rbp_1 = sx.q(*(arg1[4] + (sx.q(rbx_1) << 2)))
    
    if (arg2 == rbp_1.d)
        break
    
    rbx_1 = (rbx_1 + 1) & r8
    
    if (rbx_1 == ((*(arg1 + 0x44) + 1 + rax_2) & r8))
        rax_2.b = 0
        return rax_2

int64_t rax_3 = sx.q(arg1[3].d)
int32_t rsi = 0
int32_t r15 = 0

if (rax_3.d s> 0)
    int64_t rcx_1 = 0
    int32_t* rax_4 = arg1[2]
    
    while (*rax_4 u>= rbp_1.d)
        r15 += 1
        rcx_1 += 1
        rax_4 = &rax_4[1]
        
        if (rcx_1 s>= rax_3)
            break

int32_t rcx_3 = arg1[3].d
arg1[3].d = rcx_3 + 1

if (rcx_3 + 1 s> *(arg1 + 0x1c))
    sub_1405a4cf0(&arg1[2])

int32_t* rdi_5 = sx.q(r15) << 2
void* rdx_3 = arg1[2] + rdi_5
memmove(rdx_3 + 4, rdx_3, (rcx_3 - r15) << 2)
*(rdi_5 + arg1[2]) = rbp_1.d
void* rdi_7 = rbp_1 * 0x88 + *arg1
int64_t* rcx_6 = *(rdi_7 + 0x28)

if (rcx_6 != 0)
    sub_1419d6470(rcx_6)

int64_t* rcx_7 = *(rdi_7 + 0x20)

if (rcx_7 != 0)
    sub_1419d6470(rcx_7)

int64_t* rcx_8 = *(rdi_7 + 0x18)

if (rcx_8 != 0)
    sub_1419d6470(rcx_8)

int64_t* rcx_9 = *(rdi_7 + 0x10)

if (rcx_9 != 0)
    sub_1419d6470(rcx_9)

int64_t* rcx_10 = *(rdi_7 + 8)

if (rcx_10 != 0)
    sub_1419d6470(rcx_10)

*(arg1[6] + (sx.q(rbx_1) << 2)) = 0x80000000
uint64_t rax_11

if ((sx.q(arg1[1].d) - sx.q(arg1[3].d)) * 0x14 u< zx.q(arg1[8].d * 3))
    int64_t r15_1 = arg1[4]
    __builtin_memset(&arg1[4], 0, 0x20)
    int64_t rbx_3 = arg1[6]
    int32_t rbp_2 = arg1[8].d
    uint32_t rax_13 = rbp_2 u>> 1
    arg1[8].d = rax_13
    *(arg1 + 0x44) = 0
    
    if (rax_13 + 1 s> *(arg1 + 0x2c))
        sub_1405dadb0(&arg1[4], rax_13 + 1)
        rax_13 = arg1[8].d
    
    int32_t rax_15 = rax_13 + 1 + arg1[5].d
    arg1[5].d = rax_15
    
    if (rax_15 s> *(arg1 + 0x2c))
        sub_1405a4cf0(&arg1[4])
    
    int32_t rax_16 = arg1[8].d
    
    if (rax_16 + 1 s> *(arg1 + 0x3c))
        sub_1405dadb0(&arg1[6], rax_16 + 1)
        rax_16 = arg1[8].d
    
    int64_t r12_1 = sx.q(arg1[7].d)
    int32_t rax_17 = r12_1.d + rax_16 + 1
    arg1[7].d = rax_17
    
    if (rax_17 s> *(arg1 + 0x3c))
        sub_1405a4cf0(&arg1[6])
    
    int64_t rcx_19
    int64_t rdi_9
    
    if (rax_16 != 0xffffffff)
        rdi_9, rcx_19 = __memfill_u32(arg1[6] + (r12_1 << 2), 0x80000000, zx.q(rax_16 + 1))
    
    do
        rax_11 = sx.q(rsi)
        int32_t r8_3 = *(rbx_3 + (rax_11 << 2))
        
        if (r8_3 != 0x80000000)
            sub_141270e40(arg1, *(r15_1 + (rax_11 << 2)), r8_3)
        
        rsi += 1
    while (rsi u<= rbp_2)
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)

rax_11.b = 1
return rax_11
