// 函数: sub_142a829e0
// 地址: 0x142a829e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2

if (arg1 == 0 || rax s< 0xffffffff)
    return 3

if (rax == 0xffffffff)
    rax = std::_WChar_traits<wchar_t>::length(arg1)

int64_t rbx = 0
int64_t rdi = sx.q(rax)

if (rax s> 0)
    do
        uint32_t rcx_2 = zx.d(*(arg1 + (rbx << 1)))
        rbx += 1
        
        if ((rcx_2 & 0xfffffc00) == 0xd800 && rbx != rdi)
            uint32_t rdx = zx.d(*(arg1 + (rbx << 1)))
            
            if ((rdx & 0xfffffc00) == 0xdc00)
                rbx += 1
                rcx_2 = ((rcx_2 - 0xd7f7) << 0xa) + rdx
        
        int32_t rax_5 = j_sub_142af5c70(rcx_2)
        
        if (rax_5 == 0)
            return 0
        
        if (rax_5 == 1 || rax_5 == 0xd)
            return 1
    while (rbx s< rdi)

return 3
