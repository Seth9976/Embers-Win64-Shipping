// 函数: sub_140bbce60
// 地址: 0x140bbce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x98)

if (rcx != 0)
    int64_t* r8_1 = rcx
    
    if (*(rcx + 0x61) == 0)
        int512_t zmm1
        zmm1.o = zx.o(0)
        (*(*rcx + 8))(rcx, zmm1, r8_1)
        rcx = *(arg1 + 0x98)
        r8_1 = rcx
    
    if ((data_143de5452 != 0 || *(arg1 + 0x114) != 0) && *(arg1 + 0x108) != 0)
        int64_t rax_2 = -1
        
        if (*(rcx + 0x63) == 0)
            rax_2 = rcx[2]
        
        *(arg1 + 0xd0) = rax_2
        r8_1 = rcx
    
    if (r8_1 != 0)
        (**r8_1)(r8_1, 1)
    
    *(arg1 + 0x98) = 0

return *(arg1 + 0x108) + *(arg1 + 0xd0)
