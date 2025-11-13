// 函数: sub_141bc8730
// 地址: 0x141bc8730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141bc9780(arg1)

if (arg1[0x22].d s> 0)
    result = arg1[0x21]
    void* rdi_1 = *result
    
    if (rdi_1 != 0)
        void* rax = sub_141bf7ac0()
        void* rdx_1 = *(rdi_1 + 0x10)
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s<= *(rdx_1 + 0x38))
            result = *(rdx_1 + 0x30)
        
        if (rax_1.d s> *(rdx_1 + 0x38) || *(result + (rax_1 << 3)) != rax + 0x30)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            void* rdi_2 = nullptr
            int64_t arg_8 = 0
            void* rax_3 = sub_140d2dfc0(sub_141bf7ac0(), arg1, 0, 0, 0, 0, 0, 0, 0)
            
            if (arg1[0x22].d s> 0)
                rdi_2 = *arg1[0x21]
            
            void* rax_4 = *(rdi_2 + 0x30)
            *(rax_3 + 0x30) = rax_4
            *(rax_4 + 0x28) = rax_3
            result = arg1[0x21]
            *result = rax_3

return result
