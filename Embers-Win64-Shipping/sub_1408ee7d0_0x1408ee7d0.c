// 函数: sub_1408ee7d0
// 地址: 0x1408ee7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        int64_t* rcx = r15
        r15 = &r15[8]
        *rcx = rbx_1[-6]
        rcx[1].d = rbx_1[-5].d
        *(rcx + 0xc) = *(rbx_1 - 0x24)
        rcx[2].d = rbx_1[-4].d
        *(rcx + 0x14) = *(rbx_1 - 0x1c)
        rcx[3].d ^= (rbx_1[-3].d ^ rcx[3].d) & 1
        *(rcx + 0x1c) = *(rbx_1 - 0x14)
        rcx[4].d = rbx_1[-2].d
        rcx[5] = rbx_1[-1]
        
        if (&rcx[6] != rbx_1)
            int32_t rsi_1 = rbx_1[1].d
            int64_t r14_1 = *rbx_1
            int32_t r8 = *(rcx + 0x3c)
            rcx[7].d = rsi_1
            
            if (rsi_1 != 0 || r8 != 0)
                sub_1405a4c70(&rcx[6], rsi_1, r8)
                memcpy(rcx[6], r14_1, rsi_1 * 2)
            else
                *(rcx + 0x3c) = 0
        
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
