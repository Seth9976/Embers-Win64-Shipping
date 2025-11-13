// 函数: sub_142b87780
// 地址: 0x142b87780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1 + 8
int64_t rbp = 0
void* result = &r14[0x60]
int64_t r15 = 0x60

if (r14 u> result)
    r15 = 0

if (r14 u<= result)
    do
        int16_t* rdi_1 = *r14
        
        if (rdi_1 != 0 && rdi_1 != data_143ccb6a0)
            int32_t rbx_1 = *(arg2 + 8)
            int32_t rbx_2 = rbx_1 - 1
            
            if (rbx_1 - 1 s>= 0)
                int32_t temp1_1
                
                do
                    result = sub_142a8c280(rdi_1, sub_142ae72d0(arg2, rbx_2))
                    
                    if (result.d == 0)
                        goto label_142b8780c
                    
                    temp1_1 = rbx_2
                    rbx_2 -= 1
                while (temp1_1 - 1 s>= 0)
            
            result = sub_142ae7110(arg2, rdi_1, arg3)
        
    label_142b8780c:
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15)

return result
