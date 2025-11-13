// 函数: sub_1424ceb40
// 地址: 0x1424ceb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* rbp = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x68
    int32_t i
    
    do
        void* rsi_1 = rbp
        rbp -= -0x80
        
        if (rsi_1 + 0x68 != rbx_1)
            int64_t r14_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x74)
            *(rsi_1 + 0x70) = r14_1.d
            
            if (r14_1.d != 0 || r8 != 0)
                sub_1405c4a00(rsi_1 + 0x68, r14_1.d, r8)
                memcpy(*(rsi_1 + 0x68), r12_1, (r14_1 << 3).d)
            else
                *(rsi_1 + 0x74) = 0
        
        *(rsi_1 + 0x78) = rbx_1[2].d
        char rax = *(rbx_1 + 0x14)
        rbx_1 -= -0x80
        *(rsi_1 + 0x7c) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
