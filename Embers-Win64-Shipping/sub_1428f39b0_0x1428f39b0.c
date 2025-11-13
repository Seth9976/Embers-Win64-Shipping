// 函数: sub_1428f39b0
// 地址: 0x1428f39b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    arg1[2].d -= 1
    
    if (arg1[2].d s<= 1)
        if ((*(arg1 + 0x14) & 4) == 0)
            int64_t rdx_1 = *(*arg1 + 0x10)
            
            if (rdx_1 != 0)
                int32_t rax_4 = rdx_1()
                
                if (rax_4 == 0)
                    sub_1428a5670(rax_4 + 0x25, rax_4 + 0x6f, rax_4 + 0x6b, "crypto\dso\dso_lib.c", 
                        0x4f)
                    return 0
        
        int64_t rdx_3 = *(*arg1 + 0x40)
        
        if (rdx_3 != 0)
            int32_t rax_7 = rdx_3(arg1)
            
            if (rax_7 == 0)
                sub_1428a5670(rax_7 + 0x25, rax_7 + 0x6f, rax_7 + 0x66, "crypto\dso\dso_lib.c", 
                    0x55)
                return 0
        
        sub_142898a10(arg1[1])
        sub_1428a6780(arg1[6])
        sub_1428a6780(arg1[7])
        sub_1428a5ba0(arg1[8])
        sub_1428a6780(arg1)

return 1
