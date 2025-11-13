// 函数: sub_140619020
// 地址: 0x140619020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rsi = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rdi_1 = arg3 - arg2 + rsi
        int64_t* rbx_1 = rsi
        rsi = &rsi[3]
        
        if (rbx_1 != rdi_1)
            int64_t rbp_1 = sx.q(rdi_1[1].d)
            int64_t r12_1 = *rdi_1
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_14061cb30(rbx_1, rbp_1.d, r8)
                memcpy(*rbx_1, r12_1, (rbp_1 << 4).d)
            else
                *(rbx_1 + 0xc) = 0
        
        rbx_1[2].b = rdi_1[2].b
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
