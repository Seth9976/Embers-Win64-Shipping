// 函数: sub_142ab6250
// 地址: 0x142ab6250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int32_t r8 = 0
int32_t rbx = 0
int32_t r11 = 0x16

do
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx + r11)
    int32_t rax_5 = (temp1_1 - temp0_1) s>> 1
    int64_t r10_1 = sx.q(rax_5)
    char* rcx = (&data_143652ea0)[r10_1]
    void* r9_1 = arg1 - rcx
    int32_t rax_6
    
    while (true)
        char rdx_1 = *rcx
        char temp2_1 = *(rcx + r9_1)
        
        if (rdx_1 != temp2_1)
            rax_6 = sbb.d(rax_5, rax_5, rdx_1 u< temp2_1) | 1
            break
        
        rcx = &rcx[1]
        
        if (rdx_1 == 0)
            rax_6 = 0
            break
    
    if (rax_6 s>= 0)
        if (rax_6 == 0)
            if (r10_1.d == 0xffffffff)
                return 0
            
            int32_t i_2 =
                *((sx.q((r10_1 + 1).d) << 2) + &data_143653dd0) - *((r10_1 << 2) + &data_143653dd0)
            
            if (arg3 s>= i_2)
                int64_t i_1 = sx.q(i_2)
                
                if (i_2 s> 0)
                    void* rax_10 = arg2 + 0xc
                    int64_t i
                    
                    do
                        *rax_10 = r8
                        r8 += 1
                        *(rax_10 - 4) = r10_1.d
                        *(rax_10 + 4) = 0
                        rax_10 += 0x18
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            else
                *arg4 = 0xf
            
            return zx.q(i_2)
        
        r11 = r10_1.d
    else
        rbx = (r10_1 + 1).d
while (rbx s< r11)

return 0
