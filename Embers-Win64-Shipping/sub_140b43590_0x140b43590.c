// 函数: sub_140b43590
// 地址: 0x140b43590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140b40760(arg1, arg2) == 0)
    int64_t* rax_3 = sub_140b3a4e0(&data_1439a90f0, arg1)
    
    if (arg4 != 0)
        sub_140aeef30(arg3, 0)
        int32_t i_2 = arg3[9].d
        
        if (i_2 s> 0)
            int64_t r9_1 = 0
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                void* rcx_11 = arg3[8]
                void* rax_4 = &arg3[7]
                int64_t rdx_11 = (sx.q(arg3[9].d) - 1) & r9_1
                
                if (rcx_11 != 0)
                    rax_4 = rcx_11
                
                r9_1 += 1
                *(rax_4 + (rdx_11 << 2)) = 0xffffffff
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    if (arg5 == 0)
        return sub_140afbb70(arg3, rax_3)
    
    return sub_140aebba0(arg3, rax_3)

int32_t r9 = 0
int32_t rcx = 0
int64_t var_18 = 0
int32_t var_c_1 = 0
int32_t var_10_1 = 0
uint64_t result

if (arg5 == 0)
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (arg2[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_18, rbx_3.d + 1)
            rcx = var_c_1
            r9 = var_10_1
        
        int32_t rax_2 = rbx_3.d + 1 + r9
        int32_t var_10_3 = rax_2
        
        if (rax_2 s> rcx)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, arg2, (rbx_3.d + 1) * 2)
    
    result = sub_140afcd00(arg3, &var_18)
else
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rbx_1.d + 1)
            rcx = var_c_1
            r9 = var_10_1
        
        int32_t rax_1 = rbx_1.d + 1 + r9
        int32_t var_10_2 = rax_1
        
        if (rax_1 s> rcx)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)
    
    result = sub_140aeb680(arg3, &var_18)

int64_t rcx_9 = var_18

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
