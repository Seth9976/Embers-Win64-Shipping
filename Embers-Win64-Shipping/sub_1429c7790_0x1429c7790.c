// 函数: sub_1429c7790
// 地址: 0x1429c7790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t result_6 = sx.q(arg5)
int32_t result_8 = arg4
int64_t* r12 = arg3
int64_t result

while (true)
    int64_t result_5 = sx.q(result_8)
    __CheckForDebuggerJustMyCode(&data_14427d007)
    result = result_5 << 2
    int64_t rcx = 0
    int128_t zmm0 = *(arg2 + (result << 2))
    int32_t rbx = (result_5 + 1).d
    int128_t zmm1 = *(arg2 + (result << 2) + 4)
    int64_t result_2 = result_5
    int32_t var_120 = zmm0.d
    int32_t var_130 = zmm0.d
    int64_t i_1 = 3
    zmm0 = *(arg2 + (result << 2) + 8)
    int32_t var_118_1 = zmm0.d
    int32_t var_128_1 = zmm0.d
    int32_t var_11c_1 = zmm1.d
    int32_t var_12c_1 = zmm1.d
    int64_t r11_1 = sx.q(rbx)
    int128_t zmm2
    int64_t i
    
    do
        int32_t r9 = rbx
        int64_t r10_1 = r11_1
        
        if (rbx s<= result_6.d)
            result = zx.q(result_6.d - rbx + 1)
            
            if (result.d s>= 4)
                zmm2 = (&var_120)[rcx]
                void* rdx = arg2 + ((rcx + ((r11_1 + 2) << 2)) << 2)
                result = zx.q(((result_6.d - rbx - 3) u>> 2) + 1)
                uint64_t j_2 = zx.q(result.d)
                r9 = rbx + (result << 2).d
                r10_1 = r11_1 + (result << 2)
                uint64_t j
                
                do
                    zmm1 = *(rdx - 0x20)
                    zmm0 = zmm2
                    
                    if (not(zmm2.d f<= zmm1.d))
                        zmm0 = zmm1
                        zmm2 = zmm1
                    else if (not(zmm1.d f<= (&var_130)[rcx]))
                        (&var_130)[rcx] = zmm1.d
                    
                    zmm1 = *(rdx - 0x10)
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm0 = zmm1
                        zmm2 = zmm1
                    else if (not(zmm1.d f<= (&var_130)[rcx]))
                        (&var_130)[rcx] = zmm1.d
                    
                    zmm1 = *rdx
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm0 = zmm1
                        zmm2 = zmm1
                    else if (not(zmm1.d f<= (&var_130)[rcx]))
                        (&var_130)[rcx] = zmm1.d
                    
                    zmm1 = *(rdx + 0x10)
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm2 = zmm1
                    else if (not(zmm1.d f<= (&var_130)[rcx]))
                        (&var_130)[rcx] = zmm1.d
                    
                    rdx += 0x40
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                (&var_120)[rcx] = zmm2.d
            
            if (r9 s<= result_6.d)
                zmm1 = (&var_120)[rcx]
                int128_t* rdx_1 = arg2 + ((rcx + (r10_1 << 2)) << 2)
                result = zx.q(result_6.d - r9 + 1)
                int64_t j_3 = sx.q(result.d)
                int64_t j_1
                
                do
                    zmm0 = *rdx_1
                    
                    if (not(zmm1.d f<= zmm0.d))
                        zmm1 = zmm0
                    else if (not(zmm0.d f<= (&var_130)[rcx]))
                        (&var_130)[rcx] = zmm0.d
                    
                    rdx_1 = &rdx_1[1]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                (&var_120)[rcx] = zmm1.d
        
        rcx += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    zmm2.d = var_130.d f- var_120
    zmm1.d = var_12c_1.d f- var_11c_1
    zmm0.d = var_128_1.d f- var_118_1
    uint64_t r10_2
    
    if (zmm1.d f<= zmm2.d || zmm1.d f<= zmm0.d)
        r10_2 = 0
        result = 2
        
        if (zmm0.d f> zmm2.d)
            r10_2 = 2
    else
        r10_2 = zx.q((i_1 + 1).d)
    
    zmm0 = (&var_130)[r10_2]
    zmm1 = (&var_120)[r10_2]
    zmm2.d = zmm1.d f+ zmm0.d
    zmm2.d = zmm2.d f* 0.5f
    int32_t var_178
    
    if (not(zmm2.d f>= zmm0.d) && not(zmm1.d f>= zmm2.d))
        result_8 = result_5.d
        int32_t r9_1 = result_6.d
        int64_t result_1 = result_6
        
        if (result_2 s< result_6)
            do
                int32_t rcx_1 = 0
                int32_t r8 = 0
                
                while (result_2 s< result_1)
                    int32_t result_9 = result_8 + 1
                    rcx_1.b = zmm2.d f<= *(arg2 + ((r10_2 + (result_2 << 2)) << 2))
                    
                    if (rcx_1 != 0)
                        result_9 = result_8
                    
                    result_8 = result_9
                    result = result_2 + 1
                    
                    if (rcx_1 != 0)
                        result = result_2
                    
                    result_2 = result
                    
                    if (rcx_1 != 0)
                        while (result_2 s< result_1)
                            int32_t rax_15 = r9_1 - 1
                            r8.b = zmm2.d f> *(arg2 + ((r10_2 + (result_1 << 2)) << 2))
                            
                            if (r8 != 0)
                                rax_15 = r9_1
                            
                            r9_1 = rax_15
                            result = result_1 - 1
                            
                            if (r8 != 0)
                                result = result_1
                            
                            result_1 = result
                            
                            if (r8 != 0)
                                break
                        
                        break
                
                if (rcx_1 != 0 && r8 != 0)
                    result = result_1 * 2
                    int64_t rcx_3 = result_2 * 2
                    result_8 += 1
                    result_2 += 1
                    r9_1 -= 1
                    result_1 -= 1
                    zmm1 = *(arg2 + (rcx_3 << 3))
                    *(arg2 + (rcx_3 << 3)) = *(arg2 + (result << 3))
                    *(arg2 + (result << 3)) = zmm1
            while (result_2 s< result_1)
        
        if (result_8 == r9_1)
            result = r10_2 + (result_1 << 2)
            int32_t rcx_4
            rcx_4.b = zmm2.d f> *(arg2 + (result << 2))
            
            if (rcx_4 == 0)
                r9_1 -= 1
            else
                result_8 += 1
        
        if (result_5.d s< r9_1)
            var_178 = r9_1
            result = sub_1429c7790(arg1, arg2, r12, zx.q(result_5.d), var_178)
        
        if (result_8 s>= result_6.d)
            break
        
        continue
    
    if (result_2 s> result_6)
        break
    
    int64_t rdx_3 = arg1
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int64_t result_3 = arg2 + 0xc + (result_2 << 4)
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    result = result_3
    int128_t zmm12
    int128_t var_b8_1 = zmm12
    var_120.q = result
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    int64_t result_4 = result_3
    
    do
        int64_t rax_19 = sx.q(*result)
        var_130.q = rax_19
        int32_t rdi_1 = *(rdx_3 + (rax_19 << 2))
        int32_t rbx_2 = rdi_1 & 3
        int32_t rdi_2 = rdi_1 s>> 2
        int32_t var_110
        (*(*r12 + 0x10))(r12, &var_110, zx.q(rdi_2), zx.q(rbx_2), var_178)
        int32_t var_100
        (*(*r12 + 0x18))(r12, &var_100, zx.q(rdi_2), zx.q(rbx_2))
        int32_t var_150
        (*(*r12 + 0x20))(r12, &var_150, zx.q(rdi_2), zx.q(rbx_2))
        int32_t var_160_1 = 0xffffffff
        int32_t r12_1 = 1
        int64_t result_7 = result_2
        
        if (result_2 s>= result_5)
            rdx_3 = arg1
        else
            int32_t var_108
            int128_t zmm6 = var_108
            int32_t var_10c
            zmm7 = var_10c
            zmm13 = var_110
            int32_t var_f8
            zmm8 = var_f8
            int32_t var_fc
            zmm9 = var_fc
            zmm10 = var_100
            int32_t var_14c
            zmm11 = var_14c
            zmm12 = var_150
            
            do
                if (r12_1 == 0)
                    goto label_1429c7cc7
                
                int64_t rax_23 = sx.q(*result_3)
                var_160_1 = rax_23.d
                int32_t rdi_3 = *(arg1 + (rax_23 << 2))
                int32_t rbx_4 = rdi_3 & 3
                int32_t rdi_4 = rdi_3 s>> 2
                float var_f0
                (*(*arg3 + 0x10))(arg3, &var_f0, zx.q(rdi_4), zx.q(rbx_4))
                float var_e0
                (*(*arg3 + 0x18))(arg3, &var_e0, zx.q(rdi_4), zx.q(rbx_4))
                float var_148
                (*(*arg3 + 0x20))(arg3, &var_148, zx.q(rdi_4), zx.q(rbx_4))
                float temp3_1 = var_f0
                zmm13.d f- temp3_1
                
                if (is_unordered.d(zmm13.d, temp3_1) || zmm13.d f!= temp3_1)
                    result_7 += 1
                    result_3 += 0x10
                else
                    float var_ec
                    zmm7.d f- var_ec
                    
                    if (is_unordered.d(zmm7.d, var_ec) || zmm7.d f!= var_ec)
                        result_7 += 1
                        result_3 += 0x10
                    else
                        float var_e8
                        zmm6.d f- var_e8
                        
                        if (is_unordered.d(zmm6.d, var_e8) || zmm6.d f!= var_e8)
                            result_7 += 1
                            result_3 += 0x10
                        else
                            float temp8_1 = var_e0
                            zmm10.d f- temp8_1
                            
                            if (is_unordered.d(zmm10.d, temp8_1) || zmm10.d f!= temp8_1)
                                result_7 += 1
                                result_3 += 0x10
                            else
                                float var_dc
                                zmm9.d f- var_dc
                                
                                if (is_unordered.d(zmm9.d, var_dc) || zmm9.d f!= var_dc)
                                    result_7 += 1
                                    result_3 += 0x10
                                else
                                    float var_d8
                                    zmm8.d f- var_d8
                                    
                                    if (is_unordered.d(zmm8.d, var_d8) || zmm8.d f!= var_d8)
                                        result_7 += 1
                                        result_3 += 0x10
                                    else
                                        float temp11_1 = var_148
                                        zmm12.d f- temp11_1
                                        
                                        if (is_unordered.d(zmm12.d, temp11_1)
                                                || zmm12.d f!= temp11_1)
                                            result_7 += 1
                                            result_3 += 0x10
                                        else
                                            float var_144
                                            zmm11.d f- var_144
                                            
                                            if (is_unordered.d(zmm11.d, var_144)
                                                    || zmm11.d f!= var_144)
                                                result_7 += 1
                                                result_3 += 0x10
                                            else
                                                r12_1 = 0
            while (result_7 s< result_5)
            
            if (r12_1 != 0)
                result_3 = result_4
                rdx_3 = arg1
            else
            label_1429c7cc7:
                rdx_3 = arg1
                result_3 = result_4
                *(rdx_3 + (var_130.q << 2)) = *(rdx_3 + (sx.q(var_160_1) << 2))
        
        result_5 += 1
        r12 = arg3
        result = var_120.q + 0x10
        var_120.q = result
    while (result_5 s<= result_6)
    
    break

__security_check_cookie(rax_1 ^ &var_198)
return result
