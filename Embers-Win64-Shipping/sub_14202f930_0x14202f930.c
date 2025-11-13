// 函数: sub_14202f930
// 地址: 0x14202f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1 + 0x28
int32_t rdx = 0

if (arg1 == 0)
    result = 0

if (data_143f5b268 == result)
    result = data_143f5b298
    
    if (*(result + 0x788) == arg1)
        int64_t var_18 = 0
        int32_t rcx = 0
        int64_t var_10_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_18, rbx_1.d + 1)
                rcx = var_10_1:4.d
                rdx = var_10_1.d
            
            int32_t rax = rdx + rbx_1.d + 1
            var_10_1.d = rax
            
            if (rax s> rcx)
                sub_140594770(&var_18)
            
            UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)
        
        int64_t* arg_8 = &var_18
        result = sub_140688b80(&data_143f40650, &arg_8)
        int64_t rcx_4 = var_18
        
        if (rcx_4 != 0)
            return sub_140a74f90(rcx_4)

return result
