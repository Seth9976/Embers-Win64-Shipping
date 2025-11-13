// 函数: sub_140b44040
// 地址: 0x140b44040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* arg_10 = arg2
int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
void var_2e8
uint64_t result = __security_cookie ^ &var_2e8
uint64_t result_1 = result
int64_t r12 = sx.q(arg1)
int64_t r15

if (data_143de8178 == 0 || *(r12 + &data_143de7240) == 0)
    r15.b = 0
    
    if (data_143de8160 != 0)
        goto label_140b440f1
else
    r15.b = 1
label_140b440f1:
    wchar16 _Buffer[0x38]
    __stdio_common_vswprintf(data_143cd5b30, &_Buffer, 0x100, arg2, nullptr, &_ArgList)
    int32_t rax_1 = 0
    int16_t* rdi_1 = nullptr
    int32_t var_2ac_1 = 0
    int32_t rsi_1 = 0
    int64_t var_268_1 = 0
    int16_t var_5a_1 = 0
    int16_t* var_2b8 = nullptr
    int32_t var_2b0_1 = 0
    
    if (_Buffer[0] != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (_Buffer[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_2b8, rbx_1.d + 1)
            rax_1 = var_2ac_1
            rsi_1 = var_2b0_1
            rdi_1 = var_2b8
        
        rsi_1 += rbx_1.d + 1
        var_2b0_1 = rsi_1
        
        if (rsi_1 s> rax_1)
            sub_140594770(&var_2b8)
            rsi_1 = var_2b0_1
            rdi_1 = var_2b8
        
        UnDecorator::getReferenceType(rdi_1, &_Buffer, (rbx_1.d + 1) * 2)
    
    if (r15.b == 0)
        result = data_143de8160
        
        if (result != 0)
            int16_t* const rcx_15 = &data_142d40450
            int16_t* rdx_9 = &data_142d40450
            
            if (rsi_1 != 0)
                rdx_9 = rdi_1
            
            if (*(result + 8) != 0)
                rcx_15 = *result
            
            result = sub_140a54510(rcx_15, rdx_9)
            
            if (result.d == 0)
                int64_t var_2a8
                __builtin_memset(&var_2a8, 0, 0x20)
                int32_t rbx_8 = *(sub_140b3cdd0() + 8)
                _locale_t var_2c8_1
                var_2c8_1.d = 0
                int64_t var_298
                result = sub_140b33560(sub_140b3cdd0(), rbx_8, &var_2a8, &var_298, var_2c8_1.d)
                int64_t rcx_17 = var_2a8
                
                if (rcx_17 != 0)
                    result = sub_140a74f90(rcx_17)
                
                int64_t rcx_18 = var_298
                
                if (rcx_18 != 0)
                    result = sub_140a74f90(rcx_18)
    else
        if (data_143de8178 != 0 && *(r12 + &data_143de7240) != 0)
            void* rax_2 = TlsGetValue(data_143de7a5c)
            void* rdi_2 = rax_2
            
            if (rax_2 == 0)
                rdi_2 = sub_140b35c00()
            
            uint64_t rbx_4 = zx.q((*(rdi_2 + 0x60)).d) & 0x1f
            int64_t* rax_5
            
            if (rbx_4.d != 0)
                rax_5 = *(rdi_2 + 0x58)
            else
                int64_t* rax_4 = j_sub_140a82f30(0x408)
                
                if (rax_4 == 0)
                    rax_5 = nullptr
                else
                    rax_5 = sub_140b2d7a0(rax_4)
                
                void* rcx_6 = *(rdi_2 + 0x58)
                
                if (rcx_6 != 0)
                    *(rcx_6 + 0x400) = rax_5
                    *(rdi_2 + 0x58) = rax_5
                else
                    *(rdi_2 + 0x50) = rax_5
                    *(rdi_2 + 0x58) = rax_5
            
            int64_t* rbx_6 = &rax_5[rbx_4 * 4]
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            
            if (rbx_6 != &var_2b8)
                int32_t r8_2 = *(rbx_6 + 0xc)
                rbx_6[1].d = var_2b0_1
                
                if (var_2b0_1 != 0 || r8_2 != 0)
                    sub_1405a4c70(rbx_6, var_2b0_1, r8_2)
                    memcpy(*rbx_6, var_2b8, var_2b0_1 * 2)
                else
                    *(rbx_6 + 0xc) = 0
            
            rbx_6[2] = performanceCount
            rbx_6[3].d = r12.d
            rsi_1 = var_2b0_1
            *(rdi_2 + 0x60) += 1
            rdi_1 = var_2b8
        
        result = data_143de8168
        
        if (result != 0)
            int16_t* const rcx_10 = &data_142d40450
            int16_t* rdx_6 = &data_142d40450
            
            if (rsi_1 != 0)
                rdx_6 = rdi_1
            
            if (*(result + 8) != 0)
                rcx_10 = *result
            
            result = sub_140a54510(rcx_10, rdx_6)
            
            if (result.d == 0)
                int64_t var_280 = 0
                void* var_278
                result = sub_140b37b10(sub_140b3cdd0(), &var_278, &var_280)
                int64_t* var_270
                
                if (var_270 != 0)
                    result = zx.q(var_270[1].d)
                    var_270[1].d -= 1
                    
                    if (result.d == 1)
                        result = (**var_270)(var_270)
                        int32_t r14_1 = *(var_270 + 0xc)
                        *(var_270 + 0xc) -= 1
                        
                        if (r14_1 == 1)
                            result = (*(*var_270 + 8))(var_270, zx.q(r14_1))
                    
                    rdi_1 = var_2b8
    
    if (rdi_1 != 0)
        result = sub_140a74f90(rdi_1)
__security_check_cookie(result_1 ^ &var_2e8)
return result
