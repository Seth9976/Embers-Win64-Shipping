// 函数: sub_140e22fb0
// 地址: 0x140e22fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result

if (*(arg1 + 9) != 0)
    int64_t* rax_1 = sub_140a242a0()
    int64_t r9_1 = *rax_1
    
    if ((*(r9_1 + 0x10))(rax_1, 0, arg4, r9_1) == 2)
        void* rax_3 = arg2[2]
        void* rcx_1 = &arg2[4]
        
        if (rax_3 != 0)
            rcx_1 = rax_3
        
        result = (*arg2)((*(*rcx_1 + 8))(rcx_1))
    else
        int64_t var_78
        void* var_68
        void var_58
        
        if (arg3 == 0)
            int64_t rax_11 = *arg2
            var_78 = rax_11
            var_68 = nullptr
            
            if (rax_11 != 0)
                void* rax_12 = arg2[2]
                void* rcx_9 = &arg2[4]
                
                if (rax_12 != 0)
                    rcx_9 = rax_12
                
                (**rcx_9)(rcx_9, &var_68)
            
            int64_t var_38_2 = 0
            result = sub_140e0fff0(arg1, &var_78)
            
            if (var_78 != 0)
                void* rax_14 = var_68
                void* rcx_11 = &var_58
                
                if (rax_14 != 0)
                    rcx_11 = rax_14
                
                result = (*(*rcx_11 + 0x10))(rcx_11)
        else
            void*** rax_6 = sub_140a491d0(0)
            int64_t rcx_3 = *arg2
            var_78 = rcx_3
            var_68 = nullptr
            
            if (rcx_3 != 0)
                void* rdx = arg2[2]
                void* rcx_4 = &arg2[4]
                
                if (rdx != 0)
                    rcx_4 = rdx
                
                (**rcx_4)(rcx_4, &var_68)
            
            void*** var_38_1 = rax_6
            sub_140e0fff0(arg1, &var_78)
            
            if (var_78 != 0)
                void* rax_8 = var_68
                void* rcx_6 = &var_58
                
                if (rax_8 != 0)
                    rcx_6 = rax_8
                
                (*(*rcx_6 + 0x10))(rcx_6)
            
            (*rax_6)[4](rax_6, 0xffffffff, 0)
            result = sub_140a4fc50(rax_6)

__security_check_cookie(result_1 ^ &var_98)
return result
