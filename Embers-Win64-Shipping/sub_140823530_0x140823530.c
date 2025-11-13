// 函数: sub_140823530
// 地址: 0x140823530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *(arg1 + 0xa4) == 1)
    uint64_t rax = *(arg2 + 0x80)
    int64_t* rcx = arg1[0x3c]
    arg1[0x3c] = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)
    
    void* rdi_1 = arg1[0x3c]
    
    if (rdi_1 != 0)
        rax = (*(*arg1 + 0x58))(arg1)
        *(rdi_1 + 0x10) += rax.d

if (data_143f0f21f == 0)
    return 

uint64_t rdx = zx.q(data_143f0f1a0)

if (((*(&data_143f025fc + sx.q(rdx.d) * 0x14) u>> 0x13).b & 1) == 0
        || not(test_bit(data_143f13cd8, rdx)))
    return 

sub_1407b4d10(&arg1[2], 4, 0x100, 0xd, 0x208, 
    FNiagaraRendererRibbons::RayTracingDynamicVertexBuffer", 0)
void* var_30 = nullptr
int32_t i_2 = 0
int64_t var_20_1 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x14)
int16_t var_18_1 = 1
sub_14081daa0(&arg1[0xd], &var_48)
(*(arg1[6] + 0x28))(&arg1[6])
void* rbx_1

if ((var_30.b & 1) == 0)
    rbx_1 = var_30
else
    rbx_1 = &var_30 + (var_30 s>> 1)

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405d1550(rbx_1)
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_140a1d5c0(&var_30)
sub_14081c9d0(&var_48)
