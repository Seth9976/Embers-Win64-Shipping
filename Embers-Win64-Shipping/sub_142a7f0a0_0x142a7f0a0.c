// 函数: sub_142a7f0a0
// 地址: 0x142a7f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rdi = sx.q(arg2)
int64_t* result

if (*arg3 s> 0)
    result = nullptr
else
    void var_160
    sub_142a95e20(&var_160)
    int64_t* result_2
    
    if (rdi.d s< 0)
        char* rax_3 = strrchr(arg1, 0x5c)
        void* rdi_1 = arg1
        
        if (rax_3 != 0)
            rdi_1 = &rax_3[1]
        
        if (*rdi_1 != 0)
            result = sub_142a7f6d0(rdi_1, arg3)
            
            if (result == 0 && *arg3 s<= result.d)
                void var_128
                sub_142a7ded0(&var_128, sub_142a4b740(), rdi_1, arg1, ".dat", 1, arg3)
                
                if (Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                        &var_160) == 0)
                    char i
                    
                    do
                        int64_t rax_6 = sub_142a7ee10(&var_128, arg3)
                        
                        if (rax_6 == 0)
                            break
                        
                        sub_142a7de20(&var_160, rax_6, arg3)
                        i = Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                            &var_160)
                    while (i == 0)
                
                if (*arg3 s> 0)
                    result_2 = nullptr
                else if (Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                        &var_160) != 0)
                    sub_142af5a30(&var_160, arg3)
                    result_2 = sub_142a7f4d0(rdi_1, &var_160, arg3)
                else
                    *arg3 = 4
                    result_2 = nullptr
                
                char var_6c
                int64_t var_78
                
                if (var_6c != 0)
                    sub_142a7dcd0(var_78)
                char var_ac
                int64_t var_b8
                
                if (var_ac != 0)
                    sub_142a7dcd0(var_b8)
                char var_ec
                int64_t var_f8
                
                if (var_ec != 0)
                    sub_142a7dcd0(var_f8)
                result = result_2
        else
            if (*arg3 s<= 0)
                *arg3 = 4
            
            result = nullptr
    else if (rdi.d s>= 0xa)
        result = nullptr
    else
        sub_142a860a0(nullptr)
        result_2 = *(&data_144015a20 + (rdi << 3))
        
        if (result_2 != 0)
        label_142a7f146:
            sub_142a860d0(nullptr)
            result = result_2
        else
            int64_t* result_3 = result_2
            
            if (rdi s> 0)
                do
                    if (*(*(&data_144015a20 + (result_3 << 3)) + 8) == &data_14365d610)
                        goto label_142a7f146
                    
                    result_3 += 1
                while (result_3 s< rdi)
            
            sub_142a860d0(nullptr)
            sub_142a7f3d0(&data_14365d610, 0, arg3)
            sub_142a860a0(nullptr)
            int64_t* result_1 = *(&data_144015a20 + (rdi << 3))
            sub_142a860d0(nullptr)
            result = result_1

__security_check_cookie(rax_1 ^ &var_1a8)
return result
