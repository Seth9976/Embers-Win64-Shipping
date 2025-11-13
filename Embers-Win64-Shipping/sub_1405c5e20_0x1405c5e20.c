// 函数: sub_1405c5e20
// 地址: 0x1405c5e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (arg2 != rcx)
    if (rcx != 0)
        (*(*rcx + 0x6a0))(rcx, *(arg1 + 0x38))
        void* rax_2 = *(arg1 + 0x30)
        *(arg1 + 0x38) = 0
        *(*(rax_2 + 0x220) + 0x310) = 1
        void* rcx_4 = *(sub_14226dd50(*(*(arg1 + 0x30) + 0x220)) + 0x70)
        
        if (rcx_4 != 0)
            *(rcx_4 + 0xac) = *(arg1 + 0x48)
    
    *(arg1 + 0x30) = arg2
    
    if (arg2 != 0)
        *(*(arg2 + 0x220) + 0x310) = 0
        int64_t rax_6 = sub_1405ccdd0()
        int64_t* rcx_5 = *(arg1 + 0x30)
        int64_t r8_1 = *rcx_5
        void* rax_7 = (*(r8_1 + 0x690))(rcx_5, rax_6, r8_1)
        void* const rsi_1 = rax_7
        void* rax_8
        void* rcx_6
        int64_t rdx_2
        
        if (rax_7 != 0)
            rax_8 = sub_1405ccdd0()
            rcx_6 = *(rsi_1 + 0x10)
            rdx_2 = sx.q(*(rax_8 + 0x38))
        
        if (rax_7 == 0 || rdx_2.d s> *(rcx_6 + 0x38)
                || *(*(rcx_6 + 0x30) + (rdx_2 << 3)) != rax_8 + 0x30)
            rsi_1 = nullptr
        
        *(arg1 + 0x38) = rsi_1
        *(rsi_1 + 0x50) = arg1
        *(rsi_1 + 0x58) = sub_140d21950(arg1, sub_1405cceb0())
        void* rcx_11 = *(sub_14226dd50(*(*(arg1 + 0x30) + 0x220)) + 0x70)
        *(arg1 + 0x48) = *(rcx_11 + 0xac)
        *(rcx_11 + 0xac) &= 0xffd77dd9
        *(rcx_11 + 0xb0) &= 0xff5fcd96

return arg2
