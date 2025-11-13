// 函数: sub_140932f80
// 地址: 0x140932f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t r9 = 0
int64_t var_30 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r9 = var_30:4.d
        rdx = var_30.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_30.d = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg2, (rbx_1.d + 1) * 2)

sub_1409391d0(*(arg1 + 8), &var_38)
int16_t* rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t* i = *arg3

for (void* r15 = &i[sx.q(arg3[1].d)]; i != r15; i = &i[1])
    void* rsi_1 = *(arg1 + 8)
    int64_t rbp_1 = sx.q(*i)
    int32_t rax_3 = *(rsi_1 + 0x20)
    int32_t rcx_5 = rax_3
    int16_t arg_8
    
    if (rax_3 != 2 && rax_3 != 4 && rax_3 != 0xc)
        int64_t* rcx_6 = *(rsi_1 + 8)
        arg_8 = 0x2c
        (*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
        rcx_5 = *(rsi_1 + 0x20)
    
    if (rcx_5 == 4 || rcx_5 - 8 u<= 3)
        int64_t* rcx_9 = *(rsi_1 + 8)
        arg_8 = 0x20
        (*(*rcx_9 + 0x150))(rcx_9, &arg_8, 2)
    else
        sub_14067f880(*(rsi_1 + 8))
        int32_t j_2 = *(rsi_1 + 0x24)
        int64_t* rdi_1 = *(rsi_1 + 8)
        
        if (j_2 s> 0)
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                int64_t rax_6 = *rdi_1
                arg_8 = 9
                (*(rax_6 + 0x150))(rdi_1, &arg_8, 2)
                j = j_1
                j_1 -= 1
            while (j != 1)
    
    sub_140a2e390(&var_38, u"%lld", rbp_1)
    int32_t rcx_11 = var_30.d
    int64_t* r9_1 = *(rsi_1 + 8)
    int32_t rcx_12
    int16_t* const rdx_7
    
    if (rcx_11 == 0)
        rcx_12 = 0
        rdx_7 = &data_142d40450
    else
        rdx_7 = var_38
        rcx_12 = rcx_11 - 1
    
    (*(*r9_1 + 0x150))(r9_1, rdx_7, sx.q(rcx_12) * 2)
    int16_t* rcx_14 = var_38
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    *(rsi_1 + 0x20) = 8

return sub_140938f70(*(arg1 + 8)) __tailcall
