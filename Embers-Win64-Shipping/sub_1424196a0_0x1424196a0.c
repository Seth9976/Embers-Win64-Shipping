// 函数: sub_1424196a0
// 地址: 0x1424196a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t rdi = data_143f5bd60
int128_t zmm6 = *(arg2 + 0x34)
uint128_t zmm7 = zx.o(0)
int64_t rbx
int64_t r8

if (rax == 0)
    rbx = 0
    r8 = 0
else
    rbx = 0
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax = data_143de5480
    r8.b = cond:0_1

if (*(rdi + (r8 << 2)) != 0)
    int64_t rdi_1 = data_143f5bd78
    int64_t rcx
    
    if (rax == 0)
        rcx = 0
    else
        bool cond:1_1 = GetCurrentThreadId() != data_143de5470
        rax = data_143de5480
        rcx.b = cond:1_1
    
    int64_t rdi_2 = data_143f5bd90
    zmm7 = _mm_cvtepi32_ps(zx.o(*(rdi_1 + (rcx << 2))))
    
    if (rax != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    zmm6.d = zmm6.d f- _mm_cvtepi32_ps(zx.o(*(rdi_2 + (rbx << 2)))).d

int32_t arg_14 = int.d(zmm6.d)
return sub_1424197a0(arg1, arg2, int.d(zmm7.d).q) __tailcall
