// 函数: sub_142008910
// 地址: 0x142008910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t* r15 = arg1

if (data_143f3efd8 != 0)
    int64_t r8_1 = 0
    int32_t rsi_1 = 0
    int32_t r12_1 = 0
    int64_t* r14_1 = nullptr
    int64_t* var_78 = nullptr
    int32_t arg_18 = 0
    
    if (arg2 != 0)
        r8_1 = data_143f3f008
    
    int32_t var_6c_1 = 0
    void arg_20
    sub_140b5b3f0(&arg_20, &data_143f3f220, r8_1)
    
    if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(&arg_20) != 0
            && sub_141ffbf00(r15) != 0)
        void* r13_1 = nullptr
        void* var_88 = nullptr
        int32_t i_2 = 0
        int32_t r15_1 = 0
        int32_t var_7c_1 = 0
        void* rbx_1 = *(arg1 + 0x80)
        uint64_t* rax_7 = sx.q(arg1[0x22]) * 0x60 + rbx_1
        uint64_t* var_98 = rax_7
        
        if (rbx_1 != rax_7)
            do
                int64_t* rax_8 = sub_140b29d90(&arg_18)
                
                if (*(rbx_1 + 0x40) != 0 || *(rbx_1 + 0x59) != 0)
                label_142008a0e:
                    int64_t r14_2 = sx.q(rsi_1)
                    rsi_1 = (r14_2 + 1).d
                    
                    if (rsi_1 s> r12_1)
                        sub_14090a6a0(&var_78)
                        r12_1 = var_6c_1
                    
                    sub_141ff46f0(&var_78[r14_2 * 0xc], rbx_1)
                    goto label_142008a44
                
                int64_t rax_10 = *rax_8 - *(rbx_1 + 0x38)
                
                if (rax_10 s> data_143f3eff8)
                label_142008a44:
                    int64_t i_3 = sx.q(i_2)
                    i_2 = (i_3 + 1).d
                    
                    if (i_2 s> r15_1)
                        sub_14090a6a0(&var_88)
                        r15_1 = var_7c_1
                        r13_1 = var_88
                    
                    sub_141ff46f0(i_3 * 0x60 + r13_1, rbx_1)
                else if (rax_10 s> data_143f3f000)
                    goto label_142008a0e
                
                rbx_1 += 0x60
            while (rbx_1 != var_98)
            
            arg_18 = rsi_1
        
        void* r14_3 = r13_1
        void* r12_4 = sx.q(i_2) * 0x60 + r13_1
        
        if (r13_1 != r12_4)
            uint64_t var_68
            var_98 = &var_68
            
            do
                int32_t rbx_2 = *(r14_3 + 8)
                uint64_t r15_2 = 0
                int64_t rax_12 = *r14_3
                var_68 = 0
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_68, rbx_2, 0)
                    memcpy(var_68, rax_12, rbx_2 * 2)
                    r15_2 = var_68
                else
                    int32_t var_5c_1 = 0
                
                int64_t var_58 = 0
                int32_t var_50_1 = rbx_2
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_58, rbx_2, 0)
                    memcpy(var_58, r15_2, rbx_2 * 2)
                else
                    int32_t var_4c_1 = 0
                
                int64_t var_48
                sub_142006bd0(arg1, &var_48, &var_58)
                sub_142001640(arg1, &var_48)
                sub_141ff2ae0(arg1 + 0x80, &var_98)
                int64_t rcx_19 = var_48
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                uint64_t rcx_20 = var_68
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                r14_3 += 0x60
            while (r14_3 != r12_4)
            
            rsi_1 = arg_18
            r13_1 = var_88
        
        r15 = arg1
        sub_141ffe130(r15)
        sub_1420023d0(r15)
        r15[1].b = 1
        
        if (i_2 != 0)
            void* rbx_3 = r13_1 + 0x28
            int32_t i
            
            do
                int64_t rcx_23 = *(rbx_3 + 0x20)
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rcx_24 = *rbx_3
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                int64_t rcx_25 = *(rbx_3 - 0x10)
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                int64_t rcx_26 = *(rbx_3 - 0x28)
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                rbx_3 += 0x60
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        r14_1 = var_78
    
    sub_140b5b5d0(&arg_20)
    int64_t* rbx_4 = r14_1
    result = sx.q(rsi_1)
    void* rdi_3 = &r14_1[result * 0xc]
    
    if (r14_1 != rdi_3)
        do
            result = sub_14200df50(r15, rbx_4)
            rbx_4 = &rbx_4[0xc]
        while (rbx_4 != rdi_3)
    
    if (rsi_1 != 0)
        void* rbx_5 = &r14_1[5]
        int32_t i_1
        
        do
            int64_t rcx_30 = *(rbx_5 + 0x20)
            
            if (rcx_30 != 0)
                result = sub_140a74f90(rcx_30)
            
            int64_t rcx_31 = *rbx_5
            
            if (rcx_31 != 0)
                result = sub_140a74f90(rcx_31)
            
            int64_t rcx_32 = *(rbx_5 - 0x10)
            
            if (rcx_32 != 0)
                result = sub_140a74f90(rcx_32)
            
            int64_t rcx_33 = *(rbx_5 - 0x28)
            
            if (rcx_33 != 0)
                result = sub_140a74f90(rcx_33)
            
            rbx_5 += 0x60
            i_1 = rsi_1
            rsi_1 -= 1
        while (i_1 != 1)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
