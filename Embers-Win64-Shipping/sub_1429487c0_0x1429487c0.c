// 函数: sub_1429487c0
// 地址: 0x1429487c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t i = 0
uint8_t* r9 = nullptr
int64_t result

do
    result = r9 s>> 3
    char rcx = i.b & 7
    i += 1
    *(r9 + arg1) = *(result + arg2) u>> rcx & 1
    r9 = &r9[1]
while (i s< 0x100)

char* r14 = arg1

do
    if (*r14 != 0)
        for (int32_t j = 1; j s<= 6; j += 1)
            int32_t result_1 = j + i_1
            
            if (result_1 s>= 0x100)
                break
            
            int64_t result_2 = sx.q(result_1)
            char r8 = arg1[result_2]
            result = &arg1[result_2]
            
            if (r8 != 0)
                int32_t r11_1 = sx.d(*r14)
                int32_t rdi_2 = sx.d(r8) << j.b
                
                if (r11_1 + rdi_2 s> 0xf)
                    if (r11_1 - rdi_2 s< 0xfffffff1)
                        break
                    
                    r11_1.b -= r8 << j.b
                    *r14 = r11_1.b
                    
                    if (result_2 s< 0x100)
                        do
                            if (*result == 0)
                                result = sx.q(result_1)
                                arg1[result] = 1
                                break
                            
                            *result = 0
                            result_1 += 1
                            result += 1
                        while (result - arg1 s< 0x100)
                else
                    *r14 = (r8 << j.b) + r11_1.b
                    *result = 0
    
    i_1 += 1
    r14 = &r14[1]
while (i_1 s< 0x100)

return result
