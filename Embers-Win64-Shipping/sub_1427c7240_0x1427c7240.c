// 函数: sub_1427c7240
// 地址: 0x1427c7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = arg1
void* rbx_1 = arg2 - arg1
uint8_t (* i)[0x10] = arg2

if (rbx_1 u>= 8)
    if (arg3 u<= arg4 - 0x10)
        void* rcx_3 = &r11[1]
        
        do
            *(i - r11 - 8 + rcx_3) = *(rcx_3 - 8)
            *(arg2 - r11 + rcx_3) = *rcx_3
            rcx_3 += 0x10
        while (i - r11 - 8 + rcx_3 u< arg3)
        
        return arg3
    
    for (; i u< arg4 - 0x10; i = &i[1])
        *i = *r11
        int64_t rax_11 = r11[1]
        r11 = &r11[2]
        *(i + 8) = rax_11
    
    if (i u< arg3)
        if (i u<= arg4 - 8)
            int64_t rax_13 = *r11
            r11 = &r11[1]
            *i = rax_13
            i = &(*i)[8]
        
        char* rcx_4 = nullptr
        void* rdx_6 = arg3 - i
        
        if (i u> arg3)
            rdx_6 = nullptr
        
        if (rdx_6 != 0)
            do
                *(rcx_4 + i) = *(rcx_4 + r11)
                rcx_4 = &rcx_4[1]
            while (rcx_4 u< rdx_6)
else
    if (arg2 u<= arg4 - 0x10)
        uint8_t temp0_1[0x10] =
            __vpshufb_xmmdq_xmmdq_memdq(zx.o(*r11), *(rbx_1 * 0x10 + "SHLWAPI.dll"))
        int64_t rdx_1 = arg3
        
        if (arg4 - 0xf u< arg3)
            rdx_1 = arg4 - 0xf
        
        for (; i u< rdx_1; i = &(*i)[0x10 - modu.dp.q(0x10, rbx_1)])
            *i = temp0_1
    
    if (arg2 u> arg4 - 0x10 || i u< arg3)
        char* rcx_2 = nullptr
        void* rdx_3 = arg3 - i
        
        if (i u> arg3)
            rdx_3 = nullptr
        
        if (rdx_3 != 0)
            do
                *(rcx_2 + i) = *(rcx_2 + r11)
                rcx_2 = &rcx_2[1]
            while (rcx_2 u< rdx_3)

return arg3
