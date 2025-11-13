// 函数: sub_141f06fc0
// 地址: 0x141f06fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_141f02470(arg2)

if (rax != 0)
    rax[1].d += 1

int64_t rsi = sx.q(*(arg1 + 0x118))
int32_t rax_1 = (rsi + 1).d
*(arg1 + 0x118) = rax_1

if (rax_1 s> *(arg1 + 0x11c))
    sub_1405a4f90(arg1 + 0x110)

void** rax_4 = (rsi << 4) + *(arg1 + 0x110)
*rax_4 = &rax[2]
rax_4[1] = rax

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t temp2_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax)[1](rax, 1)

void* result = *(*(arg1 + 0x110) + sx.q(*(arg1 + 0x118)) * 0x10 - 0x10)
int32_t rax_8 = data_143a2d780
*(result + 0xc) = rax_8
data_143a2d780 = rax_8 + 1
char rax_10 = *(result + 2)

if (rax_10 u<= 1)
    int32_t rax_11 = *(arg1 + 0x118)
    int32_t r10_1
    r10_1.b = rax_10 == 0
    int64_t rdx_2 = sx.q(rax_11 - 2)
    
    if (rax_11 - 2 s>= 0)
        int64_t r8_2 = rdx_2 << 4
        int64_t temp3_1
        
        do
            void* rcx_6 = *(r8_2 + *(arg1 + 0x110))
            
            if (*(rcx_6 + 4) == *(result + 4))
                char r9_1 = *(rcx_6 + 1)
                
                if ((r9_1 & 1) != 0)
                    *(result + 1) |= 1
                    break
                
                if (zx.d(*(rcx_6 + 2)) == r10_1)
                    *(rcx_6 + 1) = r9_1 | 1
                    *(result + 1) |= 1
            
            r8_2 -= 0x10
            temp3_1 = rdx_2
            rdx_2 -= 1
        while (temp3_1 - 1 s>= 0)

void* i = *(arg1 + 0x120)

for (void* rdx_4 = sx.q(*(arg1 + 0x128)) * 0x70 + i; i != rdx_4; i += 0x70)
    *(i + 8) = 0

sub_141b84450(&arg2[0x10])
return result
