// 函数: sub_1410e0180
// 地址: 0x1410e0180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t rdi = 0
int32_t i_4 = 0
int64_t r8 = 0
int64_t* r10 = arg2
int64_t* rax_2 = arg2

while (*rax_2 != 0)
    i_4 += 1
    r8 += 1
    rax_2 = &rax_2[3]
    
    if (r8 s>= 8)
        break

void var_78

if (i_4 != 0)
    void* rcx = &var_78
    uint64_t i_3 = zx.q(i_4)
    int64_t* rax_3 = r10
    uint64_t i
    
    do
        int64_t rdx = *rax_3
        
        if (rdx != 0)
            rdi = zx.q(rdi.d + 1)
            *rcx = rdx
            rcx += 8
        
        rax_3 = &rax_3[3]
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rbp = r10[0x18]

if (rbp != 0)
    int32_t rbx_1 = *(r10 + 0xd4)
    
    if ((rbx_1.b & 0xf) == 2 || (rbx_1.b & 0xf0) == 0x20)
        void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_3[4]
        
        if (rax_6 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_3[4]
        
        *(arg1 + 0x30) = rax_6
        int64_t* rax_7 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_7 = rcx_3
        *(arg1 + 8) = &rcx_3[1]
        rcx_3[1] = 0
        *rcx_3 = &data_142f115e8
        rcx_3[2].d = rbx_1
        rcx_3[3] = rbp

uint32_t rdx_1 = (rdi << 3).d
int64_t r14 = sx.q(rdx_1)
int64_t* rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = r14 + rbx_4

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx_1 + 8)
    rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = r14 + rbx_4

*(arg1 + 0x30) = rax_9
int64_t i_2 = sx.q(rdi.d)

if (rdi.d s> 0)
    int64_t* rcx_8 = rbx_4
    int64_t i_1
    
    do
        *rcx_8 = *(&var_78 - rbx_4 + rcx_8)
        rcx_8 = &rcx_8[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void*** rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_11[5]

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_11[5]

*(arg1 + 0x30) = rax_11
void**** rax_12 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_12 = rcx_11
*(arg1 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142d549c8
rcx_11[2].d = rdi.d
rcx_11[3] = rbx_4
rcx_11[4].d = 1
__security_check_cookie(rax_1 ^ &var_98)
return &data_142d549c8
