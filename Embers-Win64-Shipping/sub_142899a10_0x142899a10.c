// 函数: sub_142899a10
// 地址: 0x142899a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (data_143feb030 == 0)
    int32_t rbx_1 = 0
    int32_t rcx = 0
    
    if (sub_1428a5c60(&data_143feb034, sub_142899720) != 0)
        rcx = data_143feb04c
    
    if (rcx != 0)
        if (sub_1428a5c60(&data_143feb050, sub_1428998f0) != 0)
            rbx_1 = data_143feb054
        
        if (rbx_1 != 0)
            int32_t* rax_4 = sub_1428a5b30(&data_143b84cb0)
            int32_t* rbx_2 = rax_4
            
            if (rax_4 != 0)
            label_142899b04:
                
                if ((arg1 & 1) != 0)
                    *rbx_2 = 1
                
                if ((arg1 & 2) != 0)
                    rbx_2[1] = 1
                
                if ((arg1 & 4) != 0)
                    rbx_2[2] = 1
                
                return 1
            
            int32_t* rax_5 = sub_1428a6a70(zx.q((&rax_4[3]).d))
            rbx_2 = rax_5
            
            if (rax_5 != 0)
                if (sub_1428a5cd0(&data_143b84cb0, rax_5) != 0)
                    goto label_142899b04
                
                sub_1428a6780(rbx_2)
else
    sub_1428a5670(0xf, 0x74, 0x46, "crypto\init.c", 0x249)

return 0
