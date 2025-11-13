// 函数: sub_1409662f0
// 地址: 0x1409662f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0

if (*(arg2 + 0x24) != 0 && (*(*arg1 + 0x638))() != 0)
    int64_t* rcx = arg1[0x46]
    
    if (rcx != 0)
        int64_t var_78 = 0
        char rax_4 = (*(*rcx + 0x278))(rcx, &arg1[0x44], arg2, &var_78, var_78, 0)
        int64_t rdx_1 = *arg1
        
        if (rax_4 == 0)
            arg1[0x4c].b = 0
            (*(rdx_1 + 0x640))(arg1, rdx_1)
        else
            void* rax_5 = (*(rdx_1 + 0x150))(arg1, rdx_1)
            
            if (rax_5 == 0)
            label_1409664fc:
                arg1[0x4c].b = 0
                (*(*arg1 + 0x640))(arg1)
            else
                arg1[0x4b] = *(arg1[0x46] + 0x88)
                int64_t* rax_6 = sub_1423dd1b0(data_143f5b298, rax_5)
                
                if (rax_6 != 0)
                    void** var_48
                    void*** rax_7 = sub_1420fb380(rax_6, &var_48)
                    sub_14094ded0(arg1[0x4b] + 0x160, rax_7)
                    var_48 = &data_142e259e0
                    int64_t var_30
                    
                    if (var_30 != 0)
                        sub_140a74f90(var_30)
                    
                    int64_t* var_38
                    
                    if (var_38 != 0)
                        var_38[1].d -= 1
                        
                        if (var_38[1].d == 1)
                            (**var_38)(var_38)
                            int32_t temp1_1 = *(var_38 + 0xc)
                            *(var_38 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                (*(*var_38 + 8))(var_38, 1)
                
                if (arg1[0x55].d s> 1)
                    sub_142155770(arg1[0x4b], &arg1[0x50])
                
                int64_t r14
                r14.b = 0
                arg1[0x4c].b = 2
                void* rsi_2 = *(arg1[0x4b] + 0x140)
                
                if (rsi_2 != 0)
                    int32_t var_60_1 = 0
                    void* (* var_68)(void* arg1) = sub_140977060
                    var_68.o = var_68.o
                    void var_58
                    sub_141ccd980(rsi_2, sub_140946150(&var_58, arg1, &var_68))
                    r14.b = 1
                
                int64_t* rcx_13 = arg1[0x46]
                
                if (rcx_13 != 0)
                    sub_14217ba70(rcx_13, rax_5)
                    *(arg1[0x46] + 0x208) = &arg1[0x44]
                    *(arg1[0x46] + 0x78) = arg1[0x45].d
                    *(arg1[0x46] + 0x7c) = *(arg1 + 0x22c)
                    
                    if (r14.b == 0)
                        sub_140977060(arg1)
                    
                    rdi.b = 1
                else if (arg1[0x4c].b == 2)
                    goto label_1409664fc
        
        int64_t rcx_18 = var_78
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)

return zx.q(rdi.b)
