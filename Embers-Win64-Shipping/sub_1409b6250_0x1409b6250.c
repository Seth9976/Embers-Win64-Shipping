// 函数: sub_1409b6250
// 地址: 0x1409b6250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t rsi = 0
int64_t* var_58 = nullptr
int64_t rcx = sx.q(rax - 1)
int64_t arg_8 = rcx
int64_t* r14 = nullptr
int32_t i_1 = 0
int32_t var_4c = 0
int32_t r12 = 0

if (rax - 1 s>= 0)
    int64_t rcx_8
    
    do
        int64_t i_2 = sx.q(i_1)
        int32_t rbx_1 = *(*arg2 + (rcx << 2))
        i_1 = (i_2 + 1).d
        
        if (i_1 s> r12)
            sub_1405a4df0(&var_58)
            r12 = var_4c
            r14 = var_58
        
        int32_t var_40_1 = rbx_1
        int64_t rcx_3 = i_2 * 3
        r14[rcx_3] = 0
        r14[rcx_3 + 1] = 0
        r14[rcx_3 + 2].d = data_143a1c6c4
        void* rcx_5 = &r14[sx.q(i_1 - 1) * 3]
        *(rcx_5 + 0x10) = rbx_1
        void* rcx_7 = *(arg1 + 0x28) + 0x308
        int128_t var_38 = rcx_5.o
        sub_14099aa90(rcx_7, &var_38)
        rcx_8 = arg_8
        rcx = rcx_8 - 1
        arg_8 = rcx
    while (rcx_8 - 1 s>= 0)

int64_t rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = 0
else
    *rax_6 = &data_142e3f978
    *(rax_6 + 8) = r14
    r14 = nullptr
    *(rax_6 + 0x10) = i_1
    i_1 = 0
    *(rax_6 + 0x14) = r12

arg_8 = rax_6
sub_1409afc10(arg1, &arg_8)
int64_t* rbx_2 = r14

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_2 = &rbx_2[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t rdi = 0
int64_t* rbx_3 = *(arg1 + 0x3b8)
uint64_t r14_2 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rbx_3 u> &rbx_3[sx.q(*(arg1 + 0x3c0))])
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t* rcx_12 = *rbx_3
        (*(*rcx_12 + 0x350))(rcx_12, arg1, arg2)
        rdi += 1
        rbx_3 = &rbx_3[1]
    while (rdi != r14_2)

int32_t* r14_3 = *arg2
int64_t result = &r14_3[arg2[1]]
uint64_t r12_2 = sx.q(arg2[1].d) << 2 u>> 2

if (r14_3 u> result)
    r12_2 = 0

if (r12_2 != 0)
    do
        void* rdi_1 = *(arg1 + 0x28)
        int32_t rbx_4 = *r14_3
        sub_1409d8440(rdi_1 + 0x118, rbx_4, 1)
        result = sub_1409d8140(rdi_1 + 0x308, rbx_4)
        rsi += 1
        r14_3 = &r14_3[1]
    while (rsi != r12_2)

return result
