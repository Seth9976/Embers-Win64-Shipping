// 函数: sub_142094cc0
// 地址: 0x142094cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
void* r9_1 = sx.q(*(arg1 + 0x30)) * 0x78 + rax

if (rax == r9_1)
label_142094d1f:
    rax = nullptr
else
    void* r8_1 = rax + 0x28
    
    while (true)
        if (*(r8_1 - 0x18) == *arg2)
            int32_t rdx_4 = (*(r8_1 + 4) ^ *(arg2 + 0x1c)) | (*(r8_1 - 4) ^ *(arg2 + 0x14))
                | (*(r8_1 - 8) ^ arg2[2].d) | (arg2[3].d ^ *r8_1)
            
            if (rdx_4 == 0)
                break
        
        rax += 0x78
        r8_1 += 0x78
        
        if (rax == r9_1)
            goto label_142094d1f

if (rax == 0)
    return nullptr

return rax + 0x30
