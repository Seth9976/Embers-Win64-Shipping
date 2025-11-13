// 函数: sub_142868430
// 地址: 0x142868430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

switch (*(arg1 + 0x5c) - 1)
    case 0
        return sub_142860090(arg1, arg2, 1, 1) __tailcall
    case 0x12
        void* rax_4 = *(arg1 + 8)
        *(arg1 + 0x44) = 0
        
        if ((*(*(rax_4 + 0xc0) + 0x60) & 8) != 0)
            sub_14286f8e0(arg1)
    case 0x14
        void* rax_6 = *(arg1 + 8)
        *(arg1 + 0x44) = 0
        
        if ((*(*(rax_6 + 0xc0) + 0x60) & 8) != 0)
            sub_14286f8e0(arg1)
            *(arg1 + 0x78) = 0
    case 0x15
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            *(arg1 + 0x78) = 1
    case 0x20
        int32_t* rcx_5 = *(arg1 + 8)
        
        if ((*(*(rcx_5 + 0xc0) + 0x60) & 8) != 0)
            *(arg1 + 0x78) = 0
        else
            int32_t rax_11 = *rcx_5
            
            if (rax_11 s>= 0x304 && rax_11 != 0x10000 && *(arg1 + 0x1720) == 0)
                return sub_142860090(arg1, arg2, 0, 0) __tailcall
    case 0x22
        int32_t* rcx_8 = *(arg1 + 8)
        int32_t rax_14
        
        if ((*(*(rcx_8 + 0xc0) + 0x60) & 8) == 0)
            rax_14 = *rcx_8
        
        if ((*(*(rcx_8 + 0xc0) + 0x60) & 8) != 0 || rax_14 s< 0x304 || rax_14 == 0x10000)
            *(*(arg1 + 0x508) + 0x128) = *(*(arg1 + 0xa8) + 0x238)
            int64_t rdx_1 = *(*(arg1 + 8) + 0xc0)
            int32_t result = (*(rdx_1 + 0x10))(arg1, rdx_1)
            
            if (result == 0)
                return result
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                *(arg1 + 0x78) = 0
    case 0x2d
        if (*(arg1 + 0x84) == 9 || (**(arg1 + 0xa8) & 0x800) != 0)
            return sub_142860090(arg1, arg2, 1, 1) __tailcall

return 2
