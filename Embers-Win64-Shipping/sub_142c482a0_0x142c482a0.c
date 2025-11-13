// 函数: sub_142c482a0
// 地址: 0x142c482a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax_1 = GetProcAddress(arg1, "nvapi_QueryInterface")
    data_144019c88 = rax_1
    
    if (rax_1 == 0)
        return 0xffffffff
    
    int64_t rax_3 = rax_1(0xad298d3f)
    int64_t r8 = rax_3
    data_144019c78 = rax_3
    int64_t rax_4 = data_144019c88
    int64_t rdx
    
    if (rax_4 == 0)
        rdx = 0
        data_144019c80 = 0
    else
        int64_t rax_5 = rax_4(0x150e828)
        r8 = data_144019c78
        rdx = rax_5
        data_144019c80 = rax_5
    
    int32_t rcx_1 = -1
    int32_t rax_6
    
    if (arg3 == 0)
        if (rdx == 0)
            return zx.q(rcx_1)
        
        rax_6 = rdx()
    else
        if (arg3 != 1)
            return zx.q(rcx_1)
        
        if (r8 == 0)
            return -3
        
        rax_6 = r8(zx.q(arg3))
    
    if (rax_6 != 0)
        return zx.q(rax_6)
    
    int64_t rax_8 = data_144019c88
    int64_t rcx_2
    
    if (rax_8 == 0)
        data_144019c98 = rax_8
        rcx_2 = 0
        data_144019ca0 = 0
    else
        rax_8 = rax_8(0x33c7358c)
        int64_t rdx_1 = data_144019c88
        data_144019c98 = rax_8
        
        if (rdx_1 == 0)
            rcx_2 = 0
            data_144019ca0 = 0
        else
            int64_t rax_9 = rdx_1(0x593e8644)
            rcx_2 = rax_9
            data_144019ca0 = rax_9
            rax_8 = data_144019c98
    
    if (rax_8 == 0 || rcx_2 != 0)
        data_144019c98 = 0
        data_144019ca0 = 0
else if (arg2 == 1)
    int64_t rax_10 = GetProcAddress(arg1, "nvapi_pepQueryInterface")
    data_144019c90 = rax_10
    
    if (rax_10 == 0)
        return 0xffffffff

memset(&data_144019cf0, 0, 0xb48)
return 0
