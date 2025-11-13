// 函数: sub_1426b2d40
// 地址: 0x1426b2d40
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
            void* rbx_2 = *(rax + 0x130)
            int64_t var_28
            int32_t rax_6
            float zmm0[0x4]
            
            if (rbx_2 == 0)
                zmm0 = zx.o(data_143dbb208)
                rax_6 = data_143dbb210
            else
                float zmm1[0x4] = *(rbx_2 + 0x1c0)
                uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1, 4))
                float var_18[0x4] = zmm1
                
                if (temp0_2 != 0)
                    *(rbx_2 + 0x180) = zmm1
                    int32_t* rax_4 = sub_140adf5d0(&var_18, &var_28)
                    *(rbx_2 + 0x190) = *rax_4
                    *(rbx_2 + 0x198) = rax_4[2]
                
                zmm0 = zx.o(*(rbx_2 + 0x190))
                rax_6 = *(rbx_2 + 0x198)
            
            var_28 = zmm0.q
            *arg4 = var_28
            arg4[1].d = rax_6
            int32_t rax_7
            rax_7.b = 1
            return rax_7

rax.b = 0
return rax
