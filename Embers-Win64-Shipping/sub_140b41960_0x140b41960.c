// 函数: sub_140b41960
// 地址: 0x140b41960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void var_f0
sub_140b24bd0(&arg2[2], &var_f0, 0x60, nullptr)
char var_d8

if (var_d8 == 0)
    arg1[3].b = 0
else
    int16_t* var_d0
    sub_140b24b40(&arg2[2], &var_d0, &var_f0)
    char var_b8
    
    if (var_b8 == 0)
        arg1[3].b = 0
    else
        wchar16 ch = *var_d0
        
        if (wcschr(data_1439a92f0, ch) != 0)
            sub_140b3e280()
            wchar16 ch_1 = ch
            void** const var_98_1 = &data_142e78528
            int128_t var_a8 = data_143de7b48.o
            sub_140b0e240(arg2, &var_f0, &var_a8)
            sub_140b0bbf0(&var_a8)
            arg1[3].b = 0
        else if (arg3 == 0)
            arg1[3].b = 0
        else
            wchar16* var_158 = nullptr
            int64_t var_150_1 = 0
            
            if (ch != 0)
                var_150_1.d = 2
                sub_140594770(&var_158)
                *var_158 = ch
                var_158[1] = 0
            
            int64_t var_168 = 0
            int32_t var_160_1 = 0
            void var_148
            int64_t* rax_7 = sub_140aae420(&var_148, &var_158)
            int64_t* rbx_1 = rax_7[1]
            int64_t r15_1 = *rax_7
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t rdi_1 = sx.q(var_160_1)
            int32_t r14_1 = rax_7[2].d
            int32_t rax_8 = (rdi_1 + 1).d
            var_160_1 = rax_8
            
            if (rax_8 s> 0)
                sub_1405c4f50(&var_168)
            
            int32_t* rcx_12 = rdi_1 * 0x30 + var_168
            int64_t var_60
            *(rcx_12 + 8) = var_60
            *rcx_12 = 4
            rcx_12[0xa].b = 0
            *(rcx_12 + 0x10) = r15_1
            *(rcx_12 + 0x18) = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            rcx_12[8] = r14_1
            rcx_12[0xa].b = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_11 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* var_140
            
            if (var_140 != 0)
                var_140[1].d -= 1
                
                if (var_140[1].d == 1)
                    (**var_140)(var_140)
                    int32_t rax_15 = *(var_140 + 0xc)
                    *(var_140 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*var_140 + 8))(var_140, 1)
            
            void var_130
            void var_118
            char* var_100
            int64_t* rax_19 = sub_140aac8f0(&var_130, 
                sub_140a96390(&var_100, _vfprintf_p_l(&var_118, Invalid escape character '{0}'", 
                    StringFormatter")), &var_168)
            int64_t* rbx_3 = rax_19[1]
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            int32_t rax_20 = rax_19[2].d
            *arg1 = *rax_19
            arg1[1] = rbx_3
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            arg1[2].d = rax_20
            arg1[3].b = 1
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_23 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_23 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t* var_128
            
            if (var_128 != 0)
                var_128[1].d -= 1
                
                if (var_128[1].d == 1)
                    (**var_128)(var_128)
                    int32_t rax_27 = *(var_128 + 0xc)
                    *(var_128 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*var_128 + 8))(var_128, 1)
            
            int64_t* var_110
            
            if (var_110 != 0)
                var_110[1].d -= 1
                
                if (var_110[1].d == 1)
                    (**var_110)(var_110)
                    int32_t rdi_2 = *(var_110 + 0xc)
                    *(var_110 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        (*(*var_110 + 8))(var_110, zx.q(rdi_2))
            
            sub_140596f50(&var_168)
            wchar16* rcx_28 = var_158
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)

__security_check_cookie(rax_1 ^ &var_188)
return arg1
