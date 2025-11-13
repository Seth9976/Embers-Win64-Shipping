// 函数: sub_141a4c290
// 地址: 0x141a4c290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
int32_t rsi = *arg4
int128_t var_38 = *arg3
int32_t* rdx_3

if (rax == *(arg1 + 0x4c))
label_141a4c3e5:
    rdx_3 = nullptr
else
    int32_t rax_1 = sub_140a6b260(&var_38, 0x10)
    void* rdx = *(arg1 + 0x58)
    void* r8 = arg1 + 0x50
    int32_t r10_3 = (rax_1 - rsi) ^ rsi u>> 0xd
    int32_t r9_2 = (0x9e3779b9 - r10_3 - rsi) ^ r10_3 << 8
    int32_t rsi_3 = (rsi - r9_2 - r10_3) ^ r9_2 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_2 - rsi_3) ^ rsi_3 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_6 - rsi_3) ^ r10_6 << 0x10
    int32_t rsi_6 = (rsi_3 - r9_5 - r10_6) ^ r9_5 u>> 5
    int32_t r10_9 = (r10_6 - r9_5 - rsi_6) ^ rsi_6 u>> 3
    int32_t r9_8 = (r9_5 - r10_9 - rsi_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_18 = *(r8
        + (((sx.q(rsi_6 - r9_8 - r10_9) ^ zx.q(r9_8) u>> 0xf) & (sx.q(*(arg1 + 0x60)) - 1)) << 2))
    
    if (rax_18 == 0xffffffff)
    label_141a4c3e5_1:
        rdx_3 = nullptr
    else
        while (true)
            rdx_3 = sx.q(rax_18) * 0x38 + *(arg1 + 0x18)
            
            if (((rdx_3[1] ^ var_38:4.d) | (rdx_3[2] ^ var_38:8.d) | (rdx_3[3] ^ var_38:0xc.d)
                    | (*rdx_3 ^ var_38.d)) == 0 && rdx_3[4] == rsi)
                break
            
            rax_18 = rdx_3[0xc]
            
            if (rax_18 == 0xffffffff)
                goto label_141a4c3e5_2
        
        if (rax_18 == 0xffffffff)
        label_141a4c3e5_2:
            rdx_3 = nullptr

void* rax_19 = &rdx_3[5]

if (rdx_3 == 0)
    rax_19 = nullptr

if (rax_19 != 0)
    *arg2 = *(rax_19 + 0x10)
    return arg2

int32_t arg_c = 0
*arg2 = 0xffffffff.q
return arg2
