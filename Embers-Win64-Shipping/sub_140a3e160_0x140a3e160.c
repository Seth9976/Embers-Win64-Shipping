// 函数: sub_140a3e160
// 地址: 0x140a3e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a4b4a0(arg1)
int32_t rsi = 0
int16_t* r14 = nullptr
int32_t r12 = 0
int16_t* var_58 = nullptr
int64_t* var_50 = nullptr
int64_t rdi = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        r12 = var_50:4.d
        rsi = var_50.d
        r14 = var_58
    
    rsi += rbx_1.d + 1
    var_50.d = rsi
    
    if (rsi s> r12)
        sub_140594770(&var_58)
        r12 = var_50:4.d
        rsi = var_50.d
        r14 = var_58
    
    memcpy(r14, arg2, (rbx_1.d + 1) * 2)

int32_t rcx_3
int16_t* rdx_3

if (rsi == 0)
    rdx_3 = &data_142d40450
    rcx_3 = 0
else
    rdx_3 = r14
    rcx_3 = rsi - 1

int32_t rax = sub_1405969c0(rcx_3, rdx_3)
int32_t arg_10
sub_140a3a4d0(arg1 + 0x60, &arg_10, rax, &var_58)
int64_t rdx_5 = sx.q(arg_10)
void* rcx_5

if (rdx_5.d != 0xffffffff)
    rcx_5 = *(arg1 + 0x60) + rdx_5 * 0x28

int64_t* rbx_5

if (rdx_5.d == 0xffffffff || rcx_5 == 0)
    sub_140a3ef70(arg1 + 0x60, &var_58)
    int32_t rax_4 = var_58.d
    *var_50 = r14
    var_50[1].d = rsi
    *(var_50 + 0xc) = r12
    var_50[2] = 0
    var_50[3] = 0
    var_50[4].d = 0xffffffff
    sub_140a42890(arg1 + 0x60, &arg_10, rax, var_50, rax_4, nullptr)
    rbx_5 = *(arg1 + 0x60) + ((sx.q(arg_10) * 5 + 2) << 3)
else
    rbx_5 = rcx_5 + 0x10
    
    if (r14 != 0)
        sub_140a74f90(r14)

for (int32_t i = rbx_5[1].d; i s> 0x40; i = rbx_5[1].d)
    int64_t* rcx_8 = *rbx_5
    int64_t rdx_7 = *rcx_8
    
    if (rdx_7 != 0)
        sub_140a74f90(rdx_7)
        i = rbx_5[1].d
        rcx_8 = *rbx_5
    
    if (i != 1)
        memmove(rcx_8, &rcx_8[2], (i - 1) << 4)
        i = rbx_5[1].d
    
    rbx_5[1].d = i - 1
    sub_140638bc0(rbx_5)

int64_t var_48 = 0
int32_t rdx_10 = 0
int32_t var_40 = 0
int32_t rcx_10 = 0
int32_t var_3c = 0

if (arg3 != 0 && *arg3 != 0)
    do
        rdi += 1
    while (arg3[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi.d + 1)
        rcx_10 = var_3c
        rdx_10 = var_40
    
    int32_t rax_2 = rdi.d + 1 + rdx_10
    var_40 = rax_2
    
    if (rax_2 s> rcx_10)
        sub_140594770(&var_48)
    
    memcpy(var_48, arg3, (rdi.d + 1) * 2)

arg_10.q = &var_48
sub_140688b80(rbx_5, &arg_10)
int64_t rdi_2 = sx.q(rbx_5[1].d)
int32_t rax_3 = (rdi_2 + 1).d
rbx_5[1].d = rax_3

if (rax_3 s> *(rbx_5 + 0xc))
    sub_1405a4f90(rbx_5)

int64_t* rdi_4 = (rdi_2 << 4) + *rbx_5
*rdi_4 = 0
int64_t rsi_1 = var_48
rdi_4[1].d = var_40

if (var_40 != 0)
    sub_1405a4c70(rdi_4, var_40, 0)
    memcpy(*rdi_4, rsi_1, var_40 * 2)
else
    *(rdi_4 + 0xc) = 0

int64_t result = sub_140a506d0(arg1)
int64_t rcx_22 = var_48

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
