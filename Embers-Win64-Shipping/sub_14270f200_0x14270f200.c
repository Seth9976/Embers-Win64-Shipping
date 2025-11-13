// 函数: sub_14270f200
// 地址: 0x14270f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg2 + 0x34)
arg2[6].d
sub_1426cce30(arg1 + 0x50, rax)
arg2[6].d
sub_1426cce30(arg1 + 0x208, rax)
arg2[6].d
sub_1426cce30(arg1 + 0x240, rax)
arg2[6].d
sub_1426cce30(arg1 + 0x88, rax)
arg2[6].d
sub_1426cce30(arg1 + 0xc0, rax)
char rax_2 = sub_1426e25f0(arg1 + 0x50)
char rax_3 = sub_1426e25f0(arg1 + 0x208)
char rax_4 = sub_1426e25f0(arg1 + 0x240)
sub_1426e2610(arg1 + 0x88)
sub_1426e2610(arg1 + 0xc0)
int64_t result = arg2
void* rcx_11 = *(result + 0x58)

if (rcx_11 != 0)
    int64_t* rbx_1 = *(rcx_11 + 0x120)
    uint64_t arg_20 = rbx_1
    
    if (rbx_1 != 0)
        void* rax_5 = sub_14269bba0()
        void* rdx_5 = rbx_1[2]
        result = sx.q(*(rax_5 + 0x38))
        
        if (result.d s<= *(rdx_5 + 0x38))
            int64_t result_3 = result
            result = *(rdx_5 + 0x30)
            
            if (*(result + (result_3 << 3)) == rax_5 + 0x30 && rax != 0)
                uint128_t zmm10_1
                int128_t zmm11_1
                result, zmm10_1, zmm11_1 = sub_1426f8620(arg1, rbx_1, rax)
                int64_t result_2 = result
                int64_t result_4 = result
                
                if (result != 0)
                    int64_t var_418 = 0
                    int32_t var_410_1 = 0
                    void* rdx_7
                    
                    if (*(arg1 + 0x200) == 0)
                        rdx_7 = nullptr
                    else
                        void* rax_6 = sub_142736ba0()
                        
                        if (rax_6 == 0)
                            rdx_7 = nullptr
                        else
                            rdx_7 = *(arg1 + 0x200)
                            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                            
                            if (rax_7.d s> *(rdx_7 + 0x38)
                                    || *(*(rdx_7 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                                rdx_7 = nullptr
                    
                    int64_t* rbx_2 = arg2
                    int128_t zmm6_1
                    uint128_t zmm7_1
                    int32_t zmm8_1
                    int32_t zmm9_1
                    result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_1426e7790(rbx_2, rdx_7, &var_418)
                    
                    if (result.b != 0)
                        int128_t var_58_1 = zmm6_1
                        uint128_t var_68_1 = zmm7_1
                        int64_t var_390
                        sub_14265ad90(&var_390, result_4, rax, *(arg1 + 0x278))
                        int64_t* var_388
                        
                        if ((*(arg1 + 0x1f0) & 1) != 0)
                            uint128_t var_98_1 = zmm10_1
                            bool cond:0_1 = *(arg1 + 0x1f8) != 2
                            int128_t var_a8_1 = zmm11_1
                            int64_t* result_1 = nullptr
                            int32_t var_420_1 = 0
                            uint128_t (* rax_9)(int64_t arg1, int64_t* arg2, int64_t* arg3, 
                                int32_t arg4, void* arg5, int64_t* arg6, int64_t* arg7, void* arg8)
                            uint128_t (* rdi_1)(int64_t arg1, int64_t* arg2, int64_t* arg3, 
                                int32_t arg4, void* arg5, int64_t* arg6, int64_t* arg7, void* arg8)
                            
                            if (cond:0_1)
                                rdi_1 = sub_1426f8af0
                                rax_9 = sub_1426f8d00
                            else
                                rdi_1 = sub_1426f9680
                                rax_9 = sub_1426f98b0
                            
                            if (rax_3 != 0)
                                rdi_1 = rax_9
                            
                            void*** rax_10 = sub_140a84c80(0, 0x30, 0)
                            void*** var_308_1 = rax_10
                            
                            if (rax_10 != 0)
                                *rax_10 = &data_14347ee50
                                sub_140d3a3a0(&rax_10[1], arg1)
                                rax_10[2] = rdi_1
                                rax_10[4] = sub_140a387b0()
                                void** r8_10 = *rax_10
                                r8_10[8](rax_10, &result_1, r8_10)
                                (*rax_10)[7](rax_10, 0)
                                int64_t rax_13 = sub_140a84c80(rax_10, 0, 0)
                                int64_t var_308_2 = rax_13
                                
                                if (rax_13 != 0)
                                    sub_140a74f90(rax_13)
                            else if (var_420_1 != 0)
                                int64_t* result_5 = result_1
                                
                                if (result_5 != 0)
                                    (*(*result_5 + 0x38))(result_5, 0)
                                    int64_t* result_6 = result_1
                                    
                                    if (result_6 != 0)
                                        result_1 = sub_140a84c80(result_6, 0, 0)
                            
                            (*(*result_2 + 0x6d8))(result_2)
                            int64_t* rbx_4 = arg2
                            int64_t** var_408
                            sub_1426c5aa0(&var_408, arg1, rbx_4, 0xffffffff)
                            int32_t i_2
                            int32_t i = i_2
                            int64_t** r8_12 = var_408
                            
                            while (true)
                                if (i s>= r8_12[1].d)
                                    goto label_14270f5a8
                                
                                if ((*(r8_12 + 0x13e) & 1) != 0)
                                    break
                                
                                double var_3f8
                                
                                if (not(var_3f8 < 0.0))
                                    int64_t performanceCount
                                    QueryPerformanceCounter(&performanceCount)
                                    i = i_2
                                    r8_12 = var_408
                                    
                                    if (float.d(performanceCount) f* data_143d796f8
                                            f+ 0x4170000000000000 >= var_3f8)
                                        goto label_14270f5a8
                                
                                int64_t* rax_17
                                rax_17.b = 1
                                
                                while (true)
                                    if (rax_17.b == 0)
                                        *(r8_12 + 0x124) = i
                                        result = (*(*result_2 + 0x6e0))(result_2)
                                        
                                        if (var_420_1 == 0)
                                            result = result_1
                                        label_14270f7d2:
                                            
                                            if (result != 0)
                                                result = sub_140a74f90(result)
                                        else
                                            int64_t* result_8 = result_1
                                            
                                            if (result_8 != 0)
                                                (*(*result_8 + 0x38))(result_8, 0)
                                                result = result_1
                                                
                                                if (result != 0)
                                                    result = sub_140a84c80(result, 0, 0)
                                                    result_1 = result
                                                
                                                int32_t var_420_2 = 0
                                                goto label_14270f7d2
                                        
                                        goto label_14270fdac
                                    
                                    void var_338
                                    int128_t zmm0_3 = sub_1426df900(arg1, &var_338, rbx_4, i)
                                    int32_t r14_2 = 0
                                    int64_t var_3f0
                                    char var_3e6
                                    
                                    if (var_410_1 s> 0)
                                        do
                                            if (var_388 != 0)
                                                var_388[1].d += 1
                                            
                                            int64_t* result_7 = nullptr
                                            int64_t r8_14 = var_418
                                            
                                            if (var_420_1 != 0)
                                                result_7 = result_1
                                            
                                            int64_t var_368 = var_390
                                            int64_t* var_360_1 = var_388
                                            
                                            if (var_388 != 0)
                                                var_388[1].d += 1
                                            
                                            int32_t var_430
                                            var_430.q = rax
                                            (*(*result_7 + 0x48))(result_7, &var_338, 
                                                r8_14 + sx.q(r14_2) * 0xc, 0, result_2, arg_20, 
                                                &var_368, var_430)
                                            zmm6_1 = zmm0_3
                                            
                                            if (var_388 != 0)
                                                var_388[1].d -= 1
                                                
                                                if (var_388[1].d == 1)
                                                    (**var_388)(var_388)
                                                    int32_t rax_25 = *(var_388 + 0xc)
                                                    *(var_388 + 0xc) -= 1
                                                    
                                                    if (rax_25 == 1)
                                                        (*(*var_388 + 8))(var_388, 1)
                                            
                                            uint64_t var_440_1
                                            var_440_1.d = zmm9_1
                                            int64_t var_448_1
                                            var_448_1.d = zmm8_1
                                            zmm0_3 = sub_142714350(&var_408, zx.d(*(arg1 + 0x34)), 
                                                zx.d(*(arg1 + 0x4a)), zmm6_1.d, var_448_1.d, 
                                                var_440_1.d)
                                            
                                            if (rax_4 != 0 && not(zmm6_1.d f< 3.39999995e+38f))
                                                zmm0_3 = 0xff7fffff
                                                var_3f0.d = 0xff7fffff
                                                var_3e6 = (var_3e6 & 0xfe) | 2
                                            
                                            r14_2 += 1
                                        while (r14_2 s< var_410_1)
                                        
                                        rbx_4 = arg2
                                    
                                    sub_1426ec620(&var_408)
                                    r8_12 = var_408
                                    i = i_2
                                    
                                    if ((*(r8_12 + 0x13e) & 1) != 0)
                                        break
                                    
                                    i += 1
                                    rax_17.b = var_3e6 & 0xfd
                                    var_3f0 = 0
                                    rax_17.b |= 1
                                    i_2 = i
                                    var_3e6 = rax_17.b
                                    
                                    if (i s< r8_12[1].d)
                                        do
                                            int32_t r9_3 = *(&(*r8_12)[sx.q(i)] + 4)
                                            
                                            if (test_bit(r9_3, 0x1e) || r9_3 s< 0)
                                                rax_17.b = 0
                                            else
                                                rax_17.b = 1
                                            
                                            if (rax_17.b != 0)
                                                break
                                            
                                            i += 1
                                            i_2 = i
                                        while (i s< r8_12[1].d)
                                        
                                        break
                                    
                                label_14270f5a8:
                                    rax_17.b = 0
                            
                            goto label_14270f5a8
                        
                        (*(*result_4 + 0x6d8))(result_4)
                        int32_t i_1
                        int64_t** r8_18
                        
                        if (rax_3 == 0)
                            int64_t** var_3b8
                            sub_1426c5aa0(&var_3b8, arg1, rbx_2, 0xffffffff)
                            int32_t i_4
                            i_1 = i_4
                            r8_18 = var_3b8
                            
                            while (true)
                                if (i_1 s>= r8_18[1].d)
                                    goto label_14270fb3d
                                
                                if ((*(r8_18 + 0x13e) & 1) != 0)
                                    break
                                
                                double var_3a8
                                
                                if (not(var_3a8 < 0.0))
                                    int64_t performanceCount_2
                                    QueryPerformanceCounter(&performanceCount_2)
                                    i_1 = i_4
                                    r8_18 = var_3b8
                                    
                                    if (float.d(performanceCount_2) f* data_143d796f8
                                            f+ 0x4170000000000000 >= var_3a8)
                                        goto label_14270fb3d
                                
                                int64_t* rax_55
                                rax_55.b = 1
                                
                                while (true)
                                    if (rax_55.b == 0)
                                        goto label_14270fd85
                                    
                                    void var_318
                                    sub_1426df900(arg1, &var_318, rbx_2, i_1)
                                    int32_t r14_4 = 0
                                    
                                    if (var_410_1 s> 0)
                                        do
                                            if (var_388 != 0)
                                                var_388[1].d += 1
                                            
                                            int64_t rdx_24 = var_418
                                            int64_t var_348 = var_390
                                            int64_t* var_340_1 = var_388
                                            int128_t var_2e8 = zx.o(0)
                                            
                                            if (var_388 != 0)
                                                var_388[1].d += 1
                                            
                                            void var_248
                                            sub_142642800(&var_248, rax, result_4, &var_318, 
                                                rdx_24 + sx.q(r14_4) * 0xc, &var_348, &var_2e8, 
                                                0x7f7fffff)
                                            int32_t var_210 = var_210 & 0xfffffffe
                                            void var_130
                                            char rax_60 = sub_14266a200(arg_20, 
                                                sub_142642440(&var_130, &var_248), 0, 0)
                                            int64_t var_1d0
                                            
                                            if (var_1d0 != 0)
                                                sub_140a74f90(var_1d0)
                                            
                                            int64_t* var_1f8
                                            
                                            if (var_1f8 != 0)
                                                var_1f8[1].d -= 1
                                                
                                                if (var_1f8[1].d == 1)
                                                    (**var_1f8)(var_1f8)
                                                    int32_t rax_64 = *(var_1f8 + 0xc)
                                                    *(var_1f8 + 0xc) -= 1
                                                    
                                                    if (rax_64 == 1)
                                                        (*(*var_1f8 + 8))(var_1f8, 1)
                                            
                                            int64_t* var_220
                                            
                                            if (var_220 != 0)
                                                var_220[1].d -= 1
                                                
                                                if (var_220[1].d == 1)
                                                    (**var_220)(var_220)
                                                    int32_t rax_70 = *(var_220 + 0xc)
                                                    *(var_220 + 0xc) -= 1
                                                    
                                                    if (rax_70 == 1)
                                                        (*(*var_220 + 8))(var_220, 1)
                                            
                                            if (var_388 != 0)
                                                var_388[1].d -= 1
                                                
                                                if (var_388[1].d == 1)
                                                    (**var_388)(var_388)
                                                    int32_t rax_76 = *(var_388 + 0xc)
                                                    *(var_388 + 0xc) -= 1
                                                    
                                                    if (rax_76 == 1)
                                                        (*(*var_388 + 8))(var_388, 1)
                                            
                                            int64_t* var_448_3
                                            var_448_3.b = rax_2
                                            sub_142714420(&var_3b8, zx.q(*(arg1 + 0x34)), 
                                                zx.d(*(arg1 + 0x4a)), rax_60, var_448_3.b)
                                            result_4 = result_2
                                            r14_4 += 1
                                        while (r14_4 s< var_410_1)
                                        
                                        rbx_2 = arg2
                                    
                                    sub_1426ec620(&var_3b8)
                                    r8_18 = var_3b8
                                    i_1 = i_4
                                    
                                    if ((*(r8_18 + 0x13e) & 1) != 0)
                                        break
                                    
                                    i_1 += 1
                                    char var_396
                                    rax_55.b = var_396 & 0xfd
                                    int64_t var_3a0_1 = 0
                                    rax_55.b |= 1
                                    i_4 = i_1
                                    var_396 = rax_55.b
                                    
                                    if (i_1 s< r8_18[1].d)
                                        do
                                            int32_t r9_11 = *(&(*r8_18)[sx.q(i_1)] + 4)
                                            
                                            if (test_bit(r9_11, 0x1e) || r9_11 s< 0)
                                                rax_55.b = 0
                                            else
                                                rax_55.b = 1
                                            
                                            if (rax_55.b != 0)
                                                break
                                            
                                            i_1 += 1
                                            i_4 = i_1
                                        while (i_1 s< r8_18[1].d)
                                        
                                        break
                                    
                                label_14270fb3d:
                                    rax_55.b = 0
                            
                            goto label_14270fb3d
                        
                        int64_t** var_3e0
                        sub_1426c5aa0(&var_3e0, arg1, rbx_2, 0xffffffff)
                        int32_t i_3
                        i_1 = i_3
                        r8_18 = var_3e0
                    label_14270f830:
                        
                        if (i_1 s>= r8_18[1].d)
                            goto label_14270f87d
                        
                        if ((*(r8_18 + 0x13e) & 1) != 0)
                            goto label_14270f87d
                        
                        double var_3d0
                        
                        if (not(var_3d0 < 0.0))
                            int64_t performanceCount_1
                            QueryPerformanceCounter(&performanceCount_1)
                            i_1 = i_3
                            r8_18 = var_3e0
                            
                            if (float.d(performanceCount_1) f* data_143d796f8 f+ 0x4170000000000000
                                    >= var_3d0)
                                goto label_14270f87d
                        
                        int64_t* rax_32
                        rax_32.b = 1
                        
                        while (true)
                            if (rax_32.b == 0)
                            label_14270fd85:
                                *(r8_18 + 0x124) = i_1
                                result = (*(*result_4 + 0x6e0))(result_4)
                                break
                            
                            void var_328
                            sub_1426df900(arg1, &var_328, rbx_2, i_1)
                            int32_t r14_3 = 0
                            
                            if (var_410_1 s> 0)
                                do
                                    if (var_388 != 0)
                                        var_388[1].d += 1
                                    
                                    int64_t rdx_18 = var_418
                                    int64_t var_358 = var_390
                                    int64_t* var_350_1 = var_388
                                    int128_t var_2f8 = zx.o(0)
                                    
                                    if (var_388 != 0)
                                        var_388[1].d += 1
                                    
                                    void var_2d8
                                    sub_142642800(&var_2d8, rax, result_4, 
                                        rdx_18 + sx.q(r14_3) * 0xc, &var_328, &var_358, &var_2f8, 
                                        0x7f7fffff)
                                    int32_t var_2a0 = var_2a0 & 0xfffffffe
                                    void var_1b8
                                    char rax_36 = sub_14266a200(arg_20, 
                                        sub_142642440(&var_1b8, &var_2d8), 0, 0)
                                    int64_t var_260
                                    
                                    if (var_260 != 0)
                                        sub_140a74f90(var_260)
                                    
                                    int64_t* var_288
                                    
                                    if (var_288 != 0)
                                        var_288[1].d -= 1
                                        
                                        if (var_288[1].d == 1)
                                            (**var_288)(var_288)
                                            int32_t rax_40 = *(var_288 + 0xc)
                                            *(var_288 + 0xc) -= 1
                                            
                                            if (rax_40 == 1)
                                                (*(*var_288 + 8))(var_288, 1)
                                    
                                    int64_t* var_2b0
                                    
                                    if (var_2b0 != 0)
                                        var_2b0[1].d -= 1
                                        
                                        if (var_2b0[1].d == 1)
                                            (**var_2b0)(var_2b0)
                                            int32_t rax_46 = *(var_2b0 + 0xc)
                                            *(var_2b0 + 0xc) -= 1
                                            
                                            if (rax_46 == 1)
                                                (*(*var_2b0 + 8))(var_2b0, 1)
                                    
                                    if (var_388 != 0)
                                        var_388[1].d -= 1
                                        
                                        if (var_388[1].d == 1)
                                            (**var_388)(var_388)
                                            int32_t rax_52 = *(var_388 + 0xc)
                                            *(var_388 + 0xc) -= 1
                                            
                                            if (rax_52 == 1)
                                                (*(*var_388 + 8))(var_388, 1)
                                    
                                    int64_t* var_448_2
                                    var_448_2.b = rax_2
                                    sub_142714420(&var_3e0, zx.q(*(arg1 + 0x34)), 
                                        zx.d(*(arg1 + 0x4a)), rax_36, var_448_2.b)
                                    result_4 = result_2
                                    r14_3 += 1
                                while (r14_3 s< var_410_1)
                                
                                rbx_2 = arg2
                            
                            sub_1426ec620(&var_3e0)
                            r8_18 = var_3e0
                            i_1 = i_3
                            
                            if ((*(r8_18 + 0x13e) & 1) != 0)
                                goto label_14270f830
                            
                            i_1 += 1
                            char var_3be
                            rax_32.b = var_3be & 0xfd
                            int64_t var_3c8_1 = 0
                            rax_32.b |= 1
                            i_3 = i_1
                            var_3be = rax_32.b
                            
                            if (i_1 s< r8_18[1].d)
                                do
                                    int32_t r9_7 = *(&(*r8_18)[sx.q(i_1)] + 4)
                                    
                                    if (test_bit(r9_7, 0x1e) || r9_7 s< 0)
                                        rax_32.b = 0
                                    else
                                        rax_32.b = 1
                                    
                                    if (rax_32.b != 0)
                                        break
                                    
                                    i_1 += 1
                                    i_3 = i_1
                                while (i_1 s< r8_18[1].d)
                                
                                goto label_14270f830
                            
                        label_14270f87d:
                            rax_32.b = 0
                        
                    label_14270fdac:
                        
                        if (var_388 != 0)
                            result = zx.q(var_388[1].d)
                            var_388[1].d -= 1
                            
                            if (result.d == 1)
                                result = (**var_388)(var_388)
                                int32_t rsi_2 = *(var_388 + 0xc)
                                *(var_388 + 0xc) -= 1
                                
                                if (rsi_2 == 1)
                                    result = (*(*var_388 + 8))(var_388, zx.q(rsi_2))
                    
                    int64_t rcx_71 = var_418
                    
                    if (rcx_71 != 0)
                        return sub_140a74f90(rcx_71)

return result
