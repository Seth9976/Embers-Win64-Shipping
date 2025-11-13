// 函数: sub_141940e70
// 地址: 0x141940e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* string = *arg2

while (true)
    char* string_3 = strchr(string, 0xa)
    char* string_2 = string_3
    
    if (string_3 == 0)
        int64_t rax_1 = -1
        
        do
            rax_1 += 1
        while (string[rax_1] != 0)
        
        string_2 = &string[sx.q(rax_1.d)]
    
    uint32_t rcx_1 = zx.d(*string)
    
    if (rcx_1.b != 0x23)
        char* string_1 = string
        
        if (sx.d(rcx_1.b) - 0xa u> 3)
            do
                if (isspace(zx.d(rcx_1.b)) == 0)
                    int64_t rbp = *arg2
                    int32_t result
                    
                    if (string u<= rbp)
                        result.b = 0
                    else
                        int64_t rbx_1 = sx.q(arg1[1].d)
                        int32_t rcx_3 = *(arg1 + 0xc)
                        uint32_t count = string.d - rbp.d
                        int32_t rax_5 = rbx_1.d + count
                        arg1[1].d = rax_5
                        
                        if (rbx_1.d s<= 0)
                            if (rax_5 s> rcx_3)
                                sub_1405daba0(arg1)
                            
                            memcpy(rbx_1 + *arg1, rbp, count)
                            int64_t rbx_2 = sx.q(arg1[1].d)
                            int32_t rax_6 = (rbx_2 + 1).d
                            arg1[1].d = rax_6
                            
                            if (rax_6 s> *(arg1 + 0xc))
                                sub_1405daba0(arg1)
                            
                            *(rbx_2 + *arg1) = 0
                        else
                            if (rax_5 s> rcx_3)
                                sub_1405daba0(arg1)
                            
                            int64_t rdi_3 = sx.q((rbx_1 - 1).d)
                            int64_t rdx_2 = *arg1 + rdi_3
                            int64_t count_1 = sx.q(count)
                            memmove(count_1 + rdx_2, rdx_2, 1)
                            memcpy(*arg1 + rdi_3, rbp, count_1.d)
                        
                        int64_t rdx_7 = sx.q(arg1[1].d)
                        int64_t rcx_14 = *arg1
                        
                        if (*(rdx_7 + rcx_14 - 2) != 0xa)
                            int32_t rax_7 = (rdx_7 + 1).d
                            arg1[1].d = rax_7
                            
                            if (rax_7 s> *(arg1 + 0xc))
                                sub_1405daba0(arg1)
                                rcx_14 = *arg1
                            
                            int64_t rbx_4 = sx.q((rdx_7 - 1).d)
                            int64_t rdx_8 = rbx_4 + rcx_14
                            memmove(rdx_8 + 1, rdx_8, 1)
                            *(rbx_4 + *arg1) = 0xa
                        
                        int64_t rcx_18 = *arg2
                        int32_t rsi = string.d - rcx_18.d
                        
                        if (string.d != rcx_18.d)
                            int32_t rax_9 = arg2[1].d
                            
                            if (rax_9 != rsi)
                                memmove(rcx_18, sx.q(rsi) + rcx_18, rax_9 - rsi)
                                rax_9 = arg2[1].d
                            
                            arg2[1].d = rax_9 - rsi
                            sub_1405dac10(arg2)
                        
                        result.b = 1
                    
                    return result
                
                rcx_1 = sx.d(string_1[1])
                string_1 = &string_1[1]
            while (rcx_1 - 0xa u> 3)
    
    string = &string_2[1]
    
    if (*string_2 != 0xa)
        string = string_2
