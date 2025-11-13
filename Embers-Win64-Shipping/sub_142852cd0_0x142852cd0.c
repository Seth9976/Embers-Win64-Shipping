// 函数: sub_142852cd0
// 地址: 0x142852cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (data_143feae10 == 0)
    if (sub_1428992d0(arg1 | 0x4c, arg2) != 0)
        int32_t rdi_1 = 0
        int32_t rcx_1 = 0
        
        if (sub_1428a5c60(&data_143feae14, sub_142853030) != 0)
            rcx_1 = data_143feae1c
        
        if (rcx_1 != 0)
            int32_t rdx
            
            if (test_bit(arg1, 0x14))
                rdx = 0
                
                if (sub_1428a5c60(&data_143feae20, sub_142852e00) != 0)
                    rdx = data_143feae2c
            
            if (not(test_bit(arg1, 0x14)) || rdx != 0)
                if (test_bit(arg1, 0x15) && sub_1428a5c60(&data_143feae20, sub_142852dd0) != 0)
                    rdi_1 = data_143feae28
                
                if (not(test_bit(arg1, 0x15)) || rdi_1 != 0)
                    return 1
else if (data_143feae30 == 0)
    data_143feae30 = 1
    sub_1428a5670(0x14, 0x156, 0x46, "ssl\ssl_init.c", 0xc0)

return 0
