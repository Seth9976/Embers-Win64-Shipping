// 函数: sub_141d01db0
// 地址: 0x141d01db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* arg_18 = arg3
int16_t* const rbp
int16_t* const var_10 = rbp
int32_t rdi = 0
int64_t r12 = arg4
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rax = *arg2
        
        if (*(r14_1 + rax + 8) == 0)
            rbp = &data_142d40450
        else
            rbp = *(r14_1 + rax)
        
        sub_140af2b60()
        char rax_1 = sub_140b21a10(&data_143dbb3f0, u"SkipOptionalPakFiles")
        int64_t rax_2 = sub_140b6b610()
        int64_t var_50_1 = r12
        void** const var_58 = &data_14321da50
        int64_t var_48_1 = rax_2
        int64_t var_40
        sub_140596d10(&var_40, arg3)
        char var_30_1 = rax_1
        result, arg4 = (*(*arg1 + 0x148))(arg1, rbp, &var_58)
        int64_t rcx_2 = var_40
        
        if (rcx_2 != 0)
            result, arg4 = sub_140a74f90(rcx_2)
        
        i += 1
        r14_1 = &r14_1[2]
    while (i s< arg2[1].d)
    
    rdi = 0

if (*(r12 + 8) == 0)
    rbp.b = 0
    int32_t rdx_2 = data_14399fbd0
    int32_t rcx_4 = data_14399fbdc + 1
    data_14399fbdc = rcx_4
    result = zx.q(rdx_2 - 1)
    int64_t rbx_2 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t* rsi_1 = rbx_2 << 4
        int64_t temp0_1
        
        do
            result = data_14399fbc8
            
            if (*(rsi_1 + result + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_5 = *(rsi_1 + result)
                
                if (rcx_5 == 0)
                    rbp.b = 1
                else
                    result, arg4 = (*(*rcx_5 + 0x50))(rcx_5)
                    
                    if (result.b == 0)
                        rbp.b = 1
            
            rsi_1 -= 0x10
            temp0_1 = rbx_2
            rbx_2 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_4 = data_14399fbdc
        rdx_2 = data_14399fbd0
    
    data_14399fbdc = rcx_4 - 1
    
    if (rbp.b != 0 && rcx_4 - 1 s<= 0)
        int32_t rsi_2 = rdx_2
        
        if (rdx_2 s> 0)
            int64_t* rbx_3 = nullptr
            
            do
                int64_t rax_5 = data_14399fbc8
                
                if (*(rbx_3 + rax_5 + 8) == 0)
                    arg4.b = 1
                    sub_1405a4880(&data_14399fbc8, rdi, 1, arg4.b)
                else
                    int64_t* rcx_7 = *(rbx_3 + rax_5)
                    
                    if (rcx_7 == 0)
                        arg4.b = 1
                        sub_1405a4880(&data_14399fbc8, rdi, 1, arg4.b)
                    else
                        char rax_7
                        rax_7, arg4 = (*(*rcx_7 + 0x20))(rcx_7)
                        
                        if (rax_7 != 0)
                            arg4.b = 1
                            sub_1405a4880(&data_14399fbc8, rdi, 1, arg4.b)
                        else
                            rdi += 1
                            rbx_3 = &rbx_3[2]
                
                rdx_2 = data_14399fbd0
            while (rdi s< rdx_2)
        
        result = zx.q(rdx_2 * 2)
        
        if (result.d s<= 2)
            result = 2
        
        data_14399fbd8 = result.d
        
        if (rsi_2 s> result.d && data_14399fbd4 != rdx_2)
            return sub_1405a5410(&data_14399fbc8, rdx_2)

return result
