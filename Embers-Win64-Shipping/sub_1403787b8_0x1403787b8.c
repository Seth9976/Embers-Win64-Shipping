// 函数: sub_1403787b8
// 地址: 0x1403787b8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
int64_t rbx = sx.q(arg1)
int32_t rsi = 0
uint64_t i_10 = zx.q(arg2)
int64_t dwBytes = rbx << 2
int32_t* lpMem_1 = nullptr
uint128_t zmm8
uint128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t* lpMem_2 = nullptr
int32_t* lpMem = HeapAlloc(GetProcessHeap(), HEAP_NONE, dwBytes)

if (lpMem == 0)
    rsi = -0x7ff8fff2
else
    int64_t dwBytes_1 = sx.q(i_10.d) << 2
    int32_t* lpMem_3 = HeapAlloc(GetProcessHeap(), HEAP_NONE, dwBytes_1)
    lpMem_1 = lpMem_3
    
    if (lpMem_3 == 0)
        rsi = -0x7ff8fff2
    else
        int128_t* lpMem_4 = HeapAlloc(GetProcessHeap(), HEAP_NONE, dwBytes_1)
        lpMem_2 = lpMem_4
        
        if (lpMem_4 != 0)
            int32_t i = 0
            
            if (rbx.d s> 0)
                int32_t* lpMem_6 = lpMem
                
                do
                    *lpMem_6 = i
                    i += 1
                    lpMem_6 = &lpMem_6[1]
                while (i s< rbx.d)
            
            int32_t i_1 = 0
            
            if (i_10.d s> 0)
                int32_t* lpMem_7 = lpMem_1
                
                do
                    *lpMem_7 = i_1
                    i_1 += 1
                    lpMem_7 = &lpMem_7[1]
                while (i_1 s< i_10.d)
            
            int32_t i_11 = (rbx - 1).d
            uint128_t zmm0
            
            do
                i_1.b = 0
                
                if (i_11 s<= 0)
                    break
                
                void* rdx = arg3 + 4
                uint64_t i_8 = zx.q(i_11)
                int32_t* r8_4 = lpMem - arg3
                uint64_t i_2
                
                do
                    zmm0 = *(rdx - 4)
                    
                    if (not(zmm0.d f<= *rdx))
                        *(rdx - 4) = *rdx
                        *rdx = zmm0.d
                        int32_t rcx_3 = *(r8_4 + rdx - 4)
                        *(r8_4 + rdx - 4) = *(r8_4 + rdx)
                        *(r8_4 + rdx) = rcx_3
                        i_1.b = 1
                    
                    rdx += 4
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
            while (i_1.b != 0)
            
            int32_t i_12 = (i_10 - 1).d
            int64_t rdi_2 = sx.q(i_10.d)
            
            do
                i_1.b = 0
                
                if (i_12 s<= 0)
                    break
                
                int32_t* rdx_1 = arg4 + 4
                uint64_t i_9 = zx.q(i_12)
                int32_t* r8_6 = lpMem_1 - arg4
                uint64_t i_3
                
                do
                    zmm0 = rdx_1[-1]
                    
                    if (not(zmm0.d f<= *rdx_1))
                        rdx_1[-1] = *rdx_1
                        *rdx_1 = zmm0.d
                        int32_t rcx_4 = *(r8_6 + rdx_1 - 4)
                        *(r8_6 + rdx_1 - 4) = *(r8_6 + rdx_1)
                        *(r8_6 + rdx_1) = rcx_4
                        i_1.b = 1
                    
                    rdx_1 = &rdx_1[1]
                    i_3 = i_9
                    i_9 -= 1
                while (i_3 != 1)
            while (i_1.b != 0)
            
            int32_t var_c0_1 = rbx.d
            int32_t r8_7 = i_10.d
            int32_t var_c8_1 = i_10.d
            int32_t rcx_5 = 0
            int64_t rax_5 = 0
            
            if (rbx.d s> 0)
                do
                    if ((*(arg3 + (rax_5 << 2))).d f>= 0f)
                        var_c0_1 = rcx_5
                        break
                    
                    rax_5 += 1
                    rcx_5 += 1
                while (rax_5 s< rbx)
            
            int32_t rcx_6 = 0
            int64_t rax_6 = 0
            
            if (i_10.d s> 0)
                do
                    if ((*(arg4 + (rax_6 << 2))).d f>= 0f)
                        r8_7 = rcx_6
                        var_c8_1 = rcx_6
                        break
                    
                    rax_6 += 1
                    rcx_6 += 1
                while (rax_6 s< rdi_2)
            
            int128_t* r13_3 = arg5
            int64_t rbx_1 = 0
            int32_t r10_2 = i_10.d - r8_7
            int32_t var_b8_1 = r10_2
            
            if (i_10.d s> 0)
                int128_t* rdi_3 = r13_3
                int64_t rax_7 = sx.q(i_10.d)
                int64_t rcx_8 = rbx << 2
                
                do
                    *(lpMem_2 + (rbx_1 << 2)) = 0
                    
                    if (rbx s> 0)
                        memset(rdi_3, 0, rbx << 2)
                        rax_7 = sx.q(i_10.d)
                        rcx_8 = rbx << 2
                    
                    rbx_1 += 1
                    rdi_3 += rcx_8
                while (rbx_1 s< rax_7)
                
                r8_7 = var_c8_1
                r10_2 = var_b8_1
                rdi_2 = sx.q(i_10.d)
            
            if (r10_2 s> 0)
                int64_t rcx_11 = sx.q(var_c0_1)
                int64_t r11_2 = sx.q(r8_7)
                int64_t var_a8_1 = rcx_11
                int64_t var_98_1 = r11_2
                float zmm1
                
                if (rcx_11 s>= rbx)
                label_140378c53:
                    zmm1 = (zx.o(0)).d
                    
                    if (i_10.d s> 0)
                        int128_t* lpMem_5 = lpMem_2
                        uint64_t i_7 = i_10
                        uint64_t i_6 = i_10
                        uint64_t i_4
                        
                        do
                            zmm0 = *lpMem_5
                            
                            if (not(zmm0.d f<= zmm1))
                                zmm1 = zmm0.d
                            
                            lpMem_5 += 4
                            i_4 = i_6
                            i_6 -= 1
                        while (i_4 != 1)
                        zmm1 - 0f
                        
                        if (is_unordered.d(zmm1, 0f) || not(zmm1 == 0f))
                            uint64_t j_2 = zx.q(arg1)
                            int64_t dwBytes_2 = dwBytes
                            uint64_t i_5
                            
                            do
                                if (j_2.d s> 0)
                                    int128_t* rcx_27 = r13_3
                                    uint64_t j_1 = j_2
                                    uint64_t j
                                    
                                    do
                                        zmm0.d = (*rcx_27).d f/ zmm1
                                        zmm0.d = zmm0.d f* 1000f
                                        zmm0.d = zmm0.d f+ 0.5f
                                        zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f/ 1000f
                                        *rcx_27 = zmm0.d
                                        rcx_27 += 4
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    dwBytes_2 = dwBytes
                                
                                r13_3 += dwBytes_2
                                i_5 = i_7
                                i_7 -= 1
                            while (i_5 != 1)
                else
                    void* rdx_2 = &lpMem[rcx_11]
                    void* r9_1 = arg3 - lpMem
                    var_c0_1.q = rdx_2
                    void* arg_18 = r9_1
                    
                    while (true)
                        int32_t rcx_12 = r8_7
                        int64_t rax_9 = r11_2
                        
                        if (r11_2 s< rdi_2)
                            while (not((*(arg4 + (rax_9 << 2))).d f>= *(r9_1 + rdx_2)))
                                rax_9 += 1
                                rcx_12 += 1
                                
                                if (rax_9 s>= rdi_2)
                                    break
                        
                        int32_t rcx_13 = rcx_12 - r8_7
                        int32_t rdi_4 = r8_7 + mods.dp.d(sx.q(rcx_13), r10_2)
                        int32_t rbx_2 = r8_7 + mods.dp.d(sx.q(rcx_13 + r10_2 - 1), r10_2)
                        zmm8.d = (*(arg4 + (sx.q(rdi_4) << 2))).d f- *(arg4 + (sx.q(rbx_2) << 2))
                        zmm0.d = zmm8.d f/ 360f
                        floorf(zmm0.d)
                        zmm0.d = zmm0.d f* 360f
                        zmm7 = *(arg_18 + var_c0_1.q)
                        zmm8.d = zmm8.d f- zmm0.d
                        zmm7[0] = zmm7[0] f- *(arg4 + (sx.q(rbx_2) << 2))
                        zmm0.d = zmm7.d f/ 360f
                        floorf(zmm0.d)
                        zmm0.d = zmm0.d f* 360f
                        zmm7[0] = zmm7[0] f- zmm0.d
                        int32_t* rdx_8
                        
                        if (rbx_2 != rdi_4)
                            zmm8.d f- 0f
                            
                            if (not(is_unordered.d(zmm8.d, 0f)) && zmm8.d f== 0f)
                                rsi = -0x7ff8ffa9
                                break
                            
                            zmm7[0] = zmm7[0] f/ zmm8.d
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm7[0].q)
                            zmm8.q = _mm_cvtps_pd(zmm7[0].q).q f* 3.1415926535000001
                            zmm8.q = zmm8.q f* 0.5
                            zmm7[0] = fconvert.s(cos(zmm8.q))
                            
                            if (not(0f <= zmm7[0]))
                                zmm7 = zx.o(0)
                            
                            zmm1 = fconvert.s(sin(zmm8.q).q)
                            
                            if (not(0f <= zmm1))
                                zmm1 = (zx.o(0)).d
                            
                            if (i_10.d == 1)
                                zmm1 = 1f
                                zmm7 = 0x3f800000
                            
                            rdx_8 = var_c0_1.q
                            int64_t r8_12 = sx.q(rbx_2)
                            int64_t r9_2 = sx.q(rdi_4)
                            *(r13_3 + ((sx.q(lpMem_1[r8_12]) * rbx + sx.q(*rdx_8)) << 2)) = zmm7[0]
                            *(r13_3 + ((sx.q(lpMem_1[r9_2]) * rbx + sx.q(*rdx_8)) << 2)) = zmm1
                            int64_t rax_21 = sx.q(lpMem_1[r8_12])
                            zmm7[0] = zmm7[0] f+ *(lpMem_2 + (rax_21 << 2))
                            *(lpMem_2 + (rax_21 << 2)) = zmm7[0]
                            int64_t rax_22 = sx.q(lpMem_1[r9_2])
                            *(lpMem_2 + (rax_22 << 2)) = zmm1 f+ *(lpMem_2 + (rax_22 << 2))
                        else
                            rdx_8 = var_c0_1.q
                            int64_t r8_11 = sx.q(rbx_2)
                            *(r13_3 + ((sx.q(lpMem_1[r8_11]) * rbx + sx.q(*rdx_8)) << 2)) =
                                0x3f800000
                            int64_t rax_18 = sx.q(lpMem_1[r8_11])
                            zmm0.d = (*(lpMem_2 + (rax_18 << 2))).d f+ 1f
                            *(lpMem_2 + (rax_18 << 2)) = zmm0.d
                        
                        rdx_2 = &rdx_8[1]
                        int64_t rcx_26 = var_a8_1 + 1
                        var_c0_1.q = rdx_2
                        var_a8_1 = rcx_26
                        
                        if (rcx_26 s>= rbx)
                            goto label_140378c53
                        
                        r8_7 = var_c8_1
                        r9_1 = arg_18
                        r10_2 = var_b8_1
                        r11_2 = var_98_1
                        rdi_2 = sx.q(i_10.d)
        else
            rsi = -0x7ff8fff2

HeapFree(GetProcessHeap(), HEAP_NONE, lpMem)
HeapFree(GetProcessHeap(), HEAP_NONE, lpMem_1)
HeapFree(GetProcessHeap(), HEAP_NONE, lpMem_2)
return zx.q(rsi)
