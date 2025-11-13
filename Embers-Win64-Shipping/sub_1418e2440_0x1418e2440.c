// 函数: sub_1418e2440
// 地址: 0x1418e2440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_1

if (*(arg1 + 0xf8) == *(arg1 + 0x124))
labelid_6:
    rcx_1 = nullptr
else
    void* r9_1 = *(arg1 + 0x130)
    void* r11_1 = arg1 + 0x128
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_2 = *(r11_1 + (((sx.q(*(arg1 + 0x138)) - 1) & sx.q(arg3)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_1418e24b0:
        rcx_1 = nullptr
    else
        int64_t r9_2 = *(arg1 + 0xf0)
        
        while (true)
            int64_t rdx = sx.q(rax_2) * 3
            rcx_1 = r9_2 + (rdx << 3)
            
            if (*(r9_2 + (rdx << 3)) == arg3)
                break
            
            rax_2 = *(rcx_1 + 0x10)
            
            if (rax_2 == 0xffffffff)
                goto label_1418e24b0_1
        
        if (rax_2 == 0xffffffff)
        label_1418e24b0_1:
            rcx_1 = nullptr

void* rax_3 = rcx_1 + 8

if (rcx_1 == 0)
    rax_3 = nullptr

if (rax_3 != 0)
    return *rax_3

int32_t rax_5 = *(arg1 + 0x140)
int32_t arg_8 = arg3
int32_t var_28 = rax_5
int64_t result = sub_1418ddce0(arg2, arg1 + 0x158, *(arg1 + 0x144), arg1 + 0x20)
sub_141000b00(arg1 + 0xf0, &arg_8, &result)
return result
