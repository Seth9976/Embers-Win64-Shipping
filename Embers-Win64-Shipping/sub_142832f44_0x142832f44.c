// 函数: sub_142832f44
// 地址: 0x142832f44
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* rax_1 = arg1[6]
    
    if (rax_1 == 0)
        sub_142833a04(1, "Failed to load SoundFont "%s"", arg2)
    else
        int64_t rax_2 = *rax_1
        void* rax_3 = (*(rax_2 + 0x10))(rax_2)
        
        if (rax_3 != 0)
            arg1[8].d += 1
            *(rax_3 + 8) = arg1[8].d
            arg1[7] = sub_1428340d8(arg1[7], rax_3)
            
            if (arg3.d != 0)
                sub_142832948(arg1)
            
            return zx.q(*(rax_3 + 8))
else
    sub_142833a04(1, "Invalid filename", arg3)

return 0xffffffff
