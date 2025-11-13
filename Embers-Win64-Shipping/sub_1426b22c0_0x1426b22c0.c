// 函数: sub_1426b22c0
// 地址: 0x1426b22c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg3 != 0)
    int64_t arg_18 = *arg3
    rax = sub_140d3c6e0(&arg_18)
    
    if (rax != 0)
        void* rax_2 = sub_142452380()
        void* rcx_1 = *(rax + 0x10)
        int64_t rdx = sx.q(*(rax_2 + 0x38))
        
        if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == rax_2 + 0x30)
            void* rax_3 = *(rax + 0x130)
            int64_t var_18
            float var_10
            
            if (rax_3 == 0)
                var_18 = data_143dbb1f8.q
                var_10 = data_143dbb200
            else
                float zmm1[0x4] = *(rax_3 + 0x1d0)
                var_18.d = zmm1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                var_18:4.d = temp0_1[0]
            
            *arg4 = var_18
            arg4[1].d = var_10
            float rax_5
            rax_5.b = 1
            return rax_5

rax.b = 0
return rax
