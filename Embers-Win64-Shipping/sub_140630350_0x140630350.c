// 函数: sub_140630350
// 地址: 0x140630350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* result
int64_t rcx

if (arg1 != 0)
    int64_t rax_2 = sub_1423de540(data_143f5b298, arg1, 0)
    
    if (rax_2 != 0)
        void* rax_3 = sub_142574150()
        void* rdi_1 = rax_3
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        else
            void* rax_4 = sub_142574150()
            
            if (rax_4 == 0)
                rdi_1 = nullptr
            else
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    rdi_1 = nullptr
        
        int32_t var_80 = 5
        char var_28_1 = 0
        void* var_78
        sub_1405ab0f0(&var_78, rax_2, rdi_1)
        char var_28_2 = 1
        sub_1406277a0(&var_80)
        int64_t var_70
        char i
        int64_t var_48
        int64_t var_30
        
        if (i == 0)
            do
                void* result_1
                int64_t var_98 = *(result_1 + 0x18)
                int16_t* var_90
                sub_140b63b70(&var_98, &var_90)
                int16_t* rdx_4
                
                if (arg2[1].d == 0)
                    rdx_4 = &data_142d40450
                else
                    rdx_4 = *arg2
                
                int16_t* const rcx_7 = &data_142d40450
                int32_t var_88
                
                if (var_88 != 0)
                    rcx_7 = var_90
                
                int32_t rax_8 = sub_140a54510(rcx_7, rdx_4)
                int16_t* rcx_8 = var_90
                rdi_1.b = rax_8 == 0
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                if (rdi_1.b != 0)
                    if (var_28_2 != 0)
                        char var_28_4 = 0
                        sub_142441560(var_78, var_30)
                        
                        if (var_48 != 0)
                            sub_140a74f90(var_48)
                        
                        if (var_70 != 0)
                            sub_140a74f90(var_70)
                    
                    int64_t rcx_18 = *arg2
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    result = result_1
                    goto label_1406304b1
                
                sub_1406277a0(&var_80)
            while (i == rdi_1.b)
        
        if (var_28_2 != 0)
            char var_28_3 = 0
            sub_142441560(var_78, var_30)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
    
    rcx = *arg2
else
    rcx = *arg2

if (rcx != 0)
    sub_140a74f90(rcx)

result = nullptr
label_1406304b1:
__security_check_cookie(rax_1 ^ &var_b8)
return result
