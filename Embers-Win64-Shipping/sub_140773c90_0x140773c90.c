// 函数: sub_140773c90
// 地址: 0x140773c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x180) s> 0)
    int64_t* rbp_1 = *(arg1 + 0x178)
    *(arg1 + 0x178) = 0
    int64_t rbx_1 = sx.q(*(arg1 + 0x180))
    int32_t rdi_1 = *(arg1 + 0x184)
    *(arg1 + 0x180) = 0
    
    if (sub_140a80f40() == 0)
        uint32_t rax_3
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
            void var_58
            void** rax_4 = sub_140751370(&var_58, nullptr, 0xff)
            void* rcx_6 = *rax_4
            *(rcx_6 + 0x10) = rbp_1
            *(rcx_6 + 0x1c) = rdi_1
            *(rcx_6 + 0x18) = rbx_1.d
            void* rcx_7 = *rax_4
            int32_t r8_1 = rax_4[2].d
            int64_t* rdx_2 = rax_4[1]
            int64_t* rbx_3 = *(rcx_7 + 0x28)
            int64_t* arg_10 = rbx_3
            void* rdi_3 = &rbx_3[9]
            
            if (rbx_3 != 0)
                *rdi_3 += 1
                rbx_3 = arg_10
            
            result = sub_1405e48c0(rcx_7, rdx_2, r8_1, 1)
            
            if (rbx_3 != 0)
                result = zx.q(*rdi_3)
                *rdi_3 -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(arg_10)
        else
            int64_t* var_68 = rbp_1
            int32_t var_60_1 = rbx_1.d
            int32_t var_5c_1 = rdi_1
            result = sub_140747d00(&var_68)
            int64_t* rcx_4 = var_68
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
    else
        int64_t rsi_1 = 0
        result = &rbp_1[rbx_1]
        int64_t* rdi_2 = rbp_1
        uint64_t r15_2 = rbx_1 << 3 u>> 3
        
        if (rbp_1 u> result)
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                int64_t* rbx_2 = *rdi_2
                
                if (rbx_2 != 0)
                    (*(*rbx_2 + 0x18))(rbx_2)
                    result = (**rbx_2)(rbx_2, 1)
                
                rdi_2 = &rdi_2[1]
                rsi_1 += 1
            while (rsi_1 != r15_2)
        
        if (rbp_1 != 0)
            result = sub_140a74f90(rbp_1)
    
    *(arg1 + 0x180) = 0
    
    if (*(arg1 + 0x184) != 0)
        result = sub_1405c5570(arg1 + 0x178, 0)

bool cond:0 = *(arg1 + 0x194) == 0
*(arg1 + 0x190) = 0

if (cond:0)
    return result

return sub_1405dadb0(arg1 + 0x188, 0)
