// 函数: sub_14061f450
// 地址: 0x14061f450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142d68358
*arg1 = &data_142d68358
int64_t rdx = arg1[6]

if (rdx u>= 0x10)
    void* rcx = arg1[3]
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    result = j_sub_140a74f90(rcx)

arg1[5] = 0
arg1[6] = 0xf
arg1[3].b = 0
return result
