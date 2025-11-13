// 函数: sub_142a2c660
// 地址: 0x142a2c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0

do
    int32_t rsi_1 = 0
    uint32_t rbx_4 = (zx.d(*((sx.q(rbp.b) s>> 1) + arg2 + 5)) * (arg1[1].d - 1) + 0x100) u>> 8
    
    if (*(arg1 + 0xc) s< 0)
        sub_142a23140(arg1)
    
    int64_t r8_1 = *arg1
    uint64_t rcx_2 = zx.q(rbx_4) << 0x38
    
    if (r8_1 u>= rcx_2)
        rsi_1 = 1
        rbx_4 = arg1[1].d - rbx_4
        r8_1 -= rcx_2
    
    uint32_t rdx = zx.d(*(zx.q(rbx_4) + &data_143603f00))
    *(arg1 + 0xc) -= rdx
    *arg1 = r8_1 << rdx.b
    arg1[1].d = rbx_4 << rdx.b
    rbp = zx.q(*(sx.q(sx.d(rbp.b) + rsi_1) + 0x143603360))
while (rbp.b s> 0)

return zx.q(neg.d(sx.d(rbp.b)))
