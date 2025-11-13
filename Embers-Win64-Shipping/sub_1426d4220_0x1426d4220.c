// 函数: sub_1426d4220
// 地址: 0x1426d4220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48 = arg4
void* rcx = *(arg2 + 0xb8)

if (rcx == 0)
    return 

int16_t* var_28
sub_1426ad380(rcx, &var_28, *(arg1 + 0x90), 0)
char rax_1 = sub_140d3e110(arg3 + 0x1c)
int16_t* const r14_1 = &data_142d40450
wchar16 const* const rdi_1

if ((*(arg3 + 0x24) & 1) == 0)
    rdi_1 = &data_142d40450
    
    if (rax_1 != 0)
        rdi_1 = u"(task)"
else
    rdi_1 = u"(WAITING)"

int32_t rdx_1 = 0
int32_t rax_2 = 0
int64_t rsi_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_1 = 0
int64_t var_38 = 0

if (*rdi_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax_2 = var_2c_1
        rdx_1 = var_30_1
        rsi_1 = var_38
    
    int32_t rbp_1 = rbx_1.d + 1 + rdx_1
    var_30_1 = rbp_1
    
    if (rbp_1 s> rax_2)
        sub_140594770(&var_38)
        rsi_1 = var_38
    
    UnDecorator::getReferenceType(rsi_1, rdi_1, (rbx_1.d + 1) * 2)

int32_t var_20

if (var_20 != 0)
    r14_1 = var_28

sub_140a2e390(&var_38, u"move target: %s%s", r14_1)
int64_t rbx_3 = sx.q(arg4[1].d)
int32_t rax_3 = (rbx_3 + 1).d
arg4[1].d = rax_3

if (rax_3 s> *(arg4 + 0xc))
    sub_1405a4f90(arg4)

int64_t* rdx_7 = (rbx_3 << 4) + *arg4
*rdx_7 = 0
*rdx_7 = var_38
var_38 = 0
rdx_7[1].d = var_30_1
*(rdx_7 + 0xc) = var_2c_1
int64_t rcx_7 = var_38
var_30_1.q = 0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int16_t* rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
