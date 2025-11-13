// 函数: sub_140932b20
// 地址: 0x140932b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r9 = var_2c
        rdx = var_30
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_30 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg2, (rbx_1.d + 1) * 2)

sub_140939040(*(arg1 + 8), &var_38)
int16_t* rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t* rdi_1 = *arg3
int64_t rsi_1 = 0
uint64_t r14_1 = sx.q(arg3[1].d) << 2 u>> 2

if (rdi_1 u> &rdi_1[arg3[1]])
    r14_1 = 0

int16_t arg_8

if (r14_1 != 0)
    do
        void* rbx_3 = *(arg1 + 8)
        int64_t rbp_1 = sx.q(*rdi_1)
        int32_t rcx_5 = *(rbx_3 + 0x20)
        
        if (((rcx_5 - 2) & 0xfffffff5) != 0 || rcx_5 == 0xa)
            int64_t* rcx_6 = *(rbx_3 + 8)
            arg_8 = 0x2c
            (*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
        
        sub_140a2e390(&var_38, u"%lld", rbp_1)
        int64_t* r9_1 = *(rbx_3 + 8)
        int32_t rcx_9
        int16_t* const rdx_5
        
        if (var_30 == 0)
            rcx_9 = 0
            rdx_5 = &data_142d40450
        else
            rdx_5 = var_38
            rcx_9 = var_30 - 1
        
        (*(*r9_1 + 0x150))(r9_1, rdx_5, sx.q(rcx_9) * 2)
        int16_t* rcx_11 = var_38
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rdi_1 = &rdi_1[1]
        *(rbx_3 + 0x20) = 8
        rsi_1 += 1
    while (rsi_1 != r14_1)

void* rbx_4 = *(arg1 + 8)
arg_8 = 0x5d
int64_t* rcx_12 = *(rbx_4 + 8)
*(rbx_4 + 0x24) -= 1
(*(*rcx_12 + 0x150))(rcx_12, &arg_8, 2)
*(rbx_4 + 0x18) -= 1
int64_t result = sub_140679af0(rbx_4 + 0x10)
*(rbx_4 + 0x20) = 5
return result
