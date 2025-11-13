// 函数: sub_141e99670
// 地址: 0x141e99670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && sub_141eafa00().b != 0)
    uint64_t rax = *(arg1 + 0x290)
    
    if (rax != 0 && *(arg1 + 0x298) != 0)
        rax = sx.q(*(rax + 0x4c))
        int64_t rdi_1 = *(rax + arg2)
        *(rax + arg2) = 0
        
        if (rdi_1 != 0)
            for (int64_t* i = *(*(arg1 + 0x298) + 0x70); i != 0; i = i[0xb])
                if ((not.b((i[8] u>> 0x24).b) & 1) != 0)
                    (*(*i + 0xe8))(i, sx.q(*(i + 0x4c)) + rdi_1)
            
            sub_140a74f90(rdi_1)

if (arg3 == 0)
    int64_t* rcx_2 = *(arg1 + 0x40)
    (*(*rcx_2 + 0x338))(rcx_2, arg2, 0)
