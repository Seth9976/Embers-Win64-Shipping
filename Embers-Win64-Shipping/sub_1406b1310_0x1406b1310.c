// 函数: sub_1406b1310
// 地址: 0x1406b1310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t* result = __security_cookie ^ &var_b8
int64_t* result_1 = result

while (*arg1 != 0)
    int64_t* rbx_1 = *(arg1 + 0x30)
    
    if (rbx_1 != 0 && (arg1[0x38] == 0 || rbx_1[0x1b].b == 0))
        bool cond:0_1 = arg1[0x38] == 0
        int64_t var_88 = 0x14
        
        if (not(cond:0_1) && rbx_1[0x1b].b != 0)
            void var_40
            std::_Throw_future_error(std::make_error_code(&var_40, 4))
            noreturn
        
        void* mtx = &rbx_1[8]
        int32_t code = _Mtx_lock(&rbx_1[8])
        
        if (code != 0)
            std::_Throw_C_error(code)
            noreturn
        
        char var_28_1 = 1
        int32_t rax_3
        int64_t rdx_1
        
        if ((*(*rbx_1 + 0x18))(rbx_1) == 0)
            char rax_4
            rax_4, rdx_1 = sub_14068ba20(&rbx_1[0x12], &mtx, &var_88, rbx_1)
            
            if (rax_4 == 0)
                if (var_28_1 != 0)
                    _Mtx_unlock(mtx)
                
                rax_3 = 1
            else
                if (var_28_1 != 0)
                    _Mtx_unlock(mtx)
                
                rax_3 = 0
        else
            _Mtx_unlock(&rbx_1[8])
            rax_3 = 2
        
        if (rax_3 == 0)
            void var_80
            
            if (&var_80 == &arg1[0x30])
                std::_Throw_future_error(std::make_error_code(&var_80, 4))
                noreturn
            
            int64_t* rbx_2 = *(arg1 + 0x30)
            *(arg1 + 0x30) = 0
            
            if (rbx_2 == 0 || rbx_2[0x1b].b != 0)
                std::_Throw_future_error(std::make_error_code(&var_80, 4))
                noreturn
            
            rdx_1.b = 1
            int128_t* rax_7 = (*(*rbx_2 + 0x10))(rbx_2, rdx_1)
            int128_t zmm0_1 = *rax_7
            int128_t zmm1 = rax_7[1]
            rax_7[1].q = 0
            *(rax_7 + 0x18) = 0xf
            *rax_7 = 0
            mtx.o = zmm0_1
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                int64_t* rcx_11 = rbx_2[0x1d]
                
                if (rcx_11 == 0)
                    (**rbx_2)(rbx_2, 1)
                else
                    (**rcx_11)(rcx_11, rbx_2)
            
            result = sub_14058a530(&arg1[8], &mtx)
            int64_t rdx_5 = zmm1:8.q
            
            if (rdx_5 u>= 0x10)
                void* mtx_1 = mtx
                void* mtx_2 = mtx_1
                
                if (rdx_5 + 1 u>= 0x1000)
                    mtx_1 = *(mtx_1 - 8)
                    
                    if (mtx_2 - mtx_1 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                result = j_sub_140a74f90(mtx_1)
        else
            MSG msg
            result = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)
            
            if (result.d == 0)
                continue
            else
                do
                    TranslateMessage(&msg)
                    DispatchMessageW(&msg)
                    result = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)
                while (result.d != 0)
                
                continue
    
    *arg1 = 0
    break

__security_check_cookie(result_1 ^ &var_b8)
return result
