// 函数: sub_142688990
// 地址: 0x142688990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20
sub_1424373a0(arg2, &var_20)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_1 = var_20
    
    if (i s>= rdx_1[1].d)
        break
    
    void* rax_1 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_1 != 0)
        void* rax_2 = *(rax_1 + 0x250)
        
        if (rax_2 != 0)
            void* rcx_3 = *(rax_2 + 0x130)
            int32_t* rax_3
            
            if (rcx_3 == 0)
                int32_t var_28_1 = data_143dbb200
                uint64_t var_30
                rax_3 = &var_30
                var_30 = data_143dbb1f8.q
            else
                uint128_t zmm1 = *(rcx_3 + 0x1d0)
                int32_t var_48
                rax_3 = &var_48
                var_48 = zmm1.d
                uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                int32_t var_40_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                int32_t var_44_1 = zmm0.d
            
            int64_t rdi_1 = sx.q(arg3[1].d)
            uint64_t var_3c_1 = *rax_3
            int32_t rax_5 = (rdi_1 + 1).d
            arg3[1].d = rax_5
            
            if (rax_5 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            int64_t rax_6 = *arg3
            *(rax_6 + (rdi_1 << 3)) = var_3c_1.d.d
            *(rax_6 + (rdi_1 << 3) + 4) = var_3c_1:4.d.d
    
    i = i_1 + 1
    i_1 = i

return i
