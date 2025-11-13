// 函数: sub_1429914c0
// 地址: 0x1429914c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return 

int64_t* rbx_1 = arg1

do
    void* rcx_1 = *rbx_1
    
    if (rcx_1 != 0)
        if (((rbx_1[2] - rcx_1) & 0xfffffffffffffff8) u>= 0x1000)
            void* r8_1 = *(rcx_1 - 8)
            
            if (rcx_1 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_1 = r8_1
        
        j_sub_140a74f90(rcx_1)
        __builtin_memset(rbx_1, 0, 0x18)
    
    rbx_1 = &rbx_1[3]
while (rbx_1 != arg2)
