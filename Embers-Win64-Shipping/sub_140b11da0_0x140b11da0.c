// 函数: sub_140b11da0
// 地址: 0x140b11da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg1 = 0
arg1[1] = 0
int32_t rax = arg3[1].d
int32_t rdx = rax - 1

if (rax == 0)
    rdx = 0

if (rdx == 0)
label_140b11e35:
    
    if (arg1 != arg2)
        int64_t rcx_1 = *arg1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg1 = *arg2
        *arg2 = 0
        arg1[1].d = arg2[1].d
        *(arg1 + 0xc) = *(arg2 + 0xc)
        arg2[1] = 0
    
    int32_t rax_9 = arg3[1].d
    int32_t r8 = rax_9 - 1
    
    if (rax_9 == 0)
        r8 = 0
    
    sub_140a2cf70(arg1, *arg3, r8)
else
    int16_t* rax_1 = *arg3
    wint_t _C = *rax_1
    
    if (_C != 0x2f)
        if (rdx u< 2)
            goto label_140b11e35
        
        if (_C == 0x5c && rax_1[1] == _C)
            goto label_140b11e05
        
        if (rax_1[1] != 0x3a)
            goto label_140b11e35
        
        if (iswalpha(_C) == 0)
            goto label_140b11e35
    
label_140b11e05:
    
    if (arg1 != arg3)
        int64_t rcx = *arg1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *arg1 = *arg3
        *arg3 = 0
        arg1[1].d = arg3[1].d
        *(arg1 + 0xc) = *(arg3 + 0xc)
        arg3[1] = 0

sub_140a306e0(arg1, &(*U"{}[\nt")[3], &data_142d5a024, 0)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(arg1)
int32_t rax_10 = arg1[1].d
int32_t rcx_5 = rax_10 - 1

if (rax_10 == 0)
    rcx_5 = 0

if (rcx_5 == 0 && *arg1 != &data_142d5a024)
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 2)
        sub_1405947f0(arg1, rcx_5 + 2)
        rdi = arg1[1].d
    
    arg1[1].d = rdi + 2
    
    if (rdi + 2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    **arg1 = 0x2f

return arg1
