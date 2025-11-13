// 函数: sub_140bab8d0
// 地址: 0x140bab8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rbx = u"Unknown"
int32_t rcx = arg1[1].d
int16_t* const r12 = &data_142d40450
int32_t rbp = 0
int32_t r8 = *(arg1 + 0xc)
int64_t var_48
int16_t* const rbp_1
int16_t* rdi

if (rcx != 0)
    wchar16* rax_1
    
    if (r8 == 0)
        rbx = u"Import_Create"
        rax_1 = u"Export_Create"
    label_140bab984:
        
        if (rcx s>= 0)
            rbx = rax_1
    else
        if (r8 == 1)
            rax_1 = u"Export_Serialize"
            rbx = u"Import_Serialize"
            goto label_140bab984
        
        if (r8 == 2)
            rbx = u"Export_StartIO"
    int16_t** rax_2 = sub_140ba9a70(*arg1, &var_48, rcx)
    rdi = nullptr
    void var_38
    
    if (&var_38 != rax_2)
        rdi = *rax_2
        *rax_2 = nullptr
        rbp = rax_2[1].d
        rax_2[1] = 0
    
    int64_t rcx_2 = var_48
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    rbp_1 = rdi
    
    if (rbp == 0)
        rbp_1 = &data_142d40450
else
    if (r8 == 0)
        rbx = u"Package_LoadSummary"
        rdi = nullptr
    else if (r8 == 1)
        rbx = u"Package_SetupImports"
        rdi = nullptr
    else if (r8 != 2)
        rdi = nullptr
    else
        rbx = u"Package_ExportsSerialized"
        rdi = nullptr
    
    rbp_1 = &data_142d40450

void* rax_3 = *arg1
arg1[1].d
int64_t arg_8
int64_t rax_4

if (rax_3 == 0)
    arg_8 = 0
    rax_4 = 0
else
    rax_4 = *(rax_3 + 0x14)

arg_8 = rax_4
int16_t** rax_5 = sub_140b63b70(&arg_8, &var_48)

if (rax_5[1].d != 0)
    r12 = *rax_5

int16_t* const var_50 = rbp_1
wchar16 const* const var_58 = rbx
sub_140a2e390(arg2, u"%s %d %s   %s", r12)
int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
