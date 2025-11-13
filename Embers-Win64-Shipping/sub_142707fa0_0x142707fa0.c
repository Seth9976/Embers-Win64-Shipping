// 函数: sub_142707fa0
// 地址: 0x142707fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_58 = zmm7
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t* rbx = nullptr
void* r13 = arg1
int32_t var_2d4 = 0

if (*(arg1 + 0x7b) != 0)
    rbx = sub_1426d7f70(arg3)

int64_t rax_3 = sub_140d3c6e0(arg3 + 0x34)

if (rbx != 0 && rax_3 != 0 && *(r13 + 0x7b) == 1)
    sub_1426e8ce0(rbx, rax_3, r13 + 0x50, arg2, 1)

if (*(r13 + 0x7b) == 2)
    sub_1426e9640(*(arg3 + 0x58), r13 + 0x50, arg2, 1)

int64_t rax_4 = sub_140d3c6e0(arg3 + 0x34)
*(arg3 + 0x30)
sub_1426cce30(r13 + 0xf8, rax_4)
*(arg3 + 0x30)
sub_1426cce30(r13 + 0x138, rax_4)
sub_1426e25f0(r13 + 0xf8)
sub_1426e2610(r13 + 0x138)
int64_t* result = sub_1426d7f70(arg3)
int64_t* result_1 = result
int64_t* result_3 = result

if (result != 0)
    void* rax_5 = sub_1426a09e0()
    void* rcx_10 = result_3[2]
    result = rax_5 + 0x30
    int64_t rdx_4 = sx.q(result[1].d)
    
    if (rdx_4.d s<= *(rcx_10 + 0x38) && *(*(rcx_10 + 0x30) + (rdx_4 << 3)) == result && rax_4 != 0)
        int32_t* var_2b8 = nullptr
        int32_t var_2b0_1 = 0
        void* rdx_5
        
        if (*(r13 + 0xf0) == 0)
            rdx_5 = nullptr
        else
            void* rax_6 = sub_142736ba0()
            
            if (rax_6 == 0)
                rdx_5 = nullptr
            else
                rdx_5 = *(r13 + 0xf0)
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rdx_5 = nullptr
        
        uint128_t zmm6_1
        zmm6_1, zmm7 = sub_1426e7790(arg3, rdx_5, &var_2b8)
        int64_t* var_260
        int64_t* rcx_16
        void* rdx_8
        int32_t rdi_1
        
        if (*(r13 + 0x130) == 0)
        label_142708189:
            int64_t* rax_13 = result_3[0x68]
            rdi_1 = 2
            rdx_8 = result_3[0x67]
            void* var_268 = rdx_8
            var_260 = rax_13
            
            if (rax_13 != 0)
                rax_13[1].d += 1
            
            rcx_16 = &var_268
        else
            void* rax_9 = sub_14269cf80()
            
            if (rax_9 == 0)
                goto label_142708189
            
            int64_t* rdx_6 = *(r13 + 0x130)
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s> rdx_6[7].d || *(rdx_6[6] + (rax_10 << 3)) != rax_9 + 0x30 || rdx_6 == 0)
                goto label_142708189
            
            rdi_1 = 1
            void var_220
            int64_t* rax_12 = sub_14265ad90(&var_220, result_3, rax_4, rdx_6)
            rcx_16 = rax_12
            rdx_8 = *rax_12
        
        result = rcx_16[1]
        rcx_16[1] = 0
        int64_t* result_2 = result
        *rcx_16 = 0
        
        if ((rdi_1.b & 2) != 0)
            rdi_1 &= 0xfffffffd
            
            if (var_260 != 0)
                result = zx.q(var_260[1].d)
                var_260[1].d -= 1
                
                if (result.d == 1)
                    (**var_260)(var_260)
                    result = zx.q(*(var_260 + 0xc))
                    *(var_260 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_260 + 8))(var_260, 1)
        
        int64_t* var_218
        
        if ((rdi_1.b & 1) != 0 && var_218 != 0)
            result = zx.q(var_218[1].d)
            var_218[1].d -= 1
            
            if (result.d == 1)
                (**var_218)(var_218)
                result = zx.q(*(var_218 + 0xc))
                *(var_218 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_218 + 8))(var_218, 1)
        
        if (rdx_8 != 0)
            int64_t var_238
            result = sub_141deb5f0(rdx_8, &var_238)
            
            if (var_238 != 0)
                uint128_t zmm0_1 = *(r13 + 0x68)
                int32_t rbx_3 = 0
                int32_t var_248 = zmm0_1.d
                uint64_t r8_8 = 0
                int32_t var_244_1 = zmm0_1.d
                zmm0_1.d = (*(r13 + 0x64)).d f+ *(r13 + 0x60)
                uint64_t var_2a8 = 0
                int64_t var_2a0_1 = 0
                zmm0_1.d = zmm0_1.d f* 0.5f
                int32_t var_2d4_1
                __builtin_memset(&var_2d4_1, 0, 0x14)
                int32_t var_240_1 = zmm0_1.d
                
                if (var_2b0_1 s> 0)
                    uint128_t var_48_1 = zmm6_1
                    int64_t rsi_1 = 0
                    int64_t var_290_1 = 0
                    void* var_2d0
                    
                    while (true)
                        int32_t i_4 = arg2[1].d
                        
                        if (i_4 == 0)
                            break
                        
                        int32_t zmm3_1 = (zx.o(0)).d
                        uint128_t zmm2_1
                        
                        if (i_4 s> 0)
                            int32_t* rax_18 = var_2b8
                            uint64_t i_3 = zx.q(i_4)
                            float zmm4_1 = *(rax_18 + rsi_1)
                            uint128_t zmm5_1 = *(rax_18 + rsi_1 + 4)
                            zmm6_1 = *(rax_18 + rsi_1 + 8)
                            void* rax_19 = *arg2
                            uint64_t i
                            
                            do
                                zmm2_1.d = zmm5_1.d f- *(rax_19 + 4)
                                float zmm1_1 = zmm4_1 f- *rax_19
                                zmm0_1.d = zmm6_1.d f- *(rax_19 + 8)
                                rax_19 += 0x18
                                zmm2_1.d = zmm2_1.d f* zmm2_1.d
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                zmm2_1.d = zmm2_1.d f+ zmm1_1 * zmm1_1
                                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                                zmm3_1 = _mm_max_ss(zmm2_1.d, zmm3_1).d
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                        
                        var_2a0_1.d = 0
                        zmm6_1.d = _mm_sqrt_ss(zx.o(0).d, zmm3_1).d f* zmm7.d
                        int32_t temp2_1 = r8_8.d
                        
                        if (temp2_1 s< 0 && temp2_1 != 0)
                            r8_8 = sub_1405c5570(&var_2a8, 0)
                        
                        zmm0_1 = var_238.o
                        uint128_t var_208 = zmm0_1
                        void* rax_20 = _mm_bsrli_si128(zmm0_1, 8).q
                        int64_t var_c8 = 0
                        int32_t var_c0_1 = 0
                        int32_t var_9c_1 = 0x80
                        int64_t var_b8
                        __builtin_memset(&var_b8, 0, 0x1c)
                        int32_t var_98_1 = 0xffffffff
                        int32_t var_94_1 = 0
                        void* var_88_1 = nullptr
                        int32_t var_80_1 = 0
                        int32_t var_78_1 = 0xffffffff
                        char var_74_1 = 0
                        
                        if (rax_20 != 0)
                            *(rax_20 + 8) += 1
                        
                        char var_2f8
                        var_2f8.q = &var_208
                        zmm7 = sub_142687960(result_3, &var_2b8[sx.q(rbx_3) * 3], r8_8, &var_2a8, 
                            var_2f8, nullptr, &var_c8)
                        int32_t rdx_11 = arg2[1].d
                        void* r10_1 = var_88_1
                        int32_t i_2 = rdx_11 - 1
                        
                        if (rdx_11 - 1 s>= 0)
                            int64_t r8_9 = var_c8
                            int64_t r12_1 = sx.q(rdx_11 - 1) * 0x18
                            int64_t rdi_2 = r12_1
                            int64_t var_298_1 = r12_1
                            int64_t rbx_5 = sx.q(rdx_11) * 0x18
                            int64_t var_2c0_1 = rbx_5
                            int32_t i_1
                            
                            do
                                int64_t var_1e0_1 = 0
                                int64_t var_178_1 = 0
                                int32_t var_170_1 = 0
                                int64_t r9_4 = *(*arg2 + r12_1 + 0x10)
                                int64_t var_1e8_1 = r9_4
                                int32_t var_16c_1 = 6
                                char var_168_1 = 0
                                void var_90
                                int64_t rax_33
                                
                                if (var_c0_1 == var_94_1)
                                label_142708508:
                                    rax_33 = 0
                                else
                                    void* rax_31 = &var_90
                                    
                                    if (r10_1 != 0)
                                        rax_31 = r10_1
                                    
                                    int32_t rax_32 = *(rax_31 + ((
                                        sx.q((r9_4 u>> 0x20).d * 0x17 + r9_4.d)
                                        & sx.q(var_80_1 - 1)) << 2))
                                    
                                    if (rax_32 == 0xffffffff)
                                    label_142708508_1:
                                        rax_33 = 0
                                    else
                                        int64_t rdx_16
                                        
                                        while (true)
                                            rdx_16 = sx.q(rax_32) * 0x12
                                            
                                            if (*(r8_9 + (rdx_16 << 3)) == r9_4)
                                                break
                                            
                                            rax_32 = *(r8_9 + (rdx_16 << 3) + 0x88)
                                            
                                            if (rax_32 == 0xffffffff)
                                                goto label_142708508_2
                                        
                                        rax_33 = r8_9 + (rdx_16 << 3)
                                        
                                        if (rax_32 == 0xffffffff)
                                        label_142708508_2:
                                            rax_33 = 0
                                
                                if (rax_33 == 0)
                                    if (r9_4 != 0)
                                        int64_t var_2c8_1
                                        int32_t rax_34 = var_2c8_1:4.d
                                        var_2c8_1.d = 0
                                        
                                        if (rax_34 s< 0 && rax_34 != 0)
                                            sub_1405a5130(&var_2d0, 0)
                                        
                                        zmm2_1 = *(var_2b8 + rsi_1 + 8)
                                        int128_t* rax_36 = *arg2
                                        int64_t zmm1_2 = *(rax_36 + r12_1 + 4)
                                        int32_t var_288 = (*(rax_36 + r12_1)).d
                                        uint128_t zmm0_2 = var_238.o
                                        uint128_t var_1f8 = zmm0_2
                                        void* rax_37 = _mm_bsrli_si128(zmm0_2, 8).q
                                        int32_t var_284_1 = zmm1_2.d
                                        int32_t var_280_1 = zmm2_1.d
                                        
                                        if (rax_37 != 0)
                                            *(rax_37 + 8) += 1
                                            zmm2_1 = var_280_1
                                        
                                        zmm0_2.d = zmm2_1.d f+ *(r13 + 0x64)
                                        zmm2_1.d = zmm2_1.d f- *(r13 + 0x60)
                                        void* const var_2f0_1
                                        var_2f0_1.d = zmm0_2.d
                                        var_2f8.d = zmm2_1.d
                                        zmm7 = sub_14268f220(result_1, &var_288, &var_2d0, 
                                            &var_248, var_2f8, var_2f0_1.d, &var_1f8, nullptr)
                                        int32_t rsi_2 = var_2c8_1.d
                                        int32_t r11_1 = 0
                                        int64_t rbx_6 = 0
                                        
                                        if (rsi_2 s> 0)
                                            void* rax_38 = var_2d0
                                            int64_t* r10_2 = rax_38 + 0x10
                                            int64_t r8_11 = var_c8
                                            
                                            while (true)
                                                int64_t r9_6 = *r10_2
                                                int64_t var_158_1 = r9_6
                                                int64_t var_150_1 = 0
                                                int64_t var_e8_1 = 0
                                                int32_t var_e0_1 = 0
                                                int32_t var_dc_1 = 6
                                                char var_d8_1 = 0
                                                int64_t rax_44
                                                
                                                if (var_c0_1 - var_94_1 == 0)
                                                label_142708692:
                                                    rax_44 = 0
                                                else
                                                    void* rax_42 = &var_90
                                                    
                                                    if (var_88_1 != 0)
                                                        rax_42 = var_88_1
                                                    
                                                    int32_t rax_43 = *(rax_42 + ((
                                                        sx.q((r9_6 u>> 0x20).d * 0x17 + r9_6.d)
                                                        & sx.q(var_80_1 - 1)) << 2))
                                                    
                                                    if (rax_43 == 0xffffffff)
                                                    label_142708692_1:
                                                        rax_44 = 0
                                                    else
                                                        int64_t rdx_21
                                                        
                                                        while (true)
                                                            rdx_21 = sx.q(rax_43) * 0x12
                                                            
                                                            if (*(r8_11 + (rdx_21 << 3)) == r9_6)
                                                                break
                                                            
                                                            rax_43 = *(r8_11 + (rdx_21 << 3) + 0x88)
                                                            
                                                            if (rax_43 == 0xffffffff)
                                                                goto label_142708692_2
                                                        
                                                        if (rax_43 == 0xffffffff)
                                                        label_142708692_2:
                                                            rax_44 = 0
                                                        else
                                                            rax_44 = r8_11 + (rdx_21 << 3)
                                                
                                                if (rax_44 != 0)
                                                    uint128_t* rcx_43 = *arg2
                                                    int64_t rax_50 = rbx_6 * 3
                                                    r13 = arg1
                                                    rbx_5 = var_2c0_1
                                                    rdi_2 = var_298_1
                                                    *(rcx_43 + r12_1) = *(rax_38 + (rax_50 << 3))
                                                    *(rcx_43 + r12_1 + 0x10) =
                                                        *(rax_38 + (rax_50 << 3) + 0x10)
                                                    int64_t rax_51 = *arg2
                                                    zmm0_2.d =
                                                        (*(r13 + 0x74)).d f+ *(rax_51 + r12_1 + 8)
                                                    *(rax_51 + r12_1 + 8) = zmm0_2.d
                                                    goto label_1427086f8
                                                
                                                r11_1 += 1
                                                rbx_6 += 1
                                                r10_2 = &r10_2[3]
                                                
                                                if (r11_1 s>= rsi_2)
                                                    rdi_2 = var_298_1
                                                    r13 = arg1
                                                    break
                                        
                                        rbx_5 = var_2c0_1
                                    
                                    int32_t rcx_39 = arg2[1].d
                                    int32_t rax_46 = rcx_39 - i_2
                                    
                                    if (rax_46 != 1)
                                        int64_t rcx_37 = *arg2
                                        memmove(rcx_37 + rdi_2, rcx_37 + rbx_5, (rax_46 - 1) * 0x18)
                                        rcx_39 = arg2[1].d
                                    
                                    arg2[1].d = rcx_39 - 1
                                    sub_1405fde90(arg2)
                                label_1427086f8:
                                    r8_9 = var_c8
                                    r10_1 = var_88_1
                                
                                rbx_5 -= 0x18
                                rsi_1 = var_290_1
                                i_1 = i_2 - 1
                                rdi_2 -= 0x18
                                i_2 = i_1
                                r12_1 -= 0x18
                                var_2c0_1 = rbx_5
                                var_298_1 = rdi_2
                            while (i_1 s>= 0)
                            result_3 = result_1
                            rbx_3 = var_2d4_1
                        
                        int32_t var_80_2 = 0
                        
                        if (r10_1 != 0)
                            sub_140a74f90(r10_1)
                        
                        result = sub_1426f41a0(&var_c8)
                        rbx_3 += 1
                        rsi_1 += 0xc
                        var_2d4_1 = rbx_3
                        var_290_1 = rsi_1
                        
                        if (rbx_3 s>= var_2b0_1)
                            break
                        
                        r8_8 = zx.q(var_2a0_1:4.d)
                    
                    void* rcx_44 = var_2d0
                    
                    if (rcx_44 != 0)
                        result = sub_140a74f90(rcx_44)
                    
                    uint64_t rcx_45 = var_2a8
                    
                    if (rcx_45 != 0)
                        result = sub_140a74f90(rcx_45)
            
            int64_t* var_230
            
            if (var_230 != 0)
                result = zx.q(var_230[1].d)
                var_230[1].d -= 1
                
                if (result.d == 1)
                    (**var_230)(var_230)
                    result = zx.q(*(var_230 + 0xc))
                    *(var_230 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_230 + 8))(var_230, 1)
        
        if (result_2 != 0)
            result = zx.q(result_2[1].d)
            result_2[1].d -= 1
            
            if (result.d == 1)
                result = (**result_2)(result_2)
                int32_t r14_2 = *(result_2 + 0xc)
                *(result_2 + 0xc) -= 1
                
                if (r14_2 == 1)
                    result = (*(*result_2 + 8))(result_2, zx.q(r14_2))
        
        int32_t* rcx_51 = var_2b8
        
        if (rcx_51 != 0)
            result = sub_140a74f90(rcx_51)

__security_check_cookie(rax_1 ^ &var_318)
return result
