// 函数: sub_14284c250
// 地址: 0x14284c250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* var_b8 = arg8
uint64_t result

if (arg4 == 0)
    int64_t* rcx = *(arg8 + 0x38)
    
    if (rcx != 0)
        arg2.b = rcx != arg8
        (*(*rcx + 0x20))(rcx, arg2)
        *(arg8 + 0x38) = 0
    
    result = 0x80070057
else if (*(arg1 + 0x28) != 0)
    char var_68 = 0
    int64_t* rax_4
    int64_t rdx
    rax_4, rdx = sub_14284b270(&var_68)
    
    if (rax_4 != 0)
        int64_t* var_60 = nullptr
        int32_t result_1 = (*(*rax_4 + 0x70))(rax_4, &var_60)
        
        if (result_1 s>= 0)
            int64_t* rcx_7 = var_60
            int32_t result_2 = (*(*rcx_7 + 0x78))(rcx_7, arg4, 0x40000000)
            
            if (result_2 s>= 0)
                void var_a8
                void* rax_8 = sub_14284b9b0(&var_a8, arg8)
                int32_t result_3 = sub_14284bc10(arg1, arg2, arg3, var_60, arg5, arg6, arg7, rax_8)
                
                if (result_3 s>= 0)
                    int64_t* rcx_16 = var_60
                    
                    if (rcx_16 != 0)
                        var_60 = nullptr
                        (*(*rcx_16 + 0x10))(rcx_16)
                    
                    sub_14058f080(arg8)
                    result = 0
                else
                    int64_t* rcx_12 = var_60
                    
                    if (rcx_12 != 0)
                        var_60 = nullptr
                        int64_t rdx_7 = *rcx_12
                        (*(rdx_7 + 0x10))(rcx_12, rdx_7)
                    
                    DeleteFileW(arg4)
                    int64_t* rcx_14 = var_60
                    
                    if (rcx_14 != 0)
                        var_60 = nullptr
                        (*(*rcx_14 + 0x10))(rcx_14)
                    
                    sub_14058f080(arg8)
                    result = zx.q(result_3)
            else
                int64_t* rcx_8 = var_60
                
                if (rcx_8 != 0)
                    var_60 = nullptr
                    int64_t rdx_4 = *rcx_8
                    (*(rdx_4 + 0x10))(rcx_8, rdx_4)
                
                sub_14058f080(arg8)
                result = zx.q(result_2)
        else
            int64_t* rcx_5 = var_60
            
            if (rcx_5 != 0)
                var_60 = nullptr
                int64_t rdx_2 = *rcx_5
                (*(rdx_2 + 0x10))(rcx_5, rdx_2)
            
            sub_14058f080(arg8)
            result = zx.q(result_1)
    else
        int64_t* rcx_4 = *(arg8 + 0x38)
        
        if (rcx_4 != 0)
            rdx.b = rcx_4 != arg8
            (*(*rcx_4 + 0x20))(rcx_4, rdx)
            *(arg8 + 0x38) = 0
        
        result = 0x80004002
else
    int64_t* rcx_1 = *(arg8 + 0x38)
    
    if (rcx_1 != 0)
        arg2.b = rcx_1 != arg8
        (*(*rcx_1 + 0x20))(rcx_1, arg2)
        *(arg8 + 0x38) = 0
    
    result = 0x80004003

__security_check_cookie(rax_1 ^ &var_e8)
return result
