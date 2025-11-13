// 函数: sub_141da9ca0
// 地址: 0x141da9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (arg2 != 0xffffffff)
    int64_t rdx = data_143f5e920
    
    if (rdx != 0)
        void* rcx = data_143f5b298
        
        if (rcx != 0)
            void* rax_1 = sub_1423dd9f0(rcx, rdx, arg2)
            
            if (rax_1 != 0)
                void** var_38
                void*** rax_2 = sub_1420fb380(rax_1, &var_38)
                int64_t* rcx_2 = rax_2[1]
                char rax_3
                
                if (rcx_2 != 0)
                    int64_t rdx_2 = *rcx_2
                    rax_3 = (*(rdx_2 + 0x28))(rcx_2, rdx_2)
                
                int64_t var_58
                int64_t var_48
                int64_t* rcx_4
                int32_t rbx_1
                
                if (rcx_2 == 0 || rax_3 == 0)
                    var_58 = 0
                    int32_t var_50_1 = 0
                    sub_1405947f0(&var_58, 8)
                    int32_t rax_6 = var_50_1 + 8
                    var_50_1 = rax_6
                    
                    if (rax_6 s> 0)
                        sub_140594770(&var_58)
                    
                    UnDecorator::getReferenceType(var_58, u"INVALID", 0x10)
                    rcx_4 = &var_58
                    rbx_1 = 2
                else
                    int64_t* rcx_3 = rax_2[1]
                    rcx_4 = (*(*rcx_3 + 0x30))(rcx_3, &var_48)
                    rbx_1 = 1
                
                *arg1 = 0
                *arg1 = *rcx_4
                *rcx_4 = 0
                arg1[1].d = rcx_4[1].d
                *(arg1 + 0xc) = *(rcx_4 + 0xc)
                rcx_4[1] = 0
                
                if ((rbx_1.b & 2) != 0)
                    int64_t rcx_8 = var_58
                    rbx_1 &= 0xfffffffd
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                
                if ((rbx_1.b & 1) != 0)
                    int64_t rcx_9 = var_48
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                
                var_38 = &data_142e259e0
                int64_t var_20
                
                if (var_20 != 0)
                    sub_140a74f90(var_20)
                
                int64_t* var_28
                
                if (var_28 != 0)
                    var_28[1].d -= 1
                    
                    if (var_28[1].d == 1)
                        (**var_28)(var_28)
                        int32_t temp1_1 = *(var_28 + 0xc)
                        *(var_28 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*var_28 + 8))(var_28, 1)
                
                return arg1

*arg1 = 0
arg1[1] = 0
return arg1
