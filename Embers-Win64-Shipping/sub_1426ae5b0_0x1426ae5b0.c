// 函数: sub_1426ae5b0
// 地址: 0x1426ae5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg4
int32_t i = 0
int32_t arg_8 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int64_t var_48

if (0 u< *(arg1 + 0x28))
    do
        sub_140a2e390(&var_48, u"%X", zx.q(*rdi))
        int32_t var_40
        int32_t r8_2
        
        if (var_40 == 0)
            r8_2 = 0
        else
            r8_2 = var_40 - 1
        
        sub_140a20ba0(&var_38, var_48, r8_2)
        int64_t rcx_2 = var_48
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        i += 1
        rdi = &rdi[1]
    while (i s< zx.d(*(arg1 + 0x28)))

int64_t var_58
int64_t* rcx_6
int32_t rbx
int64_t rsi_1

if (0 u>= *(arg1 + 0x28) || var_30 == 0 || var_30 == 1)
    var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 6)
    int32_t rax_7 = var_50_1 + 6
    var_50_1 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_58)
    
    sub_1405a7220(var_58, 6, "empty", 6, 0x3f)
    rsi_1 = var_58
    rcx_6 = &var_58
    rbx = 4
else
    rbx = 3
    var_58 = 0
    int64_t var_50 = 0
    sub_1405947f0(&var_58, 3)
    int32_t r15_1 = var_50:4.d
    int32_t rdi_1 = var_50.d + 3
    var_50.d = rdi_1
    
    if (rdi_1 s> r15_1)
        sub_140594770(&var_58)
        r15_1 = var_50:4.d
        rdi_1 = var_50.d
    
    rsi_1 = var_58
    sub_1405a7220(rsi_1, 3, "0x", 3, 0x3f)
    
    if (rdi_1 s> 1)
        int32_t r14_3
        
        if (var_30 == 0)
            r14_3 = 0
        else
            r14_3 = var_30 - 1
        
        int32_t rax_3
        
        if (rdi_1 == 0)
            rax_3 = rdi_1 + 1
        
        if (rdi_1 != 0 || r14_3 == 0)
            rax_3 = 0
        
        var_58 = rsi_1
        int32_t rdx_5 = rax_3 + rdi_1 + r14_3
        var_50.d = rdi_1
        var_50:4.d = r15_1
        rsi_1 = 0
        
        if (rdx_5 s> r15_1)
            sub_1405947f0(&var_58, rdx_5)
        
        sub_140a20ba0(&var_58, var_38, r14_3)
        rcx_6 = &var_48
        var_48 = var_58
        int32_t var_40_2 = var_50.d
        int32_t var_3c_2 = var_50:4.d
    else
        int64_t r14_1 = var_38
        var_48 = 0
        int32_t var_40_1 = var_30
        
        if (var_30 != 0)
            sub_1405a4c70(&var_48, var_30, 0)
            memcpy(var_48, r14_1, var_30 * 2)
            rcx_6 = &var_48
        else
            rcx_6 = &var_48
            int32_t var_3c_1 = 0

*arg2 = *rcx_6
*rcx_6 = 0
arg2[1].d = rcx_6[1].d
int32_t rax_10 = *(rcx_6 + 0xc)
rcx_6[1] = 0
*(arg2 + 0xc) = rax_10

if ((rbx.b & 4) != 0)
    int64_t rcx_14 = var_58
    rbx &= 0xfffffffb
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

if ((rbx.b & 2) != 0)
    int64_t rcx_15 = var_48
    rbx &= 0xfffffffd
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rbx.b & 1) != 0 && rsi_1 != 0)
    sub_140a74f90(rsi_1)

int64_t rcx_17 = var_38

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg2
