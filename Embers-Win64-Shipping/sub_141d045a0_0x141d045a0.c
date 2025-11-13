// 函数: sub_141d045a0
// 地址: 0x141d045a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* result = arg1
EnterCriticalSection(&data_143f365e0)
int64_t var_110
int512_t zmm1 = sub_140b58260(&var_110, arg2, 1)
int32_t rdi = 0
int64_t rbx = var_110
int64_t var_118
void* rax_8

if (data_143a21068 == data_143a21094)
label_141d04664:
    rax_8 = nullptr
else
    var_118 = rbx
    int32_t rax_4 = sub_140b5ead0(rbx.d) + var_118:4.d
    void* rcx_2 = data_143a210a0
    void* rax_6 = &data_143a21098
    
    if (rcx_2 != 0)
        rax_6 = rcx_2
    
    int32_t rax_7 = *(rax_6 + (((sx.q(data_143a210a8) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141d04664_1:
        rax_8 = nullptr
    else
        int64_t r8_1 = data_143a21060
        int64_t rcx_4
        
        while (true)
            rcx_4 = sx.q(rax_7) << 5
            
            if (*(rcx_4 + r8_1) == rbx)
                break
            
            rax_7 = *(rcx_4 + r8_1 + 0x18)
            
            if (rax_7 == 0xffffffff)
                goto label_141d04664_2
        
        rax_8 = rcx_4 + r8_1
        
        if (rax_7 == 0xffffffff)
        label_141d04664_2:
            rax_8 = nullptr

int64_t* rcx_5 = rax_8 + 8

if (rax_8 == 0)
    rcx_5 = nullptr

if (rcx_5 == 0)
    if (data_143f368f8 == 0)
        sub_140af4ce0()
        
        if (data_143de5d00 != 0)
            int64_t* rcx_6 = data_143de5cf8
            
            if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                int64_t var_108
                __builtin_memset(&var_108, 0, 0x20)
                int64_t* rcx_7
                
                if (data_143de5d00 == 0)
                    rcx_7 = nullptr
                else
                    rcx_7 = data_143de5cf8
                
                int64_t var_f8
                (*(*rcx_7 + 0x48))(rcx_7, &var_f8, &var_108)
                int64_t var_d8 = 0
                int64_t var_d0_1 = 0
                int64_t* rax_14
                rax_14, zmm1 = sub_141cf08b0(&var_f8, &var_d8, &var_108)
                int64_t rcx_9 = var_d8
                data_143f368f0 = rax_14
                
                if (rcx_9 != 0)
                    zmm1 = sub_140a74f90(rcx_9)
                
                int64_t rcx_10 = var_108
                
                if (rcx_10 != 0)
                    zmm1 = sub_140a74f90(rcx_10)
                
                int64_t rcx_11 = var_f8
                
                if (rcx_11 != 0)
                    zmm1 = sub_140a74f90(rcx_11)
        
        data_143f368f8 = 1
    
    bool cond:2_1 = data_143f368f0 == 0
    uint128_t var_188 = zx.o(0)
    void* rbx_9
    
    if (cond:2_1)
        rbx_9 = var_188:8.q
    else
        int64_t var_168 = 0
        int32_t var_160_1 = 0
        sub_1405947f0(&var_168, 4)
        int32_t rax_15 = var_160_1 + 4
        var_160_1 = rax_15
        
        if (rax_15 s> 0)
            sub_140594770(&var_168)
        
        UnDecorator::getReferenceType(var_168, &data_14321d0c8, 8)
        int64_t var_178 = 0
        int32_t rdx_8 = 0
        int32_t var_170_1 = 0
        int32_t rcx_15 = 0
        int32_t var_16c_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_178, rbx_1.d + 1)
                rcx_15 = var_16c_1
                rdx_8 = var_170_1
            
            int32_t rax_16 = rbx_1.d + 1 + rdx_8
            int32_t var_170_2 = rax_16
            
            if (rax_16 s> rcx_15)
                sub_140594770(&var_178)
            
            UnDecorator::getReferenceType(var_178, arg2, (rbx_1.d + 1) * 2)
        
        int16_t* var_b0
        sub_140b0f020(&var_b0, &var_178, &var_168)
        int64_t rcx_20 = var_178
        
        if (rcx_20 != 0)
            zmm1 = sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = var_168
        
        if (rcx_21 != 0)
            zmm1 = sub_140a74f90(rcx_21)
        
        sub_140a464c0()
        int16_t* const rdx_12 = &data_142d40450
        int32_t var_a8
        
        if (var_a8 != 0)
            rdx_12 = var_b0
        
        int64_t* rax_18 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx_12, 0)
        
        if (rax_18 == 0)
            int64_t var_148 = 0
            int32_t rcx_48 = 0
            int32_t var_13c_1 = 0
            int32_t var_140_1 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                int64_t rbx_10 = -1
                
                do
                    rbx_10 += 1
                while (arg2[rbx_10] != 0)
                
                if (rbx_10.d + 1 s> 0)
                    sub_1405947f0(&var_148, rbx_10.d + 1)
                    rcx_48 = var_13c_1
                    rdi = var_140_1
                
                int32_t rax_50 = rbx_10.d + 1 + rdi
                int32_t var_140_2 = rax_50
                
                if (rax_50 s> rcx_48)
                    sub_140594770(&var_148)
                
                UnDecorator::getReferenceType(var_148, arg2, (rbx_10.d + 1) * 2)
            
            sub_141d04dd0()
            EnterCriticalSection(&data_143f36890)
            data_143f368e0:4.d += 1
            int64_t* r14_1
            r14_1.b = 0
            int32_t rax_51 = data_143f368d8.d
            int32_t rcx_52 = data_143f368e0:4.d
            int64_t rdi_2 = sx.q(rax_51 - 1)
            
            if (rax_51 - 1 s>= 0)
                int64_t rbx_13 = rdi_2 << 4
                int64_t temp2_1
                
                do
                    int64_t rax_53 = data_143f368d0
                    
                    if (*(rbx_13 + rax_53 + 8) == 0)
                        r14_1.b = 1
                    else
                        int64_t* rcx_53 = *(rbx_13 + rax_53)
                        
                        if (rcx_53 == 0)
                            r14_1.b = 1
                        else if ((*(*rcx_53 + 0x50))(rcx_53, &var_148) == 0)
                            r14_1.b = 1
                    
                    rbx_13 -= 0x10
                    temp2_1 = rdi_2
                    rdi_2 -= 1
                while (temp2_1 - 1 s>= 0)
                rcx_52 = data_143f368e0:4.d
            
            data_143f368e0:4.d = rcx_52 - 1
            
            if (r14_1.b != 0)
                sub_140599630(&data_143f368d0, 0)
            
            LeaveCriticalSection(&data_143f36890)
            int64_t rcx_54 = var_148
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
            
            rbx_9 = var_188:8.q
        else
            void*** rax_19 = sub_141cf5450()
            uint128_t zmm0_2 = (&rax_19[2]).o
            uint128_t var_138 = zmm0_2
            void* rax_20 = _mm_bsrli_si128(zmm0_2, 8).q
            
            if (rax_20 != 0)
                *(rax_20 + 8) += 1
            
            var_188.q = var_138.q
            var_138.q = 0
            sub_1405aeff0(&var_188:8, &var_138:8)
            void* rcx_23 = var_138:8.q
            
            if (rcx_23 != 0)
                int32_t rax_22 = *(rcx_23 + 8)
                *(rcx_23 + 8) -= 1
                
                if (rax_22 == 1)
                    int64_t* rbx_3 = var_138:8.q
                    (**rbx_3)(rbx_3)
                    int32_t rax_24 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        int64_t* rcx_25 = var_138:8.q
                        (*(*rcx_25 + 8))(rcx_25, 1)
            
            if (rax_19 != 0)
                rax_19[1].d -= 1
                
                if (rax_19[1].d == 1)
                    (**rax_19)(rax_19)
                    int32_t rax_28 = *(rax_19 + 0xc)
                    *(rax_19 + 0xc) -= 1
                    
                    if (rax_28 == 1)
                        (*rax_19)[1](rax_19, 1)
            
            sub_141d0fee0(var_188.q, rax_18, zmm1)
            (**rax_18)(rax_18, 1)
            int64_t var_158 = 0
            int32_t rdx_16 = 0
            int32_t var_150_1 = 0
            int32_t rcx_30 = 0
            int32_t var_14c_1 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (arg2[rbx_5] != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_158, rbx_5.d + 1)
                    rcx_30 = var_14c_1
                    rdx_16 = var_150_1
                
                int32_t rax_31 = rbx_5.d + 1 + rdx_16
                int32_t var_150_2 = rax_31
                
                if (rax_31 s> rcx_30)
                    sub_140594770(&var_158)
                
                UnDecorator::getReferenceType(var_158, arg2, (rbx_5.d + 1) * 2)
            
            int32_t* buffer1 = var_188.q
            
            if (*buffer1 == 0)
                goto label_141d04a8f
            
            int64_t r8_10 = data_143f368f0
            int32_t var_90_1 = buffer1[4]
            int128_t var_68 = (*(buffer1 + 8)).o
            int32_t* buffer1_1 = nullptr
            int32_t var_120_1 = 0
            
            if (sub_141cf0960(&var_68, &buffer1_1, r8_10) != 0x14)
                buffer1 = buffer1_1
            label_141d04a82:
                
                if (buffer1 == 0)
                    goto label_141d04a8f
                
                sub_140a74f90(buffer1)
            label_141d04a8f:
                sub_141d04dd0()
                EnterCriticalSection(&data_143f36890)
                data_143f368e0:4.d += 1
                result.b = 0
                int32_t rax_36 = data_143f368d8.d
                int32_t rcx_39 = data_143f368e0:4.d
                int64_t rsi_1 = sx.q(rax_36 - 1)
                
                if (rax_36 - 1 s>= 0)
                    buffer1 = rsi_1 << 4
                    int64_t temp4_1
                    
                    do
                        int64_t rax_38 = data_143f368d0
                        
                        if (*(buffer1 + rax_38 + 8) == 0)
                            result.b = 1
                        else
                            int64_t* rcx_40 = *(buffer1 + rax_38)
                            
                            if (rcx_40 == 0)
                                result.b = 1
                            else if ((*(*rcx_40 + 0x50))(rcx_40, &var_158) == 0)
                                result.b = 1
                        
                        buffer1 -= 0x10
                        temp4_1 = rsi_1
                        rsi_1 -= 1
                    while (temp4_1 - 1 s>= 0)
                    rcx_39 = data_143f368e0:4.d
                
                data_143f368e0:4.d = rcx_39 - 1
                
                if (result.b != 0)
                    sub_140599630(&data_143f368d0, 0)
                
                LeaveCriticalSection(&data_143f36890)
                result = arg1
                buffer1.b = 1
            else
                void* rcx_35 = *(buffer1 + 0x30)
                int64_t rdx_21 = sx.q(buffer1[0xe]) << 2
                int64_t buffer2
                __builtin_memset(&buffer2, 0, 0x14)
                sub_140b3f690(rcx_35, rdx_21, &buffer2)
                buffer1 = buffer1_1
                
                if (memcmp(buffer1, &buffer2, sx.q(var_120_1)) != 0)
                    goto label_141d04a82
                
                if (buffer1 != 0)
                    sub_140a74f90(buffer1)
                
                buffer1.b = 0
            
            int64_t rcx_41 = var_158
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            if (buffer1.b != 0)
                int64_t* var_e0 = nullptr
                var_188.q = 0
                int64_t var_e8_1 = 0
                sub_1405aeff0(&var_188:8, &var_e0)
                int64_t* rcx_43 = var_e0
                
                if (rcx_43 != 0)
                    rcx_43[1].d -= 1
                    
                    if (rcx_43[1].d == 1)
                        int64_t* rbx_8 = var_e0
                        (**rbx_8)(rbx_8)
                        int32_t rax_44 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (rax_44 == 1)
                            int64_t* rcx_45 = var_e0
                            (*(*rcx_45 + 8))(rcx_45, 1)
            
            uint128_t zmm0_4 = var_188
            uint128_t var_78 = zmm0_4
            rbx_9 = _mm_bsrli_si128(zmm0_4, 8).q
            
            if (rbx_9 != 0)
                *(rbx_9 + 8) += 1
                rbx_9 = var_188:8.q
            
            int64_t* var_88 = &var_110
            uint128_t* var_80_1 = &var_78
            sub_140a92260(&data_143a21060, &var_118, &var_88, nullptr)
            int64_t* rdi_1 = var_78:8.q
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_48 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_48 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                rbx_9 = var_188:8.q
        
        int16_t* rcx_55 = var_b0
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
    
    *result = var_188.q
    result[1] = rbx_9
    
    if (rbx_9 != 0)
        *(rbx_9 + 8) += 1
        int32_t rax_58 = *(rbx_9 + 8)
        *(rbx_9 + 8) -= 1
        
        if (rax_58 == 1)
            int64_t* rbx_14 = var_188:8.q
            (**rbx_14)(rbx_14)
            int32_t r15_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (r15_1 == 1)
                int64_t* rcx_57 = var_188:8.q
                int64_t r8_16 = *rcx_57
                (*(r8_16 + 8))(rcx_57, zx.q(r15_1), r8_16)
else
    *result = *rcx_5
    void* rax_10 = rcx_5[1]
    result[1] = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1

LeaveCriticalSection(&data_143f365e0)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
