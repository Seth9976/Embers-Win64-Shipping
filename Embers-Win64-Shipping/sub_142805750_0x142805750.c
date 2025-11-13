// 函数: sub_142805750
// 地址: 0x142805750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = 0
*arg4 = 0x24
*arg3 = 0
*arg5 = 0
char* var_68
int32_t result = (*(*arg1 + 0x10))(arg1, arg2, &var_68)

if (result.b == 0)
    return result

int32_t i = 0
int64_t r12_1 = 0
char* r14_1 = var_68

if (r14_1 != 0)
    data_143f894b0 += 1
    void* r13_1
    
    if (*r14_1 == 0)
        r13_1 = &data_1434cce10
    else
        char* rax_1 = r14_1
        uint64_t rbx_1 = 0
        
        do
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_1 = &rax_1[1]
        while (*rax_1 != 0)
        
        void* rax_3 = (*(*arg6 + 8))(arg6, zx.q((rbx_1 + 1).d))
        r13_1 = rax_3
        memcpy(rax_3, r14_1, rbx_1.d)
        *(rbx_1 + r13_1) = 0
    
    char* r14_2 = r13_1
    void* arg_8 = r13_1
    
    while (true)
        char* rbx_2 = r14_2
        
        if (*r14_2 == 0)
        label_142805839:
            result.b = 1
        else
            while (true)
                if (isspace(sx.d(*rbx_2)) == 0)
                    result.b = 0
                    break
                
                rbx_2 = &rbx_2[1]
                
                if (*rbx_2 == 0)
                    goto label_142805839
        
        if (result.b != 0)
            break
        
        int32_t var_60
        int32_t var_50
        int32_t var_40
        
        if (*r14_2 != result.b)
            var_60 = sub_1427e6ee0(r14_2, &arg_8)
            int32_t var_5c_1 = sub_1427e6ee0(arg_8, &arg_8)
            int32_t var_58_1 = sub_1427e6ee0(arg_8, &arg_8)
            int32_t var_54_1 = sub_1427e6ee0(arg_8, &arg_8)
            var_50 = sub_1427e6ee0(arg_8, &arg_8)
            int32_t var_4c_1 = sub_1427e6ee0(arg_8, &arg_8)
            int32_t var_48_1 = sub_1427e6ee0(arg_8, &arg_8)
            int32_t var_44_1 = sub_1427e6ee0(arg_8, &arg_8)
            int128_t zmm0 = sub_1427e6ee0(arg_8, &arg_8)
            r14_2 = arg_8
            var_40 = zmm0.d
        
        if (i u< count + 0x24)
            i = 0x20
            
            if (count + 0x24 u> 0x20)
                do
                    i *= 2
                while (i u< count + 0x24)
            
            int64_t rax_5 = (*(*arg6 + 8))(arg6, zx.q(i))
            
            if (count != 0)
                memcpy(rax_5, r12_1, count)
            
            int64_t r8_3 = *arg6
            (*(r8_3 + 0x10))(arg6, r12_1, r8_3)
            r12_1 = rax_5
        
        uint64_t count_1 = zx.q(count)
        count += 0x24
        *(count_1 + r12_1) = var_60.o
        *(count_1 + r12_1 + 0x10) = var_50.o
        *(count_1 + r12_1 + 0x20) = var_40
    
    *arg3 = r12_1
    *arg5 = count u/ 0x24
    (*(*arg6 + 0x10))(arg6, r13_1)

return (*(*arg6 + 0x10))(arg6, 0)
