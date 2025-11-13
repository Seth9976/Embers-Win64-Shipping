// 函数: sub_141fb65e0
// 地址: 0x141fb65e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rdi = *(arg1 + 0x58)
uint64_t result
int64_t* var_f8

if (*(rdi + 0x768) != arg2)
    int64_t rbx
    rbx.b = 0
    void* rsi_1 = nullptr
    int64_t** var_e8
    sub_1423ddac0(data_143f5b298, &var_e8, *(rdi + 0x140))
    int64_t** r8_1 = var_e8
    int32_t var_e0
    int32_t rdx_2 = var_e0
    int64_t* rax_2
    
    while (true)
        if (rdx_2 s< 0 || rdx_2 s>= r8_1[1].d)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        if (rax_2.b == 0)
            break
        
        if ((*r8_1)[sx.q(rdx_2)] != 0)
            break
        
        rdx_2 += 1
        int32_t var_e0_1 = rdx_2
    
    int32_t rbx_1
    
    while (true)
        if (rdx_2 s< 0 || rdx_2 s>= r8_1[1].d)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        if (rax_2.b != 0)
            if (*(arg2 + 0x3d4) == rbx.b)
                rsi_1 = (*r8_1)[sx.q(rdx_2)]
                
                if (rsi_1 != 0)
                    rbx_1 = *(rsi_1 + 0x38)
                    sub_14214b8b0(arg1, arg2, arg3)
                    break
            else
                do
                    rdx_2 += 1
                    int32_t var_e0_2 = rdx_2
                    
                    if (rdx_2 s< 0 || rdx_2 s>= r8_1[1].d)
                        rax_2.b = 0
                    else
                        rax_2.b = 1
                    
                    if (rax_2.b == 0)
                        break
                while ((*r8_1)[sx.q(rdx_2)] == 0)
                
                rbx.b += 1
                continue
        
        rbx_1 = 0
        sub_141fc5e40(rdi, arg2, arg3)
        break
    
    if (*(rdi + 0xce8) != 0 && rsi_1 != 0)
        *(rsi_1 + 0x38) = rbx_1
    
    var_f8 = arg2
    *(rdi + 0x768) = arg2
    
    if (arg2 != 0)
        sub_1405a7050(rdi + 0xcf0, &var_f8)
    
    int64_t rbx_2 = *(*(arg1 + 0x58) + 0x140)
    void* rax_5 = sub_142452380()
    int32_t var_a8 = 5
    char var_50_1 = 0
    void* var_a0
    sub_1405ab0f0(&var_a0, rbx_2, rax_5)
    char var_50_2 = 1
    result = sub_1405b0c60(&var_a8)
    int64_t var_98
    char i
    int64_t var_70
    
    while (i == 0)
        void* var_78
        void* r9_1 = var_78
        void* r8_5 = sub_142574150() + 0x30
        void* rdx_7 = *(r9_1 + 0x10)
        int64_t rax_7 = sx.q(*(r8_5 + 8))
        
        if (rax_7.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (rax_7 << 3)) == r8_5)
            void* rbx_4 = *(r9_1 + 0x130)
            int32_t rax_30
            uint128_t zmm0_1
            float zmm1_1[0x4]
            
            if (rbx_4 == 0)
                zmm0_1 = zx.o(data_143dbb208)
                rax_30 = data_143dbb210
            else
                zmm1_1 = *(rbx_4 + 0x1c0)
                uint32_t temp0_3 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_4 + 0x180), zmm1_1, 4))
                float var_b8[0x4] = zmm1_1
                
                if (temp0_3 != 0)
                    *(rbx_4 + 0x180) = zmm1_1
                    int32_t* rax_28 = sub_140adf5d0(&var_b8, &var_e8)
                    *(rbx_4 + 0x190) = *rax_28
                    *(rbx_4 + 0x198) = rax_28[2]
                    r9_1 = var_78
                
                zmm0_1 = zx.o(*(rbx_4 + 0x190))
                rax_30 = *(rbx_4 + 0x198)
            
            var_f8 = zmm0_1.q
            uint64_t var_d0 = var_f8
            int32_t var_c8_1 = rax_30
            void* rax_32 = *(r9_1 + 0x130)
            float var_f0_2
            
            if (rax_32 == 0)
                float rax_33 = data_143dbb200
                var_f8 = data_143dbb1f8.q
                var_f0_2 = rax_33
            else
                zmm1_1 = *(rax_32 + 0x1d0)
                var_f8.d = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_f0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_f8:4.d = zmm0_1.d
            
            zmm0_1 = zx.o(var_f8)
            float var_bc_1 = var_f0_2
            int64_t rax_35 = *arg2
            uint64_t var_c4 = zmm0_1.q
            result = (*(rax_35 + 0x670))(zmm0_1, &var_c4, &var_d0)
            break
        
        int32_t var_68
        int32_t r8_6 = var_68
        int32_t var_90
        int32_t rdx_8 = var_90
        void* r13_1 = var_a0
        int32_t var_88
        int32_t r14_2 = var_88 + 1
        result = zx.q(r8_6 + rdx_8)
        
        if (r14_2 s>= result.d)
        label_141fb6981:
            int64_t var_78_1 = 0
            char var_84 = 1
            break
        
        int64_t r12_1 = sx.q(r14_2) << 3
        void* rdi_1
        
        while (true)
            if (r14_2 s>= rdx_8)
                rdi_1 = *(var_70 + (sx.q(r14_2 - rdx_8) << 3))
            else
                rdi_1 = *(r12_1 + var_98)
            
            int32_t var_80 = var_80 + 1
            
            if (rdi_1 != 0)
                void* rax_14 = sub_141dc9840(rdi_1)
                
                if (rax_14 != 0)
                    void* const rax_21
                    
                    if ((var_a8.b & 1) != 0)
                        int32_t rax_15 = *(rdi_1 + 0xc)
                        
                        if (rax_15 s>= data_143e1d9b4)
                            rax_21 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_15)
                            uint32_t rdx_10 = zx.d(temp0_1)
                            int32_t rax_17 = temp1_1 + rdx_10
                            rax_21 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_17.w) - rdx_10) * 0x18
                    
                    if ((var_a8.b & 1) == 0 || ((*(rax_21 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_19 = var_a8
                        
                        if (((rcx_19 u>> 1).b & 1) == 0)
                            goto label_141fb68ab
                        
                        uint64_t rax_25 = sub_1405949a0()
                        
                        if (rax_25.b != 0)
                            rcx_19 = var_a8
                        label_141fb68ab:
                            
                            if (((rcx_19 u>> 2).b & 1) == 0)
                            label_141fb6927:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_14)
                                
                                if (result == r13_1)
                                    if (rax_14 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_26 = sub_1425bd0d0()
                                    void* rdx_12 = *(rdi_1 + 0x10)
                                    result = sx.q(*(rax_26 + 0x38))
                                    
                                    if (result.d s> *(rdx_12 + 0x38))
                                        break
                                    
                                    uint64_t result_1 = result
                                    result = *(rdx_12 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_26 + 0x30)
                                        break
                            else
                                if ((*(rax_14 + 0x1f4) & 0x20) == 0 || (*(rax_14 + 0x1f6) & 8) != 0)
                                    rax_25 = zx.q(*(rax_14 + 0x1f5))
                                
                                void* r15
                                
                                if (((*(rax_14 + 0x1f4) & 0x20) != 0
                                        && (*(rax_14 + 0x1f6) & 8) == 0) || (rax_25.b & 0x40) != 0
                                        || rax_25.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_21 = *(rax_14 + 0xb8)
                                char* rsi_2 = *(rax_14 + 0x248)
                                
                                if (rcx_21 != 0)
                                    rax_25 = sub_1424359b0(rcx_21)
                                
                                if (rcx_21 == 0 || rax_25 == 0 || rsi_2 == rax_25)
                                    rcx_21.b = 1
                                else
                                    rcx_21.b = 0
                                
                                if (rsi_2 == 0 || *rsi_2 == 2)
                                    rax_25.b = 1
                                else
                                    rax_25.b = 0
                                
                                if (rcx_21.b != 0 || rax_25.b != 0)
                                    rax_25.b = 1
                                
                                if (r15.b != 0 && rax_25.b != 0)
                                    goto label_141fb6927
                
                r8_6 = var_68
                rdx_8 = var_90
            
            r14_2 += 1
            result = zx.q(r8_6 + rdx_8)
            r12_1 += 8
            
            if (r14_2 s>= result.d)
                goto label_141fb6981
        
        var_78 = rdi_1
        var_88 = r14_2
    
    if (var_50_2 != 0)
        char var_50_3 = 0
        int64_t var_58
        result = sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            result = sub_140a74f90(var_70)
        
        if (var_98 != 0)
            result = sub_140a74f90(var_98)
else
    result = sub_141fc5e40(rdi, arg2, arg3)
    var_f8 = arg2
    *(rdi + 0x768) = arg2
    
    if (arg2 != 0)
        result = sub_1405a7050(rdi + 0xcf0, &var_f8)
__security_check_cookie(rax_1 ^ &var_118)
return result
