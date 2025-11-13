// 函数: sub_14125e820
// 地址: 0x14125e820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_2

if (*(arg1 + 0x34) == 0)
    rsi_2 = arg1[1].d
    arg1[1].d = rsi_2 + 1
    
    if (rsi_2 + 1 s> *(arg1 + 0xc))
        sub_14092f860(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_17 = *(rbx_1 + 0x10)
    
    if (rax_17 != 0)
        rbx_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1)
    int64_t rdx_11 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_11 << 2)) |= 1 << (rdi_1.b & 0x1f)
else
    void* r9_1 = arg1[4]
    void* r11_1 = &arg1[2]
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*arg3)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t r9_2 = arg1[5].d
    int64_t rsi = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    uint64_t r8_1 = zx.q((r9_2 + 0x1f) u>> 5)
    int64_t rax_4 = rsi
    
    if (rsi s< r8_1)
        while (*(r11_1 + (rax_4 << 2)) == 0xffffffff)
            rsi = zx.q(rsi.d + 1)
            rax_4 += 1
            
            if (rax_4 s>= r8_1)
                break
    
    int64_t rax_5
    int32_t rax_7
    int32_t rcx
    
    if (rsi.d s< r8_1.d)
        rax_5 = sx.q(rsi.d)
        rcx = *(r11_1 + (rax_5 << 2))
        rax_7 = not.d(rcx)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_forward(rax_7)
        rsi_2 = (rsi.d << 5) + temp0_2
    
    if (rsi.d s>= r8_1.d || rsi_2 s>= r9_2)
        rsi_2 = -1
    else
        *(r11_1 + (rax_5 << 2)) = rcx | (neg.d(rax_7) & rax_7)
    
    *arg3 = rsi_2 + 1
    int64_t r8_3 = *arg1
    int32_t* rdx_6 = sx.q(rsi_2) * 0xe8 + r8_3
    
    if (arg1[6].d == rsi_2)
        arg1[6].d = rdx_6[1]
    
    int64_t rax_12 = sx.q(rdx_6[1])
    
    if (rax_12.d s>= 0)
        *(rax_12 * 0xe8 + r8_3) = *rdx_6
        r8_3 = *arg1
    
    int64_t rax_14 = sx.q(*rdx_6)
    
    if (rax_14.d s>= 0)
        *(rax_14 * 0xe8 + r8_3 + 4) = rdx_6[1]
    
    *(arg1 + 0x34) -= 1

*arg2 = rsi_2
*(arg2 + 8) = sx.q(rsi_2) * 0xe8 + *arg1
return arg2
