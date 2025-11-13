// 函数: sub_1408cfee0
// 地址: 0x1408cfee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = arg1[0xb]
uint64_t r12 = zx.q(arg2)
uint64_t r15_1 = r12 * 0xa0

if (arg1[0x12].d == 0)
    return 0xffffffff

int64_t rdx = sx.q(arg1[0x12].d)
int64_t* rdi = nullptr

if (rdx.d != 0)
    rdi = *(arg1[0x11] + (rdx << 3) - 8)
    arg1[0x12].d = (rdx - 1).d
    int64_t rbp_1 = sx.q(arg1[0x14].d)
    int32_t rax_3 = (rbp_1 + 1).d
    arg1[0x14].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xa4))
        sub_1405a4d70(&arg1[0x13])
    
    *(arg1[0x13] + (rbp_1 << 3)) = rdi

int64_t rbp_2 = sx.q(arg1[0x1c].d)
int32_t rax_5 = (rbp_2 + 1).d
arg1[0x1c].d = rax_5

if (rax_5 s> *(arg1 + 0xe4))
    sub_1405c4ec0(&arg1[0x1b])

int64_t r14 = arg1[0x1b]
int64_t rbp_3 = rbp_2 * 5
*(r14 + (rbp_3 << 3)) = 0
*(r14 + (rbp_3 << 3) + 0x18) = rdi
*(r14 + (rbp_3 << 3) + 0x10) = *(*(zx.q(arg3) * 0xa0 + arg1[0xb] + 0x20) + (zx.q(arg4) << 3))
float zmm0 = *((*(*arg1 + 0x150))(arg1) + 0x520) f+ *(*(r15_1 + r13 + 0x18) + 0x90)
*(r14 + (rbp_3 << 3) + 1) = r12.b
*(r14 + (rbp_3 << 3) + 4) = zmm0
int64_t rax_12 = arg1[0xb]
int64_t* r9 = *(rax_12 + r15_1 + 0x20)
int64_t* rcx_6 = r9
void* rdx_5 = &r9[sx.q(*(rax_12 + r15_1 + 0x28))]
int32_t rcx_7

if (r9 == rdx_5)
label_1408d0042:
    rcx_7 = -1
else
    while (*rcx_6 != *rdi)
        rcx_6 = &rcx_6[1]
        
        if (rcx_6 == rdx_5)
            goto label_1408d0042
    
    rcx_7 = ((rcx_6 - r9) s>> 3).d

void* r12_1 = *(r14 + (rbp_3 << 3) + 0x10)
rdx_5.b = 1
*(r14 + (rbp_3 << 3) + 0x20) = rcx_7
int64_t* rcx_8 = *rdi
void* r15_2 = *(r15_1 + r13 + 0x18)
int32_t rsi_1 = arg1[0x1c].d - 1
(*(*rcx_8 + 0x340))(rcx_8, rdx_5)
void* rcx_9 = rdi[1]

if (rcx_9 != 0)
    rdi[3] = r12_1
    sub_140d3a3a0(rcx_9 + 0x268, r12_1)
    int32_t* rcx_12 = rdi[1] + 0x270
    rdi[2] = r15_2
    sub_140d3a3a0(rcx_12, r15_2)
    *(rdi[1] + 0x278) = 0x3f800000
    rdi[4].b = 1
    *(rdi[1] + 0x27c) = 1
    int64_t* rcx_13 = *rdi
    (*(*rcx_13 + 0x3c0))(rcx_13, rdi[3])

uint32_t rdx_12 = zx.d(*(r14 + (rbp_3 << 3) + 1))
int32_t rcx_14 = *(r14 + (rbp_3 << 3) + 0x20)

if (rdx_12 s< arg1[0xc].d && rcx_14 s>= 0)
    int64_t rax_19 = arg1[0xb]
    uint64_t r8_2 = zx.q(rdx_12.b) * 0xa0
    
    if (rcx_14 s< *(rax_19 + r8_2 + 0x48))
        void* r8_3 = r8_2 + rax_19 + 0x30
        void* rax_21 = *(r8_3 + 0x10)
        
        if (rax_21 != 0)
            r8_3 = rax_21
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_14)
        int64_t rdx_11 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r8_3 + (rdx_11 << 2)) |= 1 << (rcx_14.b & 0x1f)
        rcx_14 = *(r14 + (rbp_3 << 3) + 0x20)
        rdx_12 = zx.d(*(r14 + (rbp_3 << 3) + 1))

if (rcx_14 s>= 0)
    int64_t rax_28 = arg1[0xb]
    uint64_t rdx_14 = zx.q(rdx_12.b) * 0xa0
    
    if (rcx_14 s< *(rax_28 + rdx_14 + 0x88))
        void* r8_5 = rax_28 + 0x70 + rdx_14
        void* rax_29 = *(r8_5 + 0x10)
        
        if (rax_29 != 0)
            r8_5 = rax_29
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_14)
        int64_t rdx_17 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r8_5 + (rdx_17 << 2)) |= 1 << (rcx_14.b & 0x1f)

return zx.q(rsi_1)
