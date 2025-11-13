// 函数: sub_140f62890
// 地址: 0x140f62890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[0x5a].d
int32_t i_1 = 0
uint128_t zmm13 = arg4
uint64_t result = zx.q(rcx - 4)
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (result.d u<= 1)
    arg1[0x5b].d = 0
else
    zmm2.d = arg4.d f* 3f
    
    if (rcx u<= 1)
        zmm1 = arg1[0x57].d
    else
        zmm1 = *(arg1 + 0x2bc)
    
    zmm0 = arg1[0x5b].d
    zmm1.d = zmm1.d f- zmm0.d
    zmm1.d = zmm1.d f* zmm2.d
    zmm1.d = zmm1.d f+ zmm0.d
    arg1[0x5b].d = zmm1.d

int32_t result_1 = 0
zmm1 = arg2[2]
float zmm9[0x4] = zmm1
int32_t i = 0
zmm9[0] = zmm9[0] f* *arg2
int32_t result_2 = 0
zmm0.d = zmm1.d f* arg2[1]
float temp0[0x4] = _mm_max_ss(zmm9[0], zmm0.d)
temp0[0] = temp0[0] * 0.0009765625f
temp0[0] = temp0[0] f/ zmm1.d

if (arg1[0x56].d s> 0)
    int64_t rbx_1 = 0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    
    do
        void* rdi_1 = arg1[0x55]
        int64_t var_f8
        
        if (*(rdi_1 + rbx_1 + 0xca) != 0)
            zmm0.d = zmm13.d f+ *(rdi_1 + rbx_1 + 0xbc)
            *(rdi_1 + rbx_1 + 0xbc) = zmm0.d
            
            if (not(zmm0.d f<= arg1[0x59].d))
                *(rdi_1 + rbx_1 + 0xca) = 0
                int64_t* r8_1 = rdi_1 + 0xc0 + rbx_1
                arg1[0x5b].d = arg1[0x57].d
                
                if ((*(arg1 + 0x2d4) & 4) == 0)
                    *(rdi_1 + rbx_1 + 0x88) = *r8_1
                
                (*(*arg1 + 0x248))(arg1, zx.q(i), r8_1, arg2, var_f8)
        
        if (*(rdi_1 + rbx_1 + 0xc9) == 0 || not(temp0[0] f== arg1[0x5c].d))
            zmm0 = *(rdi_1 + rbx_1 + 0x24)
            zmm1 = arg2[1]
            
            if (not(zmm0.d f>= -1f))
                zmm0.d = zmm0.d f* temp0[0]
                zmm0.d = zmm0.d f+ zmm1.d
            else if (not(zmm0.d f>= 0f))
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm1.d
            else if (zmm0.d f> 1f)
                zmm0.d = zmm0.d f* temp0[0]
            else
                zmm0.d = zmm0.d f* zmm1.d
            
            zmm1 = *(rdi_1 + rbx_1 + 0x20)
            zmm2 = *arg2
            
            if (not(zmm1.d f>= -1f))
                zmm1.d = zmm1.d f* temp0[0]
                zmm1.d = zmm1.d f+ zmm2.d
            else if (not(zmm1.d f>= 0f))
                zmm1.d = zmm1.d f+ 1f
                zmm1.d = zmm1.d f* zmm2.d
            else if (zmm1.d f> 1f)
                zmm1.d = zmm1.d f* temp0[0]
            else
                zmm1.d = zmm1.d f* zmm2.d
            
            *(rdi_1 + rbx_1 + 0x90)
            arg4 = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d)))
            zmm2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d))).d
            zmm1 = *(rdi_1 + rbx_1 + 0x2c)
            _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            zmm2.d = arg4.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            *(rdi_1 + rbx_1 + 0x88) = _mm_unpacklo_pd(zmm2, zmm2.q)
            arg4 = arg2[1]
            
            if (not(zmm1.d f>= -1f))
                zmm1.d = zmm1.d f* temp0[0]
                zmm1.d = zmm1.d f+ arg4.d
            else if (not(zmm1.d f>= 0f))
                zmm1.d = zmm1.d f+ 1f
                zmm1.d = zmm1.d f* arg4.d
            else if (zmm1.d f> 1f)
                zmm1.d = zmm1.d f* temp0[0]
            else
                arg4.d = arg4.d f* zmm1.d
                zmm1 = arg4
            
            zmm0 = *(rdi_1 + rbx_1 + 0x28)
            zmm2 = *arg2
            
            if (not(zmm0.d f>= -1f))
                zmm0.d = zmm0.d f* temp0[0]
                zmm0.d = zmm0.d f+ zmm2.d
            else if (not(zmm0.d f>= 0f))
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm2.d
            else if (zmm0.d f> 1f)
                zmm0.d = zmm0.d f* temp0[0]
            else
                zmm2.d = zmm2.d f* zmm0.d
                zmm0 = zmm2
            
            zmm1 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d)))
            zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d)))
            *(rdi_1 + rbx_1 + 0x9c) = zmm1.d
            *(rdi_1 + rbx_1 + 0x98) = zmm0.d
            zmm0 = *(rdi_1 + rbx_1 + 0x3c)
            zmm2 = arg2[1]
            
            if (not(zmm0.d f>= -1f))
                zmm0.d = zmm0.d f* temp0[0]
                zmm0.d = zmm0.d f+ zmm2.d
            else if (not(zmm0.d f>= 0f))
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm2.d
            else if (zmm0.d f> 1f)
                zmm0.d = zmm0.d f* temp0[0]
            else
                zmm2.d = zmm2.d f* zmm0.d
                zmm0 = zmm2
            
            zmm1 = *arg2
            int32_t rcx_4 = int.d(zmm0.d)
            zmm0 = *(rdi_1 + rbx_1 + 0x38)
            
            if (not(zmm0.d f>= -1f))
                zmm0.d = zmm0.d f* temp0[0]
                zmm0.d = zmm0.d f+ zmm1.d
            else if (not(zmm0.d f>= 0f))
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm1.d
            else if (zmm0.d f> 1f)
                zmm0.d = zmm0.d f* temp0[0]
            else
                zmm0.d = zmm0.d f* zmm1.d
            
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4))
            zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d)))
            *(rdi_1 + rbx_1 + 0xac) = zmm1.d
            *(rdi_1 + rbx_1 + 0xa8) = zmm0.d
            zmm0 = *(rdi_1 + rbx_1 + 0x34)
            zmm2 = arg2[1]
            
            if (not(zmm0.d f>= -1f))
                zmm0.d = zmm0.d f* temp0[0]
                zmm0.d = zmm0.d f+ zmm2.d
            else if (not(zmm0.d f>= 0f))
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm2.d
            else if (zmm0.d f> 1f)
                zmm0.d = zmm0.d f* temp0[0]
            else
                zmm2.d = zmm2.d f* zmm0.d
                zmm0 = zmm2
            
            zmm1 = *arg2
            int32_t rcx_5 = int.d(zmm0.d)
            zmm0 = *(rdi_1 + rbx_1 + 0x30)
            
            if (not(zmm0.d f>= -1f))
                zmm0.d = zmm0.d f* temp0[0]
                zmm0.d = zmm0.d f+ zmm1.d
            else if (not(zmm0.d f>= 0f))
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm1.d
            else if (zmm0.d f> 1f)
                zmm0.d = zmm0.d f* temp0[0]
            else
                zmm0.d = zmm0.d f* zmm1.d
            
            *(rdi_1 + rbx_1 + 0xc9) = 1
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_5))
            zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d)))
            *(rdi_1 + rbx_1 + 0xa4) = zmm1.d
            *(rdi_1 + rbx_1 + 0xa0) = zmm0.d
            *(rdi_1 + rbx_1 + 0xb0) = *(rdi_1 + rbx_1 + 0x40)
        
        int32_t rcx_15 = *(rdi_1 + rbx_1 + 0xb8)
        
        if (rcx_15 s>= 0 || *(rdi_1 + rbx_1 + 0xc8) != 0)
            zmm2 = *(rdi_1 + rbx_1 + 0x80)
            arg4 = *(rdi_1 + rbx_1 + 0x84)
            zmm2.d = zmm2.d f+ zmm2.d
            arg4.d = arg4.d f+ arg4.d
            *(rdi_1 + rbx_1 + 0xc8) = 0
            zmm7 = zx.o(0)
            zmm6 = zx.o(0)
            zmm2.d = zmm2.d f/ *(rdi_1 + rbx_1 + 0x98)
            arg4.d = arg4.d f/ *(rdi_1 + rbx_1 + 0x9c)
            zmm1.d = zmm2.d f* zmm2.d
            zmm0.d = arg4.d f* arg4.d
            zmm1.d = zmm1.d f+ zmm0.d
            int32_t temp0_12 = _mm_sqrt_ss((zx.o(0)).d, zmm1.d)
            
            if (not(zmm1.d f<= 9.99999994e-09f))
                zmm6.d = 1f f/ temp0_12
                zmm7.d = zmm2.d f* zmm6.d
                zmm6.d = zmm6.d f* arg4.d
            
            if (_mm_and_ps(zmm6, 0x7fffffff).d f<= _mm_and_ps(zmm7, 0x7fffffff).d)
                if (zmm7.d f!= 0f)
                    zmm1.d = zmm6.d f* zmm6.d
                    zmm0.d = zmm7.d f* zmm7.d
                    goto label_140f62dfd
                
                zmm10 = 0x3f800000
            else
                zmm1.d = zmm7.d f* zmm7.d
                zmm0.d = zmm6.d f* zmm6.d
            label_140f62dfd:
                zmm1.d = zmm1.d f/ zmm0.d
                zmm1.d = zmm1.d f+ 1f
                zmm10 = _mm_sqrt_ss(zx.o(0)[0], zmm1.d)
            
            zmm7.d = zmm7.d f* *(rdi_1 + rbx_1 + 0xb0)
            void* rbp = rdi_1 + rbx_1
            zmm6.d = zmm6.d f* *(rdi_1 + rbx_1 + 0xb4)
            zmm7.d = zmm7.d f* temp0_12
            zmm6.d = zmm6.d f* temp0_12
            zmm7.d = zmm7.d f* zmm10[0]
            int64_t r14_1
            void arg_10
            
            if (sub_140d6df00(rbp + 0x48) == 0)
                r14_1 = data_143e20478
                
                if (i == 0)
                    r14_1 = data_143e20468
                
                var_f8 = r14_1
            else
                r14_1 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    rbp + 0x48, &arg_10)
            void* rbp_1 = rdi_1 + rbx_1
            zmm6.d = zmm6.d f* zmm10[0]
            bool rax_8
            int64_t* rdx_2
            uint128_t zmm0_1
            rax_8, rdx_2, zmm0_1 = sub_140d6df00(rbp_1 + 0x60)
            int64_t rbp_2
            void var_f0
            
            if (rax_8 == 0)
                rbp_2 = data_143e20480
                
                if (i == 0)
                    rbp_2 = data_143e20470
                
                int64_t var_e8_1 = rbp_2
            else
                rbp_2 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                    rbp_1 + 0x60, &var_f0)
            rdx_2.b = 2
            zmm6, zmm7 = sub_140e88700(data_143e29f28, rdx_2.b, zmm0_1)
            int64_t* rcx_12 = data_143e29f28 + 0x118
            (*(*rcx_12 + 0x88))(rcx_12, r14_1, 0, zmm7, var_f8)
            int64_t* rcx_14 = data_143e29f28 + 0x118
            (*(*rcx_14 + 0x88))(rcx_14, rbp_2, 0, zmm6 ^ data_142d3f780)
            rcx_15 = *(rdi_1 + rbx_1 + 0xb8)
            result_1 = result_2
        
        result = zx.q(result_1 + 1)
        
        if (rcx_15 == 0xffffffff)
            result = zx.q(result_1)
        
        i += 1
        rbx_1 += 0xd0
        result_2 = result.d
        result_1 = result.d
    while (i s< arg1[0x56].d)

arg1[0x5c].d = temp0[0]

if (result_1 s> 0 || (*(arg1 + 0x2d4) & 4) != 0)
    arg1[0x5a].d = 0
else
    int32_t rcx_16 = arg1[0x5a].d
    
    if (rcx_16 == 0)
        if (result_1 == 0)
            result = zx.q(arg1[0x58].d)
            *(arg1 + 0x2dc) = result.d
            arg1[0x5a].d = 1
    else if (rcx_16 == 1)
        zmm0.d = (*(arg1 + 0x2dc)).d f- zmm13.d
        *(arg1 + 0x2dc) = zmm0.d
        
        if (not(zmm0.d f> 0f))
            zmm0 = *(arg1 + 0x2c4)
            
            if (zmm0.d f<= 0f)
                arg1[0x5a].d = 3
            else
                *(arg1 + 0x2dc) = zmm0.d
                arg1[0x5a].d = 2
    else if (rcx_16 == 2)
        zmm0.d = (*(arg1 + 0x2dc)).d f- zmm13.d
        *(arg1 + 0x2dc) = zmm0.d
        
        if (not(zmm0.d f> 0f))
            if (arg1[0x56].d s<= 0)
                arg1[0x5a].d = 3
            else
                int64_t rcx_20 = 0
                
                do
                    result = arg1[0x55]
                    rcx_20 += 0xd0
                    i_1 += 1
                    *(rcx_20 + result - 0x48) = *(rcx_20 + result - 0x40)
                while (i_1 s< arg1[0x56].d)
                
                arg1[0x5a].d = 3
    else if (rcx_16 == 4)
        result = zx.q(*(arg1 + 0x2cc))
        *(arg1 + 0x2dc) = result.d
        arg1[0x5a].d = 5
    else if (rcx_16 == 5)
        zmm0.d = (*(arg1 + 0x2dc)).d f- zmm13.d
        *(arg1 + 0x2dc) = zmm0.d
        
        if (not(zmm0.d f> 0f))
            arg1[0x5a].d = 3

return result
