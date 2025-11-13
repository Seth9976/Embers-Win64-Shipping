// 函数: sub_140378de8
// 地址: 0x140378de8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* rsi = arg5
int64_t j_2 = sx.q(arg2)
int64_t r15 = sx.q(arg1)
uint64_t result

if (arg1 == 0 || arg2 == 0)
    result = 0x80070057
else
    int32_t rdx
    
    if (arg3 != 0)
        int32_t i = arg3
        rdx = 0
        
        do
            rdx += 1
            i &= i - 1
        while (i != 0)
    
    if (arg3 != 0 && r15.d != rdx)
        result = 0x80070057
    else
        int32_t rdx_1
        
        if (arg4 != 0)
            int32_t i_1 = arg4
            rdx_1 = 0
            
            do
                rdx_1 += 1
                i_1 &= i_1 - 1
            while (i_1 != 0)
        
        if (arg4 != 0 && j_2.d != rdx_1)
            result = 0x80070057
        else
            int32_t rax_4
            
            if ((arg3 == 0x3f || arg3 == 0x60f) && (arg4 == 0x3f || arg4 == 0x60f))
                rax_4 = 1
            else
                rax_4 = 0
            
            if (arg3 == 0 || arg4 == 0)
                rax_4 = 1
            
            int64_t rdi_1 = r15
            
            if (rax_4 != 0)
                memset(rsi, 0, sx.q(j_2.d * r15.d) << 2)
                
                if (j_2.d s< r15.d)
                    r15 = zx.q(j_2.d)
                
                int64_t i_4 = sx.q(r15.d)
                
                if (r15.d s> 0)
                    int64_t i_2
                    
                    do
                        *rsi = 0x3f800000
                        rsi += (rdi_1 << 2) + 4
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                
                result = 0
            else if (arg3 != 4)
                int32_t var_b0_1 = 0
                int32_t var_b8_1 = 0
                int32_t var_a8_1 = 1
                void* const lpMem = nullptr
                int32_t var_80 = 0x43a50000
                int32_t var_7c_1 = 0x41f00000
                int32_t var_74
                __builtin_memcpy(&var_74, 
                    "\x00\x00\xb4\xc3\x00\x00\x61\x43\x00\x00\x07\x43\x00\x80\xac\x43\x00\x00\x70\x41\x"
                "00\x00\x34\x43\x00\x00\x7a\x43\x00\x00\xdc\x42", 
                    0x20)
                int32_t var_78_1 = 0
                void* lpMem_1 = HeapAlloc(GetProcessHeap(), HEAP_NONE, rdi_1 << 2)
                void* lpMem_2
                void* const lpMem_3
                
                if (lpMem_1 != 0)
                    lpMem_2 = HeapAlloc(GetProcessHeap(), HEAP_NONE, j_2 << 2)
                    lpMem_3 = lpMem_2
                    lpMem = lpMem_2
                
                int32_t result_1
                
                if (lpMem_1 != 0 && lpMem_2 != 0)
                    int32_t r9 = var_a8_1
                    int32_t r8_6 = 0
                    int64_t rdx_2 = 0
                    int64_t rdi_5 = 0
                    int32_t* rcx_5 = &var_80
                    
                    while (true)
                        int32_t r10_3
                        
                        if ((arg3 & r9) == 0)
                            r10_3 = var_b0_1
                        else
                            if (rdx_2 == r15)
                                result_1 = -0x7ff8ffa9
                                break
                                break
                            
                            *(lpMem_1 + (rdx_2 << 2)) = *rcx_5
                            r10_3 = var_b0_1 + 1
                            rdx_2 += 1
                            var_b0_1 = r10_3
                        
                        int32_t r11_2
                        
                        if ((arg4 & r9) == 0)
                            r11_2 = var_b8_1
                        else
                            if (rdi_5 == j_2)
                                result_1 = -0x7ff8ffa9
                                break
                                break
                            
                            *(lpMem_3 + (rdi_5 << 2)) = *rcx_5
                            r11_2 = var_b8_1 + 1
                            rdi_5 += 1
                            var_b8_1 = r11_2
                        
                        r8_6 += 1
                        r9 *= 2
                        rcx_5 = &rcx_5[1]
                        
                        if (r8_6 u>= 0xb)
                            int64_t rax_11 = sx.q(r10_3)
                            int64_t rcx_8
                            int64_t rdi_7
                            
                            if (rax_11 s< r15)
                                rdi_7, rcx_8 =
                                    __memfill_u32(lpMem_1 + (rax_11 << 2), 0xc3b40000, r15 - rax_11)
                            int64_t rdx_3 = sx.q(r11_2)
                            int64_t rcx_11
                            int64_t rdi_9
                            
                            if (rdx_3 s< j_2)
                                rdi_9, rcx_11 =
                                    __memfill_u32(lpMem + (rdx_3 << 2), 0xc3b40000, j_2 - rdx_3)
                            int32_t result_2
                            result_2, zmm6 = sub_1403787b8(r15.d, j_2.d, lpMem_1, lpMem, rsi)
                            result_1 = result_2
                            
                            if (result_2 s>= 0)
                                int64_t rdi_10 = 0
                                uint128_t* rcx_13 = &var_80
                                int32_t i_3 = 0
                                int64_t r10_4 = 0
                                int32_t r8_8 = 1
                                var_b0_1.q = 0
                                var_b8_1.q = &var_80
                                int64_t var_88_1 = 0
                                
                                do
                                    int64_t r9_2
                                    
                                    if (i_3 u>= 0xb || not((*rcx_13).d f>= zmm6.d))
                                        int32_t rcx_15 = r8_8 & arg3
                                        
                                        if (rcx_15 != 0 && (arg4 & r8_8) != 0)
                                            rsi[r10_4 + rdi_10] = 0x3f800000
                                        
                                        if (rcx_15 == 0)
                                            if ((arg4 & r8_8) != 0 && (r8_8.b & 8) == 0)
                                                result_1 = -0x7fffbfff
                                                break
                                            
                                            if (rcx_15 != 0 && (arg4 & r8_8) == 0)
                                                goto label_140379161
                                            
                                            r9_2 = r15
                                        else if ((arg4 & r8_8) != 0)
                                            r9_2 = r15
                                        else
                                        label_140379161:
                                            
                                            if ((r8_8.b & 8) == 0)
                                                result_1 = -0x7fffbfff
                                                break
                                            
                                            r9_2 = r15
                                            
                                            if (r15 != 1)
                                                uint128_t zmm2_1
                                                zmm2_1.d =
                                                    1f f/ _mm_cvtepi32_ps(zx.o((r15 - 1).d)).d
                                                
                                                if (j_2.d s> 0)
                                                    int32_t* rdi_13 = rsi
                                                    int64_t j_1 = j_2
                                                    int64_t rax_16 = r9_2 << 2
                                                    int64_t j
                                                    
                                                    do
                                                        int64_t rcx_18 = 0
                                                        
                                                        if (r9_2 s> 0)
                                                            int32_t* rax_17 = rdi_13
                                                            uint128_t zmm3 =
                                                                _mm_cvtepi32_ps(zx.o(j_2.d))
                                                            
                                                            do
                                                                uint128_t zmm0_1
                                                                
                                                                if (rcx_18 != var_b0_1.q)
                                                                    zmm0_1.d = zmm3.d f* *rax_17
                                                                else
                                                                    zmm0_1 = zmm2_1
                                                                
                                                                zmm0_1.d =
                                                                    zmm0_1.d f/ (zmm3.d f+ zmm2_1.d)
                                                                rcx_18 += 1
                                                                *rax_17 = zmm0_1.d
                                                                rax_17 = &rax_17[1]
                                                            while (rcx_18 s< r9_2)
                                                            
                                                            rax_16 = r9_2 << 2
                                                        
                                                        rdi_13 += rax_16
                                                        j = j_1
                                                        j_1 -= 1
                                                    while (j != 1)
                                                    rdi_10 = var_b0_1.q
                                                    r10_4 = var_88_1
                                            else if (j_2.d s> 0)
                                                int64_t rcx_17
                                                int64_t rdi_12
                                                rdi_12, rcx_17 = __memfill_u32(rsi, 
                                                    1f f/ _mm_cvtepi32_ps(zx.o(j_2.d)).d, j_2)
                                                rdi_10 = var_b0_1.q
                                        
                                        rcx_13 = var_b8_1.q
                                    else
                                        r9_2 = r15
                                    
                                    if ((arg3 & r8_8) != 0)
                                        rdi_10 += 1
                                        var_b0_1.q = rdi_10
                                    
                                    if ((arg4 & r8_8) != 0)
                                        r10_4 += r9_2
                                        var_88_1 = r10_4
                                    
                                    rcx_13 += 4
                                    i_3 += 1
                                    r8_8 *= 2
                                    var_b8_1.q = rcx_13
                                while (i_3 u< 0xb)
                            
                            break
                        
                        lpMem_3 = lpMem
                else
                    result_1 = -0x7ff8fff2
                
                HeapFree(GetProcessHeap(), HEAP_NONE, lpMem_1)
                HeapFree(GetProcessHeap(), HEAP_NONE, lpMem)
                result = zx.q(result_1)
            else
                *rsi = 0x3f800000
                
                if (j_2.d s> 1)
                    rsi[1] = 0x3f800000
                    
                    if (j_2 s> 2)
                        memset(&rsi[2], 0, (j_2 - 2) << 2)
                
                result = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
