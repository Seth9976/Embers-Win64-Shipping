// 函数: sub_142628bd0
// 地址: 0x142628bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *arg1
int32_t r9_1 = zx.d(*(rax_2 + 0x32)) * zx.d(*(rax_2 + 0x30))

if (r9_1 s> 0)
    int64_t i = 0
    
    do
        char* rcx = arg1[3]
        
        if (rcx[i] == arg3)
            rcx[i] = arg2
        
        i += 1
    while (i s< sx.q(r9_1))

return 0x40000000
