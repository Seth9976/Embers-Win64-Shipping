// 函数: sub_1409db510
// 地址: 0x1409db510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19f8)
void var_1a18
uint64_t result = __security_cookie ^ &var_1a18
uint64_t result_1 = result
uint64_t* r15 = arg3
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    result = sub_1405dadb0(arg3, 0)

if (*(arg1 + 0x600) != 0)
    void* i = *(arg1 + 0x608)
    
    if (i != 0)
        int32_t rbx_1 = arg3.d
        void* i_1 = i
        int96_t var_1968_1 = (*(i + 0x190))[0].12
        float var_1958_1[0x4] = *(i + 0x1a0)
        int64_t var_1948_1 = (*(i + 0x1b0))[0].q
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        void* var_78_1 = nullptr
        int32_t var_68_1 = 0
        int32_t var_64_1 = 0x63
        
        do
            result = zx.q(*(i + 0x188) u>> 0x1f)
            float zmm1[0x4]
            
            if (result.b == 0)
                rbx_1 &= 0xfffffff0
                
                do
                    uint64_t rdx = zx.q(rbx_1)
                    void* rcx_1 = *(i + ((zx.q(rbx_1) & 7) << 3) + 0x148)
                    
                    if (rcx_1 != 0 && (*(rcx_1 + 0x188) & 0x7fffffff) u> 0)
                        zmm1 = var_1948_1.d
                        float zmm5[0x4] = var_1948_1:4.d
                        int64_t rcx_2 = *(arg2 + 8)
                        int64_t zmm4 = zmm5[0].q
                        char var_19d8_1 = 1
                        zmm5[0] = zmm5[0] f* *(&data_142e669e0 + ((zx.q(rdx.d) & 1) << 2))
                        int64_t zmm2 = zmm1[0].q
                        zmm5[0] = zmm5[0] f+ var_1968_1.d
                        zmm5[0] = zmm5[0] f* *(&data_142e669e0 + ((zx.q((rdx u>> 2).d) & 1) << 2))
                        zmm4.d = zmm4.d f* *(&data_142e669e0 + ((zx.q(rdx.d u>> 1) & 1) << 2))
                        zmm5[0] = zmm5[0] f+ var_1968_1:8.d
                        zmm1[0] = zmm1[0] + zmm5[0]
                        zmm4.d = zmm4.d f+ var_1968_1:4.d
                        zmm5[0] = zmm5[0] - zmm1[0]
                        zmm1[0] = zmm1[0] + zmm5[0]
                        zmm5[0] = zmm5[0] - zmm1[0]
                        zmm2.d = zmm2.d f+ zmm4.d
                        zmm4.d = zmm4.d f- zmm1[0]
                        float var_19c0_1 = zmm1[0]
                        float var_19cc_1 = zmm5[0]
                        int64_t var_19f0 = (_mm_unpacklo_ps(zmm5, zmm4)).q
                        float var_19e8_1 = var_19cc_1
                        int64_t var_19e4_1 = (_mm_unpacklo_ps(zmm1, zmm2)).q
                        float var_19dc_1 = var_19c0_1
                        
                        if ((*arg2)(rcx_2, &var_19f0) != 0)
                            sub_1409d2530(&i_1, rbx_1)
                    
                    if ((rbx_1.b & 7) u>= 7)
                        rbx_1 |= 8
                    else
                        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                    
                    result = zx.q(rbx_1 u>> 3)
                while ((result.b & 1) == 0)
                
                r15 = arg3
            
            int32_t j = 0
            
            while (j s>= 0)
                if (j s>= *(i + 0x130))
                    break
                
                void* i_3 = *(i + 0x120)
                void* i_2 = i
                int64_t r13_1 = sx.q(r15[1].d)
                
                if (i_3 != 0)
                    i_2 = i_3
                
                int64_t j_1 = sx.q(j)
                int32_t rax_18 = (r13_1 + 1).d
                r15[1].d = rax_18
                
                if (rax_18 s> *(r15 + 0xc))
                    sub_1405a4cf0(r15)
                
                j += 1
                result = zx.q(*(i_2 + j_1 * 0x30 + 8))
                *(*r15 + (r13_1 << 2)) = result.d
            
            int32_t rcx_8 = var_68_1
            
            if (rcx_8 == 0)
                zmm1 = data_142d3f660
                zmm1[0]
                i_1.o = 0.o
                float var_1988[0x4]
                var_1948_1 = var_1988[0].q
                var_1968_1 = zmm1[0].12
                float var_1958_3[0x4] = zmm1
            else
                void var_1938
                void* r9_1 = &var_1938
                
                if (var_78_1 != 0)
                    r9_1 = var_78_1
                
                int64_t rax_21 = sx.q(rcx_8 - 1) << 6
                i_1.o = *(rax_21 + r9_1)
                var_1968_1 = (*(rax_21 + r9_1 + 0x10))[0].12
                float var_1958_2[0x4] = *(rax_21 + r9_1 + 0x20)
                var_1948_1 = (*(rax_21 + r9_1 + 0x30))[0].q
                
                if (0 != 0)
                    memmove((sx.q(rcx_8 - 1) << 6) + r9_1, (sx.q(rcx_8) << 6) + r9_1, 0 << 6)
                    rcx_8 = var_68_1
                
                var_68_1 = rcx_8 - 1
                result = sub_1409da9e0(&var_1938)
            
            i = i_1
        while (i != 0)
        
        if (var_78_1 != 0)
            result = sub_140a74f90(var_78_1)

__security_check_cookie(result_1 ^ &var_1a18)
return result
