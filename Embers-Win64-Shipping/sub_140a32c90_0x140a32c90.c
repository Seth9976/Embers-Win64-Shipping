// 函数: sub_140a32c90
// 地址: 0x140a32c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg1 != 0)
    uint32_t rbp_1 = zx.d(*arg2)
    int64_t rdi_1 = -1
    int32_t rax_1
    rax_1.w = sbb.w((rbp_1 - 0x61).w, (rbp_1 - 0x61).w, rbp_1 - 0x61 u< 0x1a)
    rax_1.w &= 0x20
    rbp_1.w -= rax_1.w
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    int16_t i = *arg1
    void* rbx_1 = &arg1[1]
    
    while (i != 0)
        int32_t rcx_1
        rcx_1.w = sbb.w(i - 0x61, i - 0x61, zx.d(i) - 0x61 u< 0x1a)
        rcx_1.w &= 0x20
        
        if (i - rcx_1.w == rbp_1.w && sub_140a546e0(rbx_1, &arg2[1], sx.q(rdi_1.d - 1)) == 0)
            return rbx_1 - 2
        
        i = *rbx_1
        rbx_1 += 2

return nullptr
