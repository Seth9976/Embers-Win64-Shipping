// 函数: sub_142a25f70
// 地址: 0x142a25f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(arg2[2])
char* r14 = arg2
uint64_t r13 = zx.q(*arg2)
uint64_t rdx = zx.q(rcx.d)
uint32_t c = zx.d(*(sx.q(*((zx.q(arg2[1]) << 2) + 0x143603578)) + arg1
    + ((sx.q(arg2[8]) + (sx.q(arg2[4]) << 2)) << 1) + 0x1060))
uint64_t r11_1 = rdx << 3
uint64_t r8_2 = zx.q(*(((rcx + (r13 << 2)) << 2) + 0x143604723))
uint64_t rdi_1 = zx.q(arg3) & 7
uint64_t r9 = zx.q(arg4) & 7
uint32_t rbp = (r9 + (rdi_1 << 3)).d
void* rsi_2 = sx.q((arg4 s>> 3) + *(arg1 + 0x10e0) * (arg3 s>> 3)) * 0xa0 + *(arg1 + 0x10d8)
uint8_t r15 = (r9.d u>> 1).b + ((zx.q(rdi_1.d) & 0xfffffffe) << 1).b
uint64_t result = r9 + (rdi_1 << 3)
uint32_t rdx_1 = zx.d(*(result + 0x1436035b0))
int64_t* r10_2 = rsi_2 + ((rdx + 4) << 3)
uint32_t arg_8 = rdx_1

if (c != 0)
    uint32_t rbx_1 = rbp
    
    if (arg6 s> 0)
        uint64_t i_1 = zx.q(arg6)
        uint64_t i
        
        do
            memset(rsi_2 + 0x5a + sx.q(rbx_1), c, sx.q(arg5))
            rbx_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdx_1 = arg_8
        r14 = arg2
    
    char rcx_7 = rbp.b
    *r10_2 |= *((r13 << 3) + 0x143603440) << rcx_7
    result = *((r13 << 3) + 0x1436033d0) << rcx_7
    *(r11_1 + rsi_2) |= result
    
    if (rdx_1 != 0)
        *(rsi_2 + (r8_2 << 1) + 0x50) |= *((r13 << 1) + 0x143603538) << r15
        result.w = *((r13 << 1) + 0x143603518) << r15
        *(rsi_2 + (r8_2 << 1) + 0x48) |= result.w
    
    if (r14[3] == 0 || r14[8] s<= 0)
        int64_t r8_4 = *((r13 << 3) + 0x1436034b0)
        char rcx_9 = rbp.b
        *r10_2 |= (*(r11_1 + 0x1436033b0) & r8_4) << rcx_9
        result = (*(r11_1 + 0x143603390) & r8_4) << rcx_9
        *(r11_1 + rsi_2) |= result
        
        if (rdx_1 != 0)
            int16_t rdx_3 = *((r13 << 1) + 0x143603558)
            *(rsi_2 + (r8_2 << 1) + 0x50) |= (*((r8_2 << 1) + 0x1436034a8) & rdx_3) << r15
            result.w = *((r8_2 << 1) + 0x143603438) & rdx_3
            rdx_1 = arg_8
            result.w <<= r15
            *(rsi_2 + (r8_2 << 1) + 0x48) |= result.w
        
        if (rcx.b == 0)
            *(rsi_2 + 0x40) |= r8_4 << rbp.b
        
        if (rdx_1 != 0 && r8_2.b == 0)
            result.w = *((r13 << 1) + 0x143603558) << r15
            *(rsi_2 + 0x58) |= result.w

return result
