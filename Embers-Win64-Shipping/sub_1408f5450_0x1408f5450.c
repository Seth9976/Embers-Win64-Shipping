// 函数: sub_1408f5450
// 地址: 0x1408f5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = *arg1
int32_t* rbx = rbp
void* rsi_2 = &rbp[sx.q(arg1[1].d) * 4]

if (rbp == rsi_2)
    return 

do
    if (*rbx != *arg2 || rbx[1] != arg2[1])
        if (sub_140d3e110(rbx).b == 0 && sub_140d3e110(arg2).b == 0)
            goto label_1408f54ba
    else
    label_1408f54ba:
        
        if (*(rbx + 8) == *(arg2 + 8))
            int32_t rbx_2 = ((rbx - rbp) s>> 4).d
            
            if (rbx_2 != 0xffffffff)
                int32_t rdx = arg1[1].d
                int32_t rcx_4 = rdx - rbx_2 - 1
                
                if (rcx_4 s>= 1)
                    rcx_4 = 1
                
                if (rcx_4 != 0)
                    memcpy((sx.q(rbx_2) << 4) + *arg1, (sx.q(rdx - rcx_4) << 4) + *arg1, rcx_4 << 4)
                    rdx = arg1[1].d
                
                arg1[1].d = rdx - 1
                sub_1405a5010(arg1)
            
            break
    
    rbx = &rbx[4]
while (rbx != rsi_2)
