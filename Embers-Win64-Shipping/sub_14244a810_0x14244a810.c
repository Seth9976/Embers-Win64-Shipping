// 函数: sub_14244a810
// 地址: 0x14244a810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if (*(arg1 + 0xc8) == 0)
    if (sub_142440650(arg1 + 0xa8, arg2).b != 0)
        sub_14242d040(arg1 + 0xa8, arg2, 1)
    
    return 

int64_t r11_1 = *(arg1 + 0xb8)
int32_t r8_1 = 0
void* arg_18 = arg2
int32_t i = *(arg1 + 0xc0)

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(i)
    int32_t i_1 = (temp2_1 - temp1_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r8_1
    int32_t r10_1 = rax_4 + rcx_1
    void* r9_1 = *(r11_1 + sx.q(rax_4) * 0x10)
    
    if (r9_1 == 0)
        rax_4.b = 0
    else
        rax_4 = *(r9_1 + 0xb4)
        int32_t temp3_1 = *(arg2 + 0xb4)
        
        if (rax_4 != temp3_1)
            rax_4.b = rax_4 s< temp3_1
        else
            rax_4.b = r9_1 u< arg2
    
    if (rax_4.b != 0)
        r8_1 = r10_1

if (r8_1 s>= *(arg1 + 0xc0))
label_14244a8f2:
    char arg_10 = 1
    sub_1424270f0(arg1 + 0xb8, &arg_18, &arg_10)
    return 

int64_t r9_3 = sx.q(r8_1) * 2
void* rax_5 = *(r11_1 + (r9_3 << 3))

if (rax_5 == 0)
    goto label_14244a8f2

int32_t rcx_6 = *(arg2 + 0xb4)
int32_t temp0_1 = *(rax_5 + 0xb4)

if (rcx_6 != temp0_1)
    rax_5.b = rcx_6 s< temp0_1
else
    rax_5.b = arg2 u< rax_5

if (rax_5.b != 0 || r8_1 == 0xffffffff || r11_1 + 8 + (r9_3 << 3) == 0)
    goto label_14244a8f2
