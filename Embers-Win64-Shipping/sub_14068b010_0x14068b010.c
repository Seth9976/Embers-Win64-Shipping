// 函数: sub_14068b010
// 地址: 0x14068b010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg1[1]
int64_t result = *arg1
int64_t rbp_2 = (rdi - result) s>> 4

if (arg2 u< rbp_2)
    arg1[1] = (arg2 << 4) + result
else if (arg2 u> rbp_2)
    int64_t rcx_2 = (arg1[2] - result) s>> 4
    
    if (arg2 u<= rcx_2)
        int64_t rbx_5 = arg2 - rbp_2
        
        if (arg2 != rbp_2)
            result = memset(rdi, 0, rbx_5 << 4)
            rdi += rbx_5 << 4
        
        arg1[1] = rdi
    else
        int64_t rdi_1 = 0xfffffffffffffff
        
        if (arg2 u> 0xfffffffffffffff)
            sub_140610c20()
            noreturn
        
        uint64_t rdx_1 = rcx_2 u>> 1
        
        if (rcx_2 u<= 0xfffffffffffffff - rdx_1)
            rdi_1 = rdx_1 + rcx_2
            
            if (rdi_1 u< arg2)
                rdi_1 = arg2
        
        void* rax_1 = sub_1406afec0(arg1, rdi_1)
        
        if (arg2 != rbp_2)
            memset((rbp_2 << 4) + rax_1, 0, (arg2 - rbp_2) << 4)
        
        int64_t rdx_3 = *arg1
        result = memmove(rax_1, rdx_3, (arg1[1]).d - rdx_3.d)
        void* rcx_8 = *arg1
        
        if (rcx_8 != 0)
            if (((arg1[2] - rcx_8) & 0xfffffffffffffff0) u>= 0x1000)
                void* r8_6 = *(rcx_8 - 8)
                
                if (rcx_8 - r8_6 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_8 = r8_6
            
            result = j_sub_140a74f90(rcx_8)
        
        *arg1 = rax_1
        arg1[1] = (arg2 << 4) + rax_1
        arg1[2] = (rdi_1 << 4) + rax_1

return result
