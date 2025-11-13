// 函数: sub_1409331b0
// 地址: 0x1409331b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_38 = 0
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
int64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rbp = *arg3
int64_t r14_2 = (sx.q(arg3[1].d) << 4) + rbp

while (rbp != r14_2)
    int64_t* rbx_3 = *(arg1 + 8)
    int32_t rcx_5 = rbx_3[4].d
    int16_t arg_8
    
    if (((rcx_5 - 2) & 0xfffffff5) != 0 || rcx_5 == 0xa)
        int64_t* rcx_6 = rbx_3[1]
        arg_8 = 0x2c
        (*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
    
    sub_14067f880(rbx_3[1])
    int32_t i_2 = *(rbx_3 + 0x24)
    int64_t* rsi_1 = rbx_3[1]
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t rax_4 = *rsi_1
            arg_8 = 9
            (*(rax_4 + 0x150))(rsi_1, &arg_8, 2)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    (*(*rbx_3 + 0x10))(rbx_3, rbp)
    rbp += 0x10
    rbx_3[4].d = 7

return sub_140938f70(*(arg1 + 8)) __tailcall
