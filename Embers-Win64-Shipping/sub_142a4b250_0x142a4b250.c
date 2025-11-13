// 函数: sub_142a4b250
// 地址: 0x142a4b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rbx_1 = zx.q(arg3)

if (rbx_1.d == 0 || rbx_1.d s< 0xffffffff)
    return 

if (rbx_1.d == 0xffffffff)
    rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)

int32_t arg_10 = 0
int64_t* rax_2
int512_t zmm1_1

if (arg4 == 0)
    int64_t* rax_1 = sub_142a91fe0()
    int32_t rcx = 1
    char rdx = *rax_1
    int32_t rdx_1
    bool cond:2_1
    
    if (rdx != 0x55)
        if (rdx == 0x75 && *(rax_1 + 1) == 0x74)
            cond:2_1 = *(rax_1 + 2) == 0x66
            goto label_142a4b2d3
        
        rdx_1 = 0
    else if (*(rax_1 + 1) != 0x54)
        rdx_1 = 0
    else
        cond:2_1 = *(rax_1 + 2) == 0x46
    label_142a4b2d3:
        rdx_1 = 1
        
        if (not(cond:2_1))
            rdx_1 = 0
    
    if (rdx_1 == 0)
        rax_2, zmm1_1 = sub_142a92570(&arg_10)
        goto label_142a4b3ae
    
    char rdx_2 = *(rax_1 + 3)
    bool cond:4_1
    
    if (rdx_2 == 0x2d)
        if (*(rax_1 + 4) == 0x38)
            cond:4_1 = *(rax_1 + 5) == 0
            goto label_142a4b2fb
        
        rcx = 0
    else if (rdx_2 != 0x38)
        rcx = 0
    else
        cond:4_1 = *(rax_1 + 4) == 0
    label_142a4b2fb:
        
        if (not(cond:4_1))
            rcx = 0
    
    if (rcx == 0)
        rax_2, zmm1_1 = sub_142a92570(&arg_10)
        goto label_142a4b3ae
    
    char* var_28 = arg2
    int32_t var_20_1 = rbx_1.d
    var_28.o = var_28.o
    sub_142a4ab90(arg1, &var_28)
else if (*arg4 != 0)
    rax_2, zmm1_1 = sub_142a84e10(arg4, &arg_10)
label_142a4b3ae:
    
    if (arg_10 s> 0)
        sub_142a4ab40(arg1)
    else
        sub_142a4b410(arg1, arg2, rbx_1.d, rax_2, &arg_10)
        
        if (arg_10 s> 0)
            sub_142a4ab40(arg1)
        
        if (arg4 != 0)
            sub_142a84ad0(rax_2, zmm1_1)
        else
            sub_142a925f0(rax_2, zmm1_1)
else if (sub_142a487e0(arg1, rbx_1.d, rbx_1.d, 0, 0, 0) == 0)
    sub_142a4ab40(arg1)
else
    void* rdx_5 = arg1 + 0xa
    
    if ((*(arg1 + 8) & 2) == 0)
        rdx_5 = *(arg1 + 0x18)
    
    sub_142a8d750(arg2, rdx_5, rbx_1.d)
    
    if (rbx_1.d s> 0x3ff)
        *(arg1 + 8) |= 0xffe0
        *(arg1 + 0xc) = rbx_1.d
    else
        *(arg1 + 8) &= 0x1f
        rbx_1.w <<= 5
        *(arg1 + 8) |= rbx_1.w
