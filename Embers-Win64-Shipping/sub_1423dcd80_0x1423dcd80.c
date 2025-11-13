// 函数: sub_1423dcd80
// 地址: 0x1423dcd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* rcx_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* rdx

if (rax == rcx_1)
label_1423dcdc6:
    rdx = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        rdx = *rax
        
        if (*(rdx + 0x278) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1423dcdc6

int64_t rax_2 = sx.q(*(rdx + 0x228))

if (rax_2.d s> 0)
    int64_t* rdx_1 = *(rdx + 0x220)
    int64_t rcx_3 = 0
    
    do
        void* const result = *rdx_1
        
        if (result != 0 && *(result + 0x190) == arg3)
            return result
        
        rcx_3 += 1
        rdx_1 = &rdx_1[2]
    while (rcx_3 s< rax_2)

return nullptr
