// 函数: sub_142c63830
// 地址: 0x142c63830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 0x200002 u<= 0x2e)
    switch (arg2)
        case 0x200002
            *arg3 = *(arg1 + 0x4ef0)
            return 0
        case 0x20000b
            *arg3 = *(arg1 + 0x4f04)
            return 0
        case 0x20000c
            *arg3 = *(arg1 + 0x4f08)
            return 0
        case 0x20000d
            *arg3 = *(arg1 + 0x494)
            return 0
        case 0x20000e
            *arg3 = *(arg1 + 0x4efc)
            return 0
        case 0x200014
            *arg3 = *(arg1 + 0x2a8)
            return 0
        case 0x200016
            *arg3 = *(arg1 + 0x4ef4)
            return 0
        case 0x200017
            *arg3 = *(arg1 + 0x4f10)
            return 0
        case 0x200018
            *arg3 = *(arg1 + 0x4f0c)
            return 0
        case 0x200019
            *arg3 = *(arg1 + 0x4b14)
            return 0
        case 0x20001a
            *arg3 = *(arg1 + 0x4f14)
            return 0
        case 0x20001d
            int64_t rax_27 = sub_142c65520(arg1, nullptr)
            int32_t rcx = -1
            
            if (rax_27 != -1)
                rcx = rax_27.d
            
            *arg3 = rcx
            return 0
        case 0x200023
            int32_t rax_33
            rax_33.b = *(arg1 + 0x4f00) != 0
            *arg3 = rax_33
            return 0
        case 0x200025
            *arg3 = *(arg1 + 0x4e58)
            return 0
        case 0x200026
            *arg3 = *(arg1 + 0x4e5c)
            return 0
        case 0x200027
            *arg3 = *(arg1 + 0x4e60)
            return 0
        case 0x200028
            *arg3 = *(arg1 + 0x4f58)
            return 0
        case 0x20002a
            *arg3 = *(arg1 + 0x4f8c)
            return 0
        case 0x20002e
            int32_t rdx_3 = *(arg1 + 0x4ef8)
            
            if (rdx_3 == 0xa)
                *arg3 = 1
                return 0
            
            if (rdx_3 == 0xb)
                *arg3 = 2
                return 0
            
            if (rdx_3 == 0x14)
                *arg3 = 3
                return 0
            
            *arg3 = 0
            return 0
        case 0x20002f
            *arg3 = *(arg1 + 0x534)
            return 0
        case 0x200030
            *arg3 = *(arg1 + 0x4f98)
            return 0

return 0x30
