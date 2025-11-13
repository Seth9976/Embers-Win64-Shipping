// 函数: sub_14106d8a0
// 地址: 0x14106d8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* result = sub_140a54810()

if (result.b != 0)
    result = EnterCriticalSection(&arg1[3])
    int64_t rsi_1 = data_143e2c9d0
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        result = GetCurrentThreadId()
        rcx_1.b = result.d != data_143de5470
    
    int32_t r15_1 = *(rsi_1 + (rcx_1 << 2))
    
    if (r15_1 == 0xffffffff)
        result = sub_140b70ca0()
        r15_1 = result.d
    
    int64_t* rcx_2 = arg1[9]
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x20))(rcx_2)
        
        if (r15_1 != result.d)
            int64_t rax_3 = *arg1
            int64_t var_68 = 0
            void* var_58_1 = nullptr
            void var_78
            result = (*(rax_3 + 0x10))(arg1, &var_78, &var_68)
            int64_t* result_1 = result
            
            if (*result != 0)
                while (true)
                    int64_t rcx_4 = *result_1
                    
                    if (rcx_4 != 0)
                        int64_t* rcx_5 = *(rcx_4 + 0x70)
                        int64_t r9_1 = *rcx_5
                        result = (*(r9_1 + 0x20))(rcx_5, 0xffffffff, 0, r9_1)
                        
                        if (result.b != 0)
                            break
            
            int64_t* var_70
            
            if (var_70 != 0)
                result = zx.q(var_70[1].d)
                var_70[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_70)(var_70)
                    int32_t r14_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (r14_1 == 1)
                        result = (*(*var_70 + 8))(var_70, zx.q(r14_1))
            
            if (var_68 != 0)
                void var_48
                void* rcx_8 = &var_48
                
                if (var_58_1 != 0)
                    rcx_8 = var_58_1
                
                result = (*(*rcx_8 + 0x10))(rcx_8)
            
            if (arg1[8].b != 0)
                int64_t* rcx_9 = arg1[9]
                result = (*(*rcx_9 + 8))(rcx_9)
                int64_t* rcx_10 = arg1[9]
                
                if (rcx_10 != 0)
                    result = (*(*rcx_10 + 0x28))(rcx_10, 1)
            
            arg1[9] = 0
    
    if (arg1[9] == 0)
        int64_t* rcx_11 = data_143db7ad0
        
        if (r15_1 != (*(*rcx_11 + 0x20))(rcx_11))
            arg1[8].b = 1
            void*** rax_12 = sub_140a69900()
            arg1[9] = rax_12
            result = (**rax_12)(rax_12, zx.q(r15_1), 0x1400, 0)
        else
            arg1[8].b = 0
            result = data_143db7ad0
            arg1[9] = result
    
    if (arg1 != -0x18)
        result = LeaveCriticalSection(&arg1[3])

__security_check_cookie(rax_1 ^ &var_98)
return result
