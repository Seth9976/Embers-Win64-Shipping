// 函数: sub_141901110
// 地址: 0x141901110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efbb80)
void* var_28 = arg2
uint32_t r10_1 = (arg2 u>> 4).d
int32_t var_20 = arg4
int32_t var_1c = arg3
int32_t r11_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t r9_2 = neg.d(r11_1 + r10_1) ^ r11_1 u>> 0xd
int32_t r10_4 = (r10_1 - r11_1 - r9_2) ^ r9_2 u>> 0xc
int32_t r11_4 = (r11_1 - r10_4 - r9_2) ^ r10_4 << 0x10
int32_t r9_5 = (r9_2 - r11_4 - r10_4) ^ r11_4 u>> 5
int32_t r10_7 = (r10_4 - r11_4 - r9_5) ^ r9_5 u>> 3
int32_t r11_7 = (r11_4 - r10_7 - r9_5) ^ r10_7 << 0xa
int32_t r9_9 = (r9_5 - r11_7 - r10_7) ^ (arg4 << 8 ^ arg3) << 8 ^ r11_7 u>> 0xf
void* r14

if (data_1439c7368 == data_1439c7394)
label_141901259:
    r14 = sub_1418f0bc0(&data_1439c7360, r9_9, &var_28)
else
    void* rcx = data_1439c73a0
    void* rax_20 = &data_1439c7398
    
    if (rcx != 0)
        rax_20 = rcx
    
    int32_t rax_21 = *(rax_20 + (((sx.q(data_1439c73a8) - 1) & sx.q(r9_9)) << 2))
    
    if (rax_21 == 0xffffffff)
    label_141901259_1:
        r14 = sub_1418f0bc0(&data_1439c7360, r9_9, &var_28)
    else
        int64_t* rcx_3
        
        while (true)
            rcx_3 = (sx.q(rax_21) << 5) + data_1439c7360
            
            if (*rcx_3 == arg2 && rcx_3[1].d == arg4 && *(rcx_3 + 0xc) == arg3)
                break
            
            rax_21 = rcx_3[3].d
            
            if (rax_21 == 0xffffffff)
                goto label_141901259_2
        
        if (rax_21 == 0xffffffff || rcx_3 == 0)
        label_141901259_2:
            r14 = sub_1418f0bc0(&data_1439c7360, r9_9, &var_28)
        else
            r14 = &rcx_3[2]

LeaveCriticalSection(&data_143efbb80)
int32_t arg_18 = 0
*arg5 = 0
sub_1418fb3d0(arg2 + 0x78, arg4.b, &arg_18)
sub_1418fb480(arg2 + 0x78, arg4.b, arg5)
void*** rax_23 = sub_1418ba820(*(arg1 + 0x58) + 0x3f0, arg_18, 1, 4)
*r14 = rax_23
void* rcx_8 = rax_23[2]
return zx.q(*(rcx_8 + 0x24)) + *(*(rcx_8 + 0x28) + 0x18)
