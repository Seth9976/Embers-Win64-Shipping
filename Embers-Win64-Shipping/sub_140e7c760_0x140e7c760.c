// 函数: sub_140e7c760
// 地址: 0x140e7c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* var_168
int128_t zmm0 = sub_140e683e0(arg1, &var_168, *(arg2 + 0xc))
*(var_168 + 0x34) = 2
int64_t* var_160

if (var_160 != 0)
    var_160[1].d -= 1
    
    if (var_160[1].d == 1)
        (**var_160)(var_160)
        int32_t temp1_1 = *(var_160 + 0xc)
        *(var_160 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_160 + 8))(var_160, 1)

(*(*arg1 + 0x50))(arg1)
sub_140e89370(arg1, zmm0)
var_168 = arg1
int64_t** var_170 = &var_168
int64_t (* var_178)(int64_t* arg1, int64_t* arg2) = sub_140e5a2a0
char result = sub_140e79540(&arg1[0xb1], &var_178)

if (result == 0)
    result = sub_140e683e0(arg1, &var_168, *(arg2 + 0xc))
    int64_t* rcx_6 = var_168
    
    if (rcx_6[0xc].d s> 0)
        if (rcx_6[0xf] == 0)
            char** rax_7 = sub_140dbffe0(&rcx_6[0xb], &var_178, 0, 0, data_1439ae51c)
            int64_t* rbx_1 = rax_7[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void var_110
            
            if (&rcx_6[0xf] == &var_110)
            label_140e7c8c7:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp8_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            else
                rcx_6[0xf] = *rax_7
                int64_t* rdi_1 = rcx_6[0x10]
                
                if (rbx_1 == rdi_1)
                    goto label_140e7c8c7
                
                rcx_6[0x10] = rbx_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp11_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (var_170 != 0)
                var_170[1].d -= 1
                
                if (var_170[1].d == 1)
                    (**var_170)(var_170)
                    int32_t temp10_1 = *(var_170 + 0xc)
                    *(var_170 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*var_170)[1](var_170, 1)
        
        int64_t* rbx_3 = rcx_6[0x10]
        void* rcx_14 = rcx_6[0xf]
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        void* var_170_1 = rcx_14
        var_178.d = *(rcx_14 + 0x130) - 1
        uint128_t zmm0_1 = var_178.o
        int16_t var_150_1 = arg2[1].w
        char var_14e_1 = *(arg2 + 0xa)
        int32_t var_14c_1 = *(arg2 + 0xc)
        int64_t var_148_1 = arg2[2]
        void** var_158 = &data_142ecfda0
        var_178.o = zmm0_1
        int32_t var_138_1 = arg2[4].d
        uint64_t var_140_1 = arg2[3]
        int32_t var_12c_1 = *(arg2 + 0x2c)
        uint64_t var_134_1 = *(arg2 + 0x24)
        int32_t var_120_1 = arg2[7].d
        int32_t var_114_1 = *(arg2 + 0x44)
        uint64_t var_128_1 = arg2[6]
        char var_198
        void var_188
        var_198.q = &var_188
        uint64_t var_11c_1 = *(arg2 + 0x3c)
        void var_f8
        sub_140e4b870(&var_f8, arg1, &var_178, &var_158)
        result = sub_140597700(&var_f8)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (arg2 != 0)
        arg2[1].d -= 1
        
        if (arg2[1].d == 1)
            result = (**arg2)(arg2)
            int32_t temp3_1 = *(arg2 + 0xc)
            *(arg2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*arg2 + 8))(arg2, 1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
