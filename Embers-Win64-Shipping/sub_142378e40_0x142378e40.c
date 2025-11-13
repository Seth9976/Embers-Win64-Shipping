// 函数: sub_142378e40
// 地址: 0x142378e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    int64_t* rax_1 = j_sub_140a82f30(0x20)
    int64_t* rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        int32_t r15_1 = arg2[1].d
        *rax_1 = 0
        uint32_t count = arg2[1].d
        int64_t rsi_1 = *arg2
        rax_1[1].d = count
        
        if (count != 0)
            sub_1405da9e0(rbx_1, count, 0)
            memcpy(*rbx_1, rsi_1, count)
        else
            *(rax_1 + 0xc) = 0
        
        rbx_1[2].d = r15_1
        *(rbx_1 + 0x14) = 0
        rbx_1[3].d = 1
    
    int64_t* var_50_1 = rbx_1
    int64_t rax_3
    void* rcx_2
    
    if (sub_140a80f40() == 0)
        uint32_t rax_4
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 == 0 && (data_143de5480 == 0 || rax_4.b != 0))
            rax_3 = *arg1
            rcx_2 = arg1
            goto label_142378f45
        
        void var_48
        void** rax_5 = sub_14235eca0(&var_48, nullptr, 0xff)
        *(*rax_5 + 0x10) = (arg1 - 0x10).o
        void* rcx_7 = *rax_5
        int32_t r8_2 = rax_5[2].d
        int64_t* rdx_4 = rax_5[1]
        int64_t* rbx_2 = *(rcx_7 + 0x28)
        int64_t* arg_20 = rbx_2
        void* rdi_2 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_2 += 1
            rbx_2 = arg_20
        
        result = sub_1405e48c0(rcx_7, rdx_4, r8_2, 1)
        
        if (rbx_2 != 0)
            result = *rdi_2
            *rdi_2 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_20)
    else
        rax_3 = *arg1
        rcx_2 = arg1
    label_142378f45:
        result = (*(rax_3 + 0x28))(rcx_2, rbx_1)
        
        if (rbx_1 != 0)
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            return j_sub_140a74f90(rbx_1)

return result
