// 函数: sub_141adba40
// 地址: 0x141adba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0xc8
    int32_t i
    
    do
        void* rsi_1 = r14
        r14 += 0xe8
        sub_141adb020(rsi_1, &rbx_1[-0x19])
        
        if (rsi_1 + 0xc8 != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0xd4)
            *(rsi_1 + 0xd0) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407751d0(rsi_1 + 0xc8, rbp_1.d, r8)
                memcpy(*(rsi_1 + 0xc8), r12_1, (rbp_1 * 0x28).d)
            else
                *(rsi_1 + 0xd4) = 0
        
        sub_140780bc0(rsi_1 + 0xd8, &rbx_1[2])
        rbx_1 = &rbx_1[0x1d]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
