// 函数: sub_142af5440
// 地址: 0x142af5440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1
int32_t rsi = 0
int32_t rax_5

while (true)
    if (rsi != 1)
        goto label_142af547c
    
    if (*rbx == 0x78 && rbx[1] == 0x2d)
        rbx = &rbx[2]
    label_142af547c:
        
        if (*arg3 s<= 0)
            char rax_2
            
            if (data_144016918 != 2)
                rax_2 = sub_142a85f00(&data_144016918)
            
            int32_t rax_4
            
            if (data_144016918 == 2 || rax_2 == 0)
                rax_4 = data_14401691c
                
                if (rax_4 s> 0)
                    *arg3 = rax_4
            else
                sub_142af50a0(arg3)
                data_14401691c = *arg3
                sub_142a85e80(&data_144016918)
            
            if (*arg3 s<= 0)
                if (rbx == 0)
                    *arg3 = 1
                else
                    rax_4.b = *rbx != 0
                    
                    if (rax_4.b != 0)
                        rax_5 = sub_142af4e80(rbx, arg2, arg3)
                        
                        if (rax_5 u< data_1440168e8.d)
                            break
                        
                        rsi += 1
                        
                        if (rsi s< 2)
                            continue
    
    return 0

return data_1440168d8 + (zx.q(*(data_1440168a0 + (zx.q(rax_5) << 1))) << 1)
