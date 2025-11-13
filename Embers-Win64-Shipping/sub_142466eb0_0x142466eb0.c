// 函数: sub_142466eb0
// 地址: 0x142466eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rcx = r15
        r15 += 0x58
        *(rcx + 8) = *rbx_1
        *(rcx + 0x10) = rbx_1[1].d
        *(rcx + 0x14) = *(rbx_1 + 0xc)
        *(rcx + 0x18) = rbx_1[2].b
        *(rcx + 0x19) = *(rbx_1 + 0x11)
        *(rcx + 0x1c) = *(rbx_1 + 0x14)
        *(rcx + 0x20) = rbx_1[3].d
        *(rcx + 0x24) = *(rbx_1 + 0x1c)
        *(rcx + 0x28) = rbx_1[4]
        *(rcx + 0x30) = rbx_1[5]
        *(rcx + 0x38) = rbx_1[6].d
        *(rcx + 0x3c) = *(rbx_1 + 0x34)
        
        if (rcx + 0x48 != &rbx_1[8])
            int64_t rsi_1 = sx.q(rbx_1[9].d)
            int64_t r14_1 = rbx_1[8]
            int32_t r8 = *(rcx + 0x54)
            *(rcx + 0x50) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4a00(rcx + 0x48, rsi_1.d, r8)
                memcpy(*(rcx + 0x48), r14_1, (rsi_1 << 3).d)
            else
                *(rcx + 0x54) = 0
        
        rbx_1 = &rbx_1[0xb]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
