// 函数: sub_14266d5c0
// 地址: 0x14266d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
arg1[0x57].d &= 0xfffffff8
*(arg1 + 0x2bc) = 0
int128_t var_b8 = zx.o(0)

if (&arg1[0x5e] != &var_b8)
    arg1[0x5e] = 0
    sub_1405aeff0(&arg1[0x5f], &var_b8:8)
    void* rcx_2 = var_b8:8.q
    
    if (rcx_2 != 0)
        int32_t rax_2 = *(rcx_2 + 8)
        *(rcx_2 + 8) -= 1
        
        if (rax_2 == 1)
            int64_t* rbx_1 = var_b8:8.q
            (**rbx_1)(rbx_1)
            int32_t rax_4 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                int64_t* rcx_4 = var_b8:8.q
                (*(*rcx_4 + 8))(rcx_4, 1)

bool cond:0 = arg1[0x51] != 0
arg1[0x5b].d = 0xffffffff
*(arg1 + 0x2c4) = 0
uint64_t result_1
void* var_c8

if (not(cond:0) && (*(*arg1 + 0x150))(arg1) != 0 && *((*(*arg1 + 0x150))(arg1) + 0x120) != 0)
    void* rax_11 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_11 != 0)
        int64_t* rbx_2 = *(rax_11 + 0x120)
        
        if (rbx_2 != 0)
            void* rax_12 = sub_14269bba0()
            void* rdx_2 = rbx_2[2]
            int64_t rax_13 = sx.q(*(rax_12 + 0x38))
            
            if (rax_13.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_13 << 3)) == rax_12 + 0x30)
                void* rax_15 = arg1[0x26]
                int64_t* rax_16
                
                if (rax_15 == 0)
                    int32_t var_d0_1 = data_143dbb200
                    rax_16 = &result_1
                    result_1 = data_143dbb1f8.q
                else
                    float zmm1[0x4] = *(rax_15 + 0x1d0)
                    rax_16 = &var_c8
                    var_c8.d = zmm1[0]
                    uint128_t zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float var_c0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    var_c8:4.d = zmm0_1.d
                
                int32_t var_a0_1 = rax_16[1].d
                int64_t rax_19 = *rbx_2
                uint64_t var_a8 = *rax_16
                arg1[0x51] = (*(rax_19 + 0x2b0))(rbx_2, &arg1[0x49], &var_a8, &data_143dbb1f8)

uint64_t result

if ((*(arg1 + 0x29c) & 2) != 0)
label_14266d7b0:
    int64_t* rcx_10 = arg1[0x59]
    
    if (rcx_10 != 0)
    label_14266dae3:
        int64_t* rdx_12
        
        if ((*(arg1 + 0x29c) & 2) == 0)
            rdx_12 = arg1
        else
            rdx_12 = rcx_10
            rcx_10 = arg1
        
        result = sub_142667950(rcx_10, rdx_12)
    else
        uint64_t result_2 = 0
        result_1 = 0
        void* rbx_3 = sub_1426a0b20()
        int64_t rax_23 = (*(*arg1 + 0x150))(arg1)
        
        if (rbx_3 == 0)
            rbx_3 = nullptr
        else
            void* rax_24 = sub_1426a0b20()
            
            if (rax_24 == 0)
                rbx_3 = nullptr
            else
                int64_t rcx_12 = sx.q(*(rax_24 + 0x38))
                
                if (rcx_12.d s> *(rbx_3 + 0x38)
                        || *(*(rbx_3 + 0x30) + (rcx_12 << 3)) != rax_24 + 0x30)
                    rbx_3 = nullptr
        
        int32_t var_98 = 5
        char var_40_1 = 0
        void* var_90
        sub_1405ab0f0(&var_90, rax_23, rbx_3)
        char var_40_2 = 1
        sub_1405b0c60(&var_98)
        uint64_t* var_88
        char var_74
        int64_t var_60
        
        if (var_74 == 0)
            uint64_t result_4
            uint64_t result_3 = result_4
            int32_t var_78
            int32_t r14_1 = var_78
            int64_t r15
            int64_t var_28_1 = r15
            
            while (true)
                if (result_3 != 0 && result_3 != arg1)
                    int64_t rax_26 = *(result_3 + 0x2c8)
                    
                    if (rax_26 == arg1)
                        arg1[0x59] = result_3
                        break
                    
                    if ((*(arg1 + 0x29c) & 2) != 0)
                        if (rax_26 == 0)
                            result_2 = result_3
                        
                        result_1 = result_2
                
                r14_1 += 1
                int32_t var_58
                int32_t r8_4 = var_58
                int32_t var_80
                int32_t rdx_6 = var_80
                var_c8 = var_90
                
                if (r14_1 s>= r8_4 + rdx_6)
                label_14266da45:
                    int64_t var_68 = 0
                    char var_74_1 = 1
                    break
                
                int64_t r12_1 = sx.q(r14_1) << 3
                
                while (true)
                    if (r14_1 s>= rdx_6)
                        result_3 = *(var_60 + (sx.q(r14_1 - rdx_6) << 3))
                    else
                        result_3 = *(var_88 + r12_1)
                    
                    int32_t var_70 = var_70 + 1
                    
                    if (result_3 != 0)
                        void* rax_34 = sub_141dc9840(result_3)
                        
                        if (rax_34 != 0)
                            void* const rax_41
                            
                            if ((var_98.b & 1) != 0)
                                int32_t rax_35 = *(result_3 + 0xc)
                                
                                if (rax_35 s>= data_143e1d9b4)
                                    rax_41 = nullptr
                                else
                                    int16_t temp1_1
                                    int32_t temp2_1
                                    temp1_1:temp2_1 = sx.q(rax_35)
                                    uint32_t rdx_8 = zx.d(temp1_1)
                                    int32_t rax_37 = temp2_1 + rdx_8
                                    rax_41 = *(data_143e1d9a0 + (sx.q(rax_37 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_37.w) - rdx_8) * 0x18
                            
                            if ((var_98.b & 1) == 0 || ((*(rax_41 + 8) u>> 0x1d).b & 1) == 0)
                                int32_t rcx_22 = var_98
                                
                                if (((rcx_22 u>> 1).b & 1) == 0)
                                    goto label_14266d96b
                                
                                uint64_t rax_45 = sub_1405949a0()
                                
                                if (rax_45.b != 0)
                                    rcx_22 = var_98
                                label_14266d96b:
                                    
                                    if (((rcx_22 u>> 2).b & 1) == 0)
                                    label_14266d9e7:
                                        int64_t rax_46 = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_34)
                                        void* r9_1 = var_c8
                                        
                                        if (rax_46 == r9_1)
                                            if (rax_34 == *(r9_1 + 0x30))
                                                break
                                            
                                            void* rax_47 = sub_1425bd0d0()
                                            void* rdx_10 = *(result_3 + 0x10)
                                            int64_t rax_48 = sx.q(*(rax_47 + 0x38))
                                            
                                            if (rax_48.d s> *(rdx_10 + 0x38))
                                                break
                                            
                                            if (*(*(rdx_10 + 0x30) + (rax_48 << 3))
                                                    != rax_47 + 0x30)
                                                break
                                    else
                                        if ((*(rax_34 + 0x1f4) & 0x20) == 0
                                                || (*(rax_34 + 0x1f6) & 8) != 0)
                                            rax_45 = zx.q(*(rax_34 + 0x1f5))
                                        
                                        if (((*(rax_34 + 0x1f4) & 0x20) != 0
                                                && (*(rax_34 + 0x1f6) & 8) == 0) || (rax_45.b & 0x40) != 0
                                                || rax_45.b s< 0)
                                            r15.b = 1
                                        else
                                            r15.b = 0
                                        
                                        void* rcx_24 = *(rax_34 + 0xb8)
                                        char* rsi_1 = *(rax_34 + 0x248)
                                        
                                        if (rcx_24 != 0)
                                            rax_45 = sub_1424359b0(rcx_24)
                                        
                                        if (rcx_24 == 0 || rax_45 == 0 || rsi_1 == rax_45)
                                            rcx_24.b = 1
                                        else
                                            rcx_24.b = 0
                                        
                                        if (rsi_1 == 0 || *rsi_1 == 2)
                                            rax_45.b = 1
                                        else
                                            rax_45.b = 0
                                        
                                        if (rcx_24.b != 0 || rax_45.b != 0)
                                            rax_45.b = 1
                                        
                                        if (r15.b != 0 && rax_45.b != 0)
                                            goto label_14266d9e7
                        
                        r8_4 = var_58
                        rdx_6 = var_80
                    
                    r14_1 += 1
                    r12_1 += 8
                    
                    if (r14_1 s>= r8_4 + rdx_6)
                        goto label_14266da45
                
                uint64_t result_5 = result_3
                int32_t var_78_1 = r14_1
                
                if (var_74 != 0)
                    break
                
                result_2 = result_1
        
        if (var_40_2 != 0)
            char var_40_3 = 0
            int64_t var_48
            sub_142441560(var_90, var_48)
            
            if (var_60 != 0)
                sub_140a74f90(var_60)
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
        
        rcx_10 = arg1[0x59]
        
        if (rcx_10 != 0)
            goto label_14266dae3
        
        result = result_1
        
        if (result != 0)
            arg1[0x59] = result
            *(result + 0x2c8) = arg1
            rcx_10 = arg1[0x59]
        
        if (rcx_10 != 0)
            goto label_14266dae3
else
    result = arg1[0x59]
    
    if (result != 0 && (*(result + 0x29c) & 2) != 0)
        goto label_14266d7b0

__security_check_cookie(rax_1 ^ &var_f8)
return result
