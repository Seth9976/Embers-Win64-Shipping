// 函数: sub_14261b780
// 地址: 0x14261b780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t result

if (arg5 == 0)
label_14261b7e9:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    int128_t zmm6
    zmm6.d = arg3.d f* 1.5f
    int128_t zmm7
    zmm7.d = arg3.d f* arg3.d
    int32_t result_1 = 0
    zmm7.d = zmm7.d f* 0.5625f
    
    if (r10_2 s<= 0)
    label_14261b90e:
        result_1 = -1
    else
        void* r9_1 = *arg1 + 0x6c
        
        while (true)
            if (*(r9_1 - 0x54) == arg6)
                arg3.d = (*(r9_1 - 0x68)).d f- arg2[1]
                float zmm1 = *(r9_1 - 0x6c) - *arg2
                uint32_t zmm0[0x4] = *(r9_1 - 0x64)
                zmm0[0] = zmm0[0] f- arg2[2]
                arg3.d = arg3.d f* arg3.d
                zmm0[0] = zmm0[0] f* zmm0[0]
                arg3.d = arg3.d f+ zmm1 * zmm1
                arg3.d = arg3.d f+ zmm0[0]
                
                if (not(arg3.d f> zmm7.d))
                    zmm0 = *(r9_1 - 0x60)
                    zmm0[0] = zmm0[0] f- zmm6.d
                    
                    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= 50f) && *(r9_1 - 0x2c) != *r9_1)
                        void* r8_2 = *(r9_1 + 0xc)
                        void* rax_8 = r9_1 + 4
                        
                        if (r8_2 != 0)
                            rax_8 = r8_2
                        
                        int32_t rax_9 = *(rax_8 + ((sx.q((arg4 u>> 0x20).d * 0x17 + arg4.d)
                            & (sx.q(*(r9_1 + 0x14)) - 1)) << 2))
                        
                        if (rax_9 != 0xffffffff)
                            int64_t rdx_3 = *(r9_1 - 0x34)
                            
                            while (true)
                                int64_t rcx_4 = sx.q(rax_9) * 2
                                
                                if (*(rdx_3 + (rcx_4 << 3)) == arg4)
                                    break
                                
                                rax_9 = *(rdx_3 + (rcx_4 << 3) + 8)
                                
                                if (rax_9 == 0xffffffff)
                                    goto label_14261b8fc
                            
                            if (rax_9 != 0xffffffff)
                                break
            
        label_14261b8fc:
            result_1 += 1
            r9_1 += 0x88
            
            if (result_1 s>= r10_2)
                goto label_14261b90e
    
    if (sub_14261e750(arg1, result_1, arg5, arg6) == 0)
        if (result_1 s>= 0)
            *(sx.q(result_1) * 0x88 + *arg1 + 0x10) = 0
        
        int32_t zmm1_1 = arg2[1]
        float var_f8 = *arg2
        float var_f0_1 = arg2[2]
        int32_t var_f4_1 = zmm1_1
        int32_t var_ec_1 = zmm6.d
        int64_t var_d0
        __builtin_memset(&var_d0, 0, 0x3c)
        int32_t var_94_1 = 0x80
        int32_t var_90_1 = 0xffffffff
        int32_t var_8c_1 = 0
        int64_t var_80_1 = 0
        int32_t var_78_1 = 0
        int64_t* var_e0_1 = arg6
        char var_d8_1 = 0
        sub_14261e0d0(arg1, &var_f8, arg4, arg5, arg6)
        result_1 = sub_14261b260(arg1, &var_f8)
        int32_t var_78_2 = 0
        
        if (var_80_1 != 0)
            sub_140a74f90(var_80_1)
        
        int64_t var_b8
        var_b8.d = 0
        int32_t var_90_2 = 0xffffffff
        int32_t var_8c_2 = 0
        int64_t var_b0
        sub_14059a8e0(&var_b0, 0)
        int64_t var_a0
        
        if (var_a0 != 0)
            sub_140a74f90(var_a0)
        
        uint64_t var_c0
        uint64_t rcx_13 = var_c0
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_d0
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    *(sx.q(result_1) * 0x88 + *arg1 + 0x10) = arg1[0x4b].d
    result = zx.q(result_1)
else
    if (sub_142612750(arg5, arg4, arg6) != 0)
        goto label_14261b7e9
    
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_128)
return result
