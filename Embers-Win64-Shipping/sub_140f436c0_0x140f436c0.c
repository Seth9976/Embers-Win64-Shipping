// 函数: sub_140f436c0
// 地址: 0x140f436c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *(arg1 + 0x4b8) + 0x2a8
void* rax_6

if ((**rcx_1)(rcx_1) == 0)
    int128_t* rcx_8
    
    if (*(arg1 + 0x5d0) == 0)
        rcx_8 = *(arg1 + 0x6f0) + 0x288
    else
        rcx_8 = sub_140e11270(arg1 + 0x5a8, arg3)
    
    *arg2 = *rcx_8
    arg2[1].b = rcx_8[1].b
    *(arg2 + 0x18) = *(rcx_8 + 0x18)
    rax_6 = rcx_8[2].q
else
    void* rcx_2
    
    if (*(arg1 + 0x650) != 0)
        rcx_2 = arg1 + 0x628
    label_140f4370d:
        int128_t* rax_2 = sub_140e11270(rcx_2, arg3)
        *arg2 = *rax_2
        arg2[1].b = rax_2[1].b
        *(arg2 + 0x18) = *(rax_2 + 0x18)
        void* rcx_5 = rax_2[2].q
        arg2[2].q = rcx_5
        
        if (rcx_5 == 0)
            return arg2
        
        *(rcx_5 + 8) += 1
        return arg2
    
    if (*(arg1 + 0x5d0) != 0)
        rcx_2 = arg1 + 0x5a8
        goto label_140f4370d
    
    void* rcx_6 = *(arg1 + 0x6f0)
    *arg2 = *(rcx_6 + 0x2d8)
    arg2[1].b = *(rcx_6 + 0x2e8)
    *(arg2 + 0x18) = *(rcx_6 + 0x2f0)
    rax_6 = *(rcx_6 + 0x2f8)

arg2[2].q = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

return arg2
