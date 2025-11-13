// 函数: sub_1406d0e40
// 地址: 0x1406d0e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbp = &data_142d40450
int16_t* rdi

if (arg1[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg1

int32_t rcx = 0
int64_t var_18 = 0
int64_t var_10 = 0
int32_t rdx = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rdx = var_10:4.d
        rcx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rcx
    var_10.d = rax_1
    
    if (rax_1 s> rdx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, rdi, (rbx_1.d + 1) * 2)

sub_140b12f50(&var_18)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
arg1[1].d

if ((*(*rax_2 + 0xd8))() != 0)
    return 1

int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)

if (arg1[1].d != 0)
    rbp = *arg1

return (*(*rax_5 + 0x178))(rax_5, rbp)
