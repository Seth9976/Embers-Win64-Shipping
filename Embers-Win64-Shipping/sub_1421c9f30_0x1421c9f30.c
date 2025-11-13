// 函数: sub_1421c9f30
// 地址: 0x1421c9f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
void* rbx = arg1

if (*(arg1 + 0x50) != 0)
    int64_t rbp_1 = 0
    int64_t rdi_1 = sx.q(*(arg1 + 0x50))
    int64_t r14_1 = *(arg1 + 0x48)
    int64_t var_60 = 0
    int32_t var_58_1 = rdi_1.d
    int32_t r14_2
    
    if (rdi_1.d != 0)
        sub_1405a4be0(&var_60, rdi_1.d, 0)
        rbp_1 = var_60
        memcpy(rbp_1, r14_1, (rdi_1 << 4).d)
        int32_t var_54
        r14_2 = var_54
        rdi_1 = zx.q(var_58_1)
        rbx = arg1
    else
        r14_2 = 0
        int32_t var_54_1 = 0
    
    if (sub_140a80f40() == 0)
        uint32_t rax_1
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
            void var_38
            void** rax_2 = sub_1421b1150(&var_38, nullptr, 0xff)
            void* rcx_5 = *rax_2
            *(rcx_5 + 0x10) = rbx
            *(rcx_5 + 0x18) = rbp_1
            *(rcx_5 + 0x20) = rdi_1.d
            *(rcx_5 + 0x24) = r14_2
            void* rcx_6 = *rax_2
            int32_t r8_5 = rax_2[2].d
            int64_t* rdx_5 = rax_2[1]
            int64_t* rbx_1 = *(rcx_6 + 0x30)
            int64_t* arg_10 = rbx_1
            int32_t* rdi_2 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_2 += 1
                rbx_1 = arg_10
            
            result = sub_140778000(rcx_6, rdx_5, r8_5, 1)
            
            if (rbx_1 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    result = sub_140a2f6e0(arg_10)
        else
            void* var_50_1 = rbx
            int64_t var_48 = rbp_1
            int32_t var_40_1 = rdi_1.d
            int32_t var_3c_1 = r14_2
            result = sub_1421bb8c0(&data_143f02b98, *(rbx + 0x18), *(rbx + 0x10), &var_48)
            int64_t rcx_3 = var_48
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
    else
        result = sub_1421bb8c0(&data_143f02b98, *(rbx + 0x18), *(rbx + 0x10), &var_60)
        int64_t rcx_2 = var_60
        
        if (rcx_2 != 0)
            result = sub_140a74f90(rcx_2)
    
    *(arg1 + 0x50) = 0
    
    if (*(arg1 + 0x54) s<= 0xffffffff)
        return sub_1405a5410(arg1 + 0x48, 0)

return result
