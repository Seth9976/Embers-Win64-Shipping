// 函数: sub_1410226b0
// 地址: 0x1410226b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int32_t r11_2 = (&data_1439c85f4)[zx.q(arg3) * 0xa] << 3

if (arg4 s<= 2)
    int32_t rax
    
    if (r11_2 != 0)
        rax = divu.dp.d(0:0x8000, r11_2)
    else
        rax = 0x1000
    
    *arg1 = rax
    arg1[1] = 1
    arg1[2] = 1
else if (arg4 == 3)
    arg1[2] = 1
    
    if (arg2 - 0x46 u<= 0xe || arg2 - 0x5e u<= 5)
        int32_t r8_2 = sub_1410249a0(arg2) << 4
        *arg1 = r8_2
        arg1[1] = sub_141022dc0(arg2) << 4
        
        if (r11_2 == 0x40)
            *arg1 = r8_2 * 2
    else
        if (r11_2 u<= 8)
            *arg1 = 0x40
            arg1[1] = 0x40
        else if (r11_2 u<= 0x10)
            *arg1 = 0x40
            arg1[1] = 0x20
        else if (r11_2 u<= 0x20)
            *arg1 = 0x20
            arg1[1] = 0x20
        else if (r11_2 u<= 0x40)
            *arg1 = 0x20
            arg1[1] = 0x10
        else if (r11_2 u<= 0x80)
            *arg1 = 0x10
            arg1[1] = 0x10
        
        if (arg5 u> 1)
            if (arg5 u<= 2)
                *arg1 u>>= 1
                return 
            
            if (arg5 u<= 4)
                *arg1 u>>= 1
                arg1[1] u>>= 1
                return 
            
            if (arg5 u<= 8)
                *arg1 u>>= 2
                arg1[1] u>>= 1
                return 
            
            if (arg5 u<= 0x10)
                *arg1 u>>= 2
                arg1[1] u>>= 2
else if (arg4 == 4)
    if (arg2 - 0x46 u<= 0xe || arg2 - 0x5e u<= 5)
        *arg1 = sub_1410249a0(arg2) << 3
        arg1[1] = sub_141022dc0(arg2) << 3
        arg1[2] = 4
        
        if (r11_2 == 0x40)
            arg1[2] = 8
    else
        if (r11_2 u<= 8)
            *arg1 = 0x10
            arg1[1] = 0x10
            arg1[2] = 0x10
            return 
        
        if (r11_2 u<= 0x10)
            *arg1 = 0x10
            arg1[1] = 0x10
            arg1[2] = 8
            return 
        
        if (r11_2 u<= 0x20)
            *arg1 = 0x10
            arg1[1] = 8
            arg1[2] = 8
            return 
        
        if (r11_2 u<= 0x40)
            *arg1 = 8
            arg1[1] = 8
            arg1[2] = 8
            return 
        
        if (r11_2 u<= 0x80)
            *arg1 = 8
            arg1[1] = 8
            arg1[2] = 4
