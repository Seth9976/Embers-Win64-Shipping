// 函数: sub_141b51170
// 地址: 0x141b51170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) == 0)
    return 

char rax_1 = sub_140a80f40()
void* rdx_1 = *(arg1 + 0x40)
int64_t* rcx = rdx_1 + 0x10

if (rax_1 != 0)
    (*(*rcx + 0x28))(rcx)
    int64_t* rcx_1 = data_143f0f180
    void arg_8
    memcpy((*(*rcx_1 + 0x510))(rcx_1, &data_143f02b98, *(*(arg1 + 0x40) + 8), 0, 1, &arg_8, 0, 1), 
        *(arg1 + 8), *(arg1 + 0x30) * *(arg1 + 0x2c) * *(arg1 + 0x28))
    int64_t* rcx_3 = data_143f0f180
    void* var_50
    var_50.b = 1
    (*(*rcx_3 + 0x518))(rcx_3, &data_143f02b98, *(*(arg1 + 0x40) + 8), 0, 0, var_50)
    *(arg1 + 0x38) = 0
    return 

if (rdx_1 == 0)
    rcx = nullptr

sub_141997e80(rcx)

if (sub_140a80f40() != 0)
    int64_t* rcx_4 = data_143f0f180
    void arg_10
    memcpy((*(*rcx_4 + 0x510))(rcx_4, &data_143f02b98, *(*(arg1 + 0x40) + 8), 0, 1, &arg_10, 0, 1), 
        *(arg1 + 8), *(arg1 + 0x30) * *(arg1 + 0x2c) * *(arg1 + 0x28))
    int64_t* rcx_6 = data_143f0f180
    void* var_50_1
    var_50_1.b = 1
    (*(*rcx_6 + 0x518))(rcx_6, &data_143f02b98, *(*(arg1 + 0x40) + 8), 0, 0, var_50_1)
    *(arg1 + 0x38) = 0
    return 

if (data_143f138f4 == 0)
    uint32_t rax_12
    
    if (data_143de5480 != 0)
        rax_12.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_12.b != 0)
        void* arg_20 = arg1 - 8
        sub_141b4b4c0(&arg_20)
        *(arg1 + 0x38) = 0
        return 

void var_38
void** rax_14 = sub_141b53a90(&var_38, nullptr, 0xff)
*(*rax_14 + 0x10) = arg1 - 8
void* rcx_10 = *rax_14
int32_t r8_13 = rax_14[2].d
int64_t* rdx_5 = rax_14[1]
int64_t* rbx_2 = *(rcx_10 + 0x20)
int64_t* arg_18 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_18

sub_1405a5630(rcx_10, rdx_5, r8_13, 1)

if (rbx_2 != 0)
    int32_t rax = *rdi_1
    *rdi_1 -= 1
    
    if (rax == 1)
        sub_140a2f6e0(arg_18)

*(arg1 + 0x38) = 0
