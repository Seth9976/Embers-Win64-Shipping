// 函数: sub_141d1db30
// 地址: 0x141d1db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141d1f690(arg1, data_143f37078)
int32_t rax_1 = sub_141d1f690(arg1, data_143f36fd0)
int64_t rdx_2 = *(arg1 + 0x218)
int64_t rbx = sx.q((*(rdx_2 + 0x48))(arg1 + 0x218, rdx_2))
int64_t rdx_3 = *(arg1 + 0x278)
int32_t* result = (*(rdx_3 + 0x48))(arg1 + 0x278, rdx_3)

if (result.d s<= 0)
label_141d1dcc8:
    result.b = 1
else
    int32_t* r12_1 = *(arg1 + 0x310)
    int64_t rdx_4 = 0
    int64_t rcx_3 = rbx
    int64_t r9_1 = sx.q(result.d)
    result = *(arg1 + 0x280) - r12_1
    void* r8_2 = *(arg1 + 0x328) - r12_1
    int64_t var_58_1 = r9_1
    void* arg_20 = r8_2
    int64_t arg_18 = 0
    int32_t* result_1 = result
    
    while (true)
        int32_t r11_1 = *(result + r12_1)
        int32_t rbx_1 = 0
        result = zx.q(*(r8_2 + r12_1))
        int64_t r10_1 = 0
        int64_t r13_1 = sx.q(*r12_1)
        int32_t r15_1 = result.d
        int32_t result_2 = result.d
        
        if (rcx_3 s> 0)
            int64_t rdx_5 = rbx
            int64_t rcx_4 = r13_1
            int64_t r14_1 = 0
            
            do
                if (rcx_4 s<= r10_1)
                    if (rbx_1 s< result.d + r13_1.d)
                        int64_t i = 0
                        int32_t* r8_4 = *(arg1 + 0x220) + r14_1
                        
                        do
                            result = sx.q(*r8_4)
                            
                            if (result.d s< 0)
                                goto label_141d1dcdb
                            
                            if (rax_1 s<= result.d)
                                goto label_141d1dcdb
                            
                            int32_t rdx_6 = (*(arg1 + 0x208))[result]
                            
                            if (rdx_6 s< 0 && rax s< rdx_6)
                                goto label_141d1dcdb
                            
                            if (r11_1 != rdx_6)
                                goto label_141d1dcdb
                            
                            i += 1
                            r8_4 = &r8_4[1]
                        while (i s< 3)
                        
                        rdx_5 = rbx
                        r15_1 -= 1
                        rcx_4 = r13_1
                    
                    result = zx.q(result_2)
                
                rbx_1 += 1
                r10_1 += 1
                r14_1 += 0xc
            while (r10_1 s< rdx_5)
            
            rcx_3 = rbx
            rdx_4 = arg_18
            r8_2 = arg_20
            r9_1 = var_58_1
        
        if (r15_1 != 0)
        label_141d1dcdb:
            result.b = 0
            break
        
        result = result_1
        rdx_4 += 1
        r12_1 = &r12_1[1]
        arg_18 = rdx_4
        
        if (rdx_4 s>= r9_1)
            goto label_141d1dcc8

return result
