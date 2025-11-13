// 函数: sub_142805530
// 地址: 0x142805530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = 0
*arg4 = 0x10
*arg3 = 0
*arg5 = 0
char* arg_20
char result = (*(*arg1 + 0x10))(arg1, arg2, &arg_20)

if (result == 0)
    return result

char* rbp_1 = arg_20
int32_t i = 0
int64_t r15_1 = 0

if (rbp_1 != 0)
    data_143f894a8 += 1
    void* r12_1
    
    if (*rbp_1 == 0)
        r12_1 = &data_1434cce10
    else
        char* rax_2 = rbp_1
        uint64_t rbx_1 = 0
        
        do
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_2 = &rax_2[1]
        while (*rax_2 != 0)
        
        void* rax_4 = (*(*arg6 + 8))(arg6, zx.q((rbx_1 + 1).d))
        r12_1 = rax_4
        memcpy(rax_4, rbp_1, rbx_1.d)
        *(rbx_1 + r12_1) = 0
    
    char* r14_1 = r12_1
    void* arg_8 = r12_1
    
    while (true)
        char* rbx_2 = r14_1
        
        if (*r14_1 == 0)
            break
        
        while (true)
            if (isspace(sx.d(*rbx_2)) == 0)
                int32_t var_48
                
                if (*r14_1 != 0)
                    var_48 = sub_1427e6ee0(r14_1, &arg_8)
                    int32_t var_44_1 = sub_1427e6ee0(arg_8, &arg_8)
                    int32_t var_40_1 = sub_1427e6ee0(arg_8, &arg_8)
                    int128_t zmm0 = sub_1427e6ee0(arg_8, &arg_8)
                    r14_1 = arg_8
                    int32_t var_3c_1 = zmm0.d
                
                if (i u< count + 0x10)
                    i = 0x20
                    
                    if (count + 0x10 u> 0x20)
                        do
                            i *= 2
                        while (i u< count + 0x10)
                    
                    int64_t rax_10 = (*(*arg6 + 8))(arg6, zx.q(i))
                    
                    if (count != 0)
                        memcpy(rax_10, r15_1, count)
                    
                    int64_t r8_3 = *arg6
                    (*(r8_3 + 0x10))(arg6, r15_1, r8_3)
                    r15_1 = rax_10
                
                uint64_t count_1 = zx.q(count)
                count += 0x10
                *(count_1 + r15_1) = var_48.o
                break
            
            rbx_2 = &rbx_2[1]
            
            if (*rbx_2 == 0)
                goto label_142805638
    
label_142805638:
    *arg3 = r15_1
    *arg5 = count u>> 4
    (*(*arg6 + 0x10))(arg6, r12_1)

return (*(*arg6 + 0x10))(arg6, 0)
