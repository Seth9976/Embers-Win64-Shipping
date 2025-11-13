// 函数: sub_142147ba0
// 地址: 0x142147ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
int64_t rsi = sx.q(arg3[1].d)
int64_t r15 = *arg3
uint64_t var_b8 = 0
int32_t var_b0 = rsi.d
uint64_t rdi = 0
int128_t var_90 = zmm0
int128_t var_c8 = zmm0

if (rsi.d != 0)
    sub_1405a4be0(&var_b8, rsi.d, 0)
    rdi = var_b8
    memcpy(rdi, r15, (rsi << 4).d)
    rsi = zx.q(var_b0)
    var_90 = var_c8
else
    int32_t var_ac_1 = 0

int64_t rbx_1 = *arg4
int64_t var_a8 = rbx_1
char var_98 = arg5
int64_t* var_a0 = arg1
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_48
        void** rax_2 = sub_142140770(&var_48, nullptr, 0xff)
        void* r14_1 = *rax_2
        *(r14_1 + 0x10) = var_90
        *(r14_1 + 0x20) = 0
        *(r14_1 + 0x28) = rsi.d
        
        if (rsi.d != 0)
            sub_1405a4be0(r14_1 + 0x20, rsi.d, 0)
            memcpy(*(r14_1 + 0x20), rdi, rsi.d << 4)
        else
            *(r14_1 + 0x2c) = 0
        
        *(r14_1 + 0x38) = arg1
        *(r14_1 + 0x30) = rbx_1
        *(r14_1 + 0x40) = arg5
        void* rcx_10 = *rax_2
        int32_t r8_6 = rax_2[2].d
        int64_t* rdx_6 = rax_2[1]
        int64_t* rbx_2 = *(rcx_10 + 0x50)
        int64_t* arg_8 = rbx_2
        int32_t* rsi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_1 += 1
            rdi = var_b8
            rbx_2 = arg_8
        
        result = sub_14080ccb0(rcx_10, rdx_6, r8_6, 1)
        
        if (rbx_2 != 0)
            result = *rsi_1
            *rsi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_8)
            
            rdi = var_b8
    else
        uint64_t var_70 = 0
        int32_t var_68_1 = rsi.d
        int128_t var_80 = var_90
        
        if (rsi.d != 0)
            sub_1405a4be0(&var_70, rsi.d, 0)
            memcpy(var_70, rdi, rsi.d << 4)
        else
            int32_t var_64_1 = 0
        
        int64_t var_60_1 = rbx_1
        int64_t* var_58_1 = arg1
        char var_50_1 = arg5
        result = sub_14213b740(&var_80, &data_143f02b98)
        uint64_t rcx_6 = var_70
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
else
    result = sub_14213b740(&var_c8, &data_143f02b98)
    rdi = var_b8

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
