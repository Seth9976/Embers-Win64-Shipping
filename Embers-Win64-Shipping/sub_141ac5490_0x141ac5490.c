// 函数: sub_141ac5490
// 地址: 0x141ac5490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
uint64_t i_3 = zx.q(arg1[3].d)

if (i_3.d != arg1[5].d)
    arg1[5].d = 0
    
    if (*(arg1 + 0x2c) != i_3.d)
        sub_1405dadb0(&arg1[4], i_3.d)
    
    if (i_3.d s> 0)
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            int64_t rdi = sx.q(arg1[5].d)
            int32_t rax_1 = (rdi + 1).d
            arg1[5].d = rax_1
            
            if (rax_1 s> *(arg1 + 0x2c))
                sub_1406105e0(&arg1[4])
            
            int32_t* rdx_2 = arg1[4] + (rdi << 2)
            
            if (rdx_2 != 0)
                *rdx_2 = 0
            
            i = i_2
            i_2 -= 1
        while (i != 1)

uint64_t result = sub_141ad1b90(arg1)
int32_t* i_1 = arg1[2]

for (void* rdi_3 = &i_1[sx.q(arg1[3].d) * 4]; i_1 != rdi_3; i_1 = &i_1[4])
    result = sub_141e29640(i_1, arg2)

return result
