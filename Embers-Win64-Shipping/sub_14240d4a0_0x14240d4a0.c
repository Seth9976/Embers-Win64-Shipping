// 函数: sub_14240d4a0
// 地址: 0x14240d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t* r8 = rbx
void* r10 = &rbx[sx.q(arg1[1].d) * 5]

if (rbx != r10)
    do
        if (*r8 == *arg2 && r8[2] == arg2[2])
            char rcx_1 = arg2[1].b
            char rdx = r8[1].b
            
            if (((rcx_1 ^ rdx) & 1) == 0 && ((rcx_1 ^ rdx) & 2) == 0 && ((rcx_1 ^ rdx) & 4) == 0
                    && ((rcx_1 ^ rdx) & 8) == 0)
                return (r8 - rbx) s/ 0x28
        
        r8 = &r8[5]
    while (r8 != r10)

return 0xffffffff
