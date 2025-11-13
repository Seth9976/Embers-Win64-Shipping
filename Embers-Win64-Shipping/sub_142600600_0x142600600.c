// 函数: sub_142600600
// 地址: 0x142600600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_8 = rbx
int32_t rax = 0
bool cond:0 = data_143f70db0 == 0
int16_t* rdi = nullptr
int16_t* const r12 = &data_142d40450
int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t var_2c = 0
int32_t var_30 = 0
int16_t* rdx_2
int32_t r14_1

if (not(cond:0))
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((&data_143f70db0)[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_38, rbx.d)
        rax = var_2c
        rdx = var_30
        rdi = var_38
    
    r14_1 = rdx + rbx.d
    
    if (r14_1 s> rax)
        sub_140594770(&var_38)
        rdi = var_38
    
    UnDecorator::getReferenceType(rdi, &data_143f70db0, rbx.d * 2)
    rdx_2 = rdi

if (cond:0 || r14_1 == 0)
    rdx_2 = &data_142d40450

if (arg2[1].d != 0)
    r12 = *arg2

int32_t result = sub_140a54510(r12, rdx_2)
rbx.b = result == 0

if (rdi != 0)
    result = sub_140a74f90(rdi)

if (rbx.b != 0)
    int32_t result_1 = *(arg1 + 0x1ac)
    *(arg1 + 0x1ac) = 1
    result = result_1
    *(arg1 + 0x1b0)
    *(arg1 + 0x1b0) = 0

int16_t* rcx_5 = *arg2

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
