// 函数: sub_140ac8950
// 地址: 0x140ac8950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_a8 = nullptr
int32_t var_a0 = 0
int16_t* var_98 = nullptr
int32_t var_90 = 0
sub_1405947f0(&var_98, 0xc)
int32_t rdi = var_90 + 0xc

if (rdi s> 0)
    sub_140594770(&var_98)

int16_t* r14 = var_98
UnDecorator::getReferenceType(r14, u"Etc/Unknown", 0x18)
int16_t* const r13 = &data_142d40450
int16_t* const rdx_1 = &data_142d40450

if (rdi != 0)
    rdx_1 = r14

int16_t* const rcx_3

if (arg7[1].d == 0)
    rcx_3 = &data_142d40450
else
    rcx_3 = *arg7

rdi.b = sub_140a54510(rcx_3, rdx_1) == 0

if (r14 != 0)
    sub_140a74f90(r14)

int64_t* rcx_5 = &var_a8
int32_t r14_1
int16_t* r15

if (rdi.b == 0)
    sub_1405947f0(rcx_5, 5)
    r14_1 = var_a0 + 5
    
    if (r14_1 s> 0)
        sub_140594770(&var_a8)
    
    r15 = var_a8
    __builtin_wcscpy(r15, u"_UTC")
else
    sub_1405947f0(rcx_5, 7)
    r14_1 = var_a0 + 7
    
    if (r14_1 s> 0)
        sub_140594770(&var_a8)
    
    r15 = var_a8
    __builtin_wcscpy(r15, u"_LOCAL")

int64_t r8 = -1

do
    r8 += 1
while (*(arg2 + (r8 << 1)) != 0)

sub_140a20ba0(arg1, arg2, r8.d)
int32_t r8_1

if (r14_1 == 0)
    r8_1 = 0
else
    r8_1 = r14_1 - 1

sub_140a20ba0(arg1, r15, r8_1)
sub_140a20ba0(arg1, &data_142dc30a4, 1)
int32_t var_68 = 0
char var_40 = 0
void arg_10
int64_t* rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b0a2c0(&arg_10, 0x7b2, 1, 1, 0, 0, 0, 0)
int64_t var_60 = (*arg3 - *rax_2) s/ 0x989680
sub_140ac5df0(&var_68, arg1, arg5, zmm1)
wchar16 const* const rdi_1 = u"<Unknown EDateTimeStyle>"

if (arg4 != 0)
    sub_140a20ba0(arg1, &data_142d8adc4, 2)
    int32_t rbx_2 = *arg4
    sub_140a20ba0(arg1, u"EDateTimeStyle::", 0x10)
    wchar16 const* const rdx_11
    
    if (rbx_2 == 0)
        rdx_11 = u"Default"
    else if (rbx_2 == 1)
        rdx_11 = u"Short"
    else if (rbx_2 == 2)
        rdx_11 = u"Medium"
    else if (rbx_2 == 3)
        rdx_11 = u"Long"
    else if (rbx_2 == 4)
        rdx_11 = u"Full"
    else
        rdx_11 = u"<Unknown EDateTimeStyle>"
    
    int64_t r8_2 = -1
    
    do
        r8_2 += 1
    while (rdx_11[r8_2] != 0)
    
    sub_140a20ba0(arg1, rdx_11, r8_2.d)

if (arg6 != 0)
    sub_140a20ba0(arg1, &data_142d8adc4, 2)
    int32_t rbx_7 = *arg6
    sub_140a20ba0(arg1, u"EDateTimeStyle::", 0x10)
    
    if (rbx_7 == 0)
        rdi_1 = u"Default"
    else if (rbx_7 == 1)
        rdi_1 = u"Short"
    else if (rbx_7 == 2)
        rdi_1 = u"Medium"
    else if (rbx_7 == 3)
        rdi_1 = u"Long"
    else if (rbx_7 == 4)
        rdi_1 = u"Full"
    
    int64_t r8_3 = -1
    
    do
        r8_3 += 1
    while (rdi_1[r8_3] != 0)
    
    sub_140a20ba0(arg1, rdi_1, r8_3.d)

if (r14_1 != 0)
    r13 = r15

int32_t rax_6 = sub_140a54510(r13, u"_UTC")

if (rax_6 == 0)
    sub_140a20ba0(arg1, &data_142e64ed8, rax_6 + 3)
    int64_t var_88
    int64_t* rax_7 = sub_140a30480(arg7, &var_88, nullptr)
    int32_t rcx_25 = rax_7[1].d
    int32_t r8_5 = rcx_25 - 1
    
    if (rcx_25 == 0)
        r8_5 = 0
    
    sub_140a20ba0(arg1, *rax_7, r8_5)
    int64_t rcx_27 = var_88
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    sub_140a20ba0(arg1, &data_142d4056c, 1)

sub_140a20ba0(arg1, &data_142e64ed8, 3)
int64_t rcx_30 = *arg8

if (rcx_30 != 0)
    int64_t var_78
    int64_t* rax_9 = sub_140a30480(sub_140903440(rcx_30), &var_78, nullptr)
    int32_t rcx_32 = rax_9[1].d
    int32_t r8_6 = rcx_32 - 1
    
    if (rcx_32 == 0)
        r8_6 = 0
    
    sub_140a20ba0(arg1, *rax_9, r8_6)
    int64_t rcx_34 = var_78
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)

int32_t result = sub_140a20ba0(arg1, &data_142e6463c, 2)

if (r15 != 0)
    result = sub_140a74f90(r15)

int64_t* rbx_12 = arg8[1]

if (rbx_12 != 0)
    result = rbx_12[1].d
    rbx_12[1].d -= 1
    
    if (result == 1)
        result = (**rbx_12)(rbx_12)
        int32_t r12_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (r12_1 == 1)
            return (*(*rbx_12 + 8))(rbx_12, zx.q(r12_1))

return result
