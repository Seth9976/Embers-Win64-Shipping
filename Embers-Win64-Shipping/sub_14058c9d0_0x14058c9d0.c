// 函数: sub_14058c9d0
// 地址: 0x14058c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3] = -1
arg1[4] = -0x4010000000000000
arg1[5].d = 0xffffffff
sub_14058a370(arg1, 0)
arg1[6] = 0
int64_t result = sub_14058a370(arg1, 0)
void* rcx_1 = *arg1

if (rcx_1 != 0)
    if (arg1[2] - rcx_1 u>= 0x1000)
        void* r8_1 = *(rcx_1 - 8)
        
        if (rcx_1 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_1 = r8_1
    
    result = j_sub_140a74f90(rcx_1)
    __builtin_memset(arg1, 0, 0x18)

return result
