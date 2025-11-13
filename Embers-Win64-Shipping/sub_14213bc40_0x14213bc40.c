// 函数: sub_14213bc40
// 地址: 0x14213bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int32_t* result = __security_cookie ^ &var_118
int32_t* result_1 = result
void* rdi = arg3

if (arg2[1].d s>= 1)
    int64_t* rax_1 = *arg2
    int128_t zmm6 = zx.o(0)
    bool cond:1_1 = rax_1[1].d == 0
    int32_t var_e4 = 0
    wchar16* rdx
    
    if (cond:1_1)
        rdx = &data_142d40450
    else
        rdx = *rax_1
    
    sub_142136ca0(&var_e4, rdx, arg1)
    uint64_t rbx
    rbx.b = 0
    char var_d8
    float zmm0
    result, zmm0 = sub_142137300(&var_d8, rdi, sub_1424752c0(), 5)
    int128_t zmm7 = var_e4
    void* var_d0
    void** var_c8
    char i
    int64_t var_a0
    
    if (i == 0)
        void* var_a8
        void* rdi_1 = var_a8
        int64_t r15
        int64_t var_38_1 = r15
        char var_e8_1 = 1
        
        do
            if (zmm7.d f> zmm6.d)
                int64_t* rcx_3 = data_143f5b298
                (*(*rcx_3 + 0x2b0))(rcx_3, zmm6.d, 0)
                
                if (not(zmm0 f<= zmm6.d))
                    zmm6 = sub_142145180(rdi_1 + 0x220, int.d(zmm7.d / zmm0 * 1000f))
                    *(rdi_1 + 0x238) = 0
            else
                zmm6 = sub_142145180(rdi_1 + 0x220, 0)
                *(rdi_1 + 0x238) = 0
            
            int32_t var_98
            int32_t r8_1 = var_98
            int32_t var_c0
            int32_t rdx_3 = var_c0
            int32_t var_b8
            int32_t r14_2 = var_b8 + 1
            result = zx.q(r8_1 + rdx_3)
            
            if (r14_2 s>= result.d)
            label_14213bf20:
                int64_t var_a8_1 = 0
                char var_b4 = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_3)
                    rdi_1 = *(var_a0 + (sx.q(r14_2 - rdx_3) << 3))
                else
                    rdi_1 = *(var_c8 + r12_1)
                
                int32_t var_b0 = var_b0 + 1
                
                if (rdi_1 != 0)
                    void* rax_9
                    rax_9, zmm0 = sub_141dc9840(rdi_1)
                    
                    if (rax_9 != 0)
                        void* const rax_16
                        
                        if ((var_d8 & 1) != 0)
                            int32_t rax_10 = *(rdi_1 + 0xc)
                            
                            if (rax_10 s>= data_143e1d9b4)
                                rax_16 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_10)
                                uint32_t rdx_5 = zx.d(temp0_1)
                                int32_t rax_12 = temp1_1 + rdx_5
                                rax_16 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_12.w) - rdx_5) * 0x18
                        
                        if ((var_d8 & 1) == 0 || ((*(rax_16 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_12 = var_d8.d
                            
                            if (((rcx_12 u>> 1).b & 1) == 0)
                                goto label_14213be49
                            
                            uint64_t rax_20 = sub_1405949a0()
                            
                            if (rax_20.b != 0)
                                rcx_12 = var_d8.d
                            label_14213be49:
                                
                                if (((rcx_12 u>> 2).b & 1) == 0)
                                label_14213bec5:
                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_9)
                                    
                                    if (result == var_d0)
                                        if (rax_9 == *(var_d0 + 0x30))
                                            break
                                        
                                        void* rax_21
                                        rax_21, zmm0 = sub_1425bd0d0()
                                        void* rdx_7 = *(rdi_1 + 0x10)
                                        result = sx.q(*(rax_21 + 0x38))
                                        
                                        if (result.d s> *(rdx_7 + 0x38))
                                            break
                                        
                                        int32_t* result_2 = result
                                        result = *(rdx_7 + 0x30)
                                        
                                        if (*(result + (result_2 << 3)) != rax_21 + 0x30)
                                            break
                                else
                                    if ((*(rax_9 + 0x1f4) & 0x20) == 0
                                            || (*(rax_9 + 0x1f6) & 8) != 0)
                                        rax_20 = zx.q(*(rax_9 + 0x1f5))
                                    
                                    if (((*(rax_9 + 0x1f4) & 0x20) != 0
                                            && (*(rax_9 + 0x1f6) & 8) == 0) || (rax_20.b & 0x40) != 0
                                            || rax_20.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_14 = *(rax_9 + 0xb8)
                                    char* rsi_1 = *(rax_9 + 0x248)
                                    
                                    if (rcx_14 != 0)
                                        rax_20 = sub_1424359b0(rcx_14)
                                    
                                    if (rcx_14 == 0 || rax_20 == 0 || rsi_1 == rax_20)
                                        rcx_14.b = 1
                                    else
                                        rcx_14.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_20.b = 1
                                    else
                                        rax_20.b = 0
                                    
                                    if (rcx_14.b != 0 || rax_20.b != 0)
                                        rax_20.b = 1
                                    
                                    if (r15.b != 0 && rax_20.b != 0)
                                        goto label_14213bec5
                    
                    r8_1 = var_98
                    rdx_3 = var_c0
                
                r14_2 += 1
                result = zx.q(r8_1 + rdx_3)
                r12_1 += 8
                
                if (r14_2 s>= result.d)
                    goto label_14213bf20
            
            void* var_a8_2 = rdi_1
            var_b8 = r14_2
        while (i == 0)
        
        rdi = arg3
        rbx = zx.q(var_e8_1)
    
    char var_80
    
    if (var_80 != 0)
        char var_80_1 = 0
        int64_t var_88
        result = sub_142441560(var_d0, var_88)
        
        if (var_a0 != 0)
            result = sub_140a74f90(var_a0)
        
        if (var_c8 != 0)
            result = sub_140a74f90(var_c8)
    
    if (rbx.b == 0)
        void* rax_24
        int32_t zmm0_1
        int128_t zmm7_1
        rax_24, zmm0_1, zmm7_1 =
            sub_1420efae0(rdi, sub_1424752c0(), nullptr, nullptr, sub_142427eb0(&var_d8))
        void* rbx_3 = rax_24
        void* rax_25
        int64_t rax_26
        void* rdx_10
        
        if (rax_24 != 0)
            rax_25, zmm0_1 = sub_1424752c0()
            rdx_10 = *(rbx_3 + 0x10)
            rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rax_24 == 0 || rax_26.d s> *(rdx_10 + 0x38)
                || *(*(rdx_10 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
            rbx_3 = nullptr
        
        result = sub_142156080(rbx_3, zmm7_1, zmm0_1)

__security_check_cookie(result_1 ^ &var_118)
return result
