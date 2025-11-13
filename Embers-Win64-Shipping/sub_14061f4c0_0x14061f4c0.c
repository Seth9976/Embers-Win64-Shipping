// 函数: sub_14061f4c0
// 地址: 0x14061f4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d683a8

if (arg1[0xb].d u> 0)
    void* rax_1 = arg1[0xc]
    
    if (rax_1 != 0)
        int64_t i = *(rax_1 - 8)
        void* rbx_3 = (i << 5) + rax_1
        
        if (i != 0)
            do
                void* rcx_1 = *(rbx_3 - 0x20)
                rbx_3 -= 0x20
                i -= 1
                
                if (rcx_1 != 0)
                    if (*(rbx_3 + 0x10) - rcx_1 u>= 0x1000)
                        void* r8_1 = *(rcx_1 - 8)
                        
                        if (rcx_1 - r8_1 - 8 u> 0x1f)
                            goto label_14061f5e8
                        
                        rcx_1 = r8_1
                    
                    j_sub_140a74f90(rcx_1)
                    __builtin_memset(rbx_3, 0, 0x18)
            while (i != 0)
            
            *(rax_1 - 8)
        
        j_sub_140a74f90(rax_1 - 8)

void* rcx_4 = arg1[0xd]

if (rcx_4 == 0)
    return sub_14061f450(arg1) __tailcall

if (arg1[0xf] - rcx_4 u< 0x1000)
    goto label_14061f5b5

void* r8_2 = *(rcx_4 - 8)

if (rcx_4 - r8_2 - 8 u> 0x1f)
label_14061f5e8:
    _invalid_parameter_noinfo_noreturn()
    noreturn

rcx_4 = r8_2
label_14061f5b5:
j_sub_140a74f90(rcx_4)
__builtin_memset(&arg1[0xd], 0, 0x18)
return sub_14061f450(arg1) __tailcall
