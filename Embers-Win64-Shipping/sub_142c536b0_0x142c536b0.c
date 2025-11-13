// 函数: sub_142c536b0
// 地址: 0x142c536b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 != 0xbab1e)
    return 1

if (arg2 == 0 || arg2[0x9f8].d != 0xc0dedbad)
    return 2

if (arg2[0x18] != 0)
    int32_t rcx = arg2[9].d
    int64_t* rax_1 = arg2[2]
    int64_t r14
    r14.b = rcx s< 0x11
    int64_t rbp
    
    if (rax_1 == 0 || *rax_1 != arg2)
        rbp.b = 0
    else
        rbp.b = 1
    
    if (rcx s< 0x11)
        arg1[7] -= 1
        sub_142c53000(arg1)
    
    int64_t** rcx_2 = arg2[2]
    
    if (rcx_2 != 0 && arg2[9].d - 0xa u<= 6)
        *rcx_2 = arg2
        sub_142c65340(arg2[2], 2)
        rbp.b = 1
    
    int512_t zmm2_1 = sub_142c52c50(arg2)
    
    if (arg2[0x17].d == 2)
        arg2[0x16] = 0
        arg2[0x17].d = 0
    
    void* rdx = arg2[2]
    
    if (rdx != 0)
        if (rbp.b == 0)
            sub_142c5cc40(arg2, rdx)
        else
            sub_142c53be0(&arg2[2], *(arg2 + 0x4c), r14.b, zmm2_1)
    
    sub_142c6ea40(&arg2[0x9d4])
    sub_142c69e80(&arg2[0x983], 0)
    arg2[0x149] = 0
    arg2[9].d = 0x11
    sub_142c553a0(arg1, arg2)
    int64_t* rax_4 = arg2[2]
    
    if (rax_4 != 0)
        *rax_4 = 0
        arg2[2] = 0
    
    arg2[0x18] = 0
    
    for (int64_t* i = *(arg1 + 0x20); i != 0; i = i[2])
        if (*(*i + 0x20) == arg2)
            sub_142c6a090(&arg1[8], i, 0)
            break
    
    int64_t* rcx_11 = arg2[1]
    int64_t rax_6 = *arg2
    
    if (rcx_11 == 0)
        *(arg1 + 8) = rax_6
    else
        *rcx_11 = rax_6
    
    void* rcx_12 = *arg2
    int64_t rax_7 = arg2[1]
    
    if (rcx_12 != 0)
        *(rcx_12 + 8) = rax_7
        arg1[6] -= 1
        sub_142c556d0(arg1)
        return 0
    
    arg1[6] -= 1
    *(arg1 + 0x10) = rax_7
    sub_142c556d0(arg1)

return 0
