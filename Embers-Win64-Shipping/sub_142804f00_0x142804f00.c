// 函数: sub_142804f00
// 地址: 0x142804f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = 0
*arg4 = 4
*arg3 = 0
*arg6 = 0
char* var_48
char result = (*(*arg1 + 0x10))(arg1, arg2, &var_48)

if (result == 0)
    return result

char* rbp_1 = var_48
int32_t i = 0
int64_t r15_1 = 0

if (rbp_1 != 0)
    data_143f8949c += 1
    void* r12_1
    
    if (*rbp_1 == 0)
        r12_1 = &data_1434cce10
    else
        char* rax_1 = rbp_1
        uint64_t rbx_1 = 0
        
        do
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_1 = &rax_1[1]
        while (*rax_1 != 0)
        
        void* rax_3 = (*(*arg7 + 8))(arg7, zx.q((rbx_1 + 1).d))
        r12_1 = rax_3
        memcpy(rax_3, rbp_1, rbx_1.d)
        *(rbx_1 + r12_1) = 0
    
    char* rbp_2 = r12_1
    void* arg_20 = r12_1
    
    while (true)
        char* rbx_2 = rbp_2
        
        if (*rbp_2 == 0)
            break
        
        while (true)
            if (isspace(sx.d(*rbx_2)) == 0)
                if (*rbp_2 != 0)
                    int32_t zmm0_1 = sub_1427e6ee0(rbp_2, &arg_20)
                    rbp_2 = arg_20
                    arg5 = zmm0_1
                
                if (i u< count + 4)
                    i = 0x20
                    
                    if (count + 4 u> 0x20)
                        do
                            i *= 2
                        while (i u< count + 4)
                    
                    int64_t rax_9 = (*(*arg7 + 8))(arg7, zx.q(i))
                    
                    if (count != 0)
                        memcpy(rax_9, r15_1, count)
                    
                    int64_t r8_3 = *arg7
                    (*(r8_3 + 0x10))(arg7, r15_1, r8_3)
                    r15_1 = rax_9
                
                uint64_t count_1 = zx.q(count)
                count += 4
                *(count_1 + r15_1) = arg5
                break
            
            rbx_2 = &rbx_2[1]
            
            if (*rbx_2 == 0)
                goto label_142804ff8
    
label_142804ff8:
    *arg3 = r15_1
    *arg6 = count u>> 2
    (*(*arg7 + 0x10))(arg7, r12_1)

return (*(*arg7 + 0x10))(arg7, 0)
