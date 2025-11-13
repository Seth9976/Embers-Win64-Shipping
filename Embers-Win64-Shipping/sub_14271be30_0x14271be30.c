// 函数: sub_14271be30
// 地址: 0x14271be30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t var_38 = __security_cookie ^ &var_f8
int128_t zmm6 = arg5
uint64_t result

if (zmm6.d f<= 0f)
    result.b = 0
else
    int64_t* rdi_1 = arg1[0x14]
    
    if (rdi_1 == 0)
        result.b = 0
    else
        int32_t rax_1 = *(rdi_1 + 0xc)
        void* const rax_7
        
        if (rax_1 s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_1)
            uint32_t rdx_1 = zx.d(temp0_1)
            int32_t rax_3 = temp1_1 + rdx_1
            arg3 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
            rax_7 = arg3 + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
            result.b = 0
        else
            int32_t var_c0
            (*(*arg1 + 0x438))(arg1, &var_c0, arg3)
            int32_t var_bc
            int32_t zmm0 = var_bc f- arg2[1]
            arg5.d = var_c0.d f- *arg2
            float var_b8
            float zmm1 = var_b8 f- arg2[2]
            arg5.d = arg5.d f* arg5.d
            arg5.d = arg5.d f+ zmm0 f* zmm0
            zmm6.d = zmm6.d f* zmm6.d
            zmm0 = arg1[0x16].d
            arg5.d = arg5.d f+ zmm1 * zmm1
            arg5.d = arg5.d f/ zmm6.d
            
            if (not(arg5.d f> zmm0 f* zmm0))
                result.b = 1
            else if (arg4 != 0)
                result.b = 0
            else
                zmm0 = *(arg1 + 0xb4)
                
                if (arg5.d f> zmm0 f* zmm0)
                    result.b = 0
                else
                    TEB* gsbase
                    
                    if (data_143f72548 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143f72548)
                        
                        if (data_143f72548 == 0xffffffff)
                            sub_140b58170(&data_143f72540, "CanHear", 1)
                            _Init_thread_footer(&data_143f72548)
                    
                    void var_c8
                    void var_a8
                    int64_t* rax_12 = sub_141eb54c0(&var_a8, data_143f72540, &var_c8, 1, rdi_1)
                    int64_t rdx_5 = *rdi_1
                    int64_t* rbx_1
                    rbx_1.b = sub_141ec6cd0((*(rdx_5 + 0x150))(rdi_1, rdx_5), &var_c0, arg2, 3, 
                        rax_12, &data_143f3a660) == 0
                    int64_t var_48
                    
                    if (var_48 != 0)
                        sub_140a74f90(var_48)
                    
                    int64_t var_68
                    
                    if (var_68 != 0)
                        sub_140a74f90(var_68)
                    
                    result = zx.q(rbx_1.b)

__security_check_cookie(var_38 ^ &var_f8)
return result
