// 函数: sub_142094c50
// 地址: 0x142094c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x28)
void* r9_1 = sx.q(*(arg1 + 0x30)) * 0x78 + r8

if (r8 != r9_1)
    void* rax_1 = r8 + 0x28
    
    do
        if (*(rax_1 - 0x18) == *arg2)
            int32_t rdx_4 = (*(rax_1 + 4) ^ *(arg2 + 0x1c)) | (*(rax_1 - 4) ^ *(arg2 + 0x14))
                | (*(rax_1 - 8) ^ arg2[2].d) | (arg2[3].d ^ *rax_1)
            
            if (rdx_4 == 0)
                if (r8 != 0)
                    return *(r8 + 8)
                
                break
        
        r8 += 0x78
        rax_1 += 0x78
    while (r8 != r9_1)

return 0
