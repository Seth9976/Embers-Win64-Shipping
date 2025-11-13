// 函数: sub_140408610
// 地址: 0x140408610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int64_t r8 = sx.q(arg6)
int64_t var_48 = r15
int64_t rdi = 0
int64_t i_1 = sx.q(arg2)

do
    int64_t rsi_1 = 0
    int64_t rax
    
    if (i_1 s> 0)
        do
            int64_t rbx_3 = sx.q(*(arg1 + 8)) * rdi + rsi_1
            double zmm0
            zmm0, rax = log(_mm_cvtps_pd(*(arg4 + (rbx_3 << 2))))
            rsi_1 += 1
            *(arg5 + (rbx_3 << 2)) =
                fconvert.s(zmm0 f* 0x3ff71547652b82fe) f- *((rsi_1 << 2) + 0x14370066c)
        while (rsi_1 s< i_1)
        
        r15 = var_48
        r8 = sx.q(arg6)
    
    int64_t i = i_1
    
    if (i_1 s< r15)
        if (r15 - i_1 s>= 4)
            do
                *(arg5 + ((sx.q(*(arg1 + 8)) * rdi + i) << 2)) = 0xc1600000
                *(arg5 + ((sx.q(*(arg1 + 8)) * rdi + i) << 2) + 4) = 0xc1600000
                *(arg5 + ((sx.q(*(arg1 + 8)) * rdi + i) << 2) + 8) = 0xc1600000
                rax = sx.q(*(arg1 + 8)) * rdi + i
                i += 4
                *(arg5 + (rax << 2) + 0xc) = 0xc1600000
            while (i s< r15 - 3)
        
        while (i s< r15)
            rax = sx.q(*(arg1 + 8)) * rdi + i
            i += 1
            *(arg5 + (rax << 2)) = 0xc1600000
    
    rdi += 1
while (rdi s< r8)
