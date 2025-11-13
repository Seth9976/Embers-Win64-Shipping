// 函数: sub_142378c40
// 地址: 0x142378c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1 - 0x10

if (sub_140a80f40() != 0)
    return sub_142376ff0(r14, arg2) __tailcall

int64_t rbx = 0
uint32_t count = arg2[1].d
int64_t r15_1 = *arg2
int64_t rdi = 0
int64_t var_70 = 0

if (count != 0)
    sub_1405da9e0(&var_70, count, 0)
    rdi = var_70
    memcpy(rdi, r15_1, count)
else
    int32_t var_64_1 = 0

int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_3
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
        void var_48
        void** rax_4 = sub_14235f5d0(&var_48, nullptr, 0xff)
        void* rcx_10 = *rax_4
        *(rcx_10 + 0x10) = r14
        *(rcx_10 + 0x18) = 0
        *(rcx_10 + 0x20) = count
        
        if (count != 0)
            sub_1405da9e0(rcx_10 + 0x18, count, 0)
            memcpy(*(rcx_10 + 0x18), rdi, count)
        else
            *(rcx_10 + 0x24) = 0
        
        void* rcx_13 = *rax_4
        int32_t r8_5 = rax_4[2].d
        int64_t* rdx_10 = rax_4[1]
        int64_t* rbx_1 = *(rcx_13 + 0x30)
        int64_t* arg_20 = rbx_1
        int32_t* rsi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi += 1
            rdi = var_70
            rbx_1 = arg_20
        
        result = sub_140778000(rcx_13, rdx_10, r8_5, 1)
        
        if (rbx_1 != 0)
            result = *rsi
            *rsi -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_20)
            
            rdi = var_70
    else
        int64_t var_58 = 0
        uint32_t count_1 = count
        
        if (count != 0)
            sub_1405da9e0(&var_58, count, 0)
            rbx = var_58
            memcpy(rbx, rdi, count)
        else
            int32_t var_4c_1 = 0
        
        result = sub_142376ff0(r14, &var_58)
        
        if (rbx != 0)
            result = sub_140a74f90(rbx)
else
    result = sub_142376ff0(r14, &var_70)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
