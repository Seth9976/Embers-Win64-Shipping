// 函数: sub_1408fa080
// 地址: 0x1408fa080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142033ff0(arg1, arg2)

if (arg2 != 0)
    void* rax = sub_1408fb7a0()
    void* rdx = arg2[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx + 0x38))
        int64_t result_1 = result
        result = *(rdx + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            int32_t arg_10
            result = sub_1405ba560(&arg1[0x66], &arg_10, arg2)
            
            if (*result != 0xffffffff)
                sub_1405ba560(&arg1[0x66], &arg_10, arg2)
                int64_t rax_1 = sx.q(arg_10)
                void* const rcx_4
                
                if (rax_1.d == 0xffffffff)
                    rcx_4 = nullptr
                else
                    rcx_4 = (rax_1 << 5) + arg1[0x66]
                
                int64_t* i = *(rcx_4 + 8)
                
                for (void* r14_3 = &i[sx.q(*(rcx_4 + 0x10)) * 2]; i != r14_3; i = &i[2])
                    sub_1408f9e80(&arg1[0x70], &arg_10, i)
                    int64_t rax_2 = sx.q(arg_10)
                    
                    if (rax_2.d != 0xffffffff)
                        int64_t rdi_1 = rax_2 * 0x68
                        void* rdi_2 = rdi_1 + arg1[0x70]
                        
                        if (rdi_1 != neg.q(arg1[0x70]) && rdi_2 != -0x10)
                            sub_1405c3040(rdi_2 + 0x10, arg2)
                            
                            if (*(rdi_2 + 0x18) == *(rdi_2 + 0x44))
                                sub_1408fa850(&arg1[0x70], i)
                
                result = sub_1408fa6d0(&arg1[0x66], arg2)
                
                if (arg1[0x7a] == arg2)
                    arg1[0x7a] = 0
                    return sub_1408fbef0(arg1)

return result
