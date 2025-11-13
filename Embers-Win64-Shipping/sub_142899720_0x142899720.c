// 函数: sub_142899720
// 地址: 0x142899720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t arg_8
int32_t rax = sub_1428a5b70(&arg_8)

if (rax != 0)
    CRITICAL_SECTION* rax_1 = sub_1428a5be0()
    data_143feb040 = rax_1
    
    if (rax_1 != 0)
        int32_t rax_2
        void (* rcx_1)()
        rax_2, rcx_1 = atexit(sub_1428991a0)
        
        if (rax_2 == 0)
            int32_t rax_3 = arg_8
            data_143b84cb0 = rax_3
            data_143feb048 = 1
            data_143feb04c = 1
            return rax_3
        
        rax_1 = data_143feb040
    
    sub_1428a5ba0(rax_1)
    data_143feb040 = 0
    rax = sub_1428a5ad0(&arg_8)

data_143feb04c = 0
return rax
