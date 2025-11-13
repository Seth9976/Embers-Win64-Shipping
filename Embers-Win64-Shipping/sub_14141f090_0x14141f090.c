// 函数: sub_14141f090
// 地址: 0x14141f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int128_t zmm0
rax, zmm0 = sub_1422f6770(arg2)
int64_t var_58
int64_t arg_20

if (rax == 0)
    int64_t rax_1 = sx.q(arg2[1].d)
    int32_t rsi = 0
    int64_t* rdx = *arg2
    int32_t r8 = 0
    arg_20 = 0
    int64_t r9 = 0
    uint64_t r10_1 = rax_1 << 3 u>> 3
    
    if (rdx u> &rdx[rax_1])
        r10_1 = 0
    
    if (r10_1 != 0)
        do
            void* rcx_1 = *rdx
            rdx = &rdx[1]
            int32_t rax_3 = *(rcx_1 + 0x260)
            
            if (rsi s>= rax_3)
                rax_3 = rsi
            
            rsi = rax_3
            arg_20.d = rax_3
            int32_t rax_4 = *(rcx_1 + 0x264)
            
            if (r8 s>= rax_4)
                rax_4 = r8
            
            r9 += 1
            arg_20:4.d = rax_4
            r8 = rax_4
        while (r9 != r10_1)
    
    sub_1419a97d0(&arg_20, &var_58)
    *arg1 = var_58
    return arg1

int64_t* rcx_3 = arg2[0x11]
(*(*rcx_3 + 8))(rcx_3)
int64_t rax_8 = sx.q(arg2[1].d)
int64_t rsi_1 = 0
int64_t* r15 = *arg2
int128_t zmm6
zmm6.d = zmm0.d f* *(arg2 + 0x7c)
int64_t arg_18 = 0
uint64_t rbp_1 = rax_8 << 3 u>> 3

if (r15 u> &r15[rax_8])
    rbp_1 = 0

if (rbp_1 != 0)
    do
        void* rdx_2 = *r15
        int32_t rcx_4 = *(rdx_2 + 0x268)
        int32_t rax_13 = *(rdx_2 + 0x274) - *(rdx_2 + 0x26c)
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdx_2 + 0x270) - rcx_4)).d f* zmm6.d
        zmm1.d = zmm1.d f+ zmm1.d
        zmm0.d = -0.5f f- zmm1.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(rax_13)).d f* zmm6.d
        int32_t rdi_3 = neg.d(int.d(zmm0.d) s>> 1)
        zmm1.d = zmm1.d f+ zmm1.d
        zmm0.d = -0.5f f- zmm1.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(rcx_4)).d f* zmm6.d
        int32_t rbx_3 = neg.d(int.d(zmm0.d) s>> 1)
        zmm1.d = zmm1.d f+ zmm1.d
        zmm0.d = -0.5f f- zmm1.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdx_2 + 0x26c))).d f* zmm6.d
        arg_20.d = neg.d(int.d(zmm0.d) s>> 1)
        zmm1.d = zmm1.d f+ zmm1.d
        zmm0.d = -0.5f f- zmm1.d
        arg_20:4.d = neg.d(int.d(zmm0.d) s>> 1)
        sub_1419a97d0(&arg_20, &var_58)
        int32_t rcx_7 = var_58.d + rdi_3
        
        if (arg_18.d s>= rcx_7)
            rcx_7 = arg_18.d
        
        arg_18.d = rcx_7
        int32_t rcx_9 = var_58:4.d + rbx_3
        
        if (arg_18:4.d s>= rcx_9)
            rcx_9 = arg_18:4.d
        
        r15 = &r15[1]
        rsi_1 += 1
        arg_18:4.d = rcx_9
    while (rsi_1 != rbp_1)

int64_t var_50
sub_1419a97d0(&arg_18, &var_50)
*arg1 = var_50
return arg1
