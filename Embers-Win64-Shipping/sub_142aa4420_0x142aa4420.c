// 函数: sub_142aa4420
// 地址: 0x142aa4420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b8 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
uint64_t result

if (*arg5 s> 0)
    result = 0
else
    int64_t rsi_1 = 0
    uint32_t rax_2
    
    if (arg3 != 0)
        rax_2 = arg4 u>> 0x1f
    else
        rax_2.b = arg4 != 0
    
    if (rax_2 == 0)
        if (arg2 == 0)
            if (arg1[0x20].b == 0)
                arg2 = arg1[0xa]
                
                if (*arg2 == 0)
                    arg2 = "root"
            else
                arg2 = nullptr
        
        char var_f8[0x10]
        int32_t rax_4 = sub_142a9d760(&var_f8, 0x9d, "collation", arg2, nullptr, arg5)
        
        if (*arg5 s> 0)
            result = 0
        else
            int64_t rax_5 = sx.q(rax_4)
            
            if (rax_5 u>= 0x9e)
                __report_rangecheckfailure()
                noreturn
            
            var_f8[rax_5] = 0
            int16_t var_19c
            void* var_1a8 = &var_19c:1
            int32_t var_1a0_1 = 0x28
            var_19c = 0
            uint32_t count = 0
            
            if (((arg1[0x21].d u>> 1).b & 1) != 0)
                int64_t rdi_1 = sx.q((*(*arg1 + 0xb8))(arg1, 1, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x41, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_1], arg5)
            
            if (((arg1[0x21].d u>> 2).b & 1) != 0)
                int64_t rdi_2 = sx.q((*(*arg1 + 0xb8))(arg1, 2, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x43, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_2], arg5)
            
            if (((arg1[0x21].d u>> 7).b & 1) != 0)
                int64_t rdi_3 = sx.q((*(*arg1 + 0xb8))(arg1, 7, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x44, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_3], arg5)
            
            if (((arg1[0x21].d u>> 3).b & 1) != 0)
                int64_t rdi_4 = sx.q((*(*arg1 + 0xb8))(arg1, 3, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x45, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_4], arg5)
            
            if ((arg1[0x21].b & 1) != 0)
                int64_t rdi_5 = sx.q((*(*arg1 + 0xb8))(arg1, 0, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x46, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_5], arg5)
            
            char var_168[0x70]
            int32_t rax_29 = sub_142a4d040(&var_f8, "collation", &var_168, 0x64, arg5)
            int64_t rdi_6 = sx.q(rax_29)
            
            if (*arg5 s<= 0 && rax_29 != 0)
                if (count != 0)
                    sub_142a8cb30(&var_1a8, 0x5f, arg5)
                
                sub_142a8cb30(&var_1a8, 0x4b, arg5)
                int64_t rdi_7 = 0
                
                if (rdi_6 s> 0)
                    do
                        sub_142a8cb30(&var_1a8, sub_142a863a0(zx.d(var_168[rdi_7])), arg5)
                        rdi_7 += 1
                    while (rdi_7 s< rdi_6)
            
            int32_t rax_31 = sub_142a4d500(&var_f8, &var_168, 0x64, arg5)
            int64_t rdi_8 = sx.q(rax_31)
            
            if (rax_31 != 0)
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x4c, arg5)
                    int64_t rdi_9 = 0
                    
                    if (rdi_8 s> 0)
                        do
                            sub_142a8cb30(&var_1a8, sub_142a863a0(zx.d(var_168[rdi_9])), arg5)
                            rdi_9 += 1
                        while (rdi_9 s< rdi_8)
            else if (*arg5 s<= rax_31)
                if (count != rax_31)
                    sub_142a8cb30(&var_1a8, 0x5f, arg5)
                
                sub_142a8cb30(&var_1a8, 0x4c, arg5)
                
                for (int64_t i = 0; i s< 4; i += 1)
                    sub_142a8cb30(&var_1a8, sub_142a863a0(zx.d((*"root")[i])), arg5)
            
            if (((arg1[0x21].d u>> 4).b & 1) != 0)
                int64_t rdi_10 = sx.q((*(*arg1 + 0xb8))(arg1, 4, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x4e, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_10], arg5)
            
            int32_t rax_39 = sub_142a4cc70(&var_f8, &var_168, 0x64, arg5)
            int64_t rdi_11 = sx.q(rax_39)
            
            if (*arg5 s<= 0 && rax_39 != 0)
                if (count != 0)
                    sub_142a8cb30(&var_1a8, 0x5f, arg5)
                
                sub_142a8cb30(&var_1a8, 0x52, arg5)
                int64_t rdi_12 = 0
                
                if (rdi_11 s> 0)
                    do
                        sub_142a8cb30(&var_1a8, sub_142a863a0(zx.d(var_168[rdi_12])), arg5)
                        rdi_12 += 1
                    while (rdi_12 s< rdi_11)
            
            if (((arg1[0x21].d u>> 5).b & 1) != 0)
                int64_t rdi_13 = sx.q((*(*arg1 + 0xb8))(arg1, 5, arg5))
                
                if (*arg5 s<= 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x53, arg5)
                    sub_142a8cb30(&var_1a8, (*data_143ccae40)[rdi_13], arg5)
            
            int32_t rax_46 = sub_142a4d730(&var_f8, &var_168, 0x64, arg5)
            int64_t rdi_14 = sx.q(rax_46)
            
            if (*arg5 s<= 0 && rax_46 != 0)
                if (count != 0)
                    sub_142a8cb30(&var_1a8, 0x5f, arg5)
                
                sub_142a8cb30(&var_1a8, 0x56, arg5)
                int64_t rdi_15 = 0
                
                if (rdi_14 s> 0)
                    do
                        sub_142a8cb30(&var_1a8, sub_142a863a0(zx.d(var_168[rdi_15])), arg5)
                        rdi_15 += 1
                    while (rdi_15 s< rdi_14)
            
            int32_t rax_48 = sub_142a4d690(&var_f8, &var_168, 0x64, arg5)
            int64_t rdi_16 = sx.q(rax_48)
            
            if (*arg5 s> 0)
            label_142aa4adb:
                
                if (var_19c.b == 0)
                    result = 0
                else
                    sub_142a7dcd0(var_1a8)
                    result = 0
            else
                if (rax_48 != 0)
                    if (count != 0)
                        sub_142a8cb30(&var_1a8, 0x5f, arg5)
                    
                    sub_142a8cb30(&var_1a8, 0x5a, arg5)
                    
                    if (rdi_16 s> 0)
                        do
                            sub_142a8cb30(&var_1a8, sub_142a863a0(zx.d(var_168[rsi_1])), arg5)
                            rsi_1 += 1
                        while (rsi_1 s< rdi_16)
                
                if (*arg5 s> 0)
                    goto label_142aa4adb
                
                if (count s<= arg4)
                    memcpy(arg3, var_1a8, count)
                
                int32_t result_1 = sub_142a8c3f0(arg3, arg4, count, arg5)
                
                if (var_19c.b != 0)
                    sub_142a7dcd0(var_1a8)
                
                result = zx.q(result_1)
    else
        *arg5 = 1
        result = 0

__security_check_cookie(rax_1 ^ &var_1e8)
return result
