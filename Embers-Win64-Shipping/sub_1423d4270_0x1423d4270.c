// 函数: sub_1423d4270
// 地址: 0x1423d4270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0xc40))
        break
    
    void* rdi_1 = *(*(arg1 + 0xc38) + (sx.q(i) << 3))
    int64_t* rcx = *(rdi_1 + 0x218)
    
    if (rcx != 0)
        sub_142020750(rcx)
    
    int64_t* rcx_1 = *(rdi_1 + 0x210)
    
    if (rcx_1 != 0 && rcx_1[0x17] == 0)
        if (rcx_1 == *(arg1 + 0x788))
            *(arg1 + 0x788) = 0
            rcx_1 = *(rdi_1 + 0x210)
        
        (*(*rcx_1 + 0x2a8))(rcx_1)
        *(rdi_1 + 0x210) = 0
