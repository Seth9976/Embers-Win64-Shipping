// 函数: sub_142a68a70
// 地址: 0x142a68a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int32_t* r14 = arg3
int64_t* rbx = arg1
int64_t* arg_18 = arg1
int64_t* arg_8 = nullptr
sub_142a66c20(arg2, &arg_8, arg3)
void* result

if (*r14 s> 0)
    result = nullptr
else
    int64_t* rdi_1 = arg_8
    int64_t* rcx_1 = rdi_1[3]
    result = (*(*rcx_1 + 0x10))(rcx_1)
    sub_142aa6d70(rdi_1)
    
    if (result != 0)
        rbx = nullptr
        
        if (arg1 != 0)
            int64_t* rcx_3 = *(result + 0xf0)
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
            
            *(result + 0xf0) = arg1
            *(result + 9) = 0
        
        sub_142a6c1a0(result, sub_142a4bbc0(), r14)
    else
        *r14 = 7
        result = nullptr

if (rbx != 0)
    int64_t r8_1 = *rbx
    (*r8_1)(rbx, 1, r8_1)

return result
