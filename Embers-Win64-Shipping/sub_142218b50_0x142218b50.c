// 函数: sub_142218b50
// 地址: 0x142218b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
*arg1 = data_143dbb0c0
arg1[1] = data_143dbb0d0
arg1[2] = data_143dbb0e0
int128_t* result

if (arg2 == 0)
    result = arg1
else
    if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2 + 0xf0) != 0)
        void var_68
        int128_t* rax_3 = sub_14226f4b0(&var_68, arg2 + 0xf0, arg4)
        *arg1 = *rax_3
        arg1[1] = rax_3[1]
        arg1[2] = rax_3[2]
        
        if (arg3 != 0)
            int64_t* rdi_1 = *(arg2 + 0x108)
            
            if (rdi_1 != 0 && rdi_1[1].d != 0)
                int64_t* rcx_2 = *rdi_1
                
                if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                    int64_t* rcx_3
                    
                    if (rdi_1[1].d == 0)
                        rcx_3 = nullptr
                    else
                        rcx_3 = *rdi_1
                    
                    int64_t r9 = *rcx_3
                    (*(r9 + 0x50))(rcx_3, arg2, arg1, r9)
    
    result = arg1

__security_check_cookie(rax_1 ^ &var_88)
return result
