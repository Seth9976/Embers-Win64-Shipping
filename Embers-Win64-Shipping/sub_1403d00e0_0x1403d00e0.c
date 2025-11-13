// 函数: sub_1403d00e0
// 地址: 0x1403d00e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
*arg3 = 0
int32_t result_1

if (arg2 != 0)
    result_1 = MultiByteToWideChar(0, 0, arg2, 0xffffffff, nullptr, 0)

int64_t result

if (arg2 == 0 || result_1 == 0)
    png_warning(arg1, "zero length keyword")
    result = 0
else
    uint64_t rax_2 = png_malloc_warn(arg1, zx.q(result_1 + 2))
    *arg3 = rax_2
    
    if (rax_2 == 0)
        png_warning(arg1, "Out of memory while procesing keyword")
        result = 0
    else
        char* rsi_1 = rax_2
        result = sx.q(result_1)
        rax_2.b = *arg2
        
        if (rax_2.b != 0)
            void* rdi_2 = &arg2[1]
            
            do
                if (rax_2.b u< 0x20 || (rax_2 - 0x7f).b u<= 0x21)
                    void var_68
                    _snscanf(&var_68, 0x28, "invalid keyword character 0x%02X", zx.q(rax_2.b))
                    png_warning(arg1, &var_68)
                    *rsi_1 = 0x20
                else
                    *rsi_1 = rax_2.b
                
                rsi_1 = &rsi_1[1]
                rax_2 = zx.q(*rdi_2)
                rdi_2 += 1
            while (rax_2.b != 0)
        
        *rsi_1 = 0
        int64_t rsi_2 = *arg3
        
        if (*(rsi_2 + result - 1) == 0x20)
            png_warning(arg1, "trailing spaces removed from keyword")
            
            if (*(rsi_2 + result - 1) == 0x20)
                bool cond:0_1
                
                do
                    *(rsi_2 + result - 1) = 0
                    cond:0_1 = *(rsi_2 + result - 2) == 0x20
                    result -= 1
                while (cond:0_1)
        
        void* rsi_3 = *arg3
        char i = *rsi_3
        
        if (i == 0x20)
            png_warning(arg1, "leading spaces removed from keyword")
            i = *rsi_3
            
            while (i == 0x20)
                result -= 1
                i = *(rsi_3 + 1)
                rsi_3 += 1
        
        char* rax_3 = *arg3
        
        if (i != 0)
            char* rsi_4 = rsi_3 + 1
            int32_t rdx_2 = 0
            int32_t rdi_3 = 0
            
            do
                if (rdi_3 == 0 && i == 0x20)
                    *rax_3 = 0x20
                    rax_3 = &rax_3[1]
                    rdi_3 = 1
                else if (i != 0x20)
                    *rax_3 = i
                    rax_3 = &rax_3[1]
                    rdi_3 = 0
                else
                    result -= 1
                    rdx_2 = 1
                
                i = *rsi_4
                rsi_4 = &rsi_4[1]
            while (i != 0)
            
            *rax_3 = 0
            
            if (rdx_2 != 0)
                png_warning(arg1, "extra interior spaces removed from keyword")
            
            if (result == 0)
                goto label_1403d0319
            
            goto label_1403d02ae
        
        *rax_3 = 0
        
        if (result != 0)
        label_1403d02ae:
            
            if (result u>= 0x50)
                png_warning(arg1, "keyword length must be 1 - 79 characters")
                *(*arg3 + 0x4f) = 0
                result = 0x4f
        else
        label_1403d0319:
            png_free(arg1, *arg3)
            png_warning(arg1, "Zero length keyword")
            result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
