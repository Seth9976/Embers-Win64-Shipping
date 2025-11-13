// 函数: sub_14089fa20
// 地址: 0x14089fa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_d0 = 0
int32_t result

if (*(arg1 + 0x610) == 0)
    int32_t rbx
    rbx.b = arg6 == 2
    int32_t var_e8_1 = rbx
    result = sub_14089fc00(arg1, arg2, arg3, arg4)
else
    uint32_t rax_2
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
        void var_c8
        void** rax_7 = sub_14089d800(&var_c8, nullptr, 0xff)
        void* rdi_1 = *rax_7
        *(rdi_1 + 0x10) = arg1
        void* var_d8_3 = rdi_1 + 0x18
        *(rdi_1 + 0x50) = 0
        int64_t* rcx_4 = *(arg2 + 0x38)
        
        if (rcx_4 != 0)
            *(rdi_1 + 0x50) = (**rcx_4)(rcx_4, rdi_1 + 0x18)
        
        *(rdi_1 + 0x58) = arg3
        *(rdi_1 + 0x5c) = arg4
        *(rdi_1 + 0x60) = arg6
        int32_t r8 = rax_7[2].d
        int64_t* rdx_4 = rax_7[1]
        void* rcx_5 = *rax_7
        int64_t* rbx_1 = *(rcx_5 + 0x70)
        int64_t* var_d8_4 = rbx_1
        int32_t* rdi_2 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_2 += 1
            rbx_1 = var_d8_4
        
        int32_t var_d0_1 = 2
        result = sub_14089f530(rcx_5, rdx_4, r8, 1)
        
        if (rbx_1 != 0)
            result = *rdi_2
            *rdi_2 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(var_d8_4)
    else
        void* var_a8 = arg1
        void var_a0
        void* var_d8_1 = &var_a0
        int64_t* var_68_1 = nullptr
        int64_t* rcx = *(arg2 + 0x38)
        
        if (rcx != 0)
            var_68_1 = (**rcx)(rcx, &var_a0)
        
        int32_t var_60_1 = arg3
        int32_t var_5c_1 = arg4
        char var_58_1 = arg6
        int64_t var_d8_2 = 0
        result = sub_14089df80(&var_a8, arg5)
        
        if (var_68_1 != 0)
            void* rdx_2
            rdx_2.b = var_68_1 != &var_a0
            result = (*(*var_68_1 + 0x20))(var_68_1, rdx_2)

__security_check_cookie(rax_1 ^ &var_108)
return result
