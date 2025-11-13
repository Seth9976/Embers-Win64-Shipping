// 函数: sub_1403d8f60
// 地址: 0x1403d8f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int32_t rax_2 = *(arg1 + 0x154)
char const* const rdx

if ((rax_2.b & 1) == 0)
    rdx = "Missing IHDR before PLTE"
else
    uint64_t result
    
    if ((rax_2.b & 4) != 0)
        rdx = "Invalid PLTE after IDAT"
    label_1403d8fc7:
        png_warning(arg1, rdx)
        result = sub_1403d8880(arg1, arg3)
        __security_check_cookie(rax_1 ^ &var_368)
        return result
    
    if ((rax_2.b & 2) != 0)
        rdx = "Duplicate PLTE chunk"
    else
        *(arg1 + 0x154) = rax_2 | 2
        int32_t rax_3
        rax_3.b = *(arg1 + 0x25e)
        
        if ((rax_3.b & 2) == 0)
            rdx = "Ignoring PLTE chunk in grayscale PNG"
            goto label_1403d8fc7
        
        uint64_t rdx_3
        
        if (arg3 u<= 0x300)
            rdx_3 = zx.q(arg3 u/ 3)
        
        if (arg3 u<= 0x300 && arg3 == (rdx_3 * 3).d)
            uint32_t rax_4 = zx.d(arg3.w)
            uint32_t r15_2 = (rax_4 * 0xaaab) u>> 0x11
            void var_338
            
            if (rax_4.w u>= 3)
                int32_t rbp_1 = 0
                void* rbx_2 = &var_338
                
                do
                    char var_33b
                    sub_1403cc480(arg1, &var_33b, 3)
                    sub_1403be770(arg1, &var_33b, 3)
                    *rbx_2 = var_33b
                    char var_33a
                    *(rbx_2 + 1) = var_33a
                    char var_339
                    *(rbx_2 + 2) = var_339
                    rbp_1 += 1
                    rbx_2 += 3
                while (rbp_1 u< r15_2)
            
            sub_1403d8880(arg1, 0)
            result = png_set_PLTE(arg1, arg2, &var_338, r15_2)
            
            if (arg2 != 0 && *(arg1 + 0x25e) == 3 && (*(arg2 + 8) & 0x10) != 0)
                if (r15_2.w u< *(arg1 + 0x252))
                    result = png_warning(arg1, "Truncating incorrect tRNS chunk length")
                    *(arg1 + 0x252) = r15_2.w
                
                if (r15_2.w u< *(arg2 + 0x22))
                    result = png_warning(arg1, "Truncating incorrect info tRNS chunk length")
                    *(arg2 + 0x22) = r15_2.w
            
            __security_check_cookie(rax_1 ^ &var_368)
            return result
        
        rdx = "Invalid palette chunk"
        
        if (rax_3.b != 3)
            goto label_1403d8fc7

png_error(arg1, rdx)
noreturn
