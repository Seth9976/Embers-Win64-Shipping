// 函数: sub_141706b20
// 地址: 0x141706b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x98) = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405dadb0(arg1 + 0x90, 0)

int32_t i_2 = *(arg1 + 0xb8)

if (i_2 != 0)
    int64_t* rdi_1 = *(arg1 + 0xb0) + 0x20
    int32_t i
    
    do
        int64_t rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rdi_1 = &rdi_1[0x16]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0xb8) = 0

if (*(arg1 + 0xbc) != 0)
    sub_140a05f70(arg1 + 0xb0, 0)

*(arg1 + 0xa8) = 0

if (*(arg1 + 0xac) != 0)
    sub_1405dadb0(arg1 + 0xa0, 0)

if (arg1 != arg2)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    *(arg1 + 0x24) = *(arg2 + 0x24)
    
    if (arg1 + 0x28 != arg2 + 0x28)
        sub_141554a40(arg1 + 0x28, *(arg2 + 0x28), *(arg2 + 0x30), *(arg1 + 0x34), 0)
    
    if (arg1 + 0x38 != arg2 + 0x38)
        int32_t i_3 = *(arg1 + 0x40)
        
        if (i_3 != 0)
            int64_t* rdi_3 = *(arg1 + 0x38) + 0x18
            int32_t i_1
            
            do
                int64_t rcx_5 = *rdi_3
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                rdi_3 = &rdi_3[8]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        sub_1415548b0(arg1 + 0x38, *(arg2 + 0x38), *(arg2 + 0x40), *(arg1 + 0x44), 0)
    
    if (arg1 + 0x48 != arg2 + 0x48)
        sub_141554bd0(arg1 + 0x48, *(arg2 + 0x48), *(arg2 + 0x50), *(arg1 + 0x54), 0)
    
    if (arg1 + 0x58 != arg2 + 0x58)
        sub_141554bd0(arg1 + 0x58, *(arg2 + 0x58), *(arg2 + 0x60), *(arg1 + 0x64), 0)
    
    sub_1405b0be0(arg1 + 0x68, arg2 + 0x68)
    *(arg1 + 0x78) = *(arg2 + 0x78)
    *(arg1 + 0x7c) = *(arg2 + 0x7c)
    *(arg1 + 0x80) = *(arg2 + 0x80)
    *(arg1 + 0x84) = *(arg2 + 0x84)
    *(arg1 + 0x88) = *(arg2 + 0x88)

return arg1
