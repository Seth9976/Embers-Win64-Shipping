// 函数: sub_141c48fa0
// 地址: 0x141c48fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1d].d
(*(*arg1 + 0xc0))()
sub_141c488a0(arg1[0x15])
arg1[0x28].d = 0
*(arg1 + 0x144)
*(arg1 + 0x144) = 1

while (arg1[0xd].d != 3)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    arg1[0x35].d = performanceCount.d
    
    while (true)
        int32_t rax_3 = 0
        
        if (0 == arg1[0x28].d)
            arg1[0x28].d = 0
        else
            rax_3 = arg1[0x28].d
        
        int32_t rax_4 = 0
        
        if (0 == *(arg1 + 0x144))
            *(arg1 + 0x144) = 0
        else
            rax_4 = *(arg1 + 0x144)
        
        if (rax_3 == rax_4)
            break
        
        bool z_1
        
        if (0 == arg1[0x3a].d)
            arg1[0x3a].d = 0
            z_1 = true
        else
            arg1[0x3a].d
            z_1 = false
        
        if (z_1)
            break
        
        int32_t rax_6 = 0
        
        if (0 == *(arg1 + 0x144))
            *(arg1 + 0x144) = 0
        else
            rax_6 = *(arg1 + 0x144)
        
        sub_141c488a0(sx.q(rax_6) * 0x38 + arg1[0x15])
        int32_t rax_7 = 0
        
        if (0 == *(arg1 + 0x144))
            *(arg1 + 0x144) = 0
        else
            rax_7 = *(arg1 + 0x144)
        
        arg1[0x29].d
        *(arg1 + 0x144)
        *(arg1 + 0x144) = mods.dp.d(sx.q(rax_7 + 1), arg1[0x29].d)
    
    sub_141c483d0(&arg1[0x31])
    int32_t rax_11 = data_143a12bf0
    int32_t rdx_4
    
    if (rax_11 s>= 0x1f4)
        rdx_4 = 0x1388
        
        if (rax_11 s< 0x1388)
            rdx_4 = rax_11
    else
        rdx_4 = 0x1f4
    
    data_143a12bf0 = rdx_4
    int64_t* rcx_7 = arg1[0x20]
    
    if (rcx_7 != 0 && (*(*rcx_7 + 0x20))(rcx_7, rdx_4, 0) == 0)
        *(arg1 + 0x1d4)
        *(arg1 + 0x1d4) = 1

arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0xffffffff
int64_t* rcx_8 = arg1[0x12]
(*(*rcx_8 + 8))(rcx_8)
arg1[0xd].d = 2
return 0
