// 函数: sub_142c61ff0
// 地址: 0x142c61ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* var_38 = nullptr
char* arg_10 = nullptr
char* var_30 = nullptr
int32_t rsi = 0
char* rbp = nullptr
char* rdi = nullptr
char* rax = strchr(*(arg2 + 0xd0), 0x40)
char* rcx_1 = *(arg2 + 0xd0)

if (rax != 0)
    *(arg2 + 0xd0) = &rax[1]
    
    if (*(arg1 + 0x5ec) != 2)
        int64_t* rax_2 = &var_30
        
        if ((*(*(arg2 + 0x438) + 0x80) & 0x400) == 0)
            rax_2 = nullptr
        
        int32_t rax_3 = sub_142c61500(rcx_1, &rax[1] - rcx_1 - 1, &var_38, &arg_10, rax_2)
        rbp = var_38
        rsi = rax_3
        
        if (rax_3 != 0)
            rdi = arg_10
        else
            if (rbp == 0)
                goto label_142c620fd
            
            *(arg2 + 0x408) = 1
            *(arg2 + 0x3f8) = 1
            int32_t rax_4 = sub_142c51e30(arg1, rbp, 0, &var_38, nullptr, 0)
            rsi = rax_4
            
            if (rax_4 != 0)
                rdi = arg_10
            else
                data_143ccb8a0(*arg3)
                *arg3 = var_38
            label_142c620fd:
                rdi = arg_10
                
                if (rdi == 0)
                    goto label_142c6213d
                
                int32_t rax_6 = sub_142c51e30(arg1, rdi, 0, &arg_10, nullptr, 0)
                rsi = rax_6
                
                if (rax_6 == 0)
                    data_143ccb8a0(*arg4)
                    *arg4 = arg_10
                label_142c6213d:
                    char* rdx_6 = var_30
                    
                    if (rdx_6 != 0)
                        int32_t rax_8 = sub_142c51e30(arg1, rdx_6, 0, &arg_10, nullptr, 0)
                        rsi = rax_8
                        
                        if (rax_8 == 0)
                            data_143ccb8a0(*arg5)
                            *arg5 = arg_10

data_143ccb8a0(rbp)
data_143ccb8a0(rdi)
data_143ccb8a0(var_30)
return zx.q(rsi)
