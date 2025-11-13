// 函数: sub_142864fb0
// 地址: 0x142864fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_1406938b0(arg2) == 0x198)
    void* rax_1 = sub_142896700(arg2)
    int64_t* rax_2 = sub_142891590(rax_1)
    void* rcx_3
    
    if (sub_1428c0cc0(rax_1) != 4)
        int32_t* rcx_4 = *(arg1 + 8)
        int32_t rax_5
        
        if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) == 0)
            rax_5 = *rcx_4
        
        if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) != 0 || rax_5 s< 0x304 || rax_5 == 0x10000)
            int32_t rax_7 = opus_repacketizer_get_nb_frames(sub_140687ad0(rax_2))
            
            if (rax_7 == 0x196)
                rcx_3.b = 1
                goto label_14286504d
            
            if (rax_7 != 0x197)
                return 0
            
            rcx_3.b = 2
            goto label_14286504d
    else
        rcx_3.b = 0
    label_14286504d:
        void* r8_1 = *(arg1 + 0x508)
        char* rdx = *(r8_1 + 0x168)
        
        if (rdx != 0)
            int64_t r8_2 = *(r8_1 + 0x160)
            int64_t rax_8 = 0
            
            if (r8_2 != 0)
                while (true)
                    if (rdx[rax_8] == rcx_3.b)
                        return 1
                    
                    rax_8 += 1
                    
                    if (rax_8 u>= r8_2)
                        return 0
            
            return 0

return 1
