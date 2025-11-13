// 函数: sub_1418394c0
// 地址: 0x1418394c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result
int128_t zmm6
result, zmm6 = sub_141845480(arg1, arg2)
int64_t* rdx = *(arg1 + 0x50)
int64_t rdi = 0
int64_t r9 = 0
int64_t r8 = 0
void* r10 = &rdx[sx.q(*(arg1 + 0x58)) * 3]

if (rdx != r10)
    do
        int64_t rcx_1 = rdx[1]
        
        if (r8 u< rcx_1)
            if (*rdx u>= r8)
                r8 = *rdx
            
            int64_t rax_2 = rcx_1 - r8
            r8 = rcx_1
            rdi += rax_2
        
        r9 += rdx[2]
        rdx = &rdx[3]
    while (rdx != r10)
    
    if (rdi != 0)
        int128_t var_18 = zmm6
        zmm6.q = float.d(r9)
        
        if (r9 s< 0)
            zmm6.q = zmm6.q f+ 1.8446744073709552e+19
        
        double zmm0 = sub_140a48b40()
        int64_t zmm1 = float.d(rdi)
        
        if (rdi s< 0)
            zmm1 = zmm1 f+ 1.8446744073709552e+19
        
        zmm6.q = zmm6.q f/ (zmm0 f* zmm1)
        return zmm6.q

result.o = zx.o(0)
return result
