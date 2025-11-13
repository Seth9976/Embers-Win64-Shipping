// 函数: sub_1403db210
// 地址: 0x1403db210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2 = *(arg1 + 0x464)
uint64_t result

if (rax_2 == 0)
label_1403db273:
    int32_t rax_4 = *(arg1 + 0x154)
    
    if ((rax_4.b & 1) == 0)
        png_error(arg1, "Missing IHDR before iTXt")
        noreturn
    
    if ((rax_4.b & 4) != 0)
        *(arg1 + 0x154) = rax_4 | 8
    
    png_free(arg1, *(arg1 + 0x4a0))
    void* rax_6 = png_malloc_warn(arg1, zx.q(arg3 + 1))
    *(arg1 + 0x4a0) = rax_6
    
    if (rax_6 == 0)
        result = png_warning(arg1, "No memory to process iTXt chunk")
    else
        uint64_t r13_1 = zx.q(arg3)
        sub_1403cc480(arg1, rax_6, r13_1)
        sub_1403be770(arg1, rax_6, r13_1.d)
        int32_t rax_7 = sub_1403d8880(arg1, 0)
        int64_t rdx_5 = *(arg1 + 0x4a0)
        
        if (rax_7 != 0)
            result = png_free(arg1, rdx_5)
            *(arg1 + 0x4a0) = 0
        else
            *(rdx_5 + r13_1) = 0
            char* r12_1 = *(arg1 + 0x4a0)
            char* rdi_2 = r12_1
            bool cond:0_1
            
            do
                cond:0_1 = *rdi_2 != 0
                rdi_2 = &rdi_2[1]
            while (cond:0_1)
            void* rax_10
            void* lpMultiByteStr_1
            int32_t rbp_1
            
            if (rdi_2 u< &r12_1[r13_1 - 3])
                rax_10 = &r12_1[r13_1]
                rbp_1 = sx.d(*rdi_2)
                lpMultiByteStr_1 = &rdi_2[2]
                bool cond:1_1
                
                do
                    cond:1_1 = *lpMultiByteStr_1 != 0
                    lpMultiByteStr_1 += 1
                while (cond:1_1)
            
            char const* const rdx_7
            
            if (rdi_2 u>= &r12_1[r13_1 - 3] || lpMultiByteStr_1 u>= rax_10)
                rdx_7 = "Truncated iTXt chunk"
            label_1403db3b6:
                png_warning(arg1, rdx_7)
                result = png_free(arg1, *(arg1 + 0x4a0))
                *(arg1 + 0x4a0) = 0
            else
                void* lpMultiByteStr = lpMultiByteStr_1
                bool cond:2_1
                
                do
                    cond:2_1 = *lpMultiByteStr != 0
                    lpMultiByteStr += 1
                while (cond:2_1)
                
                if (lpMultiByteStr u>= rax_10)
                    rdx_7 = "Malformed iTXt chunk"
                    goto label_1403db3b6
                
                void* r14_2 = lpMultiByteStr - r12_1
                int64_t var_50
                
                if (rbp_1.b == 0)
                    var_50 = sx.q(MultiByteToWideChar(0, 0, lpMultiByteStr, 0xffffffff, nullptr, 0))
                else
                    sub_1403d8a10(arg1, sx.d(rdi_2[1]), r13_1, r14_2, &var_50)
                
                int32_t* rax_13 = png_malloc_warn(arg1, 0x38)
                
                if (rax_13 == 0)
                    rdx_7 = "Not enough memory to process iTXt chunk"
                    goto label_1403db3b6
                
                *rax_13 = rbp_1 + 1
                int64_t rax_14 = *(arg1 + 0x4a0)
                *(rax_13 + 0x30) = lpMultiByteStr_1 - r12_1 + rax_14
                *(rax_13 + 0x28) = &rdi_2[2] - r12_1 + rax_14
                *(rax_13 + 0x20) = var_50
                *(rax_13 + 0x18) = 0
                *(rax_13 + 8) = rax_14
                *(rax_13 + 0x10) = r14_2 + rax_14
                int32_t rax_15 = sub_1403cd840(arg1, arg2, rax_13, 1)
                png_free(arg1, rax_13)
                result = png_free(arg1, *(arg1 + 0x4a0))
                *(arg1 + 0x4a0) = 0
                
                if (rax_15 != 0)
                    png_error(arg1, "Insufficient memory to store iTXt chunk")
                    noreturn
else if (rax_2 == 1)
    result = sub_1403d8880(arg1, arg3)
else
    *(arg1 + 0x464) = rax_2 - 1
    
    if (rax_2 != 2)
        goto label_1403db273
    
    png_warning(arg1, "No space in chunk cache for iTXt")
    result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_88)
return result
