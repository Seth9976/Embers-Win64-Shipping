// 函数: sub_1406e85b0
// 地址: 0x1406e85b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* result = arg3
int64_t* i = arg2

if (arg1 != arg2)
    int64_t* rbx_1 = &arg3[0x10]
    int64_t* r15_1 = arg1 + 0x40
    
    do
        int64_t* rcx = nullptr
        *result = *(arg1 - arg3 - 0x40 + rbx_1)
        int64_t* r8 = *r15_1
        int64_t* var_90_1 = nullptr
        void var_c8
        
        if (r8 != 0)
            int64_t* rax_4
            rax_4, arg2 = (**r8)(r8, &var_c8)
            rcx = rax_4
            var_90_1 = rax_4
        
        if (rcx != &var_c8)
            arg2 = *rbx_1
        
        if (rcx == &var_c8 || arg2 == &rbx_1[-7])
            int64_t* var_50_1 = nullptr
            int64_t* r8_1 = nullptr
            void var_88
            
            if (rcx != 0)
                if (rcx != &var_c8)
                    r8_1 = rcx
                    var_50_1 = rcx
                    rcx = nullptr
                    var_90_1 = nullptr
                else
                    int64_t* rax_8
                    rax_8, arg2 = (*(*rcx + 8))(rcx, &var_88)
                    rcx = var_90_1
                    r8_1 = rax_8
                    var_50_1 = rax_8
                    
                    if (rcx != 0)
                        void* rdx_2
                        rdx_2.b = rcx != &var_c8
                        (*(*rcx + 0x20))(rcx, rdx_2, r8_1)
                        r8_1 = var_50_1
                        rcx = nullptr
                        var_90_1 = nullptr
            
            int64_t* r9_1 = *rbx_1
            
            if (r9_1 != 0)
                rcx = r9_1
                
                if (r9_1 != &rbx_1[-7])
                    var_90_1 = rcx
                    *rbx_1 = 0
                else
                    int64_t* rax_11
                    rax_11, arg2 = (*(*r9_1 + 8))(rcx, &var_c8)
                    int64_t* r8_2 = *rbx_1
                    rcx = rax_11
                    var_90_1 = rax_11
                    
                    if (r8_2 == 0)
                        r8_1 = var_50_1
                    else
                        arg2.b = r8_2 != &rbx_1[-7]
                        (*(*r8_2 + 0x20))(r8_2, arg2)
                        rcx = var_90_1
                        r8_1 = var_50_1
                        *rbx_1 = 0
            
            if (r8_1 != 0)
                if (r8_1 != &var_88)
                    *rbx_1 = r8_1
                else
                    int64_t rax_14
                    rax_14, arg2 = (*(*r8_1 + 8))(r8_1, &rbx_1[-7])
                    *rbx_1 = rax_14
                    
                    if (var_50_1 != 0)
                        void* rdx_5
                        rdx_5.b = var_50_1 != &var_88
                        (*(*var_50_1 + 0x20))(var_50_1, rdx_5)
                    
                    rcx = var_90_1
        else
            int64_t* var_90_2 = arg2
            *rbx_1 = rcx
            rcx = arg2
        
        if (rcx != 0)
            int64_t r8_3 = *rcx
            arg2.b = rcx != &var_c8
            (*(r8_3 + 0x20))(rcx, arg2, r8_3)
        
        rbx_1 = &rbx_1[9]
        result = &result[0x12]
        r15_1 = &r15_1[9]
    while (arg1 - arg3 - 0x40 + rbx_1 != i)

__security_check_cookie(rax_1 ^ &var_e8)
return result
