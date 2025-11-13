// 函数: sub_14060dee0
// 地址: 0x14060dee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[4]
*arg1 = &data_142d63ac8

if (rdi != 0)
    int64_t rdx = rdi[3]
    
    if (rdx u>= 0x10)
        void* rcx = *rdi
        
        if (rdx + 1 u>= 0x1000)
            void* r8_1 = *(rcx - 8)
            
            if (rcx - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx = r8_1
        
        j_sub_140a74f90(rcx)
    
    rdi[2] = 0
    rdi[3] = 0xf
    *rdi = 0
    j_sub_140a74f90(rdi)

void* rdi_1 = arg1[3]
arg1[4] = 0
*arg1 = &data_142d637d8

if (rdi_1 != 0)
    int64_t rcx_3 = *(rdi_1 + 8)
    
    if (rcx_3 != 0)
        j_sub_140a74f90(rcx_3)
    
    *(rdi_1 + 8) = 0
    j_sub_140a74f90(rdi_1)

arg1[3] = 0
sub_14060d450(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
