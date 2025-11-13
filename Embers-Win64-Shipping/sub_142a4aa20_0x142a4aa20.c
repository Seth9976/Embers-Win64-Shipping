// 函数: sub_142a4aa20
// 地址: 0x142a4aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
char rcx = (*(arg1 + 8)).b

if ((rcx & 0x10) == 0)
    if (arg3 == 0)
        if ((rcx & 4) != 0)
            void* rax_1 = *(arg1 + 0x18)
            int32_t rcx_1 = *(rax_1 - 4)
            *(rax_1 - 4) -= 1
            
            if (rcx_1 == 1)
                sub_142a7dcd0(*(arg1 + 0x18) - 4)
        
        *(arg1 + 8) = 2
    else if (rdi.d s< 0xffffffff)
        sub_142a4ab40(arg1)
    else if (rdi.d == 0xffffffff)
        if (arg2 != 0)
            goto label_142a4aabf
        
        sub_142a4ab40(arg1)
    else if (arg4 s< 0 || arg2 == 0 || *(arg3 + (rdi << 1)) == 0)
    label_142a4aabf:
        
        if ((rcx & 4) != 0)
            void* rax_4 = *(arg1 + 0x18)
            int32_t rcx_5 = *(rax_4 - 4)
            *(rax_4 - 4) -= 1
            
            if (rcx_5 == 1)
                sub_142a7dcd0(*(arg1 + 0x18) - 4)
        
        if (rdi.d == 0xffffffff)
            rdi = zx.q(std::_WChar_traits<wchar_t>::length(arg3))
        
        *(arg1 + 8) = 8
        int32_t rax_7 = (rdi + 1).d
        
        if (arg2 == 0)
            rax_7 = rdi.d
        
        if (rdi.d s> 0x3ff)
            *(arg1 + 0xc) = rdi.d
            *(arg1 + 8) = 0xffe8
            *(arg1 + 0x18) = arg3
            *(arg1 + 0x10) = rax_7
        else
            rdi.w <<= 5
            rdi.w |= 8
            *(arg1 + 0x18) = arg3
            *(arg1 + 8) = rdi.w
            *(arg1 + 0x10) = rax_7
    else
        sub_142a4ab40(arg1)

return arg1
