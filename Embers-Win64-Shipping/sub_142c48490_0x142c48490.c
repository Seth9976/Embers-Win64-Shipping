// 函数: sub_142c48490
// 地址: 0x142c48490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_144019c64 += 1
int32_t result = sub_142c48400(0, 0)

if (result == 0)
    int64_t rbx_1 = data_14401a230
    
    if (rbx_1 == 0)
        int64_t rax = data_144019c88
        int64_t rax_1
        
        if (rax != 0)
            rax_1 = rax(0x65b93ca8)
            data_14401a230 = rax_1
            rbx_1 = rax_1
        
        if (rax == 0 || rax_1 == 0)
            data_144019c64 -= 1
            return 0xfffffffd
    
    int64_t rax_3 = data_144019c98
    int64_t arg_10 = 0
    
    if (rax_3 != 0)
        rax_3(0x65b93ca8, &arg_10)
    
    int32_t result_1 = rbx_1(arg1)
    int64_t rax_4 = data_144019ca0
    
    if (rax_4 != 0)
        rax_4(0x65b93ca8, arg_10, zx.q(result_1))
    
    result = result_1

data_144019c64 -= 1
return result
