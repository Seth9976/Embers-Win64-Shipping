// 函数: sub_142c850d0
// 地址: 0x142c850d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0x200
int32_t* rax = data_143ccb8b8(1, 0x178)
arg1[0xd3] = rax

if (rax != 0)
    int32_t rcx = *(*arg1 + 0x390)
    
    if (rcx != 0)
        rsi = rcx
        
        if (rcx - 8 u> 0xffb0)
            return 0x47
    
    int64_t rax_5
    
    if (*(rax + 0x168) == 0)
        rax_5 = data_143ccb8b8(1, sx.q(rsi + 4))
        *(rax + 0x168) = rax_5
    
    if (*(rax + 0x168) != 0 || rax_5 != 0)
        int64_t rax_7
        
        if (*(rax + 0x170) == 0)
            rax_7 = data_143ccb8b8(1, sx.q(rsi + 4))
            *(rax + 0x170) = rax_7
        
        if (*(rax + 0x170) != 0 || rax_7 != 0)
            sub_142c65340(arg1, 1)
            *(rax + 0x10) = arg1
            *(rax + 0x18) = arg1[0x47]
            *rax = 0
            rax[2] = 0xffffff9c
            rax[0x57] = 0x200
            rax[0x58] = rsi
            rax[0x14].w = *(arg1[0xe] + 4)
            int512_t zmm2_1 = sub_142c86470(rax)
            
            if (*(arg1 + 0x40b) == 0)
                if (bind(*(rax + 0x18), &rax[0x14], *(arg1[0xe] + 0x10)) != 0)
                    char* rax_13
                    int512_t zmm2_2
                    rax_13, zmm2_2 = sub_142c55790(arg1, WSAGetLastError(), zmm2_1)
                    sub_142c64760(*arg1, "bind() failed; %s", rax_13, zmm2_2)
                    return 7
                
                *(arg1 + 0x40b) = 1
            
            sub_142c6f2a0(*arg1)
            *arg2 = 1
            return 0

return 0x1b
