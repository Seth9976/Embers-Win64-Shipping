// 函数: sub_1424596f0
// 地址: 0x1424596f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t r12 = arg3
void* result

if (arg4 != 0)
    int32_t i
    
    do
        int64_t j_1 = 3
        void* rdi_2 = r12 - arg2
        int32_t* rbx_1 = arg2 + 0x24
        int64_t j
        
        do
            rbx_1[-9] = *(rdi_2 + rbx_1 - 0x24)
            rbx_1[-8] = *(rdi_2 + rbx_1 - 0x20)
            rbx_1[-7] = *(rdi_2 + rbx_1 - 0x1c)
            rbx_1[-6] = *(rdi_2 + rbx_1 - 0x18)
            rbx_1[-5] = *(rdi_2 + rbx_1 - 0x14)
            rbx_1[-4] = *(rdi_2 + rbx_1 - 0x10)
            result = &rbx_1[-3] + rdi_2
            
            if (&rbx_1[-3] != result)
                int64_t rsi_1 = sx.q(*(rbx_1 + rdi_2 - 4))
                int64_t r15_1 = *result
                int32_t r8 = *rbx_1
                rbx_1[-1] = rsi_1.d
                
                if (rsi_1.d != 0 || r8 != 0)
                    sub_1405c4a00(&rbx_1[-3], rsi_1.d, r8)
                    memcpy(*(rbx_1 - 0xc), r15_1, (rsi_1 << 3).d)
                else
                    *rbx_1 = rsi_1.d
            
            rbx_1 = &rbx_1[0xa]
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg2 += 0x78
        r12 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
