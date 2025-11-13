// 函数: sub_1423ef5b0
// 地址: 0x1423ef5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa8) == 0 && *(arg1 + 0xac) s<= 0)
    return 

int64_t* rcx = *(arg1 + 0x98)
int64_t rax = sx.q(rcx[1].d)
int64_t rdi_3 = *(arg1 + 0x90) - rax + arg3

if (rdi_3 s> 0)
    if (rax + rdi_3 s>= 0x7fffffff)
        int64_t var_18
        int64_t* rax_2 = sub_140b63b70(arg1 + 0xa0, &var_18)
        int16_t* const r9_1
        
        if (rax_2[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_2
        
        sub_140af98a0("Unknown", 0x2a, 
            FMemoryWriter does not support data larger than 2GB. Archive name: %s.", r9_1)
        int64_t rcx_2 = var_18
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_140afbb40()
        rcx = *(arg1 + 0x98)
    
    rax = zx.q(rcx[1].d + rdi_3.d)
    rcx[1].d = rax.d
    
    if (rax.d s> *(rcx + 0xc))
        sub_1405daba0(rcx)

if (arg3 != 0)
    memcpy(sx.q(*(arg1 + 0x90)) + **(arg1 + 0x98), arg2, arg3.d)
    *(arg1 + 0x90) += arg3
