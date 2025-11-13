// 函数: sub_141ca7af0
// 地址: 0x141ca7af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x14]
uint64_t result

if (rcx != 0)
    sub_140cd4b90(rcx, &arg1[0x15], arg3)
    
    if (arg1[0x15].d == 0x9e2a83c1 && (*(arg1[0x14] + 0x29) & 1) == 0)
        result = zx.q(*(arg1 + 0xac))
        
        if (result.d s>= 0xd6)
            if (result.d s<= 0x206 && arg1[0x16].d s<= 0)
                int32_t* var_18
                sub_140b4e1a0(&var_18, &arg1[0x17])
                int32_t* rax = var_18
                int32_t var_10
                void* rdx_4 = &rax[sx.q(var_10) * 4]
                void* rbx_1
                
                if (rax == rdx_4)
                label_141ca7bf8:
                    (*(*arg1 + 0xe0))(arg1, zx.q(*(arg1 + 0xac)))
                    (*(*arg1 + 0xe8))(arg1, zx.q(arg1[0x16].d))
                    (*(*arg1 + 0xf0))(arg1, &arg1[0x29])
                    int64_t* rcx_6 = arg1[0x14]
                    (*(*rcx_6 + 0xe0))(rcx_6, zx.q(*(arg1 + 0xac)))
                    int64_t* rcx_7 = arg1[0x14]
                    (*(*rcx_7 + 0xe8))(rcx_7, zx.q(arg1[0x16].d))
                    int64_t* rcx_8 = arg1[0x14]
                    (*(*rcx_8 + 0xf0))(rcx_8, &arg1[0x29])
                    int64_t rax_8 = *arg1
                    *(arg1 + 0x29) ^= (*(arg1[0x14] + 0x29) ^ *(arg1 + 0x29)) & 0x20
                    (*(rax_8 + 0x50))(arg1, &arg1[0x17])
                    int64_t* rcx_11 = arg1[0x14]
                    (*(*rcx_11 + 0x50))(rcx_11, &arg1[0x17])
                    int64_t* rcx_12 = arg1[0x14]
                    arg1[0x3a] = (*(*rcx_12 + 0x28))(rcx_12)
                    
                    if (arg2 != 0)
                        *arg2 = 0
                    
                    rbx_1.b = 1
                else
                    while (true)
                        int32_t rcx_2 = *rax
                        
                        if (rcx_2 == 0)
                            if (arg2 != 0)
                                *arg2 = 5
                        else if (rcx_2 != 1)
                            rax = &rax[4]
                            
                            if (rax == rdx_4)
                                goto label_141ca7bf8
                            
                            continue
                        else if (arg2 != 0)
                            *arg2 = 4
                            rbx_1.b = 0
                            break
                        
                        rbx_1.b = 0
                        break
                
                int32_t* rcx_13 = var_18
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                return zx.q(rbx_1.b)
            
            if (arg2 != 0)
                *arg2 = 4
                result.b = 0
                return result
        else if (arg2 != 0)
            *arg2 = 3
            result.b = 0
            return result
    else if (arg2 != 0)
        *arg2 = 2
else if (arg2 != 0)
    *arg2 = 1
    result.b = 0
    return result

result.b = 0
return result
