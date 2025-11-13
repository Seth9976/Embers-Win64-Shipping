// 函数: sub_142bb5710
// 地址: 0x142bb5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[0x33].d
bool cond:0 = result != 0

if (result s< 0)
    result = sub_142bb5400(arg1, arg2)
    cond:0 = result != 0

if (not(cond:0))
    result = *(arg1 + 0x19c)
    
    if (result s< 0)
        void* rbp_1 = *arg1
        int32_t i = 0
        
        if (*(arg1 + 0x134) u> 0)
            do
                uint64_t i_5 = zx.q(i)
                i += 1
                *(arg1[0x27] + (i_5 << 2)) =
                    sub_142b93e80(sx.d(*(*(rbp_1 + 0x3d8) + (i_5 << 1))), *(arg1 + 0x74))
            while (i u< *(arg1 + 0x134))
        
        int32_t i_1 = 0
        
        if (0 u< *(arg1 + 0x15c))
            do
                uint64_t i_3 = zx.q(i_1)
                i_1 += 1
                uint64_t rcx_2 = i_3 << 3
                *(rcx_2 + arg1[0x2c]) = 0
                *(arg1[0x2c] + rcx_2 + 4) = 0
                *(rcx_2 + arg1[0x2d]) = 0
                *(arg1[0x2d] + rcx_2 + 4) = 0
            while (i_1 u< zx.d(*(arg1 + 0x15c)))
        
        int32_t i_2 = 0
        
        if (0 u< arg1[0x28].w)
            do
                uint64_t i_4 = zx.q(i_2)
                i_2 += 1
                *(arg1[0x29] + (i_4 << 2)) = 0
            while (i_2 u< zx.d(arg1[0x28].w))
        
        __builtin_memcpy(&arg1[0x1e], 
            "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x00\x01\x00\x"
        "00\x00\x40\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x44\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x00\x00\x09\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x01\x00\x01\x00\x00\x
                00", 
            0x44)
        return sub_142bb5bc0(arg1, arg2)

return result
