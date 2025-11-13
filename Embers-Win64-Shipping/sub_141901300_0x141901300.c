// 函数: sub_141901300
// 地址: 0x141901300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efbb80)
int32_t arg_28
int32_t rsi = arg_28
uint32_t r8_1 = (arg2 u>> 4).d
void* var_18 = arg2
int32_t var_10 = rsi
int32_t r9_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t var_c = 0
int32_t r10_2 = neg.d(r9_1 + r8_1) ^ r9_1 u>> 0xd
int32_t r8_4 = (r8_1 - r9_1 - r10_2) ^ r10_2 u>> 0xc
int32_t r9_4 = (r9_1 - r8_4 - r10_2) ^ r8_4 << 0x10
int32_t r10_5 = (r10_2 - r9_4 - r8_4) ^ r9_4 u>> 5
int32_t r8_7 = (r8_4 - r9_4 - r10_5) ^ r10_5 u>> 3
int32_t r9_7 = (r9_4 - r8_7 - r10_5) ^ r8_7 << 0xa
int32_t r10_9 = (r10_5 - r9_7 - r8_7) ^ r9_7 u>> 0xf ^ rsi << 0x10
void* r14

if (data_1439c7368 == data_1439c7394)
label_14190144a:
    r14 = sub_1418f0bc0(&data_1439c7360, r10_9, &var_18)
else
    void* rcx = data_1439c73a0
    void* rax_18 = &data_1439c7398
    
    if (rcx != 0)
        rax_18 = rcx
    
    int32_t rax_19 = *(rax_18 + (((sx.q(data_1439c73a8) - 1) & sx.q(r10_9)) << 2))
    
    if (rax_19 == 0xffffffff)
    label_14190144a_1:
        r14 = sub_1418f0bc0(&data_1439c7360, r10_9, &var_18)
    else
        int64_t* rcx_3
        
        while (true)
            rcx_3 = (sx.q(rax_19) << 5) + data_1439c7360
            
            if (*rcx_3 == arg2 && rcx_3[1].d == rsi && *(rcx_3 + 0xc) == 0)
                break
            
            rax_19 = rcx_3[3].d
            
            if (rax_19 == 0xffffffff)
                goto label_14190144a_2
        
        if (rax_19 == 0xffffffff || rcx_3 == 0)
        label_14190144a_2:
            r14 = sub_1418f0bc0(&data_1439c7360, r10_9, &var_18)
        else
            r14 = &rcx_3[2]

LeaveCriticalSection(&data_143efbb80)
arg_28 = 0
*arg3 = 0
sub_1418fb3d0(arg2 + 0x70, rsi.b, &arg_28)
sub_1418fb480(arg2 + 0x70, rsi.b, arg3)
void*** rax_21 = sub_1418ba820(*(arg1 + 0x58) + 0x3f0, arg_28, 1, 4)
*r14 = rax_21
void* rcx_8 = rax_21[2]
return zx.q(*(rcx_8 + 0x24)) + *(*(rcx_8 + 0x28) + 0x18)
