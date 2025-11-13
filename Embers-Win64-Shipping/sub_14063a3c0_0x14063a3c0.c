// 函数: sub_14063a3c0
// 地址: 0x14063a3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x98)
int64_t result = sx.q(rcx[1].d)
int64_t rdi_2 = *(arg1 + 0x90) - result + arg3

if (rdi_2 s> 0)
    if (result + rdi_2 s>= 0x7fffffff)
        int64_t var_18
        int64_t* rax_1 = sub_140b63b70(arg1 + 0xa0, &var_18)
        int16_t* const r9_1
        
        if (rax_1[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_1
        
        sub_140af98a0("Unknown", 0x2a, 
            FMemoryWriter does not support data larger than 2GB. Archive name: %s.", r9_1)
        int64_t rcx_2 = var_18
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_140afbb40()
        rcx = *(arg1 + 0x98)
    
    result = zx.q(rcx[1].d + rdi_2.d)
    rcx[1].d = result.d
    
    if (result.d s> *(rcx + 0xc))
        result = sub_1405daba0(rcx)

if (arg3 != 0)
    result = memcpy(sx.q(*(arg1 + 0x90)) + **(arg1 + 0x98), arg2, arg3.d)
    *(arg1 + 0x90) += arg3

return result
