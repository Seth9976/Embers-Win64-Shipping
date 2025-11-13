// 函数: ?_Change_array@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXQEA_K_K1@Z
// 地址: 0x14058e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    if (((arg1[2] - rcx) & 0xfffffffffffffffc) u>= 0x1000)
        void* r8 = *(rcx - 8)
        
        if (rcx - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8
    
    j_sub_140a74f90(rcx)

*arg1 = arg2
arg1[1] = arg2 + (arg3 << 2)
int64_t result = arg2 + (arg4 << 2)
arg1[2] = result
return result
