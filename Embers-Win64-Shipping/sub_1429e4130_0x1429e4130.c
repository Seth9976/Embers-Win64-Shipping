// 函数: sub_1429e4130
// 地址: 0x1429e4130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = 0
void* r11 = arg1
char arg_10 = 0
char rdx = *(sx.q(arg2) + 0x1436046e0)
uint64_t result

do
    int32_t rdi_1 = 0
    uint32_t result_1 = (arg3[1].d + 1) << 7 u>> 8
    
    if (*(arg3 + 0xc) s< 0)
        sub_142a23140(arg3)
        r10 = arg_10
        r11 = arg1
    
    int64_t r8 = *arg3
    uint64_t rcx_2 = zx.q(result_1) << 0x38
    
    if (r8 u>= rcx_2)
        rdi_1 = 1
        result_1 = arg3[1].d - result_1
        r8 -= rcx_2
    
    result = zx.q(result_1)
    uint32_t rdx_1 = zx.d(*(result + &data_143603f00))
    *(arg3 + 0xc) -= rdx_1
    *arg3 = r8 << rdx_1.b
    arg3[1].d = result_1 << rdx_1.b
    
    if (rdi_1 != 0)
        int64_t i_1 = 2
        char* r14_2 = r11 + 0xae + zx.q(r10) * 0x1b0
        int64_t i
        
        do
            int64_t j_1 = 2
            int64_t j
            
            do
                for (int32_t k = 0; k s< 6; )
                    int64_t rsi_1 = 6
                    char* rbx_5 = r14_2
                    
                    if (k == 0)
                        rsi_1 = 3
                    
                    int64_t temp1_1
                    
                    do
                        int64_t rdi_2 = 3
                        int64_t temp0_1
                        
                        do
                            result = sub_142a2d030(arg3, rbx_5)
                            rbx_5 = &rbx_5[1]
                            temp0_1 = rdi_2
                            rdi_2 -= 1
                        while (temp0_1 != 1)
                        temp1_1 = rsi_1
                        rsi_1 -= 1
                    while (temp1_1 != 1)
                    k += 1
                    r14_2 = &r14_2[0x12]
                
                j = j_1
                j_1 -= 1
            while (j != 1)
            i = i_1
            i_1 -= 1
        while (i != 1)
        r10 = arg_10
    
    r11 = arg1
    r10 += 1
    arg_10 = r10
while (r10 u<= rdx)

return result
