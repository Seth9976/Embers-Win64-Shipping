// 函数: sub_142b1c660
// 地址: 0x142b1c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 8))
int32_t arg_18 = rcx.d
int16_t* r15 = arg3
int16_t* rdi = arg2

if (arg3 == 0)
    int16_t* rbx_1
    uint32_t r8
    
    do
        r8 = zx.d(*arg2)
        rbx_1 = arg2
        arg2 = &arg2[1]
        
        if (r8 u>= rcx.d)
            break
    while (r8.w != 0)
    
    if (rbx_1 != rdi && arg4 != 0)
        sub_142b1a0e0(arg4, rdi, rbx_1, arg5)
    
    rdi = rbx_1
    
    if (*arg5 s> 0)
        return rbx_1
    
    int16_t* rax_2
    rax_2, rcx = sub_142a8c220(rbx_1, 0)
    r15 = rax_2

uint16_t rsi_2 = 0
uint64_t rbp
rbp.b = 0
char arg_8 = 0
int16_t* var_48 = rdi

while (true)
    int16_t* r12_1 = rdi
    
    if (rdi == r15)
        break
    
    uint32_t rbx_4
    
    do
        rbx_4 = zx.d(*rdi)
        int64_t rax_17
        
        if (rbx_4 u< arg_18)
            rax_17 = 2
        else
            int64_t* r8_2 = *(arg1 + 0x20)
            rsi_2 =
                *(r8_2[1] + (zx.q(zx.d(*(*r8_2 + (zx.q(rbx_4) u>> 6 << 1))) + (rbx_4 & 0x3f)) << 1))
            
            if (rsi_2 u< *(arg1 + 0xe) || (0xfdff & (0x400 + rsi_2)) == 0)
                rax_17 = 2
            else
                if ((rbx_4 & 0xfffffc00) != 0xd800)
                    break
                
                if (&rdi[1] == r15)
                    rax_17 = 2
                else
                    rcx = zx.q(rdi[1])
                    
                    if ((rcx.d & 0xfffffc00) != 0xdc00)
                        rax_17 = 2
                    else
                        rbx_4 = ((rbx_4 - 0xd7f7) << 0xa) + rcx.d
                        int32_t rax_14
                        
                        if (rbx_4 s< r8_2[3].d)
                            rax_14 = sub_142b6a760(r8_2, rbx_4)
                        else
                            rax_14 = *(r8_2 + 0x14) - 2
                        
                        rsi_2 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_14) << 1))
                        
                        if (rsi_2 u>= *(arg1 + 0xe) && (0xfdff & (0x400 + rsi_2)) != 0)
                            break
                        
                        rax_17 = 4
        
        rdi += rax_17
    while (rdi != r15)
    
    int16_t* rdx_7
    
    if (rdi == r12_1)
        rdx_7 = var_48
    else if (arg4 == 0)
        rbp.b = 0
        rdx_7 = rdi
        arg_8 = 0
        var_48 = rdx_7
    else
        int32_t rbp_3 = ((rdi - r12_1) s>> 1).d
        
        if (arg4[5].d s< rbp_3 && sub_142b1fbc0(arg4, rbp_3, arg5) == 0)
            break
        
        sub_142a8bca0(arg4[4], r12_1, rbp_3)
        *(arg4 + 0x2c) = 0
        arg4[4] += sx.q(rbp_3) * 2
        arg4[5].d -= rbp_3
        rbp = zx.q(arg_8)
        arg4[3] = arg4[4]
        rdx_7 = var_48
    
    if (rdi == r15)
        break
    
    int64_t rax_22 = 4
    
    if (rbx_4 u<= 0xffff)
        rax_22 = 2
    
    rdi += rax_22
    
    if (arg4 == 0)
        if (rsi_2 u>= *(arg1 + 0xe) && *(arg1 + 0x1e) u> rsi_2)
            return rdx_7
        
        if (rsi_2 u< 0xfc00)
            rcx.b = 0
        else
            rcx.w = rsi_2 u>> 1
        
        if (rbp.b u> rcx.b && rcx.b != 0)
            return rdx_7
        
        arg_8 = rcx.b
        int16_t* rax_26 = rdi
        rbp = zx.q(rcx.b)
        
        if (rcx.b u> 1)
            rax_26 = rdx_7
        
        var_48 = rax_26
    else
        char rax_24
        rax_24, rcx = sub_142b1c340(arg1, rbx_4, rsi_2, arg4, arg5)
        
        if (rax_24 == 0)
            break

return rdi
