// 函数: sub_141403330
// 地址: 0x141403330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
uint64_t rdi = 0
int64_t rbp = arg1
int64_t rsi = sx.q(arg2[1].d)
int64_t r14 = *arg2
int64_t var_78 = arg1
uint64_t var_70 = 0
int32_t var_68 = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&var_70, rsi.d, 0)
    rdi = var_70
    memcpy(rdi, r14, (rsi << 3).d)
    rsi = zx.q(var_68)
    rbp = var_78
else
    int32_t var_64_1 = 0

int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_48
        void** rax_2 = sub_1413ddd30(&var_48, nullptr, 0xff)
        void* rcx_8 = *rax_2
        *(rcx_8 + 0x10) = rbp
        *(rcx_8 + 0x18) = 0
        *(rcx_8 + 0x20) = rsi.d
        
        if (rsi.d != 0)
            sub_1405c4a00(rcx_8 + 0x18, rsi.d, 0)
            memcpy(*(rcx_8 + 0x18), rdi, rsi.d << 3)
        else
            *(rcx_8 + 0x24) = 0
        
        void* rcx_11 = *rax_2
        int32_t r8_7 = rax_2[2].d
        int64_t* rdx_8 = rax_2[1]
        int64_t* rbx_1 = *(rcx_11 + 0x30)
        int64_t* arg_10 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rdi = var_70
            rbx_1 = arg_10
        
        result = sub_140778000(rcx_11, rdx_8, r8_7, 1)
        
        if (rbx_1 != 0)
            result = *rsi_1
            *rsi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_10)
            
            rdi = var_70
    else
        int64_t var_60 = rbp
        uint64_t var_58 = 0
        int32_t var_50_1 = rsi.d
        
        if (rsi.d != 0)
            sub_1405c4a00(&var_58, rsi.d, 0)
            rbx = var_58
            memcpy(rbx, rdi, rsi.d << 3)
        else
            int32_t var_4c_1 = 0
        
        result = sub_1413c6860(&var_60)
        
        if (rbx != 0)
            result = sub_140a74f90(rbx)
else
    result = sub_1413c6860(&var_78)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
