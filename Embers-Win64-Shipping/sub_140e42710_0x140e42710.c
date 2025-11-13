// 函数: sub_140e42710
// 地址: 0x140e42710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = arg1[0x696].d + arg3
arg1[0x696].d = r9_1
int32_t rdi_2 = arg2 << (0x18 - r9_1.b) | *(arg1 + 0x34ac)
*(arg1 + 0x34ac) = rdi_2

if (r9_1 u< 8)
    return 

uint8_t rdi_3 = (rdi_2 u>> 0x10).b

do
    *arg1[0x694] = rdi_3
    int32_t rdx = arg1[0x695].d
    void* rcx_2 = arg1[0x694] + 1
    arg1[0x694] = rcx_2
    arg1[0x695].d = rdx - 1
    void* rsi_1
    
    if (rdx != 1)
        rsi_1 = arg1 + 0x2c9c
    else
        if (rdx != 0x801)
            int32_t rax_2
            
            if (*(arg1 + 0x34b5) != (rdx - 1).b)
                int64_t* rcx_3 = *arg1
                int64_t r9_2 = *rcx_3
                rax_2 = (*(r9_2 + 8))(rcx_3, arg1 + 0x2c9c, zx.q(0x801 - rdx), r9_2)
            
            if (*(arg1 + 0x34b5) == (rdx - 1).b || rax_2.b == 0)
                rax_2.b = 0
            else
                rax_2.b = 1
            
            *(arg1 + 0x34b5) = rax_2.b
        
        rcx_2 = arg1 + 0x2c9c
        arg1[0x695].d = 0x800
        arg1[0x694] = rcx_2
        rsi_1 = rcx_2
    
    if (rdi_3 == 0xff)
        *rcx_2 = 0
        int32_t rdx_2 = arg1[0x695].d
        arg1[0x694] += 1
        arg1[0x695].d = rdx_2 - 1
        
        if (rdx_2 == 1)
            if (rdx_2 != 0x801)
                int32_t rax_3
                
                if (*(arg1 + 0x34b5) != (rdx_2 - 1).b)
                    int64_t* rcx_4 = *arg1
                    int64_t r9_3 = *rcx_4
                    rax_3 = (*(r9_3 + 8))(rcx_4, rsi_1, zx.q(0x801 - rdx_2), r9_3)
                
                if (*(arg1 + 0x34b5) == (rdx_2 - 1).b || rax_3.b == 0)
                    rax_3.b = 0
                else
                    rax_3.b = 1
                
                *(arg1 + 0x34b5) = rax_3.b
            
            arg1[0x694] = rsi_1
            arg1[0x695].d = 0x800
    
    arg1[0x696].d -= 8
    int32_t rax_5 = *(arg1 + 0x34ac) << 8
    *(arg1 + 0x34ac) = rax_5
    rdi_3 = (rax_5 u>> 0x10).b
while (arg1[0x696].d u>= 8)
