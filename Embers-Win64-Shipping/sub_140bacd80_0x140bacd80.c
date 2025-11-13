// 函数: sub_140bacd80
// 地址: 0x140bacd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
uint32_t result = rdx - 1

if (rdx == 0)
    result = 0

if (result s>= 7)
    int16_t* rbx_1
    
    if (rdx == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *arg1
    
    void* rbx_2 = &rbx_1[1]
    
    if (*rbx_1 == 0x2f)
        while (true)
            result = zx.d(*rbx_2)
            
            if (result.w == 0)
                break
            
            rbx_2 += 2
            
            if (result.w == 0x2f)
                if (*rbx_2 != 0)
                    if (sub_140a546e0(rbx_2, u"L10N/", 5) == 0)
                        result.b = 1
                        return result
                    
                    if (sub_140a54510(rbx_2, u"L10N") == 0)
                        result.b = 1
                        return result
                
                break

result.b = 0
return result
