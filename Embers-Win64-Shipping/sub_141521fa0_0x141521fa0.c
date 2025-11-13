// 函数: sub_141521fa0
// 地址: 0x141521fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j_4 = arg3.d
int64_t rax = *(arg1 + 0x38)
uint64_t r12 = zx.q(((arg3 << 1) + 1).d)
int64_t rsi = sx.q(arg3.d)
int32_t rax_1 = *(rax + (rsi << 2))

if (rax_1 == 0)
    int64_t r8 = sx.q((arg3 << 3).d)
    int64_t rax_3 = 4 * r8
    
    if (mulu.dp.q(4, r8) u>> 0x40 != zx.o(0))
        rax_3 = -1
    
    *(*(arg2 + 0xa0) + (rsi << 3)) = j_sub_140a82f30(rax_3)
    int64_t rdx = sx.q((r12 << 3).d)
    int64_t rax_5 = 4 * rdx
    
    if (mulu.dp.q(4, rdx) u>> 0x40 != zx.o(0))
        rax_5 = -1
    
    *(*(arg1 + 0x48) + (rsi << 3)) = j_sub_140a82f30(rax_5)
    int64_t rax_7 = *(arg1 + 0x38)
    *(rax_7 + (rsi << 2)) = 8
    return rax_7

*(rax + (rsi << 2)) = rax_1 * 2
int32_t i = 0
int64_t rdx_1 = sx.q(*(*(arg1 + 0x38) + (rsi << 2)) * r12.d)
int64_t rax_10 = 4 * rdx_1

if (mulu.dp.q(4, rdx_1) u>> 0x40 != zx.o(0))
    rax_10 = -1

int64_t rax_11 = j_sub_140a82f30(rax_10)
int32_t r13 = 0
int64_t rcx_10 = sx.q(*(*(arg2 + 0x38) + (rsi << 2)) * j_4)
int64_t rax_13 = 4 * rcx_10

if (mulu.dp.q(4, rcx_10) u>> 0x40 != zx.o(0))
    rax_13 = -1

*(arg2 + 0xb0) = j_sub_140a82f30(rax_13)

if (*(*(arg1 + 0x40) + (rsi << 2)) * r12.d s> 0)
    int64_t r10_1 = 0
    int64_t r9 = 0
    
    do
        int64_t rdx_4 = *(*(arg1 + 0x48) + (rsi << 3))
        int64_t rcx_14 = sx.q(*(rdx_4 + ((r9 + (rsi << 1)) << 2)))
        
        if (rcx_14.d s< 0)
            int32_t* rax_22 = *(arg1 + 0x60)
            
            if (rax_22 u< arg4)
                int64_t r8_2 = *(arg1 + 0x20)
                int64_t r11_1 = sx.q(i) << 2
                
                do
                    int64_t rdx_6 = sx.q(*rax_22)
                    
                    if (*(r8_2 + (rdx_6 << 3)) == rdx_4 + r11_1)
                        *(r8_2 + (rdx_6 << 3)) = r11_1 + rax_11
                        *(*(arg2 + 0xa8) + (sx.q(*rax_22) << 3)) = *(arg2 + 0xb0) + (sx.q(r13) << 2)
                        break
                    
                    rax_22 = &rax_22[1]
                while (rax_22 u< arg4)
        else
            int64_t r8_1 = rcx_14 << 3
            *(r8_1 + *(arg1 + 0x20)) = rax_11 + (sx.q(i) << 2)
            *(r8_1 + *(arg2 + 0xa8)) = *(arg2 + 0xb0) + (sx.q(r13) << 2)
        
        if (r12.d s> 0)
            uint64_t j_2 = zx.q(r12.d)
            i += r12.d
            uint64_t j
            
            do
                *(rax_11 + (r9 << 2)) = *(*(*(arg1 + 0x48) + (rsi << 3)) + (r9 << 2))
                r9 += 1
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        if (j_4 s> 0)
            uint64_t j_3 = zx.q(j_4)
            r13 += j_4
            uint64_t j_1
            
            do
                *(*(arg2 + 0xb0) + (r10_1 << 2)) = *(*(*(arg2 + 0xa0) + (rsi << 3)) + (r10_1 << 2))
                r10_1 += 1
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
    while (i s< *(*(arg1 + 0x40) + (rsi << 2)) * r12.d)

j_sub_140a74f90(*(*(arg1 + 0x48) + (rsi << 3)))
*(*(arg1 + 0x48) + (rsi << 3)) = rax_11
j_sub_140a74f90(*(*(arg2 + 0xa0) + (rsi << 3)))
int64_t rax_31 = *(arg2 + 0xb0)
*(*(arg2 + 0xa0) + (rsi << 3)) = rax_31
return rax_31
