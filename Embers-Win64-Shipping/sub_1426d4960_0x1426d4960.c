// 函数: sub_1426d4960
// 地址: 0x1426d4960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int64_t* var_38 = rdi
void* rax = *(arg1 + 0x80)
uint64_t var_28
int32_t var_20

if (rax != 0)
    arg2 = *(rax + 0x18)
    sub_140b63b70(&arg2, &var_28)
else
    var_28 = 0
    var_20 = 0
    sub_1405947f0(&var_28, (rax + 5).d)
    int32_t rax_1 = var_20 + 5
    var_20 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"None", 0xa)

uint64_t r8 = &data_142d40450

if (var_20 != 0)
    r8 = var_28

int64_t var_18
sub_140a2e390(&var_18, u"subtree: %s", r8)
int64_t rbx_1 = sx.q(rdi[1].d)
int32_t rax_3 = (rbx_1 + 1).d
rdi[1].d = rax_3

if (rax_3 s> *(rdi + 0xc))
    sub_1405a4f90(rdi)

int64_t* rcx_8 = (rbx_1 << 4) + *rdi
*rcx_8 = 0
*rcx_8 = var_18
var_18 = 0
int32_t var_10
rcx_8[1].d = var_10
int32_t result_1
int32_t result = result_1
*(rcx_8 + 0xc) = result
int64_t rcx_9 = var_18
var_10.q = 0

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

uint64_t rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
