// 函数: sub_140633dc0
// 地址: 0x140633dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = 0
int64_t var_70 = 0
sub_1405947f0(&var_78, 0x11)
int32_t rdi = var_70.d + 0x11
var_70.d = rdi

if (rdi s> 0)
    sub_140594770(&var_78)
    rdi = var_70.d

int64_t r13 = var_78
sub_1405a7220(r13, 0x11, "r.FullScreenMode", 0x11, 0x3f)
int64_t var_48 = 0
int32_t i = 0
int32_t var_38 = 0xffffffff
void* result = sub_140d3cc80(sub_14256a090(), &var_48, 1, 0x10, 0)
int32_t result_1 = var_38 + 1
int64_t rdx_2 = var_48
int32_t result_2 = result_1

if (result_1 s< i)
    do
        result = sx.q(result_1)
        
        if (*(rdx_2 + (result << 3)) != 0)
            break
        
        result = zx.q(result_1 + 1)
        result_2 = result.d
        result_1 = result.d
    while (result.d s< i)

if (result_1 s>= 0 && result_1 s< i)
    int64_t var_88 = 0
    int64_t var_80_1 = 0
    sub_1405947f0(&var_88, 2)
    int32_t r14_1 = var_80_1:4.d
    int32_t rbx_1 = var_80_1.d + 2
    var_80_1.d = rbx_1
    
    if (rbx_1 s> r14_1)
        sub_140594770(&var_88)
        r14_1 = var_80_1:4.d
        rbx_1 = var_80_1.d
    
    int64_t r15_1 = var_88
    sub_1405a7220(r15_1, 2, &(*U""\tv 0")[3], 2, 0x3f)
    int64_t* rsi_1 = *(var_48 + (sx.q(result_2) << 3))
    int64_t var_98 = 0
    int64_t var_90_1 = 0
    sub_140a20c40(&var_98, zx.d(arg1))
    int32_t r12_1 = 1
    int64_t rdi_1
    
    if (rdi s> 1)
        int32_t rbx_2
        
        if (rbx_1 == 0)
            rbx_2 = 0
        else
            rbx_2 = rbx_1 - 1
        
        int32_t rax_2
        
        if (rdi != 0 || rbx_2 == 0)
            rax_2 = 0
        else
            rax_2 = 1
        
        var_88 = 0
        int32_t rcx_10 = rax_2 + rbx_2
        var_80_1.d = rdi
        
        if (rdi != 0 || rcx_10 != 0)
            sub_1405a4c70(&var_88, rdi + rcx_10, 0)
            memcpy(var_88, r13, rdi * 2)
        else
            var_80_1:4.d = rcx_10
        
        sub_140a20ba0(&var_88, r15_1, rbx_2)
        rdi_1 = var_88
        rbx_1 = var_80_1.d
        r14_1 = var_80_1:4.d
        var_88 = 0
        int64_t var_80_2 = 0
    else
        rdi_1 = r15_1
        r15_1 = 0
    
    int64_t var_68
    int32_t rax_5
    
    if (rbx_1 s> 1)
        int32_t rsi_2 = var_90_1.d
        int32_t rsi_3
        
        if (rsi_2 == 0)
            rsi_3 = 0
        else
            rsi_3 = rsi_2 - 1
        
        if (rbx_1 != 0 || rsi_3 == 0)
            r12_1 = 0
        
        var_78 = rdi_1
        int32_t rdx_9 = r12_1 + rbx_1 + rsi_3
        var_70.d = rbx_1
        var_70:4.d = r14_1
        
        if (rdx_9 s> r14_1)
            sub_1405947f0(&var_78, rdx_9)
        
        sub_140a20ba0(&var_78, var_98, rsi_3)
        rdi_1 = 0
        var_68 = var_78
        int32_t var_60_2 = var_70.d
        rax_5 = var_70:4.d
        int64_t var_70_1 = 0
        var_78 = 0
    else
        var_68 = var_98
        int32_t var_60_1 = var_90_1.d
        rax_5 = var_90_1:4.d
        int64_t var_90_2 = 0
        var_98 = 0
    
    int32_t var_5c_1 = rax_5
    int64_t r9_1
    r9_1.b = 1
    int64_t var_58
    result = (*(*rsi_1 + 0xc20))(rsi_1, &var_58, &var_68, r9_1)
    int64_t rcx_17 = var_58
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = var_68
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
    
    if (rdi_1 != 0)
        result = sub_140a74f90(rdi_1)
    
    int64_t rcx_20 = var_98
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)
    
    int64_t rcx_22 = var_48
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)
else if (rdx_2 != 0)
    result = sub_140a74f90(rdx_2)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
