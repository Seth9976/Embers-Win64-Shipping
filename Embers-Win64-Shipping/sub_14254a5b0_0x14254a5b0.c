// 函数: sub_14254a5b0
// 地址: 0x14254a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* rbp = arg2

if (arg4 != 0)
    int64_t* rdi_1 = arg3 + 0x68
    int32_t i
    
    do
        void* rbx_1 = rbp
        rbp += 0x78
        
        if (rbx_1 + 0x68 != rdi_1)
            int64_t rsi_1 = sx.q(rdi_1[1].d)
            int64_t r15_1 = *rdi_1
            int32_t r8 = *(rbx_1 + 0x74)
            *(rbx_1 + 0x70) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1407c3650(rbx_1 + 0x68, rsi_1.d, r8)
                memcpy(*(rbx_1 + 0x68), r15_1, (rsi_1 * 0xc).d)
            else
                *(rbx_1 + 0x74) = 0
        
        rdi_1 = &rdi_1[0xf]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
