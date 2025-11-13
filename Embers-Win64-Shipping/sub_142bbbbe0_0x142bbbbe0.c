// 函数: sub_142bbbbe0
// 地址: 0x142bbbbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t* rdx = *(arg1 + 0x2e0)
int32_t* r9 = rdx

if (rdx != 0 && *rdx == 0)
    r9 = nullptr

int32_t rsi = *(arg3 + 0xc)

if (rsi == 0xb)
    (*(arg3 + 0x10))(arg4, arg2)
    return zx.q(arg2[6])

int32_t rax_2 = *(arg3 + 8) - 2
int32_t rcx_2
void** r8
int32_t* arg_8
void* rax_5

if (rax_2 u> 6)
    rax_5 = &arg1[0x36]
label_142bbbcf2:
    arg_8 = rax_5
    r8 = &arg_8
    rcx_2 = 0
else
    switch (rax_2)
        case 0
            rax_5 = &arg1[0x44]
            goto label_142bbbcf2
        case 1
            rcx_2 = 0
            arg_8 = &arg1[0x36]
            r8 = &arg_8
            
            if (r9 != 0)
                rcx_2 = *r9
                r8 = &r9[0x46]
        case 2
            rcx_2 = 0
            arg_8 = &arg1[0x45]
            r8 = &arg_8
            
            if (r9 != 0)
                rcx_2 = *r9
                r8 = &r9[0x68]
        case 3
            rcx_2 = 0
            arg_8 = &arg1[0x9f]
            r8 = &arg_8
            
            if (r9 != 0)
                rcx_2 = *r9
                r8 = &r9[0x8c]
        case 4
            arg_8 = arg2
            r8 = &arg_8
            rcx_2 = 0
        case 5
            arg_8 = arg1
            r8 = &arg_8
            rcx_2 = 0
        case 6
            arg_8 = rdx
            r8 = &arg_8
            rcx_2 = 0

if (*r8 != 0)
    uint64_t r9_1 = zx.q(rcx_2)
    int32_t rax_9
    
    if (rsi - 9 u<= 1)
        rax_9 = (*(arg2 + 0x88))(arg2, arg3, r8, r9_1, 0)
    else
        rax_9 = (*(arg2 + 0x80))(arg2, arg3, r8, r9_1, 0)
    
    r10 = rax_9

return zx.q(r10)
