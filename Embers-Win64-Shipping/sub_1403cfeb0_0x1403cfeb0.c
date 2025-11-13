// 函数: sub_1403cfeb0
// 地址: 0x1403cfeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_48
__builtin_strncpy(&var_48, "iCCP", 5)
int128_t var_78
__builtin_memset(&var_78, 0, 0x20)
void* var_50
int64_t result = sub_1403d00e0(arg1, arg2, &var_50)

if (result != 0)
    int32_t rdi_1 = arg5
    
    if (arg3 != 0)
        png_warning(arg1, "Unknown compression type in iCCP chunk")
    
    int32_t rbp_1 = 0
    
    if (arg4 == 0)
        rdi_1 = 0
    
    if (rdi_1 s>= 4)
        rbp_1 = _bswap(*arg4)
    
    void* rcx_19
    void* rdx_8
    char const* const rdx
    
    if (rdi_1 s>= 4 && rbp_1 s< 0)
        rdx = "Embedded profile length in iCCP chunk is negative"
    label_1403d0093:
        png_warning(arg1, rdx)
        rdx_8 = var_50
        rcx_19 = arg1
    else
        if (rdi_1 s< rbp_1)
            rdx = "Embedded profile length too large in iCCP chunk"
            goto label_1403d0093
        
        if (rdi_1 s> rbp_1)
            png_warning(arg1, "Truncating profile to actual length in iCCP chunk")
            rdi_1 = rbp_1
        
        uint8_t var_40
        int32_t r14_1
        
        if (rdi_1 == 0)
            r14_1 = 0
            
            if (arg1 != 0)
            label_1403cff8c:
                *(arg1 + 0x4a8) = 0x22
                var_40 = ((result.d + r14_1 + 2) u>> 0x18).b
                uint8_t var_3f_1 = ((result.d + r14_1 + 2) u>> 0x10).b
                char var_3e_1 = (result.d + r14_1 + 2):1.b
                char var_3d_1 = (result.d + r14_1 + 2).b
                int32_t rdi_2 = var_48
                int32_t var_3c_1 = rdi_2
                sub_1403cc370(arg1, &var_40, 8)
                *(arg1 + 0x254) = rdi_2
                sub_1403be750(arg1)
                sub_1403be770(arg1, &var_48, 4)
                *(arg1 + 0x4a8) = 0x42
        else
            r14_1 = sub_1403d0330(arg1, arg4, sx.q(rdi_1), 0, &var_78)
            
            if (arg1 != 0)
                goto label_1403cff8c
        
        void* rbx_1 = var_50
        *(rbx_1 + result + 1) = 0
        
        if (result != -2 && arg1 != 0 && rbx_1 != 0)
            sub_1403cc370(arg1, rbx_1, result + 2)
            sub_1403be770(arg1, rbx_1, (result + 2).d)
        
        if (r14_1 != 0)
            sub_1403d0620(arg1, &var_78)
        
        if (arg1 != 0)
            *(arg1 + 0x4a8) = 0x82
            int32_t rax_5 = *(arg1 + 0x244)
            var_40 = (rax_5 u>> 0x18).b
            uint8_t var_3f_2 = (rax_5 u>> 0x10).b
            char var_3e_2 = rax_5:1.b
            char var_3d_2 = rax_5.b
            sub_1403cc370(arg1, &var_40, 4)
        
        rcx_19 = arg1
        rdx_8 = rbx_1
    result = png_free(rcx_19, rdx_8)

__security_check_cookie(rax_1 ^ &var_a8)
return result
