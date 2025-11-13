// 函数: sub_142b7f610
// 地址: 0x142b7f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x31]
arg1[0x33] = *(rcx + 0x40)
arg1[0x34] = *(rcx + 0x60)
char rax_2 = (*(rcx + 0x160)).b
void* rcx_1

if ((rax_2 & 0x11) != 0)
    rcx_1 = nullptr
else if ((rax_2 & 2) == 0)
    rcx_1 = *(rcx + 0x170)
else
    rcx_1 = rcx + 0x162

arg1[0x35] = rcx_1
sub_142b23ec0(arg1)
arg1[0x66] = arg2
int64_t rsi_1 = sx.q(arg5)
arg1[0x67].d = arg3
int64_t rdi_1 = rsi_1
int32_t arg_18[0x4]
arg_18[0] = 0

do
    void* rcx_3 = arg1[0x66]
    int16_t rax_3 = *(rcx_3 + 8)
    int32_t rax_5
    
    if (rax_3 s< 0)
        rax_5 = *(rcx_3 + 0xc)
    else
        rax_5 = sx.d(rax_3) s>> 5
    
    int32_t rdx = arg1[0x67].d
    
    if (rdx s>= rax_5)
        break
    
    arg1[3].d = 0
    arg1[0x2e].d = 0
    int32_t rax_6 = sub_142a486d0(rcx_3, rdx)
    int32_t rax_7
    rax_7.b = rax_6 u> 0xffff
    arg1[0x67].d += rax_7 + 1
    uint32_t rax_9 = sub_142a959a0(*(arg1[0x31] + 0x20), rax_6)
    int64_t* rbp_1
    
    if (rax_9 != 0xc0)
        rbp_1 = &arg1[0x32]
    else
        rbp_1 = *(arg1[0x31] + 0x10)
        rax_9 = sub_142aa3ce0(rbp_1, rax_6)
    
    sub_142b22160(arg1, rbp_1, rax_6, rax_9, 1, &arg_18)
    int32_t i = 0
    
    if (arg1[3].d s> 0)
        int64_t* rcx_8 = nullptr
        
        do
            int64_t r8_1 = *(rcx_8 + arg1[4])
            
            if (r8_1 != 0)
                if (rdi_1 s< 0x1f)
                    *(arg4 + (rdi_1 << 3)) = r8_1
                
                rsi_1 = zx.q(rsi_1.d + 1)
                rdi_1 += 1
            
            i += 1
            rcx_8 = &rcx_8[1]
        while (i s< arg1[3].d)
while (arg_18[0] s<= 0)

return zx.q(rsi_1.d)
