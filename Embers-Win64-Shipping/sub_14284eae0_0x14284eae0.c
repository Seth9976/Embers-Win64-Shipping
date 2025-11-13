// 函数: sub_14284eae0
// 地址: 0x14284eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t r11 = sx.q(arg3)
int32_t rdx_1
void* r8

if (arg2 - 0x10 u<= 0x73)
    switch (arg2)
        case 0x10
            *(arg1 + 0xc0) = arg4
            return 1
        case 0x21
            int32_t rax_7 = *(arg1 + 0x5c8) | r11.d
            *(arg1 + 0x5c8) = rax_7
            return rax_7
        case 0x28
            return zx.q(*(arg1 + 0x808))
        case 0x29
            uint64_t rax_4 = zx.q(*(arg1 + 0x808))
            *(arg1 + 0x808) = r11.d
            return rax_4
        case 0x32
            return zx.q(*(arg1 + 0x5d8))
        case 0x33
            if (arg3 s< 0)
                return 0
            
            uint64_t rax_10 = zx.q(*(arg1 + 0x5d8))
            *(arg1 + 0x5d8) = r11
            return rax_10
        case 0x34
            if ((r11 - 0x200).d u> 0x3e00)
                return 0
            
            *(arg1 + 0x5f0) = r11
            
            if (r11 u>= *(arg1 + 0x5e8))
                return 1
            
            *(arg1 + 0x5e8) = r11
            return 1
        case 0x4c
            void* rax_17 = *(arg1 + 0xa8)
            
            if (rax_17 != 0)
                return zx.q(*(rax_17 + 0x3d8))
            
            return 0
        case 0x4e
            int32_t r11_2 = not.d(r11.d) & *(arg1 + 0x5c8)
            *(arg1 + 0x5c8) = r11_2
            return zx.q(r11_2)
        case 0x63
            void* rcx = *(arg1 + 0x488)
            int32_t rax_20 = *(rcx + 0x1c) | r11.d
            *(rcx + 0x1c) = rax_20
            return rax_20
        case 0x64
            void* rax_21 = *(arg1 + 0x488)
            int32_t r11_4 = not.d(r11.d) & *(rax_21 + 0x1c)
            *(rax_21 + 0x1c) = r11_4
            return zx.q(r11_4)
        case 0x6e
            if (arg4 == 0)
                return 2
            
            int64_t rcx_1 = *(*(arg1 + 0xa8) + 0x2a8)
            
            if (rcx_1 == 0)
                return 0
            
            *arg4 = rcx_1
            return zx.q(*(*(arg1 + 0xa8) + 0x2b0))
        case 0x7a
            if (*(arg1 + 0x508) == 0)
                return 0xffffffff
            
            if (sub_142856410(arg1) != 0)
                return 0xffffffff
            
            if (sub_1428565f0(arg1) != 0)
                return 0xffffffff
            
            if ((*(*(arg1 + 0x508) + 0x1d0) & 1) != 0)
                return 1
            
            return 0
        case 0x7b
            if (sub_142851af0(r11.d, *(arg1 + 0x5d0)) == 0)
                return 0
            
            r8 = arg1 + 0x5cc
            rdx_1 = r11.d
        label_14284ed82:
            
            if (sub_14285f650(***(arg1 + 0x598), rdx_1, r8) != 0)
                return 1
            
            return 0
        case 0x7c
            rdx_1 = r11.d
            
            if (sub_142851af0(*(arg1 + 0x5cc), rdx_1) == 0)
                return 0
            
            r8 = arg1 + 0x5d0
            goto label_14284ed82
        case 0x7d
            if (r11 u> *(arg1 + 0x5f0) || arg3 == 0)
                return 0
            
            *(arg1 + 0x5e8) = r11
            return 1
        case 0x7e
            if ((r11 - 1).d u> 0x1f)
                return 0
            
            *(arg1 + 0x5f8) = r11
            
            if (r11.d s<= 1)
                return 1
            
            *(arg1 + 0x808) = 1
            return 1
        case 0x82
            return zx.q(*(arg1 + 0x5cc))
        case 0x83
            return zx.q(*(arg1 + 0x5d0))
jump(*(*(arg1 + 8) + 0x80))
