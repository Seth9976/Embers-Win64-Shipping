// 函数: sub_141debfc0
// 地址: 0x141debfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x60)
int32_t arg_8
sub_140865c40(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t result

if (rax.d == 0xffffffff)
    result = 0
else
    void* rax_2 = *(arg1 + 0x10) + rax * 0x18
    
    if (rax_2 == 0)
        result = 0
    else
        void* rax_3 = *(rax_2 + 8)
        
        if (rax_3 == 0)
            result = 0
        else
            int64_t* i = *(rax_3 + 8)
            result = 0
            
            for (void* rbp_3 = &i[sx.q(*(rax_3 + 0x10)) * 4]; i != rbp_3; i = &i[4])
                bool z_1
                
                if (0 == *i)
                    *i = 0
                    z_1 = true
                else
                    *i
                    z_1 = false
                
                if (not(z_1) && *(i + 0x1c) != 0)
                    int64_t rax_5 = 0
                    
                    if (0 == *i)
                        *i = 0
                    else
                        rax_5 = *i
                    
                    result += sub_141e02f60(rax_5)

if (arg1 != -0x60)
    LeaveCriticalSection(arg1 + 0x60)

return result
