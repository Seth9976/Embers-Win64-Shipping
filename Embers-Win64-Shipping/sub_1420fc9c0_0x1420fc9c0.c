// 函数: sub_1420fc9c0
// 地址: 0x1420fc9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* r15 = arg1
_wtof(arg2)
int128_t zmm6
zmm6.d = fconvert.s(arg3)
uint64_t result

if ((*(r15[6] + 0x3d0) & 2) != 0)
    uint64_t r14
    r14.b = 0
    char var_d8_1 = 0
    void* rbx_1 = sub_1425455a0()
    int64_t rax_4 = (*(*r15 + 0x150))(r15)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_5 = sub_1425455a0()
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            int64_t rcx_2 = sx.q(*(rax_5 + 0x38))
            
            if (rcx_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rcx_2 << 3)) != rax_5 + 0x30)
                rbx_1 = nullptr
    
    int32_t var_c8 = 5
    char var_70_1 = 0
    void* var_c0
    sub_1405ab0f0(&var_c0, rax_4, rbx_1)
    char var_70_2 = 1
    sub_1405b0c60(&var_c8)
    int64_t var_b8
    char var_a4
    int64_t var_90
    
    if (var_a4 == 0)
        int64_t* var_98
        int64_t* rbx_2 = var_98
        
        while (true)
            if ((rbx_2[0x50].b & 1) != 0)
                char rax_7 = (*(rbx_2 + 0x23c)).b
                
                if (rax_7 s< 0)
                    char rax_10
                    
                    if ((rax_7 & 0x20) == 0)
                        rax_10 = sub_14243af00((*(*rbx_2 + 0x150))(rbx_2))
                    
                    if ((rax_7 & 0x20) != 0 || rax_10 != 0)
                        int32_t i = 0
                        
                        if (rbx_2[0x4d].d s> 0)
                            int64_t* rsi_1 = nullptr
                            
                            do
                                int64_t* rcx_7 = *(rsi_1 + rbx_2[0x4c])
                                int64_t rax_13
                                int64_t r8_2
                                rax_13, r8_2 = (*(*rcx_7 + 0x260))(rcx_7)
                                
                                if (rax_13 == r15[6])
                                    int32_t zmm0 = *(rbx_2 + 0x284)
                                    float zmm1_1 = *(rbx_2[0x44] + 0x28) - 0.100000001f
                                    
                                    if (not(zmm0 f>= zmm1_1) && not(zmm0 f< zmm6.d))
                                        r8_2.b = 1
                                        sub_1420a3cb0(rbx_2, zmm1_1, r8_2)
                                        var_d8_1 = 1
                                
                                i += 1
                                rsi_1 = &rsi_1[1]
                            while (i s< rbx_2[0x4d].d)
            
            int32_t var_88
            int32_t r8_3 = var_88
            int32_t var_b0
            int32_t rdx_2 = var_b0
            void* r13_1 = var_c0
            int32_t var_a8
            int32_t r14_2 = var_a8 + 1
            
            if (r14_2 s>= r8_3 + rdx_2)
            label_1420fcd24:
                int64_t var_98_1 = 0
                char var_a4_1 = 1
                break
            
            int64_t** r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_2)
                    rbx_2 = *(var_90 + (sx.q(r14_2 - rdx_2) << 3))
                else
                    rbx_2 = *(r12_1 + var_b8)
                
                int32_t var_a0 = var_a0 + 1
                
                if (rbx_2 != 0)
                    void* rax_20 = sub_141dc9840(rbx_2)
                    
                    if (rax_20 != 0)
                        void* const rax_27
                        
                        if ((var_c8.b & 1) != 0)
                            int32_t rax_21 = *(rbx_2 + 0xc)
                            
                            if (rax_21 s>= data_143e1d9b4)
                                rax_27 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_21)
                                uint32_t rdx_4 = zx.d(temp0_1)
                                int32_t rax_23 = temp1_1 + rdx_4
                                rax_27 = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_23.w) - rdx_4) * 0x18
                        
                        if ((var_c8.b & 1) == 0 || ((*(rax_27 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_16 = var_c8
                            
                            if (((rcx_16 u>> 1).b & 1) == 0)
                                goto label_1420fcc4e
                            
                            uint64_t rax_31 = sub_1405949a0()
                            
                            if (rax_31.b != 0)
                                rcx_16 = var_c8
                            label_1420fcc4e:
                                
                                if (((rcx_16 u>> 2).b & 1) == 0)
                                label_1420fccca:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_20) == r13_1)
                                        if (rax_20 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_32 = sub_1425bd0d0()
                                        void* rdx_6 = rbx_2[2]
                                        result = sx.q(*(rax_32 + 0x38))
                                        
                                        if (result.d s> *(rdx_6 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_6 + 0x30) + (result << 3)) != rax_32 + 0x30)
                                            break
                                else
                                    if ((*(rax_20 + 0x1f4) & 0x20) == 0
                                            || (*(rax_20 + 0x1f6) & 8) != 0)
                                        rax_31 = zx.q(*(rax_20 + 0x1f5))
                                    
                                    if (((*(rax_20 + 0x1f4) & 0x20) != 0
                                            && (*(rax_20 + 0x1f6) & 8) == 0) || (rax_31.b & 0x40) != 0
                                            || rax_31.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_18 = *(rax_20 + 0xb8)
                                    char* rsi_2 = *(rax_20 + 0x248)
                                    
                                    if (rcx_18 != 0)
                                        rax_31 = sub_1424359b0(rcx_18)
                                    
                                    if (rcx_18 == 0 || rax_31 == 0 || rsi_2 == rax_31)
                                        rcx_18.b = 1
                                    else
                                        rcx_18.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_31.b = 1
                                    else
                                        rax_31.b = 0
                                    
                                    if (rcx_18.b != 0 || rax_31.b != 0)
                                        rax_31.b = 1
                                    
                                    if (r15.b != 0 && rax_31.b != 0)
                                        goto label_1420fccca
                    
                    r8_3 = var_88
                    rdx_2 = var_b0
                
                r14_2 += 1
                r12_1 = &r12_1[1]
                
                if (r14_2 s>= r8_3 + rdx_2)
                    goto label_1420fcd24
            
            int64_t* var_98_2 = rbx_2
            var_a8 = r14_2
            
            if (var_a4 != 0)
                break
            
            r15 = arg1
        
        r14 = zx.q(var_d8_1)
    
    if (var_70_2 != 0)
        char var_70_3 = 0
        int64_t var_78
        sub_142441560(var_c0, var_78)
        
        if (var_90 != 0)
            sub_140a74f90(var_90)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
    
    if (r14.b != 0)
        sub_142003490()
        sub_140599090(&data_143a2df80)

result.b = 1
__security_check_cookie(rax_1 ^ &var_f8)
return result
