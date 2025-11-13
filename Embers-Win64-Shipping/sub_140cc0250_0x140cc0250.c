// 函数: sub_140cc0250
// 地址: 0x140cc0250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

uint64_t rbp_1 = arg1
int64_t i = 0

do
    uint64_t rax = *(arg2 + (i << 3))
    uint64_t* rbx_1 = *(rbp_1 + 0x20)
    
    if (rax u< data_143e1d660 || rax u>= data_143e1d668)
        arg1.b = 0
    else
        arg1.b = 1
    
    if (rax != 0 && arg1.b == 0)
        int32_t rax_1 = *(rax + 0xc)
        uint32_t rdx = zx.d(rax_1.w)
        
        if (rax_1 s< 0)
            rax_1 += 0xffff
            rdx -= 0x10000
        
        int64_t rdx_1 = sx.q(rdx) * 3
        int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3))
        arg1 = zx.q(*(rcx_1 + (rdx_1 << 3) + 8))
        
        if (((arg1.d u>> 0x1d).b & 1) != 0 && *(rbp_1 + 0x28) != 0)
            *(arg2 + (i << 3)) = 0
        else if (((arg1.d u>> 0x1c).b & 1) != 0)
            *(rcx_1 + (rdx_1 << 3) + 8) = arg1.d & 0xefffffff
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            int32_t rax_7 = (rsi_1 + 1).d
            rbx_1[1].d = rax_7
            
            if (rax_7 s> *(rbx_1 + 0xc))
                sub_1405a4d70(rbx_1)
            
            *(*rbx_1 + (rsi_1 << 3)) = *(arg2 + (i << 3))
    
    i += 1
while (i s< sx.q(arg3))
