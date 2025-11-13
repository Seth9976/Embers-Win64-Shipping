// 函数: sub_14060db30
// 地址: 0x14060db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d63818
int64_t rdx = arg1[0xa]

if (rdx u>= 0x10)
    void* rcx = arg1[7]
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)

arg1[9] = 0
arg1[0xa] = 0xf
arg1[7].b = 0
int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rdi = arg1[3]
*arg1 = &data_142d637d8

if (rdi != 0)
    int64_t rcx_3 = *(rdi + 8)
    
    if (rcx_3 != 0)
        j_sub_140a74f90(rcx_3)
    
    *(rdi + 8) = 0
    j_sub_140a74f90(rdi)

arg1[3] = 0
sub_14060d450(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
