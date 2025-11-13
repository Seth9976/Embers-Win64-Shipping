// 函数: sub_142864120
// 地址: 0x142864120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0
int64_t rbp = 0
int16_t* rdi = arg3

if (arg4 != 0)
    do
        int64_t rax_1 = 0
        char const (** const rbx_1)[0x17] = &data_1434dc750
        
        while (rbx_1[1].w != *rdi)
            rax_1 += 1
            rbx_1 = &rbx_1[5]
            
            if (rax_1 u>= 0x1a)
                rbx_1 = nullptr
                break
        
        if (sub_142864400(arg1, 0x5000b, rbx_1) != 0)
            if (sub_142873b60(arg2, zx.d(*rdi), 2) == 0)
                return 0
            
            if (rsi == 0)
                int32_t* rcx_3 = *(arg1 + 8)
                
                if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) != 0)
                    rsi = 1
                else
                    int32_t rax_5 = *rcx_3
                    
                    if (rax_5 s< 0x304 || rax_5 == 0x10000)
                        rsi = 1
                    else if (*(rbx_1 + 0x14) != 6)
                        int32_t rax_6 = *(rbx_1 + 0xc)
                        
                        if (rax_6 != 0x40 && rax_6 != 0x2a3)
                            rsi = 1
        
        rbp += 1
        rdi = &rdi[1]
    while (rbp u< arg4)

if (arg4 == 0 || rsi == 0)
    sub_1428a5670(0x14, 0x215, 0x76, "ssl\t1_lib.c", 0x66b)

return zx.q(rsi)
