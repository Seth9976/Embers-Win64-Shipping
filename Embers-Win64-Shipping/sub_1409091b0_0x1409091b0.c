// 函数: sub_1409091b0
// 地址: 0x1409091b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return 

int64_t* rbx_1 = arg1

do
    int64_t rdx = rbx_1[3]
    
    if (rdx u>= 0x10)
        void* rcx = *rbx_1
        
        if (rdx + 1 u>= 0x1000)
            void* r8_1 = *(rcx - 8)
            
            if (rcx - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx = r8_1
        
        j_sub_140a74f90(rcx)
    
    rbx_1[2] = 0
    rbx_1[3] = 0xf
    *rbx_1 = 0
    rbx_1 = &rbx_1[4]
while (rbx_1 != arg2)
