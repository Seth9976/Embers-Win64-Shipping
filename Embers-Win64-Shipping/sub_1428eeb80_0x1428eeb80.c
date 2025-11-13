// 函数: sub_1428eeb80
// 地址: 0x1428eeb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (opus_repacketizer_get_nb_frames(sub_140687ad0(arg1)) == 0x197)
    int32_t r8_1 = 0
    void* rax_2 = &arg1[9]
    int64_t rdx_1 = 0
    
    while (*rax_2 != 0)
        r8_1 += 1
        rdx_1 += 1
        rax_2 += 4
        
        if (rdx_1 s>= 6)
            break
    
    if (r8_1 == 4)
        return 0x2ab
    
    if (r8_1 == 2)
        return 0x2aa

return 0
