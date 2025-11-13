// 函数: sub_141446860
// 地址: 0x141446860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_10 = arg2

if (arg3 == 0)
    return 

void* const rcx_2

if (arg1[2].d == *(arg1 + 0x3c))
label_1414468e0:
    rcx_2 = nullptr
else
    void* r9_1 = &arg1[8]
    void* rcx = arg1[9]
    
    if (rcx != 0)
        r9_1 = rcx
    
    int32_t rax_3 = *(r9_1 + (((sx.q(arg1[0xa].d) - 1) & sx.q(arg2)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_1414468e0_1:
        rcx_2 = nullptr
    else
        int64_t r9_2 = arg1[1]
        
        while (true)
            int64_t r8_3 = sx.q(rax_3) * 5
            rcx_2 = r9_2 + (r8_3 << 3)
            
            if (*(r9_2 + (r8_3 << 3)) == arg2)
                break
            
            rax_3 = *(rcx_2 + 0x20)
            
            if (rax_3 == 0xffffffff)
                goto label_1414468e0_2
        
        if (rax_3 == 0xffffffff)
        label_1414468e0_2:
            rcx_2 = nullptr

void* rbx_1 = rcx_2 + 8

if (rcx_2 == 0)
    rbx_1 = nullptr

if (rbx_1 == 0)
    int64_t var_28
    __builtin_memset(&var_28, 0, 0x18)
    void* rax_4 = sub_141435700(&arg1[1], &arg_10, &var_28)
    int64_t rcx_4 = var_28
    rbx_1 = rax_4
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    void* r9_3 = *arg1
    int32_t* r10_1 = *(r9_3 + 0xe38)
    int32_t* rdx_1 = r10_1
    void* r8_5 = &r10_1[sx.q(*(r9_3 + 0xe40))]
    
    if (r10_1 != r8_5)
        do
            if (*rdx_1 == arg_10)
                int32_t rdx_3 = ((rdx_1 - r10_1) s>> 2).d
                
                if (rdx_3 s>= 0 && rdx_3 s< *(r9_3 + 0xdc0))
                    *(rbx_1 + 0x10) = *(*(r9_3 + 0xdb8) + (sx.q(rdx_3) << 3))
                
                break
            
            rdx_1 = &rdx_1[1]
        while (rdx_1 != r8_5)

int64_t arg_20 = arg3
sub_1405a7050(rbx_1, &arg_20)
