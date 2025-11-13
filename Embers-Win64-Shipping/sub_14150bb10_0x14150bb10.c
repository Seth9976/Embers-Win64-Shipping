// 函数: sub_14150bb10
// 地址: 0x14150bb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg5
void* r11 = arg3
void* r9 = *(arg1 + 8)
uint32_t rbp_1 = zx.d(arg4) << 0x18
int32_t rbx_2 = (r10 & 0xffffff) | rbp_1
int64_t rdi = sx.q(*(r9 + 4))

if (rdi.d == 0)
    rdi = sx.q(*(arg1 + 0x10))
    int32_t rax_2 = (rdi + 1).d
    *(arg1 + 0x10) = rax_2
    
    if (rax_2 s> *(arg1 + 0x14))
        sub_1405a4f90(&arg1[8])
        r10 = arg5
        r11 = arg3
    
    int64_t rcx_5 = rdi * 2
    *(*(arg1 + 8) + (rcx_5 << 3)) = 0xffffffff
    int64_t rax_4 = *(arg1 + 8)
    *(rax_4 + (rcx_5 << 3) + 8) = rdi.d
    *(rax_4 + (rcx_5 << 3) + 4) = rdi.d
else
    void* r8_2 = (rdi << 4) + r9
    *(r9 + sx.q(*(r8_2 + 8)) * 0x10 + 4) = *(r8_2 + 4)
    *(*(arg1 + 8) + sx.q(*(r8_2 + 4)) * 0x10 + 8) = *(r8_2 + 8)
    *(r8_2 + 8) = rdi.d
    *(r8_2 + 4) = rdi.d

int32_t rbp_2 = rbp_1 | r10
int64_t r8_4 = sx.q(rdi.d) << 4
int32_t* rdx_4 = *(arg1 + 8) + r8_4
rdx_4[3].w = arg7
int32_t rax_6 = rdx_4[3]
*rdx_4 = rbx_2
int32_t rcx_8 = zx.d(arg6) << 0x1c | (rax_6 & 0xfffffff)
rdx_4[3] = rcx_8
rdx_4[3] = ((zx.d(*(r11 + 0x1c0)) << 0x10 ^ rcx_8) & 0xfff0000) ^ rcx_8
*(arg1 + 0x38) += 1
void* rdx_5 = *(arg1 + 8)
*(rdx_5 + r8_4 + 4) = 1
*(rdx_5 + r8_4 + 8) = *(rdx_5 + 0x18)
int32_t r8_5 = 0
*(*(arg1 + 8) + sx.q(*(rdx_5 + 0x18)) * 0x10 + 4) = rdi.d
*(rdx_5 + 0x18) = rdi.d
int32_t r9_1 = *(arg1 + 0x68)

if (r9_1 != 0)
    do
        int32_t rdx_9 = ((r9_1 - r8_5) u>> 1) + r8_5
        int32_t temp4_1 = *(*(arg1 + 0x60) + (sx.q(rdx_9) << 2))
        
        if (rbp_2 u< temp4_1)
            r9_1 = rdx_9
        
        if (rbp_2 u>= temp4_1)
            r8_5 = rdx_9 + 1
    while (r8_5 != r9_1)

int64_t r15 = sx.q(*(arg1 + 0xa0))
uint64_t r13 = zx.q(rdi.d)
int32_t rax_17 = (r15 + 1).d
*(arg1 + 0xa0) = rax_17

if (rax_17 s> *(arg1 + 0xa4))
    sub_1405a4d70(&arg1[0x98])

*(*(arg1 + 0x98) + (r15 << 3)) = zx.q(r8_5) << 0x20 | r13
int32_t rcx_12 = (rbx_2 u>> 0x10 ^ rbx_2) * 0x85ebca6b
int32_t rcx_13 = (rcx_12 u>> 0xd ^ rcx_12) * 0xc2b2ae35
int32_t temp3 = *(arg1 + 0x20)

if (rdi.d u>= temp3)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse((rdi + 1).d)
    int32_t rcx_14
    
    if (rdi.d == temp3)
        rcx_14 = 0x20
    else
        rcx_14 = 0x1f - temp0_1
    
    int32_t rcx_16 = rcx_14 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rdi.d)
    char rdx_11
    
    if (rcx_16 == 0)
        rdx_11 = 0x20
    else
        rdx_11 = 0x1f - temp0_2
    
    int32_t r12_1 = 1 << ((not.d(rcx_16)).b & (0x20 - rdx_11))
    
    if (r12_1 u<= 0x20)
        r12_1 = 0x20
    
    sub_140a30d10(&arg1[0x18], r12_1)

uint64_t rdx_14 = zx.q(*(arg1 + 0x1c)) & (zx.q((rcx_13 u>> 0x10).w) ^ zx.q(rcx_13.w))
*(*(arg1 + 0x30) + (r13 << 2)) = *(*(arg1 + 0x28) + (rdx_14 << 2))
*(*(arg1 + 0x28) + (rdx_14 << 2)) = rdi.d
uint32_t rax_32 = zx.d(arg7)
int32_t temp2 = *(arg3 + 0x1b8)
uint32_t temp1 = modu.dp.d(0:rax_32, temp2)
int64_t* rbx_8 = ((zx.q(*arg1) + 0x60) << 4) + arg2
arg7:1.b = (divu.dp.d(0:rax_32, temp2)).b
int64_t rdi_1 = sx.q(rbx_8[1].d)
void* result
result.d = arg5
arg7.b = temp1.b
result:4.w = arg7
result:6.b = arg6
result:7.b = arg4
int32_t rax_39 = (rdi_1 + 1).d
uint32_t var_48 = temp1
rbx_8[1].d = rax_39

if (rax_39 s> *(rbx_8 + 0xc))
    sub_1405a4d70(rbx_8)

*(*rbx_8 + (rdi_1 << 3)) = result
arg1[0x80] = 1
return result
