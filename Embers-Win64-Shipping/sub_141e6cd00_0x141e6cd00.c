// 函数: sub_141e6cd00
// 地址: 0x141e6cd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*arg2)
int32_t r10_2

if (rcx.d s>= 0)
    r10_2 = arg4[1].d - 2

int64_t rdx
int32_t zmm0
float zmm1

if (rcx.d s< 0 || rcx.d s> r10_2)
    int32_t rcx_1 = arg4[1].d
    int32_t r8_2 = 0
    int32_t rcx_2 = rcx_1 - 2
    rdx = 0xffffffff
    
    if (rcx_1 - 2 s>= 0)
        int64_t r10_3 = *arg4
        
        do
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rcx_2 + r8_2)
            rdx = sx.q((temp2_1 - temp1_1) s>> 1)
            zmm1 = *(r10_3 + (rdx << 2))
            zmm0 = *(r10_3 + (rdx << 2) + 4)
            
            if (not(arg3 < zmm1) && arg3 f<= zmm0)
                break
            
            if (arg3 f<= zmm0)
                if (arg3 >= zmm1)
                    break
                
                rcx_2 = (rdx - 1).d
            else
                r8_2 = (rdx + 1).d
        while (r8_2 s<= rcx_2)
    
    *arg2 = rdx.d
else
    int64_t r11_1 = *arg4
    
    if (arg3 f< *(r11_1 + (rcx << 2)) || not(arg3 f<= *(r11_1 + (rcx << 2) + 4)))
        int32_t r8_1 = 0
        rdx = 0xffffffff
        
        if (r10_2 s>= 0)
            while (true)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r10_2 + r8_1)
                rdx = sx.q((temp4_1 - temp3_1) s>> 1)
                zmm1 = *(r11_1 + (rdx << 2))
                zmm0 = *(r11_1 + (rdx << 2) + 4)
                
                if (not(arg3 < zmm1) && arg3 f<= zmm0)
                    break
                
                if (arg3 f<= zmm0)
                    if (arg3 >= zmm1)
                        break
                    
                    r10_2 = (rdx - 1).d
                else
                    r8_1 = (rdx + 1).d
                
                if (r8_1 s> r10_2)
                    *arg2 = rdx.d
                    return 
        
        *arg2 = rdx.d
