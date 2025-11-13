// 函数: sub_142a2b4d0
// 地址: 0x142a2b4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg4)
int64_t r14_1 = r15 * 3 + *(arg1 + 0x1168)
uint64_t rbp
rbp.b = 0

do
    int32_t rsi_1 = 0
    uint32_t rbx_4 = (zx.d(*((sx.q(rbp.b) s>> 1) + r14_1 + 0x776)) * (arg3[1].d - 1) + 0x100) u>> 8
    
    if (*(arg3 + 0xc) s< 0)
        sub_142a23140(arg3)
    
    int64_t r8 = *arg3
    uint64_t rcx_2 = zx.q(rbx_4) << 0x38
    
    if (r8 u>= rcx_2)
        rsi_1 = 1
        rbx_4 = arg3[1].d - rbx_4
        r8 -= rcx_2
    
    uint32_t rdx = zx.d(*(zx.q(rbx_4) + &data_143603f00))
    *(arg3 + 0xc) -= rdx
    *arg3 = r8 << rdx.b
    arg3[1].d = rbx_4 << rdx.b
    rbp = zx.q(*(sx.q(sx.d(rbp.b) + rsi_1) + &data_143603258))
while (rbp.b s> 0)

int64_t r8_2 = *(arg2 + 0x188)
int32_t rdx_2 = neg.d(sx.d(rbp.b))

if (r8_2 != 0)
    int64_t rcx_6 = sx.q(rdx_2) + (r15 << 2)
    *(r8_2 + (rcx_6 << 2) + 0x3060) += 1

return zx.q(rdx_2 + 0xa)
