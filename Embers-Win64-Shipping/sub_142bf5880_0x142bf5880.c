// 函数: sub_142bf5880
// 地址: 0x142bf5880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_1 = arg2 & arg3
int32_t rbx_1 = not.d(arg3)

if (arg3 == 0)
    return 

int32_t i_4

if (arg4 != 0 || arg5 != 0xffffffff)
    i_4 = *(arg1 + 0x60)
    
    if (i_4 != 0)
        int64_t rdx_1 = 0
        uint64_t i_3 = zx.q(i_4)
        uint64_t i
        
        do
            int64_t rcx_1 = *(arg1 + 0x70)
            i_4 = *(rcx_1 + rdx_1 + 8)
            
            if (arg4 u<= i_4 && i_4 u< arg5)
                *(rcx_1 + rdx_1 + 4) = (rbx_1 & *(rcx_1 + rdx_1 + 4)) | r11_1
            
            rdx_1 += 0x14
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    i_4 = *(arg1 + 0x60)
    
    if (i_4 != 0)
        int64_t rdx = 0
        uint64_t i_2 = zx.q(i_4)
        uint64_t i_1
        
        do
            int64_t rcx = *(arg1 + 0x70)
            rdx += 0x14
            *(rcx + rdx - 0x10) = (*(rcx + rdx - 0x10) & rbx_1) | r11_1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
