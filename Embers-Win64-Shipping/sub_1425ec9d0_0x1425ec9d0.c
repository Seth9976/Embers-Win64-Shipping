// 函数: sub_1425ec9d0
// 地址: 0x1425ec9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1 + 0x15a0

for (void* r10 = i + 0x1c8; i != r10; i += 0x98)
    bool z_1
    
    if (0 == *(i + 4))
        *(i + 4) = 0
        z_1 = true
    else
        *(i + 4)
        z_1 = false
    
    if (z_1)
        *arg5 = *i
        *(i + 0x70) = zx.q(*(arg1 + 0x1598))
        *(arg1 + 0x1598) += 1
        *(i + 0x40) = arg3
        *(i + 0x48) = arg4
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        double zmm0[0x2] = zx.o(0)
        zmm0[0] = float.d(performanceCount[0])
        zmm0[0] = zmm0[0] f* data_143d796f8
        zmm0[0] = zmm0[0] * 10000000.0
        zmm0[0] = zmm0[0] + 167772160000000.5
        int64_t rcx_3 = int.q(zmm0[0])
        
        if (rcx_3 != -0x8000000000000000 && not(float.d(rcx_3) f== zmm0[0]))
            uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
            zmm0 = zx.o(0)
            zmm0[0] = float.d(rcx_3 - (zx.q(temp0_2) & 1))
        
        int64_t rbx = arg6
        int64_t rax_7 = int.q(zmm0[0])
        int64_t rdx = sx.q(rbx.d)
        zmm0 = zx.o(0)
        *(i + 0x78) = rax_7
        int64_t rcx_5 = sx.q((rbx u>> 0x20).d)
        zmm0[0].d = float.s(rcx_5 * rcx_5 + rdx * rdx)
        
        if (int.d(_mm_sqrt_ss(0, zmm0[0].d).d) == 0)
            void* rcx_8 = *arg2
            int64_t arg_8
            arg_8.d = *(rcx_8 + 0x60)
            arg_8:4.d = *(rcx_8 + 0x64)
            rbx = arg_8
        
        void* rcx_9 = *(i + 0x28)
        
        if (*(rcx_9 + 0x60) != rbx.d || *(rcx_9 + 0x64) != (rbx u>> 0x20).d)
            sub_1425f17c0(arg1, i)
            sub_1425ef4f0(arg1, i, rbx.d, rbx:4.d)
        
        sub_1425ecb70(arg2, i + 0x28, *(i + 0x50))
        *(i + 4)
        *(i + 4) = 1
        sub_1405d1550(arg2)
        int64_t rax_16
        rax_16.b = 1
        return rax_16

sub_1405d1550(arg2)
int64_t rax_2
rax_2.b = 0
return rax_2
