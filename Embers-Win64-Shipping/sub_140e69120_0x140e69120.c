// 函数: sub_140e69120
// 地址: 0x140e69120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
*arg4 = zx.o(0)
int64_t* r8 = *(arg1 + 0x50)
int64_t r14
r14.b = 0
void* rdx_2 = &r8[sx.q(*(arg1 + 0x58)) * 2]
int64_t* rax_2 = r8
int32_t rax_4

if (r8 != rdx_2)
    while (true)
        int64_t rcx = *rax_2
        
        if (rcx != 0 && rcx == *arg2)
            break
        
        rax_2 = &rax_2[2]
        
        if (rax_2 == rdx_2)
            goto label_140e6918d
    
    rax_4 = ((rax_2 - r8) s>> 4).d

uint64_t result

if (r8 == rdx_2 || rax_4 == 0xffffffff)
label_140e6918d:
    result = 0
else
    int32_t i = rax_4 + 1
    
    if (i s>= *(arg1 + 0x58))
        result = 0
    else
        int64_t rsi_2 = sx.q(i) << 4
        
        do
            int64_t* rcx_1 = *(rsi_2 + *(arg1 + 0x50))
            int64_t var_1f0
            (*(*rcx_1 + 0x20))(rcx_1, &var_1f0)
            int64_t rax_7 = var_1f0
            int64_t* var_1e8
            
            if (rax_7 != 0)
                if (var_1e8 != 0)
                    var_1e8[1].d += 1
                
                int64_t var_1d0 = rax_7
                int64_t* var_1c8_1 = var_1e8
                
                if (var_1e8 != 0)
                    var_1e8[1].d += 1
                
                void var_1a0
                uint128_t zmm0_1 = sub_140da8ef0(arg3, &var_1a0, &var_1d0)
                
                if (var_1e8 != 0)
                    var_1e8[1].d -= 1
                    
                    if (var_1e8[1].d == 1)
                        (**var_1e8)(var_1e8)
                        int32_t temp3_1 = *(var_1e8 + 0xc)
                        *(var_1e8 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_1e8 + 8))(var_1e8, 1)
                
                if (sub_140db3500(&var_1a0) == 0)
                    if (var_1e8 != 0)
                        var_1e8[1].d += 1
                    
                    int64_t var_1c0 = var_1f0
                    int64_t* var_1b8_1 = var_1e8
                    
                    if (var_1e8 != 0)
                        var_1e8[1].d += 1
                    
                    sub_140e64900(data_143e29f28, &var_1c0, &var_1a0, data_1439ae51c, zmm0_1)
                    
                    if (var_1e8 != 0)
                        var_1e8[1].d -= 1
                        
                        if (var_1e8[1].d == 1)
                            (**var_1e8)(var_1e8)
                            int32_t temp7_1 = *(var_1e8 + 0xc)
                            *(var_1e8 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*var_1e8 + 8))(var_1e8, 1)
                
                void var_198
                
                if (sub_140db3500(&var_1a0) != 0)
                    void* rdx_6 = &var_198
                    int64_t var_1fc_1 = 0
                    void* var_78
                    
                    if (var_78 != 0)
                        rdx_6 = var_78
                    
                    int32_t var_70
                    int64_t rax_18 = sx.q(var_70 - 1) * 9
                    uint128_t zmm2 = *(rdx_6 + (rax_18 << 3) + 8)
                    int32_t var_208
                    int128_t* rcx_11 = &var_208
                    int32_t zmm5_1 = *(rdx_6 + (rax_18 << 3) + 0x10)
                    zmm0_1.d = zmm2.d f* (*(rdx_6 + (rax_18 << 3) + 4))[0]
                    float zmm1_1 = *(rdx_6 + (rax_18 << 3)) f* zmm2.d
                    var_208 = *(rdx_6 + (rax_18 << 3) + 0xc)
                    int32_t var_1f4_1 = zmm0_1.d
                    int32_t var_204_1 = zmm5_1
                    float var_200_1 = zmm1_1
                    
                    if (r14.b == 0)
                        int128_t var_1b0
                        sub_140dbe170(rcx_11, &var_1b0)
                        r14.b = 1
                        *arg4 = var_1b0
                    else
                        float var_1e0
                        sub_140dbe170(rcx_11, &var_1e0)
                        float zmm3[0x4] = __minss_xmmss_memss(var_1e0[0], *arg4)
                        zmm1_1 = *(arg4 + 8)
                        zmm2 = *(arg4 + 0xc)
                        int32_t var_1dc
                        int32_t temp0_2 = __minss_xmmss_memss(*(arg4 + 4), var_1dc)
                        int32_t var_1d8
                        zmm1_1 = __maxss_xmmss_memss(zmm1_1, var_1d8)
                        int32_t var_1d4
                        zmm2 = __maxss_xmmss_memss(zmm2.d, var_1d4)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                        zmm3[0] = temp0_2
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                        zmm3[0] = zmm1_1
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                        zmm3[0] = zmm2.d
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                        var_208.o = zmm3
                        *arg4 = zmm3
                
                void var_50
                sub_140596d80(&var_50)
                int64_t* var_58
                
                if (var_58 != 0)
                    var_58[1].d -= 1
                    
                    if (var_58[1].d == 1)
                        (**var_58)(var_58)
                        int32_t temp5_1 = *(var_58 + 0xc)
                        *(var_58 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*var_58 + 8))(var_58, 1)
                
                sub_140d94d20(&var_198)
            
            if (var_1e8 != 0)
                var_1e8[1].d -= 1
                
                if (var_1e8[1].d == 1)
                    (**var_1e8)(var_1e8)
                    int32_t temp1_1 = *(var_1e8 + 0xc)
                    *(var_1e8 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_3 = *var_1e8
                        (*(r8_3 + 8))(var_1e8, 1, r8_3)
            
            i += 1
            rsi_2 += 0x10
        while (i s< *(arg1 + 0x58))
        
        result = zx.q(r14.b)

__security_check_cookie(rax_1 ^ &var_228)
return result
