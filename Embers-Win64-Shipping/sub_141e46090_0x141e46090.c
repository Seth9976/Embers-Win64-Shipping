// 函数: sub_141e46090
// 地址: 0x141e46090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)

if (sub_140d3cb50(arg1) != 0 && *(sub_140d3cb50(arg1) + 0x240) s< 0x136)
    int64_t i_2 = sx.q(arg1[0xa].d)
    sub_141e3d570(&arg1[0xb], 0)
    int32_t rbp_1 = 0
    int64_t i_1 = i_2
    
    if (i_2.d s> 0)
        int64_t r14_1 = 0
        int64_t i
        
        do
            int32_t* rbx_2 = arg1[7] + r14_1
            int32_t rdi_1 = rbx_2[2]
            int64_t var_28
            sub_140b63b70(rbx_2, &var_28)
            int64_t rcx_4 = var_28
            int64_t var_38 = *rbx_2
            int32_t var_30_1 = rdi_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            sub_141e3ab90(&arg1[0xb], &var_38, sx.q(rbp_1) * 0x30 + arg1[9])
            rbp_1 += 1
            r14_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_141e464f0(&arg1[0xb], arg1, 1)

arg1[0x4d].w += 1
void* rdi_2 = arg1[0x48]

if (rdi_2 != 0)
    arg1[0x4a].d = 0
    
    if (*(arg1 + 0x254) s<= 0xffffffff)
        sub_1405947f0(&arg1[0x49], 0)
    
    sub_141e5ced0(rdi_2, &arg1[0x49])

void* result = sub_141e5f5c0(&arg1[0x3e], &data_143f398c8)

if (result == 0)
    return result

return sub_141e63ae0(result, arg1) __tailcall
