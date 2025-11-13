// 函数: sub_142b53b80
// 地址: 0x142b53b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2

if (*arg3 s> 0)
    return nullptr

char** rax_1 = sub_142a64160(nullptr, "supplementalData", arg3)
char** var_48_1 = rax_1
sub_142a625a0(rax_1, "calendarData", rax_1, arg3)
sub_142a625a0(rax_1, arg1, rax_1, arg3)
sub_142a625a0(rax_1, "eras", rax_1, arg3)
int64_t* result

if (*arg3 s<= 0)
    int64_t r13_1 = sx.q(sub_142a63b10(rax_1))
    int32_t arg_20 = r13_1.d
    int32_t arg_18 = 0x7fffffff
    int64_t count = r13_1 << 2
    int32_t* rax_3 = sub_142a7dd00(count)
    int32_t* rsi_1 = rax_3
    
    if (rax_3 != 0)
        memset(rsi_1, 0, count)
        result = nullptr
        
        if (sub_142a63fa0(rax_1) == 0)
            goto label_142b53f17
        
        int32_t r13_2
        
        while (true)
            char** rax_5 = sub_142a63800(rax_1, nullptr, arg3)
            
            if (*arg3 s<= 0)
                char* _String = sub_142a63790(rax_5)
                char* _EndPtr
                int64_t r12_1 = sx.q(strtol(_String, &_EndPtr, 0xa))
                int64_t rcx_10 = -1
                
                do
                    rcx_10 += 1
                while (_String[rcx_10] != 0)
                
                if (_EndPtr - _String == rcx_10 && r12_1.d s>= 0 && r12_1.d s< r13_1.d)
                    int32_t* rax_9 = &rsi_1[r12_1]
                    
                    if (*rax_9 == 0)
                        r13_1.b = 1
                        
                        if (sub_142a63fa0(rax_5) != 0)
                            char i
                            
                            do
                                char** rax_11 = sub_142a63800(rax_5, nullptr, arg3)
                                
                                if (*arg3 s> 0)
                                label_142b53e8d:
                                    
                                    if (rax_11 == 0)
                                        goto label_142b53efb
                                    
                                    sub_142a5f860(rax_11)
                                    goto label_142b53efb
                                
                                char* rax_12 = sub_142a63790(rax_11)
                                int64_t rdx_2 = 0
                                int32_t var_68
                                
                                while (true)
                                    char rcx_14 = rax_12[rdx_2]
                                    rdx_2 += 1
                                    
                                    if (rcx_14 != *(rdx_2 + 0x14366fd5f))
                                        break
                                    
                                    if (rdx_2 == 6)
                                        void* rax_13 = sub_142a63700(rax_11, &var_68, arg3)
                                        
                                        if (*arg3 s> 0)
                                            goto label_142b53e8d
                                        
                                        if (var_68 == 3)
                                            int32_t rdx_4 = *(rax_13 + 8)
                                            int32_t r8_8 = *(rax_13 + 4)
                                            int32_t rcx_16 = *rax_13
                                            
                                            if (rcx_16 + 0x8000 u<= 0xffff && r8_8 - 1 u<= 0xb
                                                    && rdx_4 - 1 u<= 0x1e)
                                                *rax_9 = (rcx_16 << 8 | r8_8) << 8 | rdx_4
                                                goto label_142b53e03
                                        
                                        *arg3 = 3
                                        goto label_142b53e8d
                                
                                int64_t rax_18 = 0
                                
                                while (true)
                                    char rcx_21 = rax_12[rax_18]
                                    rax_18 += 1
                                    
                                    if (rcx_21 != *(rax_18 + 0x14366fd67))
                                        break
                                    
                                    if (rax_18 == 6)
                                        r13_1 = zx.q(r13_1.b)
                                        
                                        if (
                                                sub_142a8c300(sub_142a63f30(rax_11, &var_68, arg3), 
                                                    false", 
                                                5) == 0)
                                            r13_1 = 0
                                        
                                        break
                                
                            label_142b53e03:
                                
                                if (rax_11 != 0)
                                    sub_142a5f860(rax_11)
                                
                                i = sub_142a63fa0(rax_5)
                            while (i != 0)
                        
                        if (*rax_9 != 0)
                            goto label_142b53e3c
                        
                        if (r12_1.d == 0)
                            *rsi_1 = 0x80000101
                        label_142b53e3c:
                            r13_2 = arg_18
                            
                            if (r13_1.b == 0)
                                if (r12_1.d s< r13_2)
                                    r13_2 = r12_1.d
                                
                                arg_18 = r13_2
                                goto label_142b53e63
                            
                            if (r12_1.d s< r13_2)
                            label_142b53e63:
                                
                                if (rax_5 != 0)
                                    sub_142a5f860(rax_5)
                                
                                if (sub_142a63fa0(rax_1) == 0)
                                    break
                                
                                r13_1 = zx.q(arg_20)
                                continue
                
                *arg3 = 3
            
        label_142b53efb:
            
            if (rax_5 == 0)
                goto label_142b53f64
            
            sub_142a5f860(rax_5)
            goto label_142b53f64
        
        if (r13_2 s>= 0x7fffffff || arg2 != 0)
            r13_1 = zx.q(arg_20)
        label_142b53f17:
            int64_t* result_2 = j_sub_142a7dd00(0x10)
            arg_20.q = result_2
            
            if (result_2 != 0)
                *result_2 = 0
                result_2[1].d = r13_1.d
                sub_142a7dcd0(*result_2)
                *result_2 = rsi_1
                rsi_1 = nullptr
                arg_18.q = 0
                sub_142b54130(result_2)
                result = result_2
        else
            int64_t* result_1 = j_sub_142a7dd00(0x10)
            arg_20.q = result_1
            
            if (result_1 != 0)
                *result_1 = 0
                result_1[1].d = r13_2
                sub_142a7dcd0(*result_1)
                *result_1 = rsi_1
                rsi_1 = nullptr
                arg_18.q = 0
                sub_142b54130(result_1)
                result = result_1
        
        if (result == 0)
            *arg3 = 7
    else
        result = nullptr
        *arg3 = 7
    
label_142b53f64:
    sub_142a7dcd0(rsi_1)
else
    result = nullptr

if (rax_1 != 0)
    sub_142a5f860(rax_1)

return result
