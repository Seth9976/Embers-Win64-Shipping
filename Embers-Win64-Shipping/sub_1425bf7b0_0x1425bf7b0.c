// 函数: sub_1425bf7b0
// 地址: 0x1425bf7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t* rax = sub_1425bf990(arg1, &var_38, arg3)
int16_t* r15

if (rax[1].d == 0)
    r15 = &data_142d40450
else
    r15 = *rax

int32_t rsi = 0
int16_t* var_48 = nullptr
int16_t* r13 = nullptr
int64_t var_40 = 0
int32_t rdi = 0
int64_t rbx = -1

if (r15 != 0 && *r15 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r15[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        r13 = var_48
    
    int32_t rax_2 = var_40.d + rdi_1.d + 1
    var_40.d = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_48)
        r13 = var_48
    
    UnDecorator::getReferenceType(r13, r15, (rdi_1.d + 1) * 2)
    rdi = var_40.d

int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* const rdx_4 = &data_142d40450

if (rdi != 0)
    rdx_4 = r13

int64_t* rcx_4 = *(arg1 + 8)
char rax_4 = (*(*rcx_4 + 0x70))(rcx_4, rdx_4)
char rax_5

if (rax_4 == 0)
    rax_5 = sub_1425c26f0(arg1, arg3, 0)

if (rax_4 != 0 || rax_5 == 0)
    *arg2 = r13
    arg2[1].d = rdi
    *(arg2 + 0xc) = var_40:4.d
else
    var_48 = nullptr
    int32_t rcx_6 = 0
    var_40:4.d = 0
    var_40.d = 0
    
    if (arg3 != 0 && *arg3 != 0)
        do
            rbx += 1
        while (arg3[rbx] != 0)
        
        if (rbx.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx.d + 1)
            rcx_6 = var_40:4.d
            rsi = var_40.d
        
        int32_t rax_6 = rsi + rbx.d + 1
        var_40.d = rax_6
        
        if (rax_6 s> rcx_6)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, arg3, (rbx.d + 1) * 2)
    
    sub_140b11a30(arg2, &var_48)
    int16_t* rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (r13 != 0)
        sub_140a74f90(r13)

return arg2
