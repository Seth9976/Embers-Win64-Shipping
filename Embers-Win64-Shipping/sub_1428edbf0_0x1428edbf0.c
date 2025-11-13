// 函数: sub_1428edbf0
// 地址: 0x1428edbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rax_2 = *arg4
uint64_t result

if (rax_2 s< 0)
    result = 0
else
    char var_48
    
    if (arg2 == 1)
        if (sub_1428ed6c0(&var_48, arg4, 4, arg3) == 0)
            result = 0
        else
            char var_45
            uint32_t var_50_1 = zx.d(var_45)
            char var_46
            uint32_t var_58_1 = zx.d(var_46)
            sub_1428b6f70(arg1, "%d.%d.%d.%d", zx.q(var_48))
            result = 1
    else if (arg2 == 2)
        int32_t rdi_1 = 0x10
        
        if (sub_1428ed6c0(&var_48, arg4, 0x10, arg3) == 0)
            result = 0
        else
            int64_t rax_5 = 0x10
            void var_49
            
            while (*(&var_49 + rax_5) == 0)
                void var_4a
                
                if (*(&var_4a + rax_5) != 0)
                    break
                
                rdi_1 -= 2
                rax_5 -= 2
                
                if (rax_5 s<= 1)
                    break
            
            int64_t r14_2 = sx.q(rdi_1)
            int32_t rbx_1 = 0
            
            if (r14_2 s> 0)
                int64_t rsi_1 = 0
                
                do
                    char var_47
                    sub_1428b6f70(arg1, "%x%s", 
                        zx.q(zx.d((&var_48)[rsi_1]) << 8) | zx.q((&var_47)[rsi_1]))
                    rbx_1 += 2
                    rsi_1 += 2
                while (rsi_1 s< r14_2)
            
            if (r14_2 s<= 0 || rbx_1 s< 0x10)
                sub_14289a750(arg1, &data_142d6bc34)
            
            if (rbx_1 != 0)
                result = 1
            else
                sub_14289a750(arg1, &data_142d6bc34)
                result = zx.q(rbx_1 + 1)
    else
        int32_t i = 0
        
        if (rax_2 s> 0)
            void* r14_1 = nullptr
            
            do
                char* const r8 = &data_1437020ab
                
                if (i s> 0)
                    r8 = &data_142d6bc34
                
                *(r14_1 + *(arg4 + 8))
                sub_1428b6f70(arg1, "%s%02x", r8)
                i += 1
                r14_1 += 1
            while (i s< *arg4)
        
        sub_1428b6f70(arg1, "[%d]", zx.q(arg4[4]) & 7)
        result = 1

__security_check_cookie(rax_1 ^ &var_78)
return result
