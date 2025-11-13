// 函数: sub_14081faa0
// 地址: 0x14081faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = arg2
int32_t var_24 = arg3
int32_t arg_10 = 0xffffffff
int32_t r10_2 = (arg3 - arg4) ^ arg4 u>> 0xd
int32_t rcx_2 = (0x9e3779b9 - r10_2 - arg4) ^ r10_2 << 8
int32_t r11_3 = (arg4 - rcx_2 - r10_2) ^ rcx_2 u>> 0xd
int32_t r10_5 = (r10_2 - rcx_2 - r11_3) ^ r11_3 u>> 0xc
int32_t rcx_5 = (rcx_2 - r10_5 - r11_3) ^ r10_5 << 0x10
int32_t r11_6 = (r11_3 - rcx_5 - r10_5) ^ rcx_5 u>> 5
int32_t r10_8 = (r10_5 - rcx_5 - r11_6) ^ r11_6 u>> 3
int32_t rcx_8 = (rcx_5 - r10_8 - r11_6) ^ r10_8 << 0xa
int32_t r11_9 = (r11_6 - rcx_8 - r10_8) ^ rcx_8 u>> 0xf
int32_t rcx_12 = (arg2 - r11_9) ^ r11_9 u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - rcx_12 - r11_9) ^ rcx_12 << 8
int32_t r11_12 = (r11_9 - rdx_2 - rcx_12) ^ rdx_2 u>> 0xd
int32_t rcx_15 = (rcx_12 - rdx_2 - r11_12) ^ r11_12 u>> 0xc
int32_t rdx_5 = (rdx_2 - rcx_15 - r11_12) ^ rcx_15 << 0x10
int32_t r11_15 = (r11_12 - rdx_5 - rcx_15) ^ rdx_5 u>> 5
int32_t rcx_18 = (rcx_15 - rdx_5 - r11_15) ^ r11_15 u>> 3
int32_t rdx_8 = (rdx_5 - rcx_18 - r11_15) ^ rcx_18 << 0xa
int32_t r11_18 = (r11_15 - rdx_8 - rcx_18) ^ rdx_8 u>> 0xf
void* rsi_1

if (*(arg1 + 0x78) == *(arg1 + 0xa4))
label_14081fc52:
    rsi_1 = sub_140812c20(arg1 + 0x70, r11_18, &var_28, &arg_10)
else
    void* r8 = arg1 + 0xa8
    void* rcx_19 = *(r8 + 8)
    
    if (rcx_19 != 0)
        r8 = rcx_19
    
    int32_t rax_34 = *(r8 + (((sx.q(*(arg1 + 0xb8)) - 1) & sx.q(r11_18)) << 2))
    
    if (rax_34 == 0xffffffff)
    label_14081fc52_1:
        rsi_1 = sub_140812c20(arg1 + 0x70, r11_18, &var_28, &arg_10)
    else
        int64_t r8_1 = *(arg1 + 0x70)
        void* rcx_21
        
        while (true)
            int64_t rdx_13 = sx.q(rax_34) * 3
            rcx_21 = r8_1 + (rdx_13 << 3)
            
            if (*(r8_1 + (rdx_13 << 3)) == arg2 && *(rcx_21 + 4) == arg3 && *(rcx_21 + 8) == arg4)
                break
            
            rax_34 = *(rcx_21 + 0x10)
            
            if (rax_34 == 0xffffffff)
                goto label_14081fc52_2
        
        if (rax_34 == 0xffffffff || rcx_21 == 0)
        label_14081fc52_2:
            rsi_1 = sub_140812c20(arg1 + 0x70, r11_18, &var_28, &arg_10)
        else
            rsi_1 = rcx_21 + 0xc

int32_t rax_41 = *rsi_1

if (rax_41 != 0xffffffff)
    return rax_41

if (*(arg1 + 0x68) s>= *(arg1 + 0x58))
    return -1

int64_t rbp = sx.q(*(arg1 + 0x68))
int32_t rax_37 = (rbp + 1).d
*(arg1 + 0x68) = rax_37

if (rax_37 s> *(arg1 + 0x6c))
    sub_14083a7e0(arg1 + 0x60)

int64_t rax_38 = *(arg1 + 0x60)
int64_t rcx_25 = rbp * 3
*(rax_38 + (rcx_25 << 2)) = var_28.q
*(rax_38 + (rcx_25 << 2) + 8) = arg4
int32_t rax_40 = ((zx.q(*(arg1 + 0x68) * 5) << 2) + -0xffffffffffffffec).d
*rsi_1 = rax_40
return rax_40
