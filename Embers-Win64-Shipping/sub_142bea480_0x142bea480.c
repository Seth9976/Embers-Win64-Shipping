// 函数: sub_142bea480
// 地址: 0x142bea480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x18)
char* r10 = arg2
int32_t* rdx = *(arg1 + 0x10)
uint32_t r9 = zx.d(rax[1])
uint32_t i_1 = zx.d(*rax)
int64_t r11 = sx.q(rdx[2])
int32_t r14_1 = zx.d(*(arg1 + 0x22)) * r9

if (arg4 s< 0 || r9 + arg4 u> rdx[1] || arg5 s< 0 || i_1 + arg5 u> *rdx
        || &r10[sx.q((r14_1 * i_1 + 7) s>> 3)] u> arg3)
    return 3

if (r14_1 == 0 || i_1 == 0)
    return 0

int32_t rsi_1 = arg4 & 7
int32_t rbx = 0
uint32_t i = i_1
uint16_t rax_12 = 0
char* rdi_1 = sx.q(r11.d * arg5 + (arg4 s>> 3)) + *(rdx + 0x10)

if (i_1 != 0)
    do
        void* r11_1 = rdi_1
        int32_t r9_1 = r14_1
        
        if (rsi_1 != 0)
            int32_t r8_1 = r14_1
            
            if (r14_1 s>= 8 - rsi_1)
                r8_1 = 8 - rsi_1
            
            if (i == i_1)
                rax_12 = zx.w(*r10)
                rbx = rsi_1
                r10 = &r10[1]
            else if (rbx s>= r8_1)
                rax_12 u>>= 8
                rbx -= r8_1
            else
                if (r10 u< arg3)
                    rax_12 |= zx.w(*r10)
                    r10 = &r10[1]
                
                rbx += 8 - r8_1
            
            r11_1 = &rdi_1[1]
            int32_t r9_3 = neg.d(r8_1)
            char r8_2 = not.b(0xff << r8_1.b) << (r9_3.b - rsi_1.b + 8) & (rax_12 u>> rbx.b).b
            rax_12 <<= 8
            *rdi_1 |= r8_2
            r9_1 = r9_3 + r14_1
        
        if (r9_1 s>= 8)
            uint64_t j_1 = zx.q(r9_1) u>> 3
            r9_1 += neg.d(j_1.d) << 3
            uint64_t j
            
            do
                uint16_t rcx_11 = zx.w(*r10)
                r10 = &r10[1]
                rax_12 |= rcx_11
                uint16_t rdx_5 = rax_12
                rax_12 <<= 8
                *r11_1 |= (rdx_5 u>> rbx.b).b
                r11_1 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        if (r9_1 s> 0)
            if (rbx s>= r9_1)
                uint16_t r8_5
                r8_5.b = (rax_12 u>> rbx.b).b & (0xff00 u>> r9_1.b).b
                *r11_1 |= r8_5.b
                rbx -= r9_1
            else
                if (r10 u< arg3)
                    rax_12 |= zx.w(*r10)
                    r10 = &r10[1]
                
                uint16_t r8_4
                r8_4.b = (rax_12 u>> rbx.b).b & (0xff00 u>> r9_1.b).b
                *r11_1 |= r8_4.b
                rbx += 8 - r9_1
                rax_12 <<= 8
        
        i -= 1
        rdi_1 = &rdi_1[r11]
    while (i s> 0)

return 0
