// 函数: sub_14060d4c0
// 地址: 0x14060d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
int32_t rbp = 0
int32_t result = ((*(arg1 + 0x18) - rcx) s>> 3).d

if (result s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rdi_1 = *(r14_1 + rcx)
        
        if (rdi_1 != 0)
            for (int64_t* i = *(rdi_1 + 8); i != *(rdi_1 + 0x10); i = &i[1])
                int64_t* rcx_1 = *i
                
                if (rcx_1 != 0)
                    (**rcx_1)(rcx_1, 1)
            
            void* rcx_3 = *(rdi_1 + 8)
            
            if (rcx_3 != 0)
                if (((*(rdi_1 + 0x18) - rcx_3) & 0xfffffffffffffff8) u>= 0x1000)
                    void* r8_1 = *(rcx_3 - 8)
                    
                    if (rcx_3 - r8_1 - 8 u> 0x1f)
                        goto label_14060d606
                    
                    rcx_3 = r8_1
                
                j_sub_140a74f90(rcx_3)
                __builtin_memset(rdi_1 + 8, 0, 0x18)
            
            j_sub_140a74f90(rdi_1)
        
        rbp += 1
        *(r14_1 + *(arg1 + 0x10)) = 0
        r14_1 = &r14_1[1]
        rcx = *(arg1 + 0x10)
        result = ((*(arg1 + 0x18) - rcx) s>> 3).d
    while (rbp s< result)

if (rcx != 0)
    if (((*(arg1 + 0x20) - rcx) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_2 = *(rcx - 8)
        
        if (rcx - r8_2 - 8 u> 0x1f)
        label_14060d606:
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_2
    
    result = j_sub_140a74f90(rcx)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

return result
