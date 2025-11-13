// 函数: sub_1411430c0
// 地址: 0x1411430c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg2 + 0x1b0)
int64_t arg_10 = r14
sub_1410809a0(arg1, arg2, r14, *(arg3 + 0x10))
int32_t r8_1 = *(arg3 + 0x1548)
int64_t arg_8

if (*(arg1 + 0x118) != 0xffff)
    int64_t* rcx = &arg_8
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_14077caf0(arg2, &arg_10, arg1 + 0x118, arg_8)
    sub_1405d1550(&arg_8)

sub_1410e8640(arg1 + 0x11a, arg2, r14, arg5)
int64_t* rsi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* r13 = *(*(arg3 + 8) + 0xd40)
int64_t rcx_4 = *(r13 + 0x18)
int64_t rax_1 = *(r13 + 0x38)
void* rax_2 = &rsi_2[2]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rsi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rsi_2[2]

*(arg2 + 0x30) = rax_2
*rsi_2 = rcx_4
rsi_2[1] = rax_1
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_8[6]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_8[6]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[5] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 2
rcx_8[3] = rsi_2
rcx_8[4].d = 2
*(rcx_8 + 0x24) = 3
sub_14077c370(arg1 + 0x138, arg2, &arg_10, r13 + 0x10)
sub_14077c370(arg1 + 0x140, arg2, &arg_10, r13 + 0x30)
uint64_t r15_1 = zx.q(*(arg1 + 0x14c))

if (r15_1.d u>= 0x10)
    r15_1 = 0x10

if (r15_1.d != 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x14a))
    int64_t rsi_7 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_8.d = zx.d(*(arg1 + 0x148))
    int64_t rax_9 = r15_1 + rsi_7
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r15_1 + 0x10).d)
        rsi_7 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_9 = r15_1 + rsi_7
    
    *(arg2 + 0x30) = rax_9
    memcpy(rsi_7, arg3 + 0x1598, r15_1.d)
    void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_18[6]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_18[6]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_18
    *(arg2 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d99550
    rcx_18[4].d = arg_8.d
    rcx_18[2] = r14
    rcx_18[3] = rsi_7
    *(rcx_18 + 0x24) = r13_1
    rcx_18[5].d = r15_1.d

void arg_30
char result = sub_14077c4b0(arg2, &arg_10, arg1 + 0x14e, &arg_30, 0)
int64_t* rsi_10 = data_14395fa10
int64_t r12_1 = *(arg4 + 8)

if (*(arg1 + 0x156) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x154))
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_25[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_25[5]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_25
    *(arg2 + 8) = &rcx_25[1]
    rcx_25[1] = 0
    result = -0x48
    *rcx_25 = &data_142da77b8
    rcx_25[2] = r14
    rcx_25[3].d = r15_2
    rcx_25[4] = r12_1

if (*(arg1 + 0x15a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x158))
    result = (*(*rsi_10 + 8))(rsi_10)
    
    if (result == 0)
        void*** rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_32[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_32[5]
        
        *(arg2 + 0x30) = rax_18
        void**** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_32
        *(arg2 + 8) = &rcx_32[1]
        rcx_32[1] = 0
        result = -0x38
        *rcx_32 = &data_142da77c8
        rcx_32[2] = r14
        rcx_32[3].d = rbp_1
        rcx_32[4] = rsi_10

return result
