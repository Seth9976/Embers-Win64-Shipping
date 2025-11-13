// 函数: sub_14297bc40
// 地址: 0x14297bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg2
void** rdi = arg2

if (*(arg2 + 0x19) != 0)
    return 

do
    sub_14297bc40(arg1, rdi[2])
    int64_t rdx_1 = rbx[7]
    rdi = *rdi
    
    if (rdx_1 u>= 0x10)
        void* rcx_1 = rbx[4]
        
        if (rdx_1 + 1 u>= 0x1000)
            void* r8_1 = *(rcx_1 - 8)
            
            if (rcx_1 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_1 = r8_1
        
        j_sub_140a74f90(rcx_1)
    
    rbx[6] = 0
    rbx[7] = 0xf
    rbx[4].b = 0
    j_sub_140a74f90(rbx)
    rbx = rdi
while (*(rdi + 0x19) == 0)
