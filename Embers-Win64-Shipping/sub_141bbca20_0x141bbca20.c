// 函数: sub_141bbca20
// 地址: 0x141bbca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* result = arg2
sub_140db5270(arg1, arg2)

if (*result == 0)
    char var_78 = 1
    int32_t var_40_1 = 1
    *result = 1
    int128_t var_70
    __builtin_memset(&var_70, 0, 0x30)
    
    if (&result[8] != &var_70)
        *(result + 8) = 0
        int64_t* rdi_1 = *(result + 0x10)
        
        if (rdi_1 != 0)
            *(result + 0x10) = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int128_t var_60
    
    if (&result[0x18] != &var_60)
        *(result + 0x18) = 0
        int64_t* rdi_2 = *(result + 0x20)
        
        if (rdi_2 != 0)
            *(result + 0x20) = 0
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp4_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    int128_t var_50
    
    if (&result[0x28] != &var_50)
        *(result + 0x28) = 0
        int64_t* rdi_3 = *(result + 0x30)
        
        if (rdi_3 != 0)
            *(result + 0x30) = 0
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp5_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
    
    *(result + 0x38) = 1
    sub_140ddf250(&var_78)

void* rcx_7 = *(arg1 + 0x70)

if (rcx_7 != 0)
    int64_t var_38
    (*(*(rcx_7 + 0x28) + 0xb8))(rcx_7 + 0x28, &var_38, 0, result)
    char var_28
    
    if (var_28 != 0)
        int64_t var_88 = var_38
        int64_t* var_30
        int64_t* var_80_1 = var_30
        
        if (var_30 != 0)
            var_30[1].d += 1
        
        void* rdx_1 = *(arg1 + 0x70)
        int64_t var_98 = 0
        void* rcx_9 = *(rdx_1 + 0xd0)
        void* var_90_1 = rcx_9
        
        if (rcx_9 != 0)
            int32_t rax_14 = *(rcx_9 + 8)
            
            if (rax_14 == 0)
                int64_t var_90_2 = 0
            else
                *(rcx_9 + 8) = rax_14 + 1
                
                if (rcx_9 != 0)
                    var_98 = *(rdx_1 + 0xc8)
        
        sub_140e889e0(result, &var_98, &var_88)
        
        if (var_28 != 0)
            char var_28_1 = 0
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp7_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        int64_t r8_3 = *var_30
                        (*(r8_3 + 8))(var_30, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_b8)
return result
