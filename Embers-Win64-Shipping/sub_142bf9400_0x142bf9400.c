// 函数: sub_142bf9400
// 地址: 0x142bf9400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

switch ((zx.d(*arg1) << 8) + zx.d(arg1[1]))
    case 0
        bool cond:0
        
        if (arg2 u>= 0x100)
            cond:0 = false
        else
            uint32_t rcx = zx.d(arg1[zx.q(arg2) + 6])
            cond:0 = rcx != 0
            
            if (rcx != 0)
                *arg3 = rcx
                result.b = rcx != 0
                return result
        
        result.b = cond:0
        return result
    case 4
        return sub_142bf94b0(arg1, arg2, arg3) __tailcall
    case 6
        return sub_142bf9330(arg1, arg2, arg3) __tailcall
    case 0xa
        return sub_142bf9380(arg1, arg2, arg3) __tailcall
    case 0xc
        return sub_142bf90d0(arg1, arg2, arg3) __tailcall
    case 0xd
        return sub_142bf9230(arg1, arg2, arg3) __tailcall

result.b = 0
return result
