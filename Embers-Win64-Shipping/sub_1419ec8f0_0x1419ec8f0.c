// 函数: sub_1419ec8f0
// 地址: 0x1419ec8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4f8) != 0)
    return 

int32_t arg_8

if ((*(arg1 + 0x4f4) | *(arg1 + 0x4f0) | *(arg1 + 0x4ec) | *(arg1 + 0x4e8)) != 0)
    sub_140cba0f0(&data_1439cbf00, &arg_8, arg1 + 0x4e8)
    int64_t* rax = sx.q(arg_8)
    
    if (rax.d == 0xffffffff)
        goto label_1419ec930
    
    int64_t rcx_2 = rax << 5
    
    if (rcx_2 == neg.q(data_1439cbf00))
        goto label_1419ec930
    
    rax = *(rcx_2 + data_1439cbf00 + 0x10)
    
    if (rax == 0)
        goto label_1419ec930
    
    int64_t* rcx_4 = *(arg1 + 0x4f8)
    *(arg1 + 0x4f8) = rax
    rax[1].d += 1
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            jump(**rcx_4)
    
    return 

void** const var_48
*(arg1 + 0x4e8) = *sub_140b214c0(&var_48)
label_1419ec930:

if (*(arg1 + 0x490) == 0)
    return 

void*** rax_5 = j_sub_140a82f30(0x38)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1].d = 0
    *rax_5 = &data_14301a028
    *(rax_5 + 0x10) = *(arg1 + 0x4e8)
    __builtin_memset(&rax_5[4], 0, 0x18)

arg_8.q = rax_5
int64_t* rax_7 = sub_1419e9f90(&data_1439cbf00, arg1 + 0x4e8, &arg_8)
int64_t* rcx_5 = *(arg1 + 0x4f8)
void* rdx_4 = *rax_7
*(arg1 + 0x4f8) = rdx_4

if (rdx_4 != 0)
    *(rdx_4 + 8) += 1

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**rcx_5)(rcx_5, 1)

int64_t* rcx_6 = data_143ef8520
void* rbx_2 = *(arg1 + 0x4f8)
void* rdi_1 = arg1 + 0x488
var_48 = &data_14301aa28
int64_t var_40_1 = *rdi_1
int32_t var_38_1 = *(arg1 + 0x490)
int32_t var_34_1 = 0
arg_8.q = rdi_1
*(rbx_2 + 0x30) = (*(*rcx_6 + 0x28))(rcx_6, &var_48)
int64_t rbp_1 = 0
void* r14_1 = *(arg1 + 0x498)
int64_t r13_1 = sx.q(*(arg1 + 0x4a0)) << 3
uint64_t r13_2 = r13_1 u>> 3

if (r14_1 u> r14_1 + r13_1)
    r13_2 = 0

if (r13_2 != 0)
    do
        void* rbx_3 = *(arg1 + 0x4f8)
        void* rax_14 = sub_14224f4a0(*r14_1)
        int64_t rdi_2 = sx.q(*(rbx_3 + 0x28))
        int32_t rcx_8 = (rdi_2 + 1).d
        *(rbx_3 + 0x28) = rcx_8
        
        if (rcx_8 s> *(rbx_3 + 0x2c))
            sub_1405a4d70(rbx_3 + 0x20)
        
        r14_1 += 8
        rbp_1 += 1
        *(*(rbx_3 + 0x20) + (rdi_2 << 3)) = *rax_14
    while (rbp_1 != r13_2)
    
    rdi_1 = arg_8.q

bool cond:1_1 = *(rdi_1 + 0xc) == 0
*(rdi_1 + 8) = 0

if (not(cond:1_1))
    sub_1405c5510(rdi_1, 0)
