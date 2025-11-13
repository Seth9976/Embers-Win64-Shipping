// 函数: sub_140d7d150
// 地址: 0x140d7d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int64_t var_60 = 0
sub_1405947f0(&var_68, 8)
int32_t r12 = var_60:4.d
int32_t r14 = var_60.d + 8
var_60.d = r14

if (r14 s> r12)
    sub_140594770(&var_68)
    r12 = var_60:4.d
    r14 = var_60.d

int64_t r15 = var_68
UnDecorator::getReferenceType(r15, u"Splash/", 0x10)

if (arg1 == 0 || *arg1 == 0)
    int32_t var_50_1 = r14
    int32_t var_4c_1 = r12
else
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg1[rdi_1] != 0)
    
    int32_t rax_1
    
    if (r14 != 0 || rdi_1.d == 0)
        rax_1 = 0
    else
        rax_1 = r14 + 1
    
    var_68 = r15
    int32_t rdx_2 = r14 + rax_1 + rdi_1.d
    var_60.d = r14
    var_60:4.d = r12
    
    if (rdx_2 s> r12)
        sub_1405947f0(&var_68, rdx_2)
    
    sub_140a20ba0(&var_68, arg1, rdi_1.d)
    r15 = var_68
    int32_t var_50 = var_60.d
    int32_t var_4c = var_60:4.d

int32_t rdi_2 = (data_143e205b0).d
int64_t var_58 = r15
int16_t* const rdi_4

if (rdi_2 s> 1)
    if (arg2 != &data_143e205a8)
        int64_t rsi_2 = data_143e205a8
        int32_t r8_3 = *(arg2 + 0xc)
        arg2[1].d = rdi_2
        
        if (rdi_2 != 0 || r8_3 != 0)
            sub_1405a4c70(arg2, rdi_2, r8_3)
            memcpy(*arg2, rsi_2, rdi_2 * 2)
        else
            *(arg2 + 0xc) = rdi_2
    
    *arg3 = 1
    sub_140a464c0()
    
    if (arg2[1].d == 0)
        rdi_4 = &data_142d40450
    else
        rdi_4 = *arg2
    
    goto label_140d7d413

int64_t var_48
int64_t var_38
int64_t* rax_6 = sub_140b11a30(&var_68, sub_140d7ceb0(&var_48, sub_140b25050(&var_38), &var_58))

if (arg2 != rax_6)
    int64_t rcx_8 = *arg2
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *arg2 = *rax_6
    *rax_6 = 0
    arg2[1].d = rax_6[1].d
    *(arg2 + 0xc) = *(rax_6 + 0xc)
    rax_6[1] = 0

int64_t rcx_10 = var_68

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

*arg3 = 1
sub_140a464c0()
rdi_4 = &data_142d40450
arg2[1].d
int64_t* rbx

if ((*(data_14399ea08 + 0x108))() != -1)
    rbx.b = 1
else
    int64_t* rax_13 =
        sub_140b11a30(&var_38, sub_140d7ceb0(&var_48, sub_140b139e0(&var_68), &var_58))
    
    if (arg2 != rax_13)
        int64_t rcx_16 = *arg2
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        *arg2 = *rax_13
        *rax_13 = 0
        arg2[1].d = rax_13[1].d
        *(arg2 + 0xc) = *(rax_13 + 0xc)
        rax_13[1] = 0
    
    int64_t rcx_18 = var_38
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int64_t rcx_19 = var_48
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_68
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    *arg3 = 0
    sub_140a464c0()
    
    if (arg2[1].d != 0)
        rdi_4 = *arg2
    
label_140d7d413:
    
    if ((*(data_14399ea08 + 0x108))(&data_14399ea08, rdi_4) == -1)
        rbx.b = 0
    else
        rbx.b = 1

if (r15 != 0)
    sub_140a74f90(r15)

return zx.q(rbx.b)
