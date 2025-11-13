// 函数: sub_141fc0ca0
// 地址: 0x141fc0ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

int32_t rcx = *(arg1 + 0x70)
uint64_t rbx_1 = 0
void* rsi_1

if (rcx s> 0)
    int64_t* rax_1 = *(arg1 + 0x68)
    rsi_1 = arg1 + 0x68
    
    while (*rax_1 != *(arg2 + 0x18))
        rbx_1 = zx.q(rbx_1.d + 1)
        rax_1 = &rax_1[3]
        
        if (rbx_1.d s>= rcx)
            goto label_141fc0cf7

if (rcx s<= 0 || rbx_1.d == 0xffffffff)
label_141fc0cf7:
    rbx_1 = sx.q(*(arg1 + 0x70))
    rsi_1 = arg1 + 0x68
    int32_t rax_2 = (rbx_1 + 1).d
    *(rsi_1 + 8) = rax_2
    
    if (rax_2 s> *(rsi_1 + 0xc))
        sub_1405a4df0(rsi_1)
    
    uint64_t rdx_1 = rbx_1 * 3
    *(*rsi_1 + (rdx_1 << 3)) = *(arg2 + 0x18)
    *(*rsi_1 + (rdx_1 << 3) + 8) = 0

int64_t rbp_1 = *rsi_1
int64_t rbx_2 = sx.q(rbx_1.d) * 3
int32_t rdx_3 = *(rbp_1 + (rbx_2 << 3) + 8) + 1
*(rbp_1 + (rbx_2 << 3) + 8) = rdx_3
int64_t r14_1 = data_143f3d190
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    uint32_t rax_6 = GetCurrentThreadId()
    rdx_3 = *(rbp_1 + (rbx_2 << 3) + 8)
    rcx_3.b = rax_6 != data_143de5470

if (rdx_3 s> *(r14_1 + (rcx_3 << 2)))
    uint64_t* rcx_5 = *(*(arg1 + 0x50) + 0x68) + 0x320
    rcx_5[1].d = 0
    
    if (*(rcx_5 + 0xc) s<= 0xffffffff)
        sub_1405dadb0(rcx_5, 0)
    
    return 

*(*rsi_1 + (rbx_2 << 3) + 0x10) = *(*(*(*(arg1 + 0x58) + 0x28) + 0x58) + 0x218)
int64_t rax_10 = *rsi_1
*(rax_10 + (rbx_2 << 3) + 0xc) = _mm_cvtpd_ps(zx.o(*(rax_10 + (rbx_2 << 3) + 0x10))).d
void*** rcx_8 = *(arg1 + 0x60)

if (rcx_8 == 0)
    void*** rax_11 = j_sub_140a82f30(0x118)
    
    if (rax_11 == 0)
        rcx_8 = nullptr
    else
        rcx_8 = sub_141f79e30(rax_11, *(arg1 + 0x58), 0)
    
    *(arg1 + 0x60) = rcx_8

(*rcx_8)[0x2b](rcx_8, *(arg3 + 0x90), *(arg3 + 0xa0))
void* rbp_2 = *(*(arg1 + 0x50) + 0x68)

if (rbp_2 == 0)
    return 

if (*(rbp_2 + 0x328) != 0)
    int64_t r14_2 = sx.q(*(rbp_2 + 0x328))
    uint64_t* rsi_3 = *(arg1 + 0x58) + 0x170
    
    if (r14_2.d != 0)
        int32_t rax_14 = rsi_3[1].d
        int32_t rdx_6 = rax_14 + r14_2.d
        
        if (rdx_6 s> *(rsi_3 + 0xc))
            sub_1405dadb0(rsi_3, rdx_6)
            rax_14 = rsi_3[1].d
        
        memcpy(*rsi_3 + (sx.q(rax_14) << 2), *(rbp_2 + 0x320), (r14_2 << 2).d)
        rsi_3[1].d += r14_2.d
    
    int32_t rax_16 = *(rbp_2 + 0x32c)
    *(rbp_2 + 0x328) = 0
    
    if (rax_16 s< 0 && rax_16 != 0)
        sub_1405dadb0(rbp_2 + 0x320, 0)

if (((*(*(arg1 + 0x50) + 0xa4) u>> 1).b & 1) == 0)
    sub_142160510(rbp_2, *(arg1 + 0x58) + 0x180, arg4)
