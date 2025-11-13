// 函数: sub_141e143a0
// 地址: 0x141e143a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t var_10 = rbp
void var_178
uint64_t result = __security_cookie ^ &var_178
uint64_t result_2 = result
int64_t* rcx = *arg1
int32_t i = 0
char* rbx = arg3
char* var_138 = rbx
uint32_t zmm14[0x4] = arg2
int128_t zmm12 = zx.o(0)
int64_t var_128

if (rcx != 0 && arg1[5].b != 0)
    uint32_t zmm6[0x4]
    uint32_t var_58_1[0x4] = zmm6
    char var_148_1
    char rax_2
    
    if (rbx != 0)
        rax_2 = (*(*rcx + 0x2d0))()
        var_148_1 = 1
    
    if (rbx == 0 || rax_2 == 0)
        var_148_1 = 0
    
    bool cond:1_1 = *(arg1 + 0x174) == 0xffffffff
    arg1[0x2e].d = arg1[0x25].d
    *(arg1 + 0x16c) = 0
    int32_t rax_3
    uint32_t zmm7[0x4]
    int128_t zmm8
    uint32_t zmm9[0x4]
    
    if (not(cond:1_1) && not(0f f!= arg1[0x2a].d))
        rax_3, zmm7, zmm8, zmm9 = sub_141ded470(&arg1[0x26])
    
    if (cond:1_1 || 0f f!= arg1[0x2a].d || rax_3.b != 0)
        rax_3.b = 0
    else
        rax_3.b = 1
    
    arg1[0xa].b = rax_3.b
    
    if (rax_3.b != 0)
        arg1[9].d = 0
        
        if (*(arg1 + 0x4c) s<= 0xffffffff)
            sub_14083ad30(&arg1[8], 0)
    
    zmm6 = arg1[0xd].d
    result = 0
    
    if (not(zmm6[0] f>= 10f))
        zmm6[0] = zmm6[0] f+ zmm14[0]
        arg1[0xd].d = zmm6[0]
    
    if (arg1[5].b != 0)
        int128_t zmm10 = 0x322bcc77
        int128_t zmm13 = 0x3851b717
        uint32_t zmm15[0x4] = 0x7f7fc99e
        uint32_t var_68_1[0x4] = zmm7
        int128_t var_78_1 = zmm8
        uint32_t var_88_1[0x4] = zmm9
        
        while (not(zmm6[0] f<= zmm10.d))
            result = zx.q(result.d + 1)
            int32_t result_1 = result.d
            
            if (result.d s>= 0xa)
                break
            
            arg1[0x25].d
            uint64_t var_130 = 0
            char rax_4
            uint32_t zmm11_1[0x4]
            rax_4, zmm9, zmm10, zmm11_1 = sub_141e14a90(&arg1[0xb], &arg1[0x25], &var_130)
            uint32_t zmm2[0x4]
            
            if (rax_4 - 2 u<= 1)
                void* rdx_11 = *arg1
                zmm2 = *(rdx_11 + 0xe8)
                zmm2[0] = zmm2[0] f* *(arg1 + 0x2c)
                result = sub_141e31c70(arg1, sub_141ddd680(&var_128, rdx_11 + 0xe0, zmm2[0]), 0)
                break
            
            zmm8 = *(arg1 + 0x74)
            char r13_1 = arg1[0xf].b
            *(arg1 + 0x16c) = zmm8.d f+ *(arg1 + 0x16c)
            result = sub_141e2ae40(arg1)
            
            if (result.b == 0 && *(arg1 + 0x51) != 0)
                if (r13_1 == 0)
                    result = arg1[0x1f]
                else
                    result = arg1[0x1d]
                
                if (*(result + (sx.q(*(arg1 + 0x7c)) << 2)) == 0xffffffff)
                    uint32_t zmm1[0x4] = arg1[0xe].d
                    zmm2 = arg1[0x25].d
                    uint32_t zmm0_2[0x4]
                    
                    if (_mm_and_ps(zmm1, zmm11_1)[0] f> zmm10.d)
                        if (arg1[0xf].b == 0)
                            zmm6 = arg1[0x10].d
                        else
                            zmm6 = *(arg1 + 0x84)
                            zmm6[0] = zmm6[0] f+ arg1[0x10].d
                        
                        if (*(arg1 + 0x8c) != 0xffffffff)
                            zmm0_2, result = sub_141e20140(&arg1[0xb], zmm2[0])
                            zmm7 = zmm0_2
                            
                            if (arg1[0xf].b == 0)
                                if (_mm_and_ps(zmm6, zmm11_1)[0] f> zmm10.d)
                                    zmm0_2 = *(arg1[0x12] + (sx.q(*(arg1 + 0x7c)) << 2))
                                    
                                    if (not(zmm0_2[0] f>= zmm12.d))
                                        zmm0_2 = sub_141e58580(&arg1[0x17], 
                                            sub_141e56130(&arg1[0x17], arg1[0x10].d[0], 
                                                &arg1[0x19]), 
                                            arg1[0x10].d)
                                        rbx = var_138
                                        *(arg1[0x12] + (sx.q(*(arg1 + 0x7c)) << 2)) = zmm0_2[0]
                                    
                                    zmm6 = zmm7
                                    zmm6[0] = zmm6[0] f- zmm0_2[0]
                                else
                                    zmm6 = zmm7
                            else
                                zmm6[0] = zmm6[0] f- *(arg1 + 0xbc)
                                
                                if (_mm_and_ps(zmm6, zmm11_1)[0] f> zmm10.d)
                                    zmm6 = *(arg1[0x14] + (sx.q(*(arg1 + 0x7c)) << 2))
                                    
                                    if (not(zmm6[0] f>= zmm12.d))
                                        zmm6 = *(arg1 + 0x84)
                                        zmm6[0] = zmm6[0] f+ arg1[0x10].d
                                        zmm0_2 = sub_141e58580(&arg1[0x17], 
                                            sub_141e56130(&arg1[0x17], zmm6[0], &arg1[0x19]), 
                                            zmm6[0])
                                        zmm6 = zmm0_2
                                        rbx = var_138
                                        *(arg1[0x14] + (sx.q(*(arg1 + 0x7c)) << 2)) = zmm0_2[0]
                                    
                                    zmm6[0] = zmm6[0] f- zmm7[0]
                                else
                                    zmm6 = arg1[0x18].d
                                    zmm6[0] = zmm6[0] f- zmm7[0]
                        else
                            zmm6[0] = zmm6[0] f- zmm2[0]
                            zmm6[0] = zmm6[0] f/ zmm1[0]
                            zmm6 = _mm_and_ps(zmm6, zmm11_1)
                    else
                        zmm6 = zmm15
                    
                    void* rdx_4 = *arg1
                    zmm0_2 = *(rdx_4 + 0x114)
                    zmm2 = *(rdx_4 + 0xe8)
                    zmm2[0] = zmm2[0] f* *(arg1 + 0x2c)
                    result.b = zmm0_2[0] f>= zmm12.d
                    
                    if (result.b == 0)
                        zmm0_2 = zmm2
                    
                    zmm0_2 = __maxss_xmmss_memss(zmm0_2[0], 0x38d1b717)
                    
                    if (not(zmm6[0] f> zmm0_2[0]))
                        if (result.b == 0)
                            zmm2 = zmm6
                        
                        int64_t* rax_7
                        rax_7, zmm8, zmm9 = sub_141ddd680(&var_128, rdx_4 + 0xe0, zmm2[0])
                        result = sub_141e31c70(arg1, rax_7, 0)
            
            rbp.b = rax_4 == 0
            
            if (rax_4 == 0)
                if (arg1[0xa].b != 0)
                    result, zmm9 =
                        sub_141e3bee0(*arg1 + 0x128, zmm9, arg1[0x25].d, &arg1[8], zmm8.d)
                
                if (var_148_1 != 0)
                    result = sub_140d3e110(&arg1[0x21])
                    
                    if (result.b != 0 && arg1[0x31].d s<= 0)
                        int512_t zmm3_2
                        zmm3_2, zmm9, zmm10, zmm12, zmm13, zmm14, zmm15 =
                            sub_141e1fec0(*arg1, &var_128, zmm9, arg1[0x25].d)
                        
                        if (arg4 == 0)
                            result, zmm9, zmm10, zmm12, zmm13, zmm14, zmm15 =
                                sub_141de06c0(rbx, &var_128)
                        else
                            zmm3_2.o = arg1[0x29].d
                            result = sub_141e0a870(sub_140d3c6e0(&arg1[0x21]), &var_128, 
                                *(*arg1 + 0x158))
            
            zmm7 = arg1[0x25].d
            int32_t* rbx_2 = var_130
            
            if (rbp.b != 0 && arg1[0x2c].b == 0)
                result, zmm7, zmm10, zmm12 = sub_141e250e0(arg1, zmm9[0], zmm7[0], rbx_2)
            
            zmm6 = arg1[0xd].d
            
            if (not(zmm6[0] f<= zmm10.d) && arg1[0x11].b != 0 && rbx_2 == 0
                    && not(zmm7[0] f!= arg1[0x25].d))
                if (r13_1 == 0)
                    result = arg1[0x1f]
                else
                    result = arg1[0x1d]
                
                int32_t rdx_10 = *(result + (sx.q(*(arg1 + 0x7c)) << 2))
                
                if (rdx_10 == 0xffffffff)
                    break
                
                float var_144
                float var_140
                sub_141e247c0(*arg1, rdx_10, &var_144, &var_140)
                
                if (r13_1 == 0)
                    arg1[0x25].d = var_140 f- zmm13.d
                else
                    arg1[0x25].d = var_144
            else if (rax_4 == 1)
                break
            
            result = zx.q(result_1)
            rbx = var_138
            
            if (arg1[5].b == 0)
                break
    
    if (*(arg1 + 0x184) != 0)
        *(arg1 + 0x184) = 0
    
    if (*(arg1 + 0x17c) != 0)
        *(arg1 + 0x17c) = 0

if (not(zmm12.d f!= arg1[0x2a].d))
    result = sub_141ded470(&arg1[0x26])

if (not(zmm12.d f!= arg1[0x2a].d) && result.b != 0)
    result = sub_141e31e10(arg1)
else if (arg1[0x2c].b == 0 && arg1[0x24].d s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rbx_4 = arg1[0x23] + rsi_1
        int64_t rcx_34 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
        int64_t var_120_1 = *arg1
        int32_t var_110_1 = arg1[0x22].d
        var_128 = rcx_34
        void* var_118_1 = rbx_4
        int64_t* rcx_35 = *(rbx_4 + 0x50)
        result = (*(*rcx_35 + 0x288))(rcx_35, &var_128, zmm14)
        i += 1
        rsi_1 += 0xb8
    while (i s< arg1[0x24].d)

__security_check_cookie(result_2 ^ &var_178)
return result
