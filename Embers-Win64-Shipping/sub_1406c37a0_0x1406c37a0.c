// 函数: sub_1406c37a0
// 地址: 0x1406c37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbp = *(arg1 + 8)
arg_10 = av_frame_alloc()
int64_t rdi = *(*(rbp + 0x228) + 0x18)
int64_t rax_1 = av_guess_frame_rate(*(rbp + 0xe8), arg3, 0)
void* rdx_1 = arg_10
int32_t rbx = rax_1.d

if (rdx_1 == 0)
    return zx.q((rdx_1 - 0xc).d)

uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
int32_t i
int512_t zmm1
i, zmm1 = sub_1406bcc10(rbp, rdx_1, arg3)

if (i s>= 0)
    int32_t r14_1 = rax_1:4.d
    
    do
        if (i != 0)
            if (rbx == 0 || r14_1 == 0)
                zmm7 = zx.o(0)
            else
                zmm7.q = _mm_cvtepi32_pd(zx.q(r14_1)).q f/ _mm_cvtepi32_pd(zx.q(rbx))
            
            void* rsi_1 = arg_10
            int64_t rax_3 = *(rsi_1 + 0x88)
            double zmm6_1
            
            if (rax_3 != -0x8000000000000000)
                zmm1.o = zx.o(0)
                zmm1.q = float.d(rax_3)
                zmm6_1 = _mm_cvtepi32_pd(zx.q(rdi.d)) f/ _mm_cvtepi32_pd(zx.q(rdi:4.d)) f* zmm1.q
            else
                zmm6_1 = -0x8000000000000
            
            int64_t r13_1 = *(rsi_1 + 0x1a0)
            int32_t r12_1 = *(*(rbp + 0x678) + 0x18)
            int64_t* rax_5 = sub_1406be7c0(rbp + 0x250)
            
            if (rax_5 == 0)
                av_frame_unref(arg_10)
                break
            
            *(rax_5 + 0x54) = *(rsi_1 + 0x80)
            int64_t rcx_4 = *rax_5
            *(rax_5 + 0x5c) = 0
            rax_5[9].d = *(rsi_1 + 0x68)
            *(rax_5 + 0x4c) = *(rsi_1 + 0x6c)
            int32_t r8_3 = *(rsi_1 + 0x74)
            rax_5[6] = zmm6_1
            rax_5[7] = zmm7.q
            rax_5[0xa].d = r8_3
            rax_5[8] = r13_1
            rax_5[5].d = r12_1
            av_frame_move_ref(rcx_4, rsi_1)
            sub_1406be880(rbp + 0x250)
            av_frame_unref(arg_10)
        
        i, zmm1 = sub_1406bcc10(rbp, arg_10, zmm1)
    while (i s>= 0)

av_frame_free(&arg_10)
return 0
