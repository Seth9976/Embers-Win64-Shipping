// 函数: sub_14061f5f0
// 地址: 0x14061f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142d682b0
*arg1 = &data_142d682b0
int64_t rdx = arg1[4]

if (rdx u>= 0x10)
    void* rcx = arg1[1]
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    result = j_sub_140a74f90(rcx)

arg1[3] = 0
arg1[4] = 0xf
arg1[1].b = 0
return result
