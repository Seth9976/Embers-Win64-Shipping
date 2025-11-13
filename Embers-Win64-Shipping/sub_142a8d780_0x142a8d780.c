// 函数: sub_142a8d780
// 地址: 0x142a8d780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg4
uint64_t rbx = zx.q(arg3)
char* rdi = arg2

if (arg2 != 0 && rbx.d s>= 0xffffffff && arg4 != 0)
    int32_t i_1 = arg5
    
    if (i_1 s>= 0xffffffff)
        if (rbx.d s< 0)
            rbx = -1
            
            do
                rbx += 1
            while (arg2[rbx] != 0)
        
        if (i_1 s< 0)
            i_1 = std::_WChar_traits<wchar_t>::length(arg4)
        
        int32_t i = i_1
        
        if (rbx.d s< i_1)
            i = rbx.d
        
        for (; i s> 0; i -= 1)
            char rdx = *rdi
            rdi = &rdi[1]
            uint32_t r8
            
            if (rdx u<= 0x7f)
                r8 = zx.d(rdx)
            
            if (rdx u> 0x7f
                    || not(test_bit(*(&data_1436424d0 + (zx.q(rdx) u>> 5 << 2)), r8 & 0x1f)))
                r8 = -1
            
            uint32_t rdx_1 = zx.d(*rsi)
            rsi = &rsi[1]
            
            if (rdx_1 u> 0x7f
                    || not(test_bit(*(&data_1436424d0 + (zx.q(rdx_1) u>> 5 << 2)), rdx_1 & 0x1f)))
                rdx_1 = -2
            
            if (r8 != rdx_1)
                return zx.q(r8 - rdx_1)
        
        return zx.q(rbx.d - i_1)

return 0
