// 函数: sub_140e5f7a0
// 地址: 0x140e5f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
uint64_t result = __security_cookie ^ &var_238
uint64_t result_1 = result
int64_t* rcx = *(arg1 + 0x40)
int64_t* rdi = nullptr
void** r12 = arg2
int32_t* var_178 = arg4
void* r10 = nullptr
int64_t* var_1c0 = arg2
int64_t* var_1c8 = rcx

if (rcx != 0)
    result = zx.q(rcx[1].d)
    
    if (result.d == 0)
        var_1c8 = nullptr
    else
        result = zx.q(result.d + 1)
        rcx[1].d = result.d
        r10 = *(arg1 + 0x38)

if (*(arg1 + 0x30) != 0 && r10 != 0 && r10 == *arg2)
    int64_t* r13_1 = *(arg1 + 0x50)
    
    if (r13_1 != 0)
        result = zx.q(r13_1[1].d)
        
        if (result.d == 0)
            r13_1 = nullptr
        else
            result = zx.q(result.d + 1)
            r13_1[1].d = result.d
        
        if (r13_1 != 0)
            int64_t* r14_1 = *(arg1 + 0x48)
            
            if (r14_1 != 0)
                int64_t* r15_1 = data_143e29f28
                char var_1f0
                int64_t* rcx_2 = *sub_140e152a0(r10, &var_1f0)
                (*(*rcx_2 + 0xf8))(rcx_2)
                (*(*r15_1 + 0x48))(r15_1)
                int128_t zmm6
                zmm6.d = arg5.d f* arg5.d
                int32_t var_1f4_1 = zmm6.d
                int64_t* var_1e8
                
                if (var_1e8 != 0)
                    var_1e8[1].d -= 1
                    
                    if (var_1e8[1].d == 1)
                        (**var_1e8)(var_1e8)
                        int32_t temp5_1 = *(var_1e8 + 0xc)
                        *(var_1e8 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*var_1e8 + 8))(var_1e8, 1)
                
                var_1f0 = data_1439ae51f
                char var_1ef_1 = 1
                int64_t var_1e8_1 = 0
                int32_t var_1e0_1 = 0
                (*(*r14_1 + 0x1d8))(r14_1, &var_1f0)
                sub_140e25880(r14_1, zmm6, arg5)
                int32_t var_1d8
                sub_140e68880(arg1, &var_1d8, 0xa)
                int32_t var_1d4
                float zmm0[0x4] = var_1d4
                int128_t zmm15 = var_1d8
                float var_1f8_1 = zmm0[0]
                int64_t var_130[0x7]
                int64_t* rax_8 = sub_140e190b0(*r12, &var_130, zmm0)
                int128_t zmm12 = *(rax_8 + 0x1c)
                int128_t zmm13 = rax_8[4].d
                int64_t zmm6_1 = rax_8[5].d
                float zmm7_1 = *(rax_8 + 0x24)
                int128_t zmm9 = *(rax_8 + 0x2c)
                int128_t zmm8 = rax_8[6].d
                int128_t zmm10
                zmm10.d = zmm12.d f* zmm6_1.d
                zmm10.d = zmm10.d f- zmm13.d * zmm7_1
                int128_t zmm11
                zmm11.d = 1f f/ zmm10.d
                int64_t* rax_9 = sub_140e13cf0(r14_1, &var_1f0)
                float zmm0_2 = zmm11.d f* zmm6_1.d
                int128_t zmm14
                zmm14.d = zmm15.d f- zmm9.d
                zmm6_1 = var_1f8_1
                zmm15.d = zmm15.d f- zmm9.d
                float zmm2_1 = zmm6_1.d
                zmm6_1.d = zmm6_1.d f/ zmm10.d
                zmm14.d = zmm14.d f* zmm0_2
                zmm2_1 = zmm2_1 f- zmm8.d
                zmm8.d = zmm8.d f* zmm11.d
                zmm0_2 = zmm11.d * zmm7_1
                zmm6_1.d = zmm6_1.d f- zmm8.d
                zmm11.d = zmm11.d f* zmm13.d
                zmm6_1.d = zmm6_1.d f* zmm12.d
                zmm15.d = zmm15.d f* zmm11.d
                zmm14.d = zmm14.d f- (zmm2_1 * zmm0_2 + *rax_9 * 0.5f)
                zmm15.d = zmm15.d f+ *(rax_9 + 4) * 0.5f
                zmm14.d = zmm14.d f* var_1f4_1
                zmm6_1.d = zmm6_1.d f- zmm15.d
                zmm6_1.d = zmm6_1.d f* var_1f4_1
                int64_t* rax_10 = sub_140e13cf0(r14_1, &var_1f0)
                int32_t var_168 = (*rax_10).d
                char var_134
                char var_134_1 = var_134 & 0xfe
                float var_164_1 = *(rax_10 + 4)
                uint128_t var_14c_1 = data_142d8c9b0
                int32_t var_160_1 = 0x3f800000
                int32_t var_13c_1 = zmm14.d
                int32_t var_138_1 = zmm6_1.d
                int32_t var_15c_1 = zmm14.d
                int32_t var_158_1 = zmm6_1.d
                int32_t* rsi_1 = var_178
                *rsi_1 += 1
                void* rbx_3 = *r12 + 0x190
                int32_t var_154_1 = zmm14.d
                int32_t var_150_1 = zmm6_1.d
                
                if (*(rbx_3 + 0x10) != 0)
                    int64_t* rcx_12 = *(rbx_3 + 8)
                    
                    if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
                        if (*(rbx_3 + 0x10) != 0)
                            rdi = *(rbx_3 + 8)
                        
                        *rbx_3 = (*(*rdi + 0x48))(rdi)
                
                char r12_1 = *rbx_3
                int32_t zmm4_1 = data_14399f5c0:4.d
                float zmm3_1 = data_14399f5c0.d
                float zmm5_1 = data_14399f5c0:8.d
                zmm6_1 = data_14399f5c0:0xc.d
                void* r14_3 = *var_1c0
                uint128_t var_198_1 = data_14399f5c0
                int64_t rbx_5 = *r15_1
                uint128_t zmm0_3
                zmm0_3.d = 0.600000024f f* zmm4_1
                float var_188_1 = 0.600000024f * zmm3_1
                int32_t var_184_1 = zmm0_3.d
                zmm0_3.q = r15_1[0x6b] f- r15_1[0x6c]
                int32_t r15_2 = *rsi_1
                float var_1a8 = zmm3_1
                zmm7_1 = _mm_cvtpd_ps(zmm0_3)
                int32_t var_1a4_1 = zmm4_1
                float var_1a0_1 = zmm5_1
                int32_t var_19c_1 = zmm6_1.d
                float var_180_1 = 0.600000024f * zmm5_1
                float var_17c_1 = 0.600000024f f* zmm6_1.d
                int64_t* rax_15 = sub_140e15940(r14_3, &var_1f0)
                int64_t* rax_16
                int64_t zmm0_4
                rax_16, zmm0_4 = sub_140e12970(r14_3, &var_178)
                (*(rbx_5 + 0x50))(r15_1)
                result = sub_140e1f680(r14_1, 
                    sub_140dd8910(&var_130, r14_3, sub_140e14f20(r14_3), *rax_15, zmm0_4, zmm7_1), 
                    &var_168, rax_16, arg3, r15_2, &var_1a8, r12_1)
            
            if (r13_1 != 0)
                r13_1[1].d -= 1
                
                if (r13_1[1].d == 1)
                    result = (**r13_1)(r13_1)
                    int32_t temp4_1 = *(r13_1 + 0xc)
                    *(r13_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        result = (*(*r13_1 + 8))(r13_1, 1)

if (var_1c8 != 0)
    var_1c8[1].d -= 1
    
    if (var_1c8[1].d == 1)
        result = (**var_1c8)(var_1c8)
        int32_t temp1_1 = *(var_1c8 + 0xc)
        *(var_1c8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_1c8 + 8))(var_1c8, 1)

__security_check_cookie(result_1 ^ &var_238)
return result
