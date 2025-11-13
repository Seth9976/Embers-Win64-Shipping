// 函数: sub_142b01540
// 地址: 0x142b01540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
uint64_t r9 = *(arg1 + 0x18)
int64_t i = 0
char* r15 = *(arg1 + 0x10)
int32_t (* rdi)[0x4] = *(arg1 + 0x30)
int64_t rsi = sx.q(*(rbx + 0x4c))
int32_t r12 = 0
uint64_t arg_8 = r9

if (r15 u< r9)
    int64_t rbx_1 = rsi
    
    while (*arg2 s<= 0)
        switch (rsi.d)
            case 0
                uint64_t rax = zx.q(*r15)
                
                if (rax.b == 0)
                    rsi = 1
                    r15 = &r15[1]
                    rbx_1 = 1
                else if (rax.b != 0xff)
                    rsi = 8
                    rbx_1 = 8
                else
                    rsi = 5
                    r15 = &r15[1]
                    rbx_1 = 5
            case 1, 2, 3, 5, 6, 7
                if (*r15 != *(rbx_1 + &data_143665578))
                    int32_t r15_1 = r15.d - *(arg1 + 0x10)
                    int32_t rdx_1 = rsi.d & 3
                    r15 = *(arg1 + 0x10)
                    
                    if (r15_1 != rdx_1)
                        char rbx_2 = *(arg1 + 2)
                        *(arg1 + 2) = 0
                        *(arg1 + 0x10) = &data_143665578 + (zx.q(rsi.d) & 4)
                        *(arg1 + 0x18) = sx.q(rdx_1 - r15_1) + &data_143665578 + (zx.q(rsi.d) & 4)
                        sub_142b00540(arg1, arg2)
                        r9 = arg_8
                        *(arg1 + 0x18) = r9
                        *(arg1 + 2) = rbx_2
                    
                    rsi = 8
                    rbx_1 = 8
                else
                    rsi = zx.q(rsi.d + 1)
                    rbx_1 += 1
                    r15 = &r15[1]
                    
                    if (rsi.d == 4)
                        rsi = 8
                        r12 = r15.d - *(arg1 + 0x10)
                        rbx_1 = 8
                    else if (rsi.d == 8)
                        rsi = 9
                        r12 = r15.d - *(arg1 + 0x10)
                        rbx_1 = 9
            case 8
                *(arg1 + 0x10) = r15
                
                if (rdi != 0)
                    sub_142b006b0(arg1, arg2)
                else
                    sub_142b00540(arg1, arg2)
                
                r9 = arg_8
                r15 = *(arg1 + 0x10)
            case 9
                *(arg1 + 0x10) = r15
                
                if (rdi != 0)
                    sub_142b00ea0(arg1, arg2)
                else
                    sub_142b00d20(arg1, arg2)
                
                r9 = arg_8
                r15 = *(arg1 + 0x10)
        
        if (r15 u>= r9)
            break
    
    i = 0

uint128_t zmm1 = _mm_shuffle_epi32(zx.o(r12), 0)

if (rdi != 0 && r12 != 0)
    uint64_t rcx_9 = (*(arg1 + 0x30) - rdi + 3) u>> 2
    
    if (rdi u> *(arg1 + 0x30))
        rcx_9 = 0
    
    if (rcx_9 != 0)
        if (rcx_9 u>= 8)
            do
                i += 8
                *rdi = _mm_add_epi32(*rdi, zmm1)
                rdi[1] = _mm_add_epi32(rdi[1], zmm1)
                rdi = &rdi[2]
            while (i u< (rcx_9 & 0xfffffffffffffff8))
        
        for (; i u< rcx_9; i += 1)
            *rdi += r12
            rdi = &(*rdi)[1]

*(arg1 + 0x10) = r15

if (r15 != r9 || *(arg1 + 2) == 0)
    *(rbx + 0x4c) = rsi.d
    return 

int32_t rcx_10 = rsi.d

if (rsi.d == 0)
    *(rbx + 0x4c) = rsi.d
else if (rcx_10 == 8)
    sub_142b00540(arg1, arg2)
    *(rbx + 0x4c) = rsi.d
else if (rcx_10 == 9)
    sub_142b00d20(arg1, arg2)
    *(rbx + 0x4c) = rsi.d
else
    int32_t rdx_6 = rsi.d
    *(arg1 + 0x10) = &data_143665578 + (zx.q(rdx_6) & 4)
    *(arg1 + 0x18) = (zx.q(rdx_6) & 3) + &data_143665578 + (zx.q(rdx_6) & 4)
    sub_142b00540(arg1, arg2)
    *(arg1 + 0x18) = arg_8
    *(arg1 + 0x10) = r15
    *(rbx + 0x4c) = 8
