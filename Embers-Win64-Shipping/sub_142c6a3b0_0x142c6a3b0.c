// 函数: sub_142c6a3b0
// 地址: 0x142c6a3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *arg3 = arg2
    return 0

int128_t var_18 = data_14401b0d0
int64_t* rax_1 = sub_142c6a240(&var_18, arg2)
int64_t rax_2 = *arg1
int64_t rcx_1 = rax_1[4]

if (rax_2 s>= rcx_1)
    if (rax_2 s> rcx_1)
    label_142c6a414:
        int64_t* rax_4 = rax_1[2]
        
        if (rax_4 == rax_1)
            int64_t rax_5 = rax_1[1]
            *arg3 = rax_1
            return rax_5
        
        *(rax_4 + 0x20) = *(rax_1 + 0x20)
        rax_4[1] = rax_1[1]
        *rax_4 = *rax_1
        rax_4[3] = rax_1[3]
        *(rax_1[3] + 0x10) = rax_4
        *arg3 = rax_1
        return rax_4
    
    int32_t rcx_2 = arg1[1].d
    int32_t r8 = rax_1[5].d
    
    if (rcx_2 u>= r8)
        int32_t rax_3
        rax_3.b = rcx_2 u> r8
        
        if (rax_3 s>= 0)
            goto label_142c6a414

*arg3 = 0
return rax_1
