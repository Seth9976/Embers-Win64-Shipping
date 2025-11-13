// 函数: sub_140855f40
// 地址: 0x140855f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int64_t result = 0
__builtin_memset(&arg1[7], 0, 0x40)
void* r9 = *(r10 + 0x98)

if (r10 != 0)
    int32_t* r8_1 = arg1[1]
    
    if (r8_1 != 0 && r9 != 0)
        arg1[7] = zx.q(*(r9 + 0xbc) * r8_1[1]) + *(r9 + 0x28)
        arg1[8] = zx.q(*(r9 + 0xb8) * *r8_1) + *(r9 + 0x18)
        arg1[9] = zx.q((*r8_1 + 1) * *(r9 + 0xb8)) + *(r9 + 0x18)
        result = zx.q((r8_1[1] + 1) * *(r9 + 0xbc)) + *(r9 + 0x28)
        arg1[0xa] = result
        void* r9_1 = *(r10 + 0xa0)
        
        if (r9_1 != 0)
            arg1[0xb] = zx.q(*(r9_1 + 0xbc) * r8_1[1]) + *(r9_1 + 0x28)
            arg1[0xc] = zx.q(*r8_1 * *(r9_1 + 0xb8)) + *(r9_1 + 0x18)
            arg1[0xd] = zx.q((*r8_1 + 1) * *(r9_1 + 0xb8)) + *(r9_1 + 0x18)
            result = zx.q((r8_1[1] + 1) * *(r9_1 + 0xbc)) + *(r9_1 + 0x28)
            arg1[0xe] = result

return result
