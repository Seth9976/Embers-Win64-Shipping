// 函数: sub_1423dfef0
// 地址: 0x1423dfef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* r10_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* rdx

if (rax == r10_1)
label_1423dff53:
    rdx = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        rdx = *rax
        
        if (*(rdx + 0x278) == arg4)
            break
        
        rax = &rax[1]
        
        if (rax == r10_1)
            goto label_1423dff53

int64_t var_78
sub_1423fb9e0(&var_78, &rdx[0xd0], arg2, 1)
char rax_2 = sub_142415f00(&var_78)
int16_t* var_50
char rax_3

if (rax_2 != 0)
    rax_3 = sub_1423e9570(arg1, &var_50)

if (rax_2 == 0 || rax_3 != 0)
    sub_1423ef930(arg1, arg4, arg2, 1)
else
    int16_t* const r8_1 = &data_142d40450
    int32_t var_48
    
    if (var_48 != 0)
        r8_1 = var_50
    
    sub_140b1f700(arg3, u"ERROR: The map '%s' does not exist.", r8_1)

int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_30
int64_t* rbx_1 = var_30

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_30

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int16_t* rcx_10 = var_50

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_12 = var_78

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

wchar16 (* result)[0x200]
result.b = 1
return result
