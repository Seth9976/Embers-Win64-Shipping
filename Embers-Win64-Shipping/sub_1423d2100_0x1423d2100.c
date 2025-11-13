// 函数: sub_1423d2100
// 地址: 0x1423d2100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4

if (*(arg3 + 0x18) == 0)
label_1423d2152:
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(*(arg3 + 0x28), 0) == 0
    
    if ((*(arg3 + 0x2c) != 0 | rcx_2.b) == 0)
        rax_4 = 0
    else
        void* rax_6 = sub_140d3c6e0(arg3 + 0x20)
        
        if (rax_6 == 0)
            rax_4 = 0
        else if (sub_140d1fd20(rax_6, *(arg3 + 0x28)) == 0)
            rax_4 = 0
        else
            rax_4 = sub_140d3c6e0(arg3 + 0x20)
else
    int64_t* rcx = *(arg3 + 0x10)
    
    if (rcx == 0)
        goto label_1423d2152
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_1423d2152
    
    if (*(arg3 + 0x18) == 0)
        rax_4 = 0
    else
        int64_t* rcx_1 = *(arg3 + 0x10)
        
        if (rcx_1 == 0)
            rax_4 = 0
        else
            rax_4 = (*(*rcx_1 + 8))(rcx_1)

int64_t arg_18 = rax_4
*(arg3 + 0x78) = rax_4
int32_t rax_8 = sub_1423d1830(arg1 + 8, arg3)
int64_t rdx_3 = data_143f5b288 + 1
data_143f5b288 = rdx_3

if (rdx_3 == 0x10000000000)
    rdx_3 = 1

int64_t rdx_5 = rdx_3 << 0x18 | zx.q(rax_8)
*arg2 = rdx_5
*(*(arg1 + 8) + sx.q(rax_8) * 0x90 + 0x70) = rdx_5
int64_t r9 = arg_18

if (r9 != 0)
    uint32_t rcx_11 = (r9 u>> 4).d
    int32_t rdx_7 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
    int32_t r11_3 = neg.d(rdx_7 + rcx_11) ^ rdx_7 u>> 0xd
    int32_t rcx_14 = (rcx_11 - rdx_7 - r11_3) ^ r11_3 u>> 0xc
    int32_t rdx_10 = (rdx_7 - rcx_14 - r11_3) ^ rcx_14 << 0x10
    int32_t r11_6 = (r11_3 - rdx_10 - rcx_14) ^ rdx_10 u>> 5
    int32_t rcx_17 = (rcx_14 - rdx_10 - r11_6) ^ r11_6 u>> 3
    int32_t rdx_13 = (rdx_10 - rcx_17 - r11_6) ^ rcx_17 << 0xa
    int32_t r11_9 = (r11_6 - rdx_13 - rcx_17) ^ rdx_13 u>> 0xf
    int64_t* rax_28
    
    if (*(arg1 + 0xf8) == *(arg1 + 0x124))
    label_1423d22c6:
        rax_28 = sub_1423cce70(arg1 + 0xf0, r11_9, &arg_18)
    else
        void* rcx_18 = *(arg1 + 0x130)
        void* r8 = arg1 + 0x128
        
        if (rcx_18 != 0)
            r8 = rcx_18
        
        int32_t rax_27 = *(r8 + (((sx.q(*(arg1 + 0x138)) - 1) & sx.q(r11_9)) << 2))
        
        if (rax_27 == 0xffffffff)
        label_1423d22c6_1:
            rax_28 = sub_1423cce70(arg1 + 0xf0, r11_9, &arg_18)
        else
            int64_t* rcx_22
            
            while (true)
                rcx_22 = sx.q(rax_27) * 0x60 + *(arg1 + 0xf0)
                
                if (*rcx_22 == r9)
                    break
                
                rax_27 = rcx_22[0xb].d
                
                if (rax_27 == 0xffffffff)
                    goto label_1423d22c6_2
            
            if (rax_27 == 0xffffffff || rcx_22 == 0)
            label_1423d22c6_2:
                rax_28 = sub_1423cce70(arg1 + 0xf0, r11_9, &arg_18)
            else
                rax_28 = &rcx_22[1]
    
    char arg_8
    void arg_10
    sub_1423ccbd0(rax_28, &arg_10, arg2, &arg_8)

return arg2
