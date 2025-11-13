// 函数: sub_140f7f130
// 地址: 0x140f7f130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
int64_t* rdi
int64_t r14

if ((*(arg4 + 8) & 0xc) == 0)
    rdi = 0.q
    r14.b = 0
else
    rdi = *(arg4 + 0x28)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rax = 1
    
    if (*(arg4 + 0x18) != data_143e1e158)
        r14.b = 0
    else
        r14 = 1

if ((rax & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r14.b == 0)
    sub_140dc0fb0(arg1, arg2, arg3, arg4)
    return arg2

Dbg1::Reset(&arg1[0x95])
uint128_t zmm1 = _mm_cvtps_pd(_mm_max_ss(_mm_cvtepi32_ps(zx.o((*(*arg1 + 0x290))(arg1))).d, 0).q)

if (not(zmm1.q f== arg1[0x7e]))
    arg1[0x7e] = zmm1.q
    sub_140f44620(&arg1[0x78], zmm1)
    sub_140f89930(arg1)

sub_140f89930(arg1)
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
