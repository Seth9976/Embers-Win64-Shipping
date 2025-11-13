// 函数: sub_140f18050
// 地址: 0x140f18050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) == 0)
    return 

uint64_t rax = *(arg1 - 0x48)

if (rax == 0 || *(rax + 8) s<= 0)
    return 

wchar16* _String

if (arg2[1].d == 0)
    _String = &data_142d40450
else
    _String = *arg2

_wtof(_String)
int64_t* rbx_1 = *(arg1 - 0x48)
int64_t* rcx = nullptr
char var_24_1 = 1
int64_t var_20 = 0
int32_t var_18_1 = 0
int32_t var_28 = fconvert.s(arg3)

if (rbx_1 != 0)
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = rax_1 + 1
        
        if (rbx_1 != 0)
            rcx = *(arg1 - 0x50)
            rbx_1[1].d += 1

sub_140f617a0(rcx, &var_28)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
    
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(&var_20)
