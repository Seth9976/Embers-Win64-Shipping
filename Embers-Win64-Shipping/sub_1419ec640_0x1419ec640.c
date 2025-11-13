// 函数: sub_1419ec640
// 地址: 0x1419ec640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4a8) != 0)
    return 

if (*(arg1 + 0xa8) == 0)
    sub_141ee69e0(arg1)

int32_t arg_8

if ((*(arg1 + 0x44c) | *(arg1 + 0x448) | *(arg1 + 0x444) | *(arg1 + 0x440)) != 0)
    sub_140cba0f0(&data_1439cbeb0, &arg_8, arg1 + 0x440)
    int64_t* rax = sx.q(arg_8)
    
    if (rax.d == 0xffffffff)
        goto label_1419ec68f
    
    int64_t rcx_2 = rax << 5
    
    if (rcx_2 == neg.q(data_1439cbeb0))
        goto label_1419ec68f
    
    rax = *(rcx_2 + data_1439cbeb0 + 0x10)
    
    if (rax == 0)
        goto label_1419ec68f
    
    int64_t* rcx_4 = *(arg1 + 0x4a8)
    *(arg1 + 0x4a8) = rax
    rax[1].d += 1
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            jump(**rcx_4)
    
    return 

void** const var_48
*(arg1 + 0x440) = *sub_140b214c0(&var_48)
label_1419ec68f:

if (*(arg1 + 0x490) == 0)
    return 

void*** rax_5 = j_sub_140a82f30(0x40)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1].d = 0
    *rax_5 = &data_143019728
    *(rax_5 + 0x10) = *(arg1 + 0x440)
    __builtin_memset(&rax_5[4], 0, 0x20)

arg_8.q = rax_5
int64_t* rax_7 = sub_1419e9f90(&data_1439cbeb0, arg1 + 0x440, &arg_8)
int64_t* rcx_5 = *(arg1 + 0x4a8)
void* rdx_4 = *rax_7
*(arg1 + 0x4a8) = rdx_4

if (rdx_4 != 0)
    *(rdx_4 + 8) += 1

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**rcx_5)(rcx_5, 1)

int64_t* rcx_6 = data_143ef8520
void* rbx_2 = *(arg1 + 0x4a8)
void* rsi_1 = arg1 + 0x488
var_48 = &data_14301aa28
int64_t var_40_1 = *rsi_1
int32_t var_38_1 = *(arg1 + 0x490)
int32_t var_34_1 = 0
arg_8.q = rsi_1
*(rbx_2 + 0x30) = (*(*rcx_6 + 0x40))(rcx_6, &var_48)

if (*(arg1 + 0x428) s> 0)
    int64_t* rcx_7 = data_143ef8520
    *(*(arg1 + 0x4a8) + 0x38) = (*(*rcx_7 + 0x40))(rcx_7, &var_48)

int64_t rbp_1 = 0
int64_t* r14_1 = *(arg1 + 0x498)
uint64_t r12_2 = sx.q(*(arg1 + 0x4a0)) << 3 u>> 3

if (r14_1 u> &r14_1[sx.q(*(arg1 + 0x4a0))])
    r12_2 = 0

if (r12_2 != 0)
    do
        int64_t** rax_16 = sub_14224f4a0(*r14_1)
        void* rbx_4 = *(arg1 + 0x4a8)
        int64_t rsi_2 = sx.q(*(rbx_4 + 0x28))
        int32_t rcx_9 = (rsi_2 + 1).d
        *(rbx_4 + 0x28) = rcx_9
        
        if (rcx_9 s> *(rbx_4 + 0x2c))
            sub_1405a4d70(rbx_4 + 0x20)
        
        r14_1 = &r14_1[1]
        rbp_1 += 1
        *(*(rbx_4 + 0x20) + (rsi_2 << 3)) = *rax_16
    while (rbp_1 != r12_2)
    
    rsi_1 = arg_8.q

bool cond:2_1 = *(rsi_1 + 0xc) == 0
*(rsi_1 + 8) = 0

if (not(cond:2_1))
    sub_1405c5510(rsi_1, 0)
