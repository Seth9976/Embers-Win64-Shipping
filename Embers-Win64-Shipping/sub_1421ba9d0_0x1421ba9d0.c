// 函数: sub_1421ba9d0
// 地址: 0x1421ba9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *(arg1 + 0x210) = 0
    return &__return_addr

arg3[0x42].d += 1
int64_t rbx = sx.q(arg2[1].d)
int64_t rsi = *arg2
void* var_80 = arg1
uint64_t var_78 = 0
int32_t var_70 = rbx.d

if (rbx.d != 0)
    sub_1405c4a90(&var_78, rbx.d, 0)
    memcpy(var_78, rsi, (rbx << 2).d)
else
    int32_t var_6c_1 = 0

arg3[0x42].d += 1

if (sub_140a80f40() == 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_98
        void** rax_3 = sub_1421b0eb0(&var_98, nullptr, 0xff)
        int64_t r12_1 = sx.q(var_70)
        void* r15_1 = *rax_3
        *(r15_1 + 0x10) = var_80
        *(r15_1 + 0x18) = 0
        *(r15_1 + 0x20) = r12_1.d
        
        if (r12_1.d != 0)
            sub_1405c4a90(r15_1 + 0x18, r12_1.d, 0)
            memcpy(*(r15_1 + 0x18), var_78, (r12_1 << 2).d)
        else
            *(r15_1 + 0x24) = 0
        
        *(r15_1 + 0x28) = arg3
        void* rcx_13 = *rax_3
        int32_t r8_6 = rax_3[2].d
        int64_t* rdx_8 = rax_3[1]
        int64_t* rbx_2 = *(rcx_13 + 0x38)
        int64_t* arg_18 = rbx_2
        int32_t* rsi_2 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_2 += 1
            rbx_2 = arg_18
        
        sub_1407c96b0(rcx_13, rdx_8, r8_6, 1)
        
        if (rbx_2 != 0)
            int32_t rax_4 = *rsi_2
            *rsi_2 -= 1
            
            if (rax_4 == 1)
                sub_140a2f6e0(arg_18)
    else
        int64_t rbx_1 = sx.q(var_70)
        void* var_60 = var_80
        uint64_t var_58 = 0
        int32_t var_50_1 = rbx_1.d
        
        if (rbx_1.d != 0)
            sub_1405c4a90(&var_58, rbx_1.d, 0)
            memcpy(var_58, var_78, (rbx_1 << 2).d)
        else
            int32_t var_4c_1 = 0
        
        sub_1421ab800(&var_60)
        
        if (arg3 != 0)
            sub_1421beba0(arg3)
        
        uint64_t rcx_8 = var_58
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
else
    sub_1421ab800(&var_80)
    
    if (arg3 != 0)
        sub_1421beba0(arg3)

uint64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

uint64_t result = sub_1421beba0(arg3)
*(arg1 + 0x210) = 0
return result
