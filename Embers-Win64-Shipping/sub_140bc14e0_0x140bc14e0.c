// 函数: sub_140bc14e0
// 地址: 0x140bc14e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_5

if ((arg1[6].d & 0x400000) == 0)
    uint64_t rax_1 = sub_140d3c6e0(arg2)
    uint64_t r9_1 = rax_1
    
    if (rax_1 == 0 && (arg2[6] | arg2[5] | arg2[4] | arg2[3]) != 0)
        if (rax_1.d == data_1439a9d84)
            data_1439a9d84 = 0
        else
            rax_1 = zx.q(data_1439a9d84)
        
        if (rax_1.d != arg2[2] || *arg2 != 0xffffffff)
            void* rax_2 = sub_140ccdeb0(&arg2[3])
            sub_140d3a3a0(arg2, rax_2)
            
            if (rax_2 != 0 || data_143e1d7b4 == 0)
                int32_t rax_3 = 0
                
                if (0 == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_3 = data_1439a9d84
                
                arg2[2] = rax_3
            
            r9_1 = sub_140d3c6e0(arg2)
    
    rax_5, arg3 = sub_140bc81e0(arg1, r9_1, 0)

int32_t* rdx_4

if ((arg1[6].d & 0x400000) != 0 || rax_5 == 0)
    int128_t var_48
    rdx_4 = &var_48
    var_48 = *(arg2 + 0xc)
else
    int32_t var_28 = 0xffffffff
    int64_t var_24
    __builtin_memset(&var_24, 0, 0x18)
    void var_38
    int64_t var_1c
    var_1c.o = *sub_140cbceb0(&var_38, rax_5)
    arg3 = sub_140d3a3a0(&var_28, rax_5)
    int32_t rax_7 = 0
    
    if (0 == data_1439a9d84)
        data_1439a9d84 = 0
    else
        rax_7 = data_1439a9d84
    
    var_24:4.d = rax_7
    rdx_4 = &var_1c

sub_1409ac860(arg1, rdx_4, arg3)
return arg1
