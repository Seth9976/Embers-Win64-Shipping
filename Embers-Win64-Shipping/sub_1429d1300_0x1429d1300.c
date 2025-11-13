// 函数: sub_1429d1300
// 地址: 0x1429d1300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2 * 2
int64_t r9 = sx.q(arg3)
void* r14 = *arg1
int32_t* rbp = *(r14 + 0x78) + (sx.q(rcx) << 2)
int64_t rdx_1 = arg1[9]
int64_t rax_13

if (zx.d(*(rdx_1 + (sx.q(rbp[1]) << 1))) + zx.d(*(rdx_1 + (sx.q(*rbp) << 1))) u<= 2)
    int64_t rcx_13 = sx.q(*rbp)
    int64_t rax_15 = arg1[0xc]
    int32_t rcx_16
    
    if (*(r14 + 0xc) s<= 0)
        *arg4 = *(arg1[0x12] + (sx.q(*(rax_15 + (rcx_13 << 2))) << 2))
        rax_13 = arg1[0x12]
        rcx_16 = *(rax_13 + (sx.q(*(arg1[0xc] + (sx.q(rbp[1]) << 2))) << 2))
    else
        *arg4 = *(rax_15 + (rcx_13 << 2))
        rax_13 = arg1[0xc]
        rcx_16 = *(rax_13 + (sx.q(rbp[1]) << 2))
    
    arg4[1] = rcx_16
else
    int64_t rcx_1 = sx.q(rcx + 1)
    int32_t r8_1 = *(*(r14 + 0xa8) + ((sx.q(*(*(r14 + 0x90) + (rcx_1 << 2))) + r9) << 2)) * 2
    int64_t rdx_4 = *(r14 + 0x18)
    uint64_t r10_2 = zx.q(*(*(r14 + 0xc0) + ((sx.q(*(*(r14 + 0x90) + (rcx_1 << 2))) + r9) << 1)))
    int64_t rcx_6 = sx.q(r8_1 + 1)
    int64_t r9_1 = arg1[3] + (sx.q(*(rdx_4 + (rcx_6 << 2))) << 2)
    uint64_t rcx_8 = 0
    int32_t r14_1 = *(r9_1 + (r10_2 << 2))
    int32_t r8_2 = *(rdx_4 + (sx.q(r8_1) << 2))
    int32_t rax_11 = (r10_2 + 1).d
    *arg4 = r14_1
    
    if (rax_11 s< r8_2)
        rcx_8 = zx.q(rax_11)
    
    arg4[1] = *(r9_1 + (rcx_8 << 2))
    void* rdx_5 = *arg1
    rax_13 = *(rdx_5 + 0x30)
    
    if (*rbp != *(rax_13 + ((sx.q(*(*(rdx_5 + 0x18) + (rcx_6 << 2))) + r10_2) << 2)))
        int32_t rax_14 = arg4[1]
        *arg4 = rax_14
        arg4[1] = r14_1
        return rax_14

return rax_13
