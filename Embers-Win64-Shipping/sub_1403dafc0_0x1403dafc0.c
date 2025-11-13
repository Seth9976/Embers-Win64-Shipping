// 函数: sub_1403dafc0
// 地址: 0x1403dafc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2 = *(arg1 + 0x464)
uint64_t result

if (rax_2 == 0)
label_1403db01c:
    int32_t rax_4 = *(arg1 + 0x154)
    
    if ((rax_4.b & 1) == 0)
        png_error(arg1, "Missing IHDR before zTXt")
        noreturn
    
    if ((rax_4.b & 4) != 0)
        *(arg1 + 0x154) = rax_4 | 8
    
    png_free(arg1, *(arg1 + 0x4a0))
    void* rax_6 = png_malloc_warn(arg1, zx.q(arg3 + 1))
    *(arg1 + 0x4a0) = rax_6
    
    if (rax_6 == 0)
        result = png_warning(arg1, "Out of memory processing zTXt chunk")
    else
        uint64_t rbx_1 = zx.q(arg3)
        sub_1403cc480(arg1, rax_6, rbx_1)
        sub_1403be770(arg1, rax_6, rbx_1.d)
        int32_t rax_7 = sub_1403d8880(arg1, 0)
        int64_t rdx_5 = *(arg1 + 0x4a0)
        
        if (rax_7 != 0)
            result = png_free(arg1, rdx_5)
            *(arg1 + 0x4a0) = 0
        else
            *(rdx_5 + rbx_1) = 0
            void* rax_8 = *(arg1 + 0x4a0)
            void* rdi_2 = rax_8 + 1
            bool cond:0_1
            
            do
                cond:0_1 = *(rdi_2 - 1) != 0
                rdi_2 += 1
            while (cond:0_1)
            char const* const rdx_11
            
            if (rdi_2 - 2 u>= rax_8 + rbx_1 - 2)
                rdx_11 = "Truncated zTXt chunk"
            label_1403db1bd:
                png_warning(arg1, rdx_11)
                result = png_free(arg1, *(arg1 + 0x4a0))
                *(arg1 + 0x4a0) = 0
            else
                if (*(rdi_2 - 1) != 0)
                    png_warning(arg1, "Unknown compression type in zTXt chunk")
                    rax_8 = *(arg1 + 0x4a0)
                
                void* rdi_3 = rdi_2 - rax_8
                int64_t var_30
                sub_1403d8a10(arg1, 0, rbx_1, rdi_3, &var_30)
                int32_t* rax_9 = png_malloc_warn(arg1, 0x38)
                
                if (rax_9 == 0)
                    rdx_11 = "Not enough memory to process zTXt chunk"
                    goto label_1403db1bd
                
                *rax_9 = 0
                int64_t rax_10 = *(arg1 + 0x4a0)
                *(rax_9 + 8) = rax_10
                __builtin_memset(&rax_9[8], 0, 0x18)
                *(rax_9 + 0x10) = rdi_3 + rax_10
                *(rax_9 + 0x18) = var_30
                int32_t rax_12 = sub_1403cd840(arg1, arg2, rax_9, 1)
                png_free(arg1, rax_9)
                result = png_free(arg1, *(arg1 + 0x4a0))
                *(arg1 + 0x4a0) = 0
                
                if (rax_12 != 0)
                    png_error(arg1, "Insufficient memory to store zTXt chunk")
                    noreturn
else if (rax_2 == 1)
    result = sub_1403d8880(arg1, arg3)
else
    *(arg1 + 0x464) = rax_2 - 1
    
    if (rax_2 != 2)
        goto label_1403db01c
    
    png_warning(arg1, "No space in chunk cache for zTXt")
    result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_58)
return result
