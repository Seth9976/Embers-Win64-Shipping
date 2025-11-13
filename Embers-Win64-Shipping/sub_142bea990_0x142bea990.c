// 函数: sub_142bea990
// 地址: 0x142bea990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x18)
int32_t* r9 = *(arg1 + 0x10)
uint32_t rbx = zx.d(rax[1])
int64_t r10 = sx.q(r9[2])
uint32_t i = zx.d(*rax)
int32_t rdi_1 = zx.d(*(arg1 + 0x22)) * rbx

if (arg4 s< 0 || rbx + arg4 u> r9[1] || arg5 s< 0 || i + arg5 u> *r9
        || &arg2[sx.q(((rdi_1 + 7) u>> 3) * i)] u> arg3)
    return 3

char* rbx_2 = sx.q(r10.d * arg5 + (arg4 s>> 3)) + *(r9 + 0x10)
int32_t rsi_1 = arg4 & 7

if (rsi_1 != 0)
    if (i != 0)
        do
            int32_t r9_2 = 0
            char* r10_1 = rbx_2
            int32_t r14_1 = rdi_1
            
            if (rdi_1 u>= 8)
                uint64_t j_3 = zx.q(rdi_1) u>> 3
                r14_1 -= (j_3 << 3).d
                uint64_t j
                
                do
                    int32_t r9_3 = r9_2 | zx.d(*arg2)
                    arg2 = &arg2[1]
                    r9_2 = r9_3 << 8
                    *r10_1 |= (r9_3 u>> rsi_1.b).b
                    r10_1 = &r10_1[1]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            if (r14_1 s> 0)
                r9_2 |= 0xff00 u>> r14_1.b & zx.d(*arg2)
                arg2 = &arg2[1]
            
            char rcx_6 = rsi_1.b
            *r10_1 |= (r9_2 u>> rcx_6).b
            
            if (r14_1 + rsi_1 s> 8)
                r10_1[1] |= (r9_2 << 8 u>> rcx_6).b
            
            i -= 1
            rbx_2 = &rbx_2[r10]
        while (i s> 0)
else if (i != 0)
    do
        char* r9_1 = rbx_2
        int32_t rcx_3 = rdi_1
        
        if (rdi_1 u>= 8)
            uint64_t j_2 = zx.q(rdi_1) u>> 3
            rcx_3 -= (j_2 << 3).d
            uint64_t j_1
            
            do
                char rax_11 = *arg2
                arg2 = &arg2[1]
                *r9_1 |= rax_11
                r9_1 = &r9_1[1]
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        if (rcx_3 s> 0)
            *r9_1 |= (0xff00 u>> rcx_3.b).b & *arg2
            arg2 = &arg2[1]
        
        i -= 1
        rbx_2 = &rbx_2[r10]
    while (i s> 0)

return 0
