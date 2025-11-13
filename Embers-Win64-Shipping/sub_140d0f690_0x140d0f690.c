// 函数: sub_140d0f690
// 地址: 0x140d0f690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(*arg2 + 8)
int64_t result

if ((*(r14 + 0x2a) & 0x20) == 0)
    void* arg_10 = (*(*arg1 + 0x140))(arg1, arg3)
    int64_t* rcx_1 = *(*arg2 + 8)
    (*(*rcx_1 + 0x130))(rcx_1, &arg_10)
    result = (*(*arg1 + 0x140))(arg1, arg3)
    void* r8 = arg_10
    
    if (r8 != result)
        (*(*arg1 + 0x148))(arg1, arg3, r8)
        void* rbx_1 = arg_10
        
        if (rbx_1 != 0)
            void* rax_8 = sub_140cddbd0()
            void* rdx_4 = *(rbx_1 + 0x10)
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            void* rcx_5
            
            if (rax_9.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                void* rbx_2 = arg_10
                
                if (rbx_2 != 0)
                    void* rax_11 = sub_140cddb10()
                    void* rdx_5 = *(rbx_2 + 0x10)
                    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                    
                    if (rax_12.d s<= *(rdx_5 + 0x38)
                            && *(*(rdx_5 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                        rcx_5 = rbx_2 + 0x230
                        goto label_140d0f791
            else
                rcx_5 = rbx_1 + 0x28
            label_140d0f791:
                char var_10_1 = 0
                int64_t* var_18 = arg1
                var_18.o = var_18.o
                sub_140cd75b0(rcx_5, &var_18)
        
        return (*(*arg1 + 0x158))(arg1, arg3)
else
    result = (*(*r14 + 0x130))(r14, arg3)
    
    if ((r14[5].b & 2) == 0)
        return (*(*arg1 + 0x158))(arg1, arg3)

return result
