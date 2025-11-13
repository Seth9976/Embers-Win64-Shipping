// 函数: sub_1426ada60
// 地址: 0x1426ada60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint64_t var_68
int64_t var_58
int64_t var_48
int64_t var_38
int64_t rax_5
int64_t* rcx_6
int32_t rbx_1

if (arg2 == 0)
    int64_t var_50_1 = 0
    rcx_6 = &var_58
    rbx_1 = 8
    rax_5 = 0
else
    int16_t r15_1 = *(arg2 + 0x50)
    int64_t* rax = sub_1426b2b50(arg2, &var_38)
    int16_t* const rsi_1 = &data_142d40450
    
    if (rax[1].d != 0)
        *rax
    
    void* rax_1 = *(arg2 + 0x40)
    int32_t var_60
    
    if (rax_1 != 0)
        arg_8.q = *(rax_1 + 0x18)
        sub_140b63b70(&arg_8, &var_68)
    else
        var_68 = 0
        var_60 = 0
        sub_1405947f0(&var_68, (rax_1 + 5).d)
        int32_t rax_2 = var_60 + 5
        var_60 = rax_2
        int32_t var_5c
        
        if (rax_2 s> var_5c)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, u"None", 0xa)
    
    if (var_60 != 0)
        rsi_1 = var_68
    
    uint32_t var_78_1 = zx.d(r15_1)
    sub_140a2e390(&var_48, u"%s::%s[%d]", rsi_1)
    rax_5 = var_48
    rcx_6 = &var_48
    rbx_1 = 7

*arg1 = rax_5
*rcx_6 = 0
arg1[1].d = rcx_6[1].d
int32_t rax_7 = *(rcx_6 + 0xc)
rcx_6[1] = 0
*(arg1 + 0xc) = rax_7

if ((rbx_1.b & 8) != 0)
    int64_t rcx_7 = var_58
    rbx_1 &= 0xfffffff7
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx_1.b & 4) != 0)
    int64_t rcx_8 = var_48
    rbx_1 &= 0xfffffffb
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rbx_1.b & 2) != 0)
    uint64_t rcx_9 = var_68
    rbx_1 &= 0xfffffffd
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if ((rbx_1.b & 1) != 0)
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

return arg1
