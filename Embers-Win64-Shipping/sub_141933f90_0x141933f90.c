// 函数: sub_141933f90
// 地址: 0x141933f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (data_143eff640 != 0)
    int32_t i = 0
    int32_t* r15_1 = arg1 + 0xb0
    int32_t i_1 = 0
    int32_t* var_58 = r15_1
    
    do
        void* r9_1 = data_143eff640
        int64_t r12_1 = sx.q(*r15_1)
        result = *(r9_1 + 0x28)
        void* const rcx_2
        
        if (result == *(r9_1 + 0x54))
        label_141934040:
            rcx_2 = nullptr
        else
            void* rcx = *(r9_1 + 0x60)
            void* r8_1 = r9_1 + 0x58
            
            if (rcx != 0)
                r8_1 = rcx
            
            result = *(r8_1 + (((sx.q(*(r9_1 + 0x68)) - 1) & r12_1) << 2))
            
            if (result == 0xffffffff)
            label_141934040_1:
                rcx_2 = nullptr
            else
                int64_t r8_2 = *(r9_1 + 0x20)
                
                while (true)
                    int64_t rdx_4 = sx.q(result) * 5
                    rcx_2 = r8_2 + (rdx_4 << 3)
                    
                    if (*(r8_2 + (rdx_4 << 3)) == r12_1.d)
                        break
                    
                    result = *(rcx_2 + 0x20)
                    
                    if (result == 0xffffffff)
                        goto label_141934040_2
                
                if (result == 0xffffffff)
                label_141934040_2:
                    rcx_2 = nullptr
        
        void* rdi_1 = rcx_2 + 8
        
        if (rcx_2 == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            bool cond:0_1 = *(rdi_1 + 0x14) == 0
            int32_t rax = 0
            int32_t var_44_1 = 0
            int32_t* r14_1 = nullptr
            int32_t* var_50 = nullptr
            uint32_t count = 0
            uint32_t count_1 = 0
            int32_t var_78
            int32_t var_70
            int32_t var_68
            
            if (not(cond:0_1))
                int64_t r15_2 = sx.q(*(rdi_1 + 0x10))
                
                if (r15_2.d != 0)
                    sub_1405c5510(&var_50, r15_2.d)
                    rax = var_44_1
                    count = count_1
                    r14_1 = var_50
                
                if (r15_2.d s> count)
                    int64_t count_3 = sx.q(count)
                    int32_t rbx_2 = r15_2.d - count
                    count = rbx_2 + count_3.d
                    
                    if (count s> rax)
                        sub_1405daba0(&var_50)
                        r14_1 = var_50
                    
                    memset(r14_1 + count_3, 0, sx.q(rbx_2))
                else if (r15_2.d s< count)
                    int32_t rax_2 = count - r15_2.d
                    
                    if (count != r15_2.d)
                        uint32_t count_2 = count - rax_2
                        
                        if (count_2 != r15_2.d)
                            memmove(r14_1 + r15_2, sx.q(rax_2 + r15_2.d) + r14_1, count_2 - r15_2.d)
                        
                        sub_1405dac10(&var_50)
                        count = count_2
                        r14_1 = var_50
                
                var_68 = 0
                int32_t arg_24 = 0
                var_70 = 0
                var_78 = *(rdi_1 + 8)
                void arg_18
                sub_140b02330((*sub_140b5e500(&arg_18, 0x101)).q, r14_1, r15_2.d, *rdi_1, var_78, 0)
                r15_1 = var_58
                i = i_1
            else if (&var_50 != rdi_1)
                count = *(rdi_1 + 8)
                int64_t rbx_4 = *rdi_1
                
                if (count != 0)
                    sub_1405da9e0(&var_50, count, 0)
                    r14_1 = var_50
                    memcpy(r14_1, rbx_4, count)
                
                i = i_1
            
            var_58 = r14_1
            i_1 = count - 1
            data_143effe58(zx.q(r12_1.d), 1, &var_58, &i_1, var_78, var_70, var_68)
            data_143effd78(zx.q(r12_1.d))
            result = sub_1418aa4c0(data_143eff640 + 0x20, r12_1.d)
            
            if (r14_1 != 0)
                result = sub_140a74f90(r14_1)
        
        i += 1
        r15_1 = &r15_1[0x2e]
        i_1 = i
        var_58 = r15_1
    while (i u< 6)

return result
