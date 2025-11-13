// 函数: sub_141a89910
// 地址: 0x141a89910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rsi = arg2
int64_t r14 = sx.q(arg1[4].d)
int64_t* r13 = arg1

if (arg1[2].b == 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != r14.d)
        sub_1405dadb0(rsi, r14.d)
    
    if (r14.d s> 0)
        uint64_t i_9 = zx.q(r14.d)
        uint64_t i
        
        do
            int64_t rbx_1 = sx.q(rsi[1].d)
            int32_t rax = (rbx_1 + 1).d
            rsi[1].d = rax
            
            if (rax s> *(rsi + 0xc))
                sub_1406105e0(rsi)
            
            int64_t rdx_2 = *rsi + (rbx_1 << 2)
            
            if (rdx_2 != 0)
                *rdx_2 = 0
            
            i = i_9
            i_9 -= 1
        while (i != 1)
else
    uint64_t i_2
    
    if (r14.d s<= 1)
        i_2 = zx.q(*(arg2 + 0xc))
        
        if (r14.d == 1)
            arg2[1].d = 0
            
            if (i_2.d s< 1)
                sub_1405dadb0(rsi, 1)
            
            int64_t rbx_4 = sx.q(rsi[1].d)
            int32_t rax_37 = (rbx_4 + 1).d
            rsi[1].d = rax_37
            
            if (rax_37 s> *(rsi + 0xc))
                sub_1406105e0(rsi)
            
            *(*rsi + (rbx_4 << 2)) = 0x3f800000
            return 
        
        arg2[1].d = 0
        int32_t temp1_1 = i_2.d
        
        if (temp1_1 s< 0 && temp1_1 != 0)
            return sub_1405dadb0(rsi, 0) __tailcall
    else
        int64_t i_6 = 0
        int64_t r15_1 = 0
        float zmm6[0x4]
        float var_58_1[0x4] = zmm6
        int64_t var_80_1
        __builtin_memset(&var_80_1, 0, 0x18)
        int32_t temp0_1 = r14.d
        int64_t var_78
        int64_t var_70
        
        if (temp0_1 s> 0)
            var_70.d = r14.d
            sub_14113b710(&var_78, 0)
            r15_1 = var_78
            var_80_1 = r15_1
            i_2, arg5 = memset(r15_1, 0, r14 << 2)
        else if (temp0_1 s< 0 && r14.d != 0)
            var_70.d = r14.d
            i_2, arg5 = sub_141460e90(&var_78)
            r15_1 = var_78
            var_80_1 = r15_1
        int32_t r12_1 = 0
        int64_t rbp_1 = r14
        
        if (r14.d s> 0)
            int64_t r15_2 = 0
            int64_t r14_1 = var_80_1
            
            do
                void* rax_2 = arg1[8]
                void* rcx_5 = &arg1[0xa]
                
                if (rax_2 != 0)
                    rcx_5 = rax_2
                
                arg1[6]((*(*rcx_5 + 8))(rcx_5), arg3, (sx.q(r12_1) << 4) + arg1[3])
                *(r14_1 + (r15_2 << 2)) = arg5[0]
                r12_1 += 1
                r15_2 += 1
            while (r15_2 s< rbp_1)
            
            rsi = arg2
            i_6 = 0
            r15_1 = var_80_1
            r14 = zx.q(rbp_1.d)
            r13 = arg1
        
        rsi[1].d = 0
        
        if (r14.d s> *(rsi + 0xc))
            sub_1405dadb0(rsi, r14.d)
        
        zmm6 = zx.o(0)
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (r14.d s> 0)
            int64_t r12_2 = 0
            int64_t* i_7 = zx.q(r14.d)
            float zmm7[0x4]
            float var_68_1[0x4] = zmm7
            int64_t* i_1
            
            do
                zmm7 = zmm6
                void* r9_1 = *r13 + r12_2
                int64_t j = 0
                
                if (r14.d u>= 8)
                    zmm2 = zx.o(0)
                    zmm3 = zx.o(0)
                    int32_t rcx_9 = r14.d & 0x80000007
                    
                    if (rcx_9 s< 0)
                        rcx_9 = ((rcx_9 - 1) | 0xfffffff8) + 1
                    
                    int128_t* rcx_13 = r15_1 - r9_1
                    void* rax_8 = r9_1 + 0x10
                    
                    do
                        j += 8
                        zmm1 = _mm_mul_ps(*(rcx_13 + rax_8 - 0x10), *(rax_8 - 0x10))
                        arg5 = *rax_8
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm1 = *(rcx_13 + rax_8)
                        rax_8 += 0x20
                        zmm3 = _mm_add_ps(zmm3, _mm_mul_ps(zmm1, arg5))
                    while (j s< sx.q(r14.d - rcx_9))
                    
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm2[0].q = zmm2 u>> 0x40
                    zmm7 = _mm_add_ps(zmm2, zmm2)
                    arg5 = _mm_shuffle_ps(zmm7, zmm7, 0xf5)
                    zmm7[0] = zmm7[0] + arg5[0]
                
                if (j s< rbp_1)
                    if (rbp_1 - j s>= 4)
                        void* rax_12 = r9_1 + ((j + 1) << 2)
                        float (* r8_7)[0x4] = r15_1 - r9_1
                        int64_t j_3 = ((rbp_1 - j - 4) u>> 2) + 1
                        j += j_3 << 2
                        int64_t j_1
                        
                        do
                            zmm2 = *(r8_7 + rax_12 - 4)
                            zmm2[0] = zmm2[0] f* *(rax_12 - 4)
                            arg5 = *(r8_7 + rax_12)
                            arg5[0] = arg5[0] f* *rax_12
                            zmm1 = *(r8_7 + rax_12 + 4)
                            zmm2[0] = zmm2[0] + zmm7[0]
                            zmm1[0] = zmm1[0] f* *(rax_12 + 4)
                            zmm2[0] = zmm2[0] + arg5[0]
                            arg5 = *(r8_7 + rax_12 + 8)
                            arg5[0] = arg5[0] f* *(rax_12 + 8)
                            rax_12 += 0x10
                            zmm2[0] = zmm2[0] + zmm1[0]
                            zmm2[0] = zmm2[0] + arg5[0]
                            zmm7 = zmm2
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                    
                    if (j s< rbp_1)
                        int32_t* rax_13 = r9_1 + (j << 2)
                        int64_t j_4 = rbp_1 - j
                        int64_t j_2
                        
                        do
                            arg5 = *(r15_1 - r9_1 + rax_13)
                            arg5[0] = arg5[0] f* *rax_13
                            rax_13 = &rax_13[1]
                            zmm7[0] = zmm7[0] + arg5[0]
                            j_2 = j_4
                            j_4 -= 1
                        while (j_2 != 1)
                
                int64_t rbx_3 = sx.q(rsi[1].d)
                int32_t rax_14 = (rbx_3 + 1).d
                rsi[1].d = rax_14
                
                if (rax_14 s> *(rsi + 0xc))
                    sub_1406105e0(rsi)
                
                *(*rsi + (rbx_3 << 2)) = zmm7[0]
                r12_2 += rbp_1 << 2
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        if (arg6 != 0)
            if (arg4 != 0)
                zmm1 = zmm6
                int32_t rdx_6 = 0
                
                if (r14.d s> 0 && r14.d u>= 8)
                    uint64_t r8_10 = *rsi
                    zmm2 = zx.o(0)
                    zmm1 = zx.o(0)
                    int32_t rcx_21 = r14.d & 0x80000007
                    
                    if (rcx_21 s< 0)
                        rcx_21 = ((rcx_21 - 1) | 0xfffffff8) + 1
                    
                    i_2 = 0
                    
                    do
                        rdx_6 += 8
                        zmm2 = _mm_min_ps(zmm2, *(r8_10 + (i_2 << 2)))
                        arg5 = *(r8_10 + (i_2 << 2) + 0x10)
                        i_2 += 8
                        zmm1 = _mm_min_ps(zmm1, arg5)
                    while (i_2 s< sx.q(r14.d - rcx_21))
                    
                    zmm2 = _mm_min_ps(zmm2, zmm1)
                    zmm2[0].q = zmm2 u>> 0x40
                    zmm1 = _mm_min_ps(zmm2, zmm2)
                    arg5 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                    zmm1 = _mm_min_ss(zmm1[0], arg5[0])
                
                int64_t rcx_25 = sx.q(rdx_6)
                
                if (rcx_25 s< rbp_1)
                    if (rbp_1 - rcx_25 s>= 4)
                        i_2 = ((rbp_1 - rcx_25 - 4) u>> 2) + 1
                        void* rdx_9 = *rsi + 8 + (rcx_25 << 2)
                        rcx_25 += i_2 << 2
                        uint64_t i_3
                        
                        do
                            arg5 = *(rdx_9 - 8)
                            rdx_9 += 0x10
                            zmm1 = __minss_xmmss_memss(
                                __minss_xmmss_memss(
                                    __minss_xmmss_memss(_mm_min_ss(arg5[0], zmm1[0])[0], 
                                        *(rdx_9 - 0x14))[0], 
                                    *(rdx_9 - 0x10))[0], 
                                *(rdx_9 - 0xc))
                            i_3 = i_2
                            i_2 -= 1
                        while (i_3 != 1)
                    
                    if (rcx_25 s< rbp_1)
                        i_2 = *rsi
                        
                        do
                            arg5 = *(i_2 + (rcx_25 << 2))
                            rcx_25 += 1
                            zmm1 = _mm_min_ss(arg5[0], zmm1[0])
                        while (rcx_25 s< rbp_1)
                
                int64_t i_4 = 0
                
                if (rbp_1 s>= 4)
                    do
                        uint64_t rax_23 = *rsi
                        zmm1[0] = zmm1[0] f+ *(rax_23 + (i_4 << 2))
                        *(rax_23 + (i_4 << 2)) = zmm1[0]
                        uint64_t rax_24 = *rsi
                        zmm1[0] = zmm1[0] f+ *(rax_24 + (i_4 << 2) + 4)
                        *(rax_24 + (i_4 << 2) + 4) = zmm1[0]
                        uint64_t rax_25 = *rsi
                        zmm1[0] = zmm1[0] f+ *(rax_25 + (i_4 << 2) + 8)
                        *(rax_25 + (i_4 << 2) + 8) = zmm1[0]
                        i_2 = *rsi
                        zmm1[0] = zmm1[0] f+ *(i_2 + (i_4 << 2) + 0xc)
                        *(i_2 + (i_4 << 2) + 0xc) = zmm1[0]
                        i_4 += 4
                    while (i_4 s< rbp_1 - 3)
                
                for (; i_4 s< rbp_1; i_4 += 1)
                    i_2 = *rsi
                    zmm1[0] = zmm1[0] f+ *(i_2 + (i_4 << 2))
                    *(i_2 + (i_4 << 2)) = zmm1[0]
            
            zmm1 = zmm6
            int32_t i_8 = 0
            
            if (r14.d s> 0 && r14.d u>= 8)
                uint64_t rdx_11 = *rsi
                zmm2 = zx.o(0)
                zmm1 = zx.o(0)
                int32_t rax_27 = r14.d & 0x80000007
                
                if (rax_27 s< 0)
                    rax_27 = ((rax_27 - 1) | 0xfffffff8) + 1
                
                i_2 = 0
                
                do
                    i_8 += 8
                    zmm2 = _mm_add_ps(zmm2, *(rdx_11 + (i_2 << 2)))
                    arg5 = *(rdx_11 + (i_2 << 2) + 0x10)
                    i_2 += 8
                    zmm1 = _mm_add_ps(zmm1, arg5)
                while (i_2 s< sx.q(r14.d - rax_27))
                
                zmm2 = _mm_add_ps(zmm2, zmm1)
                zmm2[0].q = zmm2 u>> 0x40
                zmm1 = _mm_add_ps(zmm2, zmm2)
                arg5 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                zmm1[0] = zmm1[0] + arg5[0]
            
            int64_t i_5 = sx.q(i_8)
            
            if (i_5 s< rbp_1)
                if (rbp_1 - i_5 s>= 4)
                    i_2 = *rsi
                    
                    do
                        zmm1[0] = zmm1[0] f+ *(i_2 + (i_5 << 2))
                        zmm1[0] = zmm1[0] f+ *(i_2 + (i_5 << 2) + 4)
                        zmm1[0] = zmm1[0] f+ *(i_2 + (i_5 << 2) + 8)
                        zmm1[0] = zmm1[0] f+ *(i_2 + (i_5 << 2) + 0xc)
                        i_5 += 4
                    while (i_5 s< rbp_1 - 3)
                
                if (i_5 s< rbp_1)
                    i_2 = *rsi
                    
                    do
                        zmm1[0] = zmm1[0] f+ *(i_2 + (i_5 << 2))
                        i_5 += 1
                    while (i_5 s< rbp_1)
            
            if (rbp_1 s>= 4)
                zmm3 = 0x3f800000
                zmm3[0] = 1f / zmm1[0]
                
                do
                    uint64_t rax_31 = *rsi
                    zmm3[0] = zmm3[0] f* *(rax_31 + (i_6 << 2))
                    
                    if (zmm3[0] >= zmm6[0])
                        arg5 = _mm_min_ss(zmm3[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(rax_31 + (i_6 << 2)) = arg5[0]
                    uint64_t rax_32 = *rsi
                    zmm3[0] = zmm3[0] f* *(rax_32 + (i_6 << 2) + 4)
                    
                    if (zmm3[0] >= zmm6[0])
                        arg5 = _mm_min_ss(zmm3[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(rax_32 + (i_6 << 2) + 4) = arg5[0]
                    uint64_t rax_33 = *rsi
                    zmm3[0] = zmm3[0] f* *(rax_33 + (i_6 << 2) + 8)
                    
                    if (zmm3[0] >= zmm6[0])
                        arg5 = _mm_min_ss(zmm3[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(rax_33 + (i_6 << 2) + 8) = arg5[0]
                    i_2 = *rsi
                    zmm3[0] = zmm3[0] f* *(i_2 + (i_6 << 2) + 0xc)
                    
                    if (zmm3[0] >= zmm6[0])
                        arg5 = _mm_min_ss(zmm3[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(i_2 + (i_6 << 2) + 0xc) = arg5[0]
                    i_6 += 4
                while (i_6 s< rbp_1 - 3)
            
            if (i_6 s< rbp_1)
                zmm3 = 0x3f800000
                zmm3[0] = 1f / zmm1[0]
                
                do
                    i_2 = *rsi
                    zmm3[0] = zmm3[0] f* *(i_2 + (i_6 << 2))
                    
                    if (zmm3[0] >= zmm6[0])
                        arg5 = _mm_min_ss(zmm3[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(i_2 + (i_6 << 2)) = arg5[0]
                    i_6 += 1
                while (i_6 s< rbp_1)
        else if (arg4 != 0)
            if (rbp_1 s>= 4)
                do
                    uint64_t rax_34 = *rsi
                    arg5 = *(rax_34 + (i_6 << 2))
                    
                    if (arg5[0] >= zmm6[0])
                        arg5 = _mm_min_ss(arg5[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(rax_34 + (i_6 << 2)) = arg5[0]
                    uint64_t rax_35 = *rsi
                    arg5 = *(rax_35 + (i_6 << 2) + 4)
                    
                    if (arg5[0] >= zmm6[0])
                        arg5 = _mm_min_ss(arg5[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(rax_35 + (i_6 << 2) + 4) = arg5[0]
                    uint64_t rax_36 = *rsi
                    arg5 = *(rax_36 + (i_6 << 2) + 8)
                    
                    if (arg5[0] >= zmm6[0])
                        arg5 = _mm_min_ss(arg5[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(rax_36 + (i_6 << 2) + 8) = arg5[0]
                    i_2 = *rsi
                    arg5 = *(i_2 + (i_6 << 2) + 0xc)
                    
                    if (arg5[0] >= zmm6[0])
                        arg5 = _mm_min_ss(arg5[0], 0x3f800000)
                    else
                        arg5 = zmm6
                    
                    *(i_2 + (i_6 << 2) + 0xc) = arg5[0]
                    i_6 += 4
                while (i_6 s< rbp_1 - 3)
            
            for (; i_6 s< rbp_1; i_6 += 1)
                i_2 = *rsi
                arg5 = *(i_2 + (i_6 << 2))
                
                if (arg5[0] >= zmm6[0])
                    arg5 = _mm_min_ss(arg5[0], 0x3f800000)
                else
                    arg5 = zmm6
                
                *(i_2 + (i_6 << 2)) = arg5[0]
