// 函数: sub_1414b3280
// 地址: 0x1414b3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    return 

int32_t* rcx_5

if (*(arg3 + 0x1ac0) == *(arg3 + 0x1aec))
label_1414b3304:
    rcx_5 = nullptr
else
    void* r9_1 = arg3 + 0x1af0
    void* r8 = *(r9_1 + 8)
    int64_t r11_1 = sx.q(*(*(arg1 + 0x5c0) + 0x28))
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax = *(r9_1 + (((sx.q(*(arg3 + 0x1b00)) - 1) & r11_1) << 2))
    
    if (rax == 0xffffffff)
    label_1414b3304_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax) * 0x290 + *(arg3 + 0x1ab8)
            
            if (*rcx_5 == r11_1.d)
                break
            
            rax = rcx_5[0xa0]
            
            if (rax == 0xffffffff)
                goto label_1414b3304_2
        
        if (rax == 0xffffffff)
        label_1414b3304_2:
            rcx_5 = nullptr

if (rcx_5[0x9f].b == 0 || (*(rcx_5 + 0x270) == 0 && rcx_5[0x9a] s<= 0))
    return 

int64_t rcx_6 = *(*(rcx_5 + 0x270) + 0x10)
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rbx_3[1]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rbx_3[1]

*(arg2 + 0x30) = rax_3
*rbx_3 = rcx_6
void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_10[5]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_10[5]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
rcx_10[3] = rbx_3
*rcx_10 = &data_142d549c8
rcx_10[2].d = 1
rcx_10[4].d = 0
