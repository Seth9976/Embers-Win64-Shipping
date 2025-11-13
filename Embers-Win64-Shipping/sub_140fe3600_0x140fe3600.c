// 函数: sub_140fe3600
// 地址: 0x140fe3600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
int64_t arg_18 = arg3
int32_t arg_10 = arg2
int32_t r12 = 0
int32_t r10 = 0
int128_t var_e8 = data_142d3f670
int128_t zmm4 = var_e8:4.d
int128_t zmm5 = var_e8.d
int128_t var_f8 = zx.o(0)
int128_t zmm12 = 0
int128_t zmm6 = 0
int128_t zmm7 = 0
int128_t zmm13 = 0
int128_t zmm14 = var_e8:0xc.d
int128_t zmm15 = var_e8:8.d
int32_t var_128 = zmm4.d
int32_t var_118 = zmm5.d
uint64_t result_1 = zx.q(arg1)

if (arg2 != 0)
    int128_t zmm0
    int128_t zmm1
    
    do
        int128_t* rcx_2 = zx.q(r10 * arg4) + arg3
        
        if (result_1.d != 0)
            result = result_1
            void* const* i
            
            do
                int128_t zmm3 = *rcx_2
                
                if (not(zmm3.d f> zmm7.d))
                    zmm7 = zmm3
                
                zmm0 = *(rcx_2 + 4)
                
                if (not(zmm0.d f> zmm6.d))
                    zmm6 = zmm0
                
                zmm1 = *(rcx_2 + 8)
                
                if (not(zmm1.d f> zmm12.d))
                    zmm12 = zmm1
                
                int128_t zmm2 = *(rcx_2 + 0xc)
                
                if (not(zmm2.d f> zmm13.d))
                    zmm13 = zmm2
                
                if (not(zmm3.d f< zmm5.d))
                    zmm5 = zmm3
                
                if (not(zmm0.d f< zmm4.d))
                    zmm4 = zmm0
                
                if (not(zmm1.d f< zmm15.d))
                    zmm15 = zmm1
                
                if (not(zmm2.d f< zmm14.d))
                    zmm14 = zmm2
                
                rcx_2 = &rcx_2[1]
                i = result
                result -= 1
            while (i != 1)
            var_118 = zmm5.d
            var_128 = zmm4.d
        
        r10 += 1
    while (r10 u< arg2)
    
    if (arg2 != 0)
        int128_t zmm8
        int128_t var_68_1 = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        
        do
            result = zx.q(r12 * result_1.d)
            int128_t* rbx_3 = zx.q(r12 * arg4) + arg3
            int32_t* rdi_1 = arg5 + (result << 2)
            
            if (result_1.d != 0)
                zmm8.d = zmm5.d f- zmm7.d
                zmm9.d = zmm4.d f- zmm6.d
                zmm10.d = zmm15.d f- zmm12.d
                uint64_t i_2 = result_1
                zmm11.d = zmm14.d f- zmm13.d
                uint64_t i_1
                
                do
                    zmm0.d = (*rbx_3).d f- zmm7.d
                    zmm1.d = (*(rbx_3 + 4)).d f- zmm6.d
                    zmm0.d = zmm0.d f/ zmm8.d
                    zmm1.d = zmm1.d f/ zmm9.d
                    var_e8.d = zmm0.d
                    var_e8:4.d = zmm1.d
                    zmm0.d = (*(rbx_3 + 8)).d f- zmm12.d
                    zmm1.d = (*(rbx_3 + 0xc)).d f- zmm13.d
                    zmm0.d = zmm0.d f/ zmm10.d
                    zmm1.d = zmm1.d f/ zmm11.d
                    var_e8:8.d = zmm0.d
                    var_e8:0xc.d = zmm1.d
                    void var_108
                    result, zmm6, zmm7, zmm8, zmm9 = sub_140ae16d0(&var_e8, &var_108, arg6)
                    rbx_3 = &rbx_3[1]
                    *rdi_1 = *result
                    rdi_1 = &rdi_1[1]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                zmm4 = var_128
                zmm5 = var_118
                arg2 = arg_10
                arg4 = arg_20
                arg3 = arg_18
            
            r12 += 1
        while (r12 u< arg2)

return result
