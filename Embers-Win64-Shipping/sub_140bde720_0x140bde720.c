// 函数: sub_140bde720
// 地址: 0x140bde720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = -ffffffffffffffff

if (arg2 != 0 && arg3 != 0)
    if (arg6 == 0 || arg2 != *arg1)
        if (sub_140d23d40(arg2, *arg1) != 0)
            goto label_140bde79d
        
        if (*(arg3 + 0x20) == sub_140d209c0(arg4))
            goto label_140bde79d
    else
    label_140bde79d:
        void* rax_3 = sub_140bdda80(arg1, arg2)
        rdi = rax_3
        
        if (rax_3 == 0)
            if (arg5 != rax_3.b)
                return rax_3 - 1
            
            if (arg3 != arg2 && *(arg3 + 0x20) == arg4)
                return arg3
            
            char rax_5 = (*(*arg2 + 0xd0))(arg2)
            int64_t rdx_2 = *arg2
            char rax_6 = (*(rdx_2 + 0xd8))(arg2, rdx_2)
            
            if (data_143de5429 != 0 && rax_5 != 0)
            label_140bde810:
                int64_t rbx_3 = arg2[4]
                void* rax_7 = sub_140bdda80(arg1, rbx_3)
                void* r15_1 = rax_7
                
                if (rax_7 == 0)
                    r15_1 = sub_140bde720(arg1, rbx_3, rbx_3, arg4, rax_7.b, arg6)
                
                uint64_t rbx_4 = arg2[3]
                sub_140d209c0(arg3)
                char var_50
                
                if (((*(*(r15_1 + 0x10) + 0xcc) u>> 0x12).b & 1) != 0)
                    var_50.q = arg2
                    return sub_140d2dfc0(arg2[2], r15_1, rbx_4, *(r15_1 + 8) & 0x69, 0, var_50, 1, 
                        arg1, 0)
                
                char var_48
                var_48.d = 0
                var_50.d = 0
                void* rax_10 = sub_140d2f0c0(nullptr, r15_1, rbx_4, 0, 0, 0)
                rdi = rax_10
                
                if (rax_10 == 0)
                    var_50.q = arg2
                    return sub_140d2dfc0(arg2[2], r15_1, rbx_4, *(r15_1 + 8) & 0x69, 0, var_50, 1, 
                        arg1, 0)
                
                if (arg1[2].b != 0 && *(arg1 + 0x12) == 0)
                    var_50.q = arg2
                    return sub_140d2dfc0(arg2[2], r15_1, rbx_4, *(r15_1 + 8) & 0x69, 0, var_50, 1, 
                        arg1, 0)
            else if (data_143de542a != 0 && rax_6 != 0)
                goto label_140bde810
        else if (*(arg1 + 0x12) != 0 && ((*(*(rax_3 + 0x10) + 0xcc) u>> 0x17).b & 1) != 0)
            sub_140cd8660(rdi, arg1)

return rdi
