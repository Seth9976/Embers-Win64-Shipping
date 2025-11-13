// 函数: sub_142b790c0
// 地址: 0x142b790c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int32_t i = arg1[1].d - 1
int32_t r11 = *(r10 + 8)

while (r11 + 1 s< i)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i + r11)
    int64_t j_4 = sx.q((temp1_1 - temp0_1) s>> 1)
    int32_t rax_5 = *(r10 + (j_4 << 2))
    
    if (rax_5.b s< 0)
        int32_t j_2 = (j_4 + 1).d
        
        if (j_2 != i)
            int64_t j = sx.q(j_2)
            
            do
                rax_5 = *(r10 + (j << 2))
                
                if (rax_5.b s>= 0)
                    j_4 = zx.q(j_2)
                    break
                
                j_2 += 1
                j += 1
            while (j != sx.q(i))
        
        if (rax_5.b s< 0)
            int32_t j_3 = (j_4 - 1).d
            
            if (j_3 != r11)
                int64_t j_1 = sx.q(j_3)
                
                do
                    rax_5 = *(r10 + (j_1 << 2))
                    
                    if (rax_5.b s>= 0)
                        j_4 = zx.q(j_3)
                        break
                    
                    j_3 -= 1
                    j_1 -= 1
                while (j_1 != sx.q(r11))
            
            if (rax_5.b s< 0)
                break
    
    if (arg2 u>= (rax_5 & 0xffffff00))
        r11 = j_4.d
    else
        i = j_4.d

return zx.q(r11)
