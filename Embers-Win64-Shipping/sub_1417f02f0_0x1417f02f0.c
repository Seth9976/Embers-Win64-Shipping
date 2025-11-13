// 函数: sub_1417f02f0
// 地址: 0x1417f02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*arg4 = 0
int64_t* result = data_143f5b298
int64_t* rdi = result[0x161]

if (rdi != 0)
    int64_t rbx_1 = *arg1
    void arg_10
    result = (**rdi)(rdi, &arg_10)
    
    if (*result == rbx_1)
        void var_28
        
        if ((*(*rdi + 0x50))(rdi, zx.q(arg1[1].d), &var_28, arg5) == 0)
            *arg5 = data_143dbb1f8.q
            arg5[1].d = data_143dbb200
            *arg3 = data_143dbb208
            result = zx.q(data_143dbb210)
        else
            *arg2 = 1
            *arg4 = (*(*rdi + 0x20))(rdi)
            void var_38
            int64_t* rax_5 = sub_140acd070(&var_38, &var_28)
            *arg3 = *rax_5
            result = zx.q(rax_5[1].d)
        
        arg3[1].d = result.d

return result
