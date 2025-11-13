// 函数: sub_142075c40
// 地址: 0x142075c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t var_b8 = __security_cookie ^ &var_1a8
int64_t result = 0
uint64_t rsi = zx.q(arg1[1])
int64_t var_f8
int64_t* rbx = &var_f8
int64_t i_6 = 4
int64_t i_8 = 4
int64_t* r12 = arg2
int32_t var_170 = 0xa1a1
int16_t* r15 = arg3
int32_t i_14 = *arg1
int16_t* var_130 = arg3
__builtin_memset(&var_f8, 0, 0x40)
int64_t i

do
    if (i_14 s> *(rbx + 0xc))
        result = sub_1405c5510(rbx, i_14)
    
    rbx = &rbx[2]
    i = i_8
    i_8 -= 1
while (i != 1)
int32_t r14 = 0xa1a1

if (rsi.d s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int32_t rcx_2 = i_14 s>> 8
    int32_t var_15c_1 = rcx_2
    uint64_t var_138_1 = rsi
    
    while (true)
        int64_t rax_2 = *r12
        uint64_t i_13 = zx.q(i_14)
        char var_16a_1 = rcx_2.b
        int16_t var_16c = 0x202
        char var_169_1 = i_13.b
        (*(rax_2 + 0x150))(r12, &var_16c, 4)
        int64_t var_f0
        int64_t* rbx_1 = &var_f0
        int64_t i_9 = 4
        int64_t i_1
        
        do
            *rbx_1 = 0
            
            if (*(rbx_1 + 4) s<= 0xffffffff)
                sub_1405c5510(&rbx_1[-1], 0)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_9
            i_9 -= 1
        while (i_1 != 1)
        
        if (i_13.d s> 0)
            uint64_t i_10 = i_13
            uint64_t i_2
            
            do
                int32_t var_120
                sub_140acc9b0(&var_120, r15)
                int32_t var_11c
                zmm8 = var_11c
                zmm7 = var_120
                int32_t var_118
                zmm9 = var_118
                zmm6 = _mm_max_ss(_mm_max_ss(zmm8.d, zmm7.d).d, zmm9.d)
                uint128_t zmm0_1 = _mm_cvtps_pd(zmm6.q)
                int32_t var_188
                
                if (zmm0_1.q f>= 0x3949f623d5a8a733)
                    int32_t _Y
                    frexp(zmm0_1.q, &_Y)
                    int32_t zmm3 = fconvert.s(zmm0_1.q) f/ zmm6.d f* 255f
                    zmm0_1.d = ((r14 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                    int32_t rdx_4 = int.d(zmm3 f* zmm7.d f+ zmm0_1.d)
                    
                    if (rdx_4 s>= 0)
                        char rcx_6 = -1
                        
                        if (rdx_4 s< 0xff)
                            rcx_6 = rdx_4.b
                        
                        var_188:2.b = rcx_6
                    else
                        var_188:2.b = 0
                    
                    zmm0_1.d = (((r14 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
                        | 0x3f800000).d f- 1f
                    int32_t rdx_5 = int.d(zmm3 f* zmm8.d f+ zmm0_1.d)
                    
                    if (rdx_5 s>= 0)
                        char rcx_7 = -1
                        
                        if (rdx_5 s< 0xff)
                            rcx_7 = rdx_5.b
                        
                        var_188:1.b = rcx_7
                    else
                        var_188:1.b = 0
                    
                    r14 = ((r14 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                        + 0x3619636b
                    zmm0_1.d = (r14 u>> 9 | 0x3f800000).d f- 1f
                    int32_t rdx_6 = int.d(zmm3 f* zmm9.d f+ zmm0_1.d)
                    
                    if (rdx_6 s>= 0)
                        char rcx_8 = -1
                        
                        if (rdx_6 s< 0xff)
                            rcx_8 = rdx_6.b
                        
                        var_188.b = rcx_8
                    else
                        var_188.b = 0
                    
                    int32_t rcx_9 = int.d(_mm_cvtepi32_ps(zx.o(_Y)).d)
                    char rax_15
                    
                    if (rcx_9 s>= 0xffffff80)
                        rax_15 = 0x7f
                        
                        if (rcx_9 s< 0x7f)
                            rax_15 = rcx_9.b
                    else
                        rax_15 = -0x80
                    
                    var_188:3.b = rax_15 - 0x80
                else
                    int32_t var_168_1 = 0
                    var_188 = 0
                
                void var_110
                sub_140ad7490(&var_188, &var_110)
                int64_t rbx_2 = sx.q(var_f0.d)
                int32_t rax_16 = (rbx_2 + 1).d
                var_f0.d = rax_16
                
                if (rax_16 s> var_f0:4.d)
                    sub_1405daba0(&var_f8)
                
                *(rbx_2 + var_f8) = var_188:2.b
                int64_t var_e0_1
                int64_t rbx_3 = sx.q(var_e0_1.d)
                int32_t rax_18 = (rbx_3 + 1).d
                var_e0_1.d = rax_18
                int64_t var_e8
                
                if (rax_18 s> var_e0_1:4.d)
                    sub_1405daba0(&var_e8)
                
                *(rbx_3 + var_e8) = var_188:1.b
                int64_t var_d0_1
                int64_t rbx_4 = sx.q(var_d0_1.d)
                int32_t rax_20 = (rbx_4 + 1).d
                var_d0_1.d = rax_20
                int64_t var_d8
                
                if (rax_20 s> var_d0_1:4.d)
                    sub_1405daba0(&var_d8)
                
                *(rbx_4 + var_d8) = var_188.b
                int64_t var_c0_1
                int64_t rbx_5 = sx.q(var_c0_1.d)
                int32_t rax_22 = (rbx_5 + 1).d
                var_c0_1.d = rax_22
                int64_t var_c8
                
                if (rax_22 s> var_c0_1:4.d)
                    sub_1405daba0(&var_c8)
                
                r15 = &r15[4]
                *(rbx_5 + var_c8) = var_188:3.b
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
            var_130 = r15
            var_170 = r14
        
        int64_t* rbx_6 = &var_f8
        int64_t var_140_1 = 4
        int64_t* var_148_1 = &var_f8
        int64_t rdi = 4
        
        while (true)
            int64_t rax_24 = sx.q(rbx_6[1].d)
            int64_t r15_1 = 0
            char* r14_2 = *rbx_6
            int32_t rsi_1 = 0
            int64_t var_180 = 0
            int64_t var_178_1 = 0
            int32_t rdx_12 = (rax_24 * 2).d
            void* r12_1 = &r14_2[rax_24]
            void* var_150_1 = r12_1
            
            if (rdx_12 s> 0)
                sub_1405c5510(&var_180, rdx_12)
                rsi_1 = var_178_1.d
                r15_1 = var_180
            
            if (r14_2 u< r12_1)
                while (true)
                    int64_t i_12 = 0
                    int32_t i_3 = 0
                    int32_t rdi_1 = 0
                    
                    while (true)
                        if (i_3 s< 0x80 && &r14_2[sx.q(i_3)] u< r12_1)
                            i_12 = sx.q(i_3)
                            rdi_1 = 0
                            
                            while (i_3 s< 0x80)
                                char* rdx_14 = &r14_2[sx.q(i_3)]
                                
                                if (rdx_14 u>= r12_1)
                                    break
                                
                                if (r14_2[i_12] != *rdx_14)
                                    break
                                
                                i_3 += 1
                                rdi_1 += 1
                                
                                if (rdi_1 s>= 0x7f)
                                    break
                            
                            if (rdi_1 s<= 4)
                                continue
                        else if (rdi_1 s<= 4)
                            int64_t rdi_2 = sx.q(rsi_1)
                            rsi_1 = (rdi_2 + 1).d
                            var_178_1.d = rsi_1
                            
                            if (rsi_1 s> var_178_1:4.d)
                                sub_1405daba0(&var_180)
                                rsi_1 = var_178_1.d
                                r15_1 = var_180
                            
                            *(rdi_2 + r15_1) = i_3.b
                            
                            if (i_3 s> 0)
                                int64_t rdx_21 = var_180
                                char* r15_5 = r14_2
                                uint64_t i_11 = zx.q(i_3)
                                uint64_t i_4
                                
                                do
                                    int64_t rdi_3 = sx.q(rsi_1)
                                    rsi_1 = (rdi_3 + 1).d
                                    var_178_1.d = rsi_1
                                    
                                    if (rsi_1 s> var_178_1:4.d)
                                        sub_1405daba0(&var_180)
                                        rdx_21 = var_180
                                        rsi_1 = var_178_1.d
                                    
                                    char rax_33 = *r15_5
                                    r15_5 = &r15_5[1]
                                    *(rdi_3 + rdx_21) = rax_33
                                    i_4 = i_11
                                    i_11 -= 1
                                while (i_4 != 1)
                                r15_1 = var_180
                                r12_1 = var_150_1
                            
                            break
                        
                        int64_t rdx_16
                        
                        if (i_12.d s<= 0)
                            rdx_16 = var_180
                        else
                            int64_t r15_2 = sx.q(rsi_1)
                            rsi_1 = (r15_2 + 1).d
                            var_178_1.d = rsi_1
                            
                            if (rsi_1 s> var_178_1:4.d)
                                sub_1405daba0(&var_180)
                                rsi_1 = var_178_1.d
                            
                            rdx_16 = var_180
                            *(r15_2 + rdx_16) = i_12.b
                            
                            if (i_12.d s> 0)
                                char* r12_2 = r14_2
                                uint64_t i_7 = zx.q(i_12.d)
                                uint64_t i_5
                                
                                do
                                    int64_t r15_3 = sx.q(rsi_1)
                                    rsi_1 = (r15_3 + 1).d
                                    var_178_1.d = rsi_1
                                    
                                    if (rsi_1 s> var_178_1:4.d)
                                        sub_1405daba0(&var_180)
                                        rdx_16 = var_180
                                        rsi_1 = var_178_1.d
                                    
                                    char rax_29 = *r12_2
                                    r12_2 = &r12_2[1]
                                    i_5 = i_7
                                    i_7 -= 1
                                    *(r15_3 + rdx_16) = rax_29
                                while (i_5 != 1)
                                r12_1 = var_150_1
                        
                        int32_t r15_4 = rsi_1 + 1
                        rdi_1.b -= 0x80
                        var_178_1.d = r15_4
                        
                        if (r15_4 s> var_178_1:4.d)
                            sub_1405daba0(&var_180)
                            rdx_16 = var_180
                            r15_4 = var_178_1.d
                        
                        int64_t rax_30 = sx.q(rsi_1)
                        rsi_1 = r15_4 + 1
                        var_178_1.d = rsi_1
                        *(rax_30 + rdx_16) = rdi_1.b
                        
                        if (rsi_1 s> var_178_1:4.d)
                            sub_1405daba0(&var_180)
                            rsi_1 = var_178_1.d
                        
                        r15_1 = var_180
                        *(sx.q(r15_4) + r15_1) = r14_2[sx.q(i_12.d)]
                        break
                    
                    r14_2 = &r14_2[sx.q(i_3)]
                    
                    if (r14_2 u>= r12_1)
                        break
                
                rbx_6 = var_148_1
                rdi = var_140_1
            
            r12 = arg2
            result = (*(*r12 + 0x150))(r12, r15_1, sx.q(rsi_1))
            
            if (r15_1 != 0)
                result = sub_140a74f90(r15_1)
            
            rbx_6 = &rbx_6[2]
            int64_t temp2_1 = rdi
            rdi -= 1
            var_148_1 = rbx_6
            var_140_1 = rdi
            
            if (temp2_1 == 1)
                break
        
        uint64_t temp3_1 = var_138_1
        var_138_1 -= 1
        i_6 = 4
        r14 = var_170
        r15 = var_130
        rcx_2 = var_15c_1
        
        if (temp3_1 == 1)
            break

int64_t* rbx_7 = &var_b8

do
    int64_t rcx_29 = rbx_7[-2]
    rbx_7 = &rbx_7[-2]
    i_6 -= 1
    
    if (rcx_29 != 0)
        result = sub_140a74f90(rcx_29)
while (i_6 != 0)

__security_check_cookie(var_b8 ^ &var_1a8)
return result
