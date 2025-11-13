// 函数: sub_14060e060
// 地址: 0x14060e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[3]
*arg1 = &data_142d637a0

if (rdi != 0)
    int64_t rcx = *(rdi + 8)
    
    if (rcx != 0)
        j_sub_140a74f90(rcx)
    
    *(rdi + 8) = 0
    j_sub_140a74f90(rdi)

int64_t* rdi_1 = arg1[4]

if (rdi_1 != 0)
    int64_t rdx_1 = rdi_1[3]
    
    if (rdx_1 u>= 0x10)
        void* rcx_2 = *rdi_1
        
        if (rdx_1 + 1 u>= 0x1000)
            void* r8_1 = *(rcx_2 - 8)
            
            if (rcx_2 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_2 = r8_1
        
        j_sub_140a74f90(rcx_2)
    
    rdi_1[2] = 0
    rdi_1[3] = 0xf
    *rdi_1 = 0
    j_sub_140a74f90(rdi_1)

arg1[3] = 0
arg1[4] = 0
sub_14060d450(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
