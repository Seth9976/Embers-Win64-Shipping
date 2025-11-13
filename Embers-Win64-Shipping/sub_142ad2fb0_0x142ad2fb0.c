// 函数: sub_142ad2fb0
// 地址: 0x142ad2fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 

if (arg2 != 2)
    return sub_142a67700(arg1, arg2, arg3, arg4) __tailcall

int32_t rax_2 = sub_142a695b0(arg1, 2, arg4)
uint64_t rax_3
int32_t rcx_2
rax_3, rcx_2 = sub_142a695b0(arg1, 1, arg4)
uint64_t rdi_1 = zx.q(rax_3.d)
int32_t rbx_2

if (arg3 s<= 0)
    int32_t r8_4 = ((zx.q((rax_3 * 3).d) << 2) + 0x11).d
    rcx_2.b = rax_2 s> 5
    rbx_2 = rax_2 + arg3
    
    while (true)
        if (rcx_2.b != 0 && rbx_2 s<= 5)
            rcx_2 = r8_4 s% 0x13
            
            if (rcx_2 s< (rcx_2 s>> 0x1f & 0xffffffed) + 0xc)
                rbx_2 -= 1
        
        if (rbx_2 s>= 0)
            break
        
        rbx_2 += 0xd
        rdi_1 = zx.q(rdi_1.d - 1)
        r8_4 -= 0xc
        rcx_2.b = 1
else
    int32_t r8_3 = ((zx.q((rdi_1 * 3).d) << 2) + 0x11).d
    rax_3.b = rax_2 s< 5
    rbx_2 = rax_2 + arg3
    
    while (true)
        if (rax_3.b != 0 && rbx_2 s>= 5)
            int32_t rcx_5 = r8_3 s% 0x13
            
            if (rcx_5 s< (rcx_5 s>> 0x1f & 0xffffffed) + 0xc)
                rbx_2 += 1
        
        if (rbx_2 s<= 0xc)
            break
        
        rbx_2 -= 0xd
        rdi_1 = zx.q(rdi_1.d + 1)
        r8_3 += 0xc
        rax_3.b = 1

sub_142a6c030(arg1, 2, rbx_2)
sub_142a6c030(arg1, 1, rdi_1.d)
(*(*arg1 + 0x158))(arg1, 5, arg4)
