// 函数: sub_141bac3e0
// 地址: 0x141bac3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x58))() == 0)
    int64_t* rax_3 = (*(*arg1 + 0x38))(arg1)
    
    if (rax_3[1].d != 0)
        int64_t* rcx_1 = *rax_3
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rax_7 = (*(*arg1 + 0x38))(arg1)
            int64_t* rcx_3
            
            if (rax_7[1].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *rax_7
            
            void* arg_8
            (*(*rcx_3 + 0x48))(rcx_3, &arg_8, arg3)
            void* rbx_1 = arg_8
            
            if (rbx_1 != 0)
                void* rax_9 = sub_141c122a0()
                
                if (rax_9 != 0)
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s<= *(rbx_1 + 0x38)
                            && *(*(rbx_1 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                        *arg2 = rbx_1
                        return arg2

(*(*arg1 + 0x40))(arg1, arg2)
return arg2
