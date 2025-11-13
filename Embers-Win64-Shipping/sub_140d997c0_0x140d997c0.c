// 函数: sub_140d997c0
// 地址: 0x140d997c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2
int32_t rbx_2

if (*(arg1 + 0x34) == 0)
    rbx_2 = arg1[1].d
    arg1[1].d = rbx_2 + 1
    
    if (rbx_2 + 1 s> *(arg1 + 0xc))
        sub_1408888d0(arg1)
    
    arg2.b = 1
    sub_1405b2ba0(&arg1[2], arg2.b)
else
    void* r9_1 = arg1[4]
    void* r11_1 = &arg1[2]
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*arg3)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t r9_2 = arg1[5].d
    int64_t rbx = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    uint64_t r8_1 = zx.q((r9_2 + 0x1f) u>> 5)
    int64_t rax_4 = rbx
    
    if (rbx s< r8_1)
        while (*(r11_1 + (rax_4 << 2)) == 0xffffffff)
            rbx = zx.q(rbx.d + 1)
            rax_4 += 1
            
            if (rax_4 s>= r8_1)
                break
    
    int64_t rax_5
    int32_t rax_7
    int32_t rcx
    
    if (rbx.d s< r8_1.d)
        rax_5 = sx.q(rbx.d)
        rcx = *(r11_1 + (rax_5 << 2))
        rax_7 = not.d(rcx)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_forward(rax_7)
        rbx_2 = (rbx.d << 5) + temp0_2
    
    if (rbx.d s>= r8_1.d || rbx_2 s>= r9_2)
        rbx_2 = -1
    else
        *(r11_1 + (rax_5 << 2)) = rcx | (neg.d(rax_7) & rax_7)
    
    *arg3 = rbx_2 + 1
    int64_t r8_3 = *arg1
    int32_t* rdx_7 = (sx.q(rbx_2) << 7) + r8_3
    
    if (arg1[6].d == rbx_2)
        arg1[6].d = rdx_7[1]
    
    int64_t rax_11 = sx.q(rdx_7[1])
    
    if (rax_11.d s>= 0)
        *((rax_11 << 7) + r8_3) = *rdx_7
        r8_3 = *arg1
    
    int64_t rax_13 = sx.q(*rdx_7)
    
    if (rax_13.d s>= 0)
        *((rax_13 << 7) + r8_3 + 4) = rdx_7[1]
    
    *(arg1 + 0x34) -= 1

*(result + 8) = (sx.q(rbx_2) << 7) + *arg1
*result = rbx_2
return result
