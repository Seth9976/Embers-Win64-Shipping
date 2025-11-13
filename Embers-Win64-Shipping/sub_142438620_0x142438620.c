// 函数: sub_142438620
// 地址: 0x142438620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint128_t zmm0 = *arg2
uint128_t zmm1 = arg2[1]
int64_t var_b8 = arg1
char r9
char var_70 = r9
char var_6f = arg4
uint128_t var_90 = arg2[2]
uint64_t var_80 = arg2[3].q
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void var_d8
        void** rax_5 = sub_142430350(&var_d8, nullptr, 0xff)
        void* rcx_3 = *rax_5
        *(rcx_3 + 0x10) = var_b8.o
        *(rcx_3 + 0x20) = zmm0
        *(rcx_3 + 0x30) = zmm1
        *(rcx_3 + 0x40) = var_90
        *(rcx_3 + 0x50) = arg3.o
        void* rcx_4 = *rax_5
        int32_t r8 = rax_5[2].d
        int64_t* rdx_2 = rax_5[1]
        int64_t* rbx_1 = *(rcx_4 + 0x68)
        int64_t* var_e8_1 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = var_e8_1
        
        result = sub_142445a30(rcx_4, rdx_2, r8, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(var_e8_1)
    else
        uint128_t var_68 = var_b8.o
        uint128_t var_48_1 = zmm1
        uint128_t var_58_1 = zmm0
        uint128_t var_28_1 = arg3.o
        uint128_t var_38_1 = var_90
        result = sub_14242ab50(&var_68)
else
    result = sub_14242ab50(&var_b8)

__security_check_cookie(rax_1 ^ &var_108)
return result
