// 函数: sub_14058a4d0
// 地址: 0x14058a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[3]

if (rdx u>= 0x10)
    void* rcx = *arg1
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)

arg1[2] = 0
arg1[3] = 0xf
*arg1 = 0
