// 函数: sub_142a2fae0
// 地址: 0x142a2fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0

do
    int32_t rsi_1 = 0
    int32_t rbx_4 = ((zx.d(*((sx.q(rbp.b) s>> 1) + arg2)) * (*(arg1 + 0x1c) - 1)) u>> 8) + 1
    
    if (arg1[3].d s< 0)
        sub_142a2e350(arg1)
    
    int64_t r8_1 = arg1[2]
    uint64_t rcx_2 = zx.q(rbx_4) << 0x38
    
    if (r8_1 u>= rcx_2)
        rsi_1 = 1
        rbx_4 = *(arg1 + 0x1c) - rbx_4
        r8_1 -= rcx_2
    
    uint32_t rdx = zx.d(*(zx.q(rbx_4) + &data_143609200))
    arg1[3].d -= rdx
    arg1[2] = r8_1 << rdx.b
    *(arg1 + 0x1c) = rbx_4 << rdx.b
    rbp = zx.q(*(sx.q(sx.d(rbp.b) + rsi_1) + 0x143600e38))
while (rbp.b s> 0)

return zx.q(neg.d(sx.d(rbp.b)))
