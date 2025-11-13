// 函数: sub_141a774b0
// 地址: 0x141a774b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int128_t* rcx = r14
        void* r15_1 = &rbx_1[-6]
        r14 += 0x58
        *rcx = *(rbx_1 - 0x48)
        void* rdi_1 = rcx + 0x18
        rcx[1].d = rbx_1[-7].d
        *(rcx + 0x14) = *(rbx_1 - 0x34)
        
        if (rdi_1 != r15_1)
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            void* r12_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x3c)
            *(rdi_1 + 0x38) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_14174ff90(rdi_1, rsi_1.d, r8)
                void* r9 = *(rdi_1 + 0x30)
                
                if (r12_1 != 0)
                    r15_1 = r12_1
                
                if (r9 != 0)
                    rdi_1 = r9
                
                memcpy(rdi_1, r15_1, (rsi_1 * 0xc).d)
            else
                *(rdi_1 + 0x3c) = 4
        
        rbx_1 = &rbx_1[0xb]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
