// 函数: sub_142a26770
// 地址: 0x142a26770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x10)
uint64_t rdx = arg4[8]
uint64_t r15 = arg4[2]
uint64_t r12 = arg4[1]
uint64_t r13 = *arg4
uint64_t rdi = 0
uint64_t arg_10 = rdx

while (rdi.d + arg3 s< *(arg1 + 0x35c))
    sub_142a25690(*(arg2 + 8), *(arg2 + 0x10), *(arg2 + 0x18), r15.d, r12.d, r13.d, rdx.d, 
        arg1 + 0x460, arg4 + 0x5a + sx.q((rdi << 3).d))
    rdi = zx.q(rdi.d + 2)
    rdx = arg_10 u>> 0x10
    *(arg2 + 0x10) += sx.q(*(arg2 + 0x18) << 4)
    r15 u>>= 0x10
    r12 u>>= 0x10
    r13 u>>= 0x10
    arg_10 = rdx
    
    if (rdi.d s>= 8)
        break

uint64_t rdi_1 = 0
*(arg2 + 0x10) = rax
uint64_t r11 = arg4[8]
uint64_t r15_1 = arg4[6]
uint64_t r12_1 = arg4[5]
uint64_t r13_1 = arg4[4]
arg_10 = r11
uint64_t result

do
    result = zx.q(rdi_1.d + arg3)
    
    if (result.d s>= *(arg1 + 0x35c))
        break
    
    uint32_t r8_1
    uint32_t r9_1
    uint32_t r10_1
    
    if (result.d != 0)
        r8_1 = zx.d(r15_1.b)
        r9_1 = zx.d(r12_1.b)
        r10_1 = zx.d(r13_1.b)
    else
        r8_1 = 0
        r9_1 = 0
        r10_1 = 0
    
    uint32_t var_58
    var_58.q = arg1 + 0x460
    sub_142a25250(*(arg2 + 0x10), *(arg2 + 0x18), r8_1, r9_1, r10_1, zx.d(r11.b), var_58, 
        arg4 + 0x5a + sx.q((rdi_1 << 3).d))
    rdi_1 = zx.q(rdi_1.d + 1)
    r11 = arg_10 u>> 8
    result = sx.q(*(arg2 + 0x18) << 3)
    *(arg2 + 0x10) += result
    r15_1 u>>= 8
    r12_1 u>>= 8
    r13_1 u>>= 8
    arg_10 = r11
while (rdi_1.d s< 8)

return result
