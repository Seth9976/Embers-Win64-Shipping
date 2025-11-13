// 函数: sub_141d36b90
// 地址: 0x141d36b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rax = data_143f376a0
int32_t arg_8

if (rax == 0)
    j_sub_140b3db50()
    int64_t rbx_1 = *sub_140b58170(&arg_8, "ChaosSolvers", 1)
    j_sub_140b3db50()
    rax = sub_140b407e0(&data_143de7d78, rbx_1)
    data_143f376a0 = rax

EnterCriticalSection(rax + 0xa0)

if (sub_1409d7d20(arg1 + 0x40, &arg_10) s> 0)
    int64_t r8_2 = *(arg_10 + 0x58)
    int32_t rsi_1 = 0
    int64_t r15_1 = 0
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    sub_1405ba560(arg1 + 0x50, &arg_8, r8_2)
    int64_t rax_3 = sx.q(arg_8)
    void* const rcx_6
    
    if (rax_3.d == 0xffffffff)
        rcx_6 = nullptr
    else
        rcx_6 = (rax_3 << 5) + *(arg1 + 0x50)
    
    int64_t* rdi_1 = rcx_6 + 8
    
    if (rcx_6 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        int64_t rbx_2 = sx.q(rdi_1[1].d)
        int32_t temp0_1 = rbx_2.d
        
        if (temp0_1 != 0)
            if (temp0_1 s> 0)
                sub_1405c5570(&var_78, rbx_2.d)
                rsi_1 = var_70_1
                r15_1 = var_78
            
            memcpy(r15_1 + (sx.q(rsi_1) << 3), *rdi_1, (rbx_2 << 3).d)
            var_70_1 = rsi_1 + rbx_2.d
    
    sub_1409d7d20(&var_78, &arg_10)
    int64_t* rcx_10 = *(arg1 + 0x30)
    
    if (rcx_10 == 0)
        void* rbx_3 = arg_10
        
        if (rbx_3 != 0)
            std::numpunct<uint16_t>::_Init(rbx_3)
            j_sub_140a74f90(rbx_3)
    else
        void* var_40_1 = arg_10
        void** const var_48_1 = &data_142da2668
        void (* var_68)(int64_t* arg1, int64_t* arg2) = sub_141d35ac0
        int64_t var_58_1 = 0
        (*(*rcx_10 + 0x10))(rcx_10, &var_68)
    
    int64_t rcx_13 = var_78
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

void* rax_8 = data_143f376a0

if (rax_8 == 0)
    j_sub_140b3db50()
    int64_t rbx_4 = *sub_140b58170(&arg_8, "ChaosSolvers", 1)
    j_sub_140b3db50()
    rax_8 = sub_140b407e0(&data_143de7d78, rbx_4)
    data_143f376a0 = rax_8

return LeaveCriticalSection(rax_8 + 0xa0)
