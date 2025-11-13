// 函数: sub_1423dd310
// 地址: 0x1423dd310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* rcx_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* r8_1

if (rax == rcx_1)
label_1423dd353:
    r8_1 = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        r8_1 = *rax
        
        if (*(r8_1 + 0x210) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1423dd353

int64_t rcx_3 = *(r8_1 + 0x218)

if (rcx_3 != 0)
    return sub_140a3f490(rcx_3) __tailcall

return &data_143f5b500
