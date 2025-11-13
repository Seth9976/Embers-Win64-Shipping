// 函数: sub_141fea5a0
// 地址: 0x141fea5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg2 != 0)
    result = zx.d(*(arg1 + 0x11))
else
    result = zx.d(*(arg1 + 0x10))
    *(arg1 + 0x11) = result.b

if (result.b != 0)
    int64_t var_88
    
    if (arg2 != 0)
        var_88 = *(arg1 + 8)
        char var_80_1 = arg2
        
        if (sub_140a80f40() == 0)
            uint32_t rax_6
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_6.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
                void var_40
                void** rax_7 = sub_141fddf70(&var_40, nullptr, 0xff)
                *(*rax_7 + 0x10) = var_88.o
                void* rcx_9 = *rax_7
                int32_t r8_2 = rax_7[2].d
                int64_t* rdx_1 = rax_7[1]
                int64_t* rbx_3 = *(rcx_9 + 0x28)
                int64_t* arg_18 = rbx_3
                void* rsi_1 = &rbx_3[9]
                
                if (rbx_3 != 0)
                    *rsi_1 += 1
                    rbx_3 = arg_18
                
                result = sub_140a064d0(rcx_9, rdx_1, r8_2, 1)
                
                if (rbx_3 != 0)
                    result = *rsi_1
                    *rsi_1 -= 1
                    
                    if (result == 1)
                        result = sub_140a2f6e0(arg_18)
            else
                int128_t var_68 = var_88.o
                result = sub_141fd8840(&var_68, &data_143f02b98)
        else
            result = sub_141fd8840(&var_88, &data_143f02b98)
        
        if (arg2 == 3)
            *(arg1 + 0x11) = 0
    else
        uint128_t zmm1
        zmm1.q = data_143d796f8 f* 1000.0
        int64_t* rbx_1 = *(arg1 + 8)
        char var_80
        var_80.q = rbx_1
        int128_t zmm0
        zmm0.q = float.d(zx.q(data_143f138ec))
        zmm1.q = zmm1.q f* zmm0.q
        float temp0_1[0x4] = _mm_cvtpd_ps(zmm1)
        var_88.d = temp0_1[0]
        
        if (sub_140a80f40() != 0)
            return sub_141fdc150(rbx_1, &data_143f02b98, temp0_1)
        
        if (data_143f138f4 == 0)
            uint32_t rax_2
            
            if (data_143de5480 != 0)
                rax_2.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_2.b != 0)
                int32_t var_7c
                int32_t var_6c_1 = var_7c.d
                return sub_141fdc150(var_80.d.d.q, &data_143f02b98, temp0_1)
        
        void var_58
        void** rax_3 = sub_141fdde20(&var_58, nullptr, 0xff)
        *(*rax_3 + 0x10) = var_88.o
        void* rcx_3 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx = rax_3[1]
        int64_t* rbx_2 = *(rcx_3 + 0x28)
        int64_t* arg_8 = rbx_2
        void* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_8
        
        result = sub_140a064d0(rcx_3, rdx, r8_1, 1)
        
        if (rbx_2 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_8)

return result
