// 函数: sub_142459810
// 地址: 0x142459810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rcx = r15
        r15 = &r15[0x10]
        *rcx = rbx_1[-1].d
        *(rcx + 8) = *rbx_1
        rcx[4] = rbx_1[1].d
        rcx[5] = *(rbx_1 + 0xc)
        rcx[6] = rbx_1[2].d
        rcx[7] = *(rbx_1 + 0x14)
        *(rcx + 0x20) = *(rbx_1 + 0x18)
        
        if (&rcx[0xc] != &rbx_1[5])
            int64_t rsi_1 = sx.q(rbx_1[6].d)
            int64_t r14_1 = rbx_1[5]
            int32_t r8 = rcx[0xf]
            rcx[0xe] = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_140638750(&rcx[0xc], rsi_1.d, r8)
                memcpy(*(rcx + 0x30), r14_1, (rsi_1 << 2).d)
            else
                rcx[0xf] = 0
        
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
