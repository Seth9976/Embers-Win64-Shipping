// 函数: sub_14227f6f0
// 地址: 0x14227f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c68
int64_t rax_1 = __security_cookie ^ &var_c68
int64_t* rcx = arg1[0x44]
char rax_3

if (rcx[0x53] != 0 && (*(rcx + 0x294) & 2) != 0)
    rax_3 = (*(*rcx + 0x6a8))(rcx)

int32_t result

if (rcx[0x53] == 0 || (*(rcx + 0x294) & 2) == 0 || rax_3 == 0)
    result = arg1[0x4e2].d

if ((rcx[0x53] != 0 && (*(rcx + 0x294) & 2) != 0 && rax_3 != 0) || result.b s>= 0
        || test_bit(result, 8))
    (*(*arg1 + 0x718))(arg1, arg2)
    float zmm0
    zmm0, result = sub_141dc5480(arg1, arg3)
    bool cond:0_1 = (arg1[0x4e2].d & 0x200) == 0
    int128_t zmm6
    zmm6.d = arg2.d f/ _mm_max_ss(zmm0, 0x38d1b717)
    zmm6.d = zmm6.d f+ *(arg1 + 0x272c)
    *(arg1 + 0x272c) = zmm6.d
    
    if (not(cond:0_1))
        int32_t rcx_3
        rcx_3.b = *(arg1 + 0xec) == 0
        
        if ((rcx_3.b & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
            int32_t rbx_2 = *(arg1 + 0xec)
            sub_140b5b8a0(arg1[0x1d].d, 0x11a)
            int32_t rcx_4
            rcx_4.b = rbx_2 == 0
        
        uint32_t zmm7_1[0x4]
        uint32_t zmm8_1[0x4]
        result, zmm7_1, zmm8_1 = sub_141dcdc50(arg1)
        
        if (result == 3)
            uint32_t var_28_1[0x4] = zmm7_1
            uint32_t var_38_1[0x4] = zmm8_1
            int64_t* rax_6 = sub_1424b0d70()
            void* rax_7 = rax_6[0x23]
            
            if (rax_7 == 0)
                int64_t rdx_1 = *rax_6
                (*(rdx_1 + 0x390))(rax_6, rdx_1)
                rax_7 = rax_6[0x23]
            
            int128_t zmm11 = *(rax_7 + 0x2a4)
            float zmm6_1 = *(rax_7 + 0x2a8)
            void var_648
            (*(*arg1 + 0x660))(arg1, &var_648)
            void var_c18
            (*(*arg1 + 0x668))(arg1, &var_c18)
            int32_t var_c48
            sub_14200cdd0(&var_c48, &var_648, arg1)
            int32_t var_c38
            result = sub_14200cdd0(&var_c38, &var_c18, arg1)
            uint32_t zmm9[0x4] = var_c48
            int32_t var_c44
            zmm8_1 = var_c44
            zmm9[0] = zmm9[0] f- var_c38
            int32_t var_c34
            zmm8_1[0] = zmm8_1[0] f- var_c34
            int32_t var_c40
            zmm7_1 = var_c40
            int32_t var_c30
            zmm7_1[0] = zmm7_1[0] f- var_c30
            int64_t zmm0_1
            zmm0_1.d = zmm9[0].q.d f* zmm9[0]
            
            if (zmm8_1[0] f* zmm8_1[0] f+ zmm0_1.d + zmm7_1[0] f* zmm7_1[0] > zmm6_1 * zmm6_1
                    || not(zmm11.d f>= *(arg1 + 0x272c)))
                float var_638
                float zmm1 = var_638 * 65536f * 0.00277777785f
                float var_63c
                float zmm2_1 = var_63c * 65536f * 0.00277777785f
                uint32_t r8_5 = zx.d((int.d(zmm1 + zmm1 + 0.5f) s>> 1).w) << 0x10
                    | zx.d((int.d(zmm2_1 + zmm2_1 + 0.5f) s>> 1).w)
                float var_c08
                zmm1 = var_c08 * 65536f * 0.00277777785f
                float var_c0c
                zmm2_1 = var_c0c * 65536f * 0.00277777785f
                result = int.d(zmm2_1 + zmm2_1 + 0.5f) s>> 1
                
                if (r8_5 != (zx.d((int.d(zmm1 + zmm1 + 0.5f) s>> 1).w) << 0x10 | zx.d(result.w)))
                label_14227f9f5:
                    int64_t* rcx_13 = arg1[0x44]
                    int64_t var_c28 = var_c48.q
                    int32_t var_c20_1 = var_c40
                    result = sub_14256a870(rcx_13, &var_c28)
                    *(arg1 + 0x272c) = 0
                else
                    if (_mm_and_ps(zmm9, 0x7fffffff)[0] f> 9.99999975e-05f)
                        goto label_14227f9f5
                    
                    if (_mm_and_ps(zmm8_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                        goto label_14227f9f5
                    
                    if (_mm_and_ps(zmm7_1, 0x7fffffff)[0] f> 9.99999975e-05f
                            || not(arg1[0x4e6].d.d f>= *(arg1 + 0x272c)))
                        goto label_14227f9f5
            
            arg1[0x4e2].d &= 0xfffffdff
            char var_658_1 = 0
            int64_t var_6a8
            
            if (var_6a8 != 0)
                result = sub_140a74f90(var_6a8)
            
            char var_88_1 = 0
            int64_t var_d8
            
            if (var_d8 != 0)
                result = sub_140a74f90(var_d8)

__security_check_cookie(rax_1 ^ &var_c68)
return result
