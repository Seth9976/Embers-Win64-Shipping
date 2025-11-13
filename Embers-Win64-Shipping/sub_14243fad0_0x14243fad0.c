// 函数: sub_14243fad0
// 地址: 0x14243fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
uint64_t r13 = zx.q(arg3)
int64_t r9 = arg2
int64_t result = 0

if (arg3 != 0)
    do
        if (*(arg1 + 0x58) == 0 || *(arg1 + 0x60) != *(arg1 + 0x64))
            void* rcx = *(arg1 + 8)
            *(arg1 + 0x60) = *(arg1 + 0x64)
            int32_t rax_3 = sub_1423660c0(rcx)
            int32_t r14_1 = *(arg1 + 0x60)
            int64_t rax_6
            
            if (r14_1 u>= rax_3)
                rax_6 = 0
                *(arg1 + 0x68) = 0
            else
                void* rbp_1 = *(arg1 + 8)
                
                if (rbp_1 == 0)
                    rax_6 = 0
                    *(arg1 + 0x68) = 0
                else if (r14_1 u>= sub_1423660c0(rbp_1))
                    rax_6 = 0
                    *(arg1 + 0x68) = 0
                else if (r14_1 != 0)
                    int64_t* rax_8 = sub_1405f7040(sub_141f88540())
                    void var_68
                    sub_141f7bed0(arg1 + 0x70, 
                        (*(*rax_8 + 0xf0))(rax_8, &var_68, rbp_1, zx.q(r14_1), 0, 1))
                    sub_141f7baf0(&var_68)
                    *(arg1 + 0x68) = sub_1408e52c0(arg1 + 0x70)
                    rax_6 = sub_14183e350(arg1 + 0x70)
                else
                    arg3.b = 1
                    int64_t var_78
                    sub_1423683c0(rbp_1, &var_78, arg3.b)
                    int32_t var_70
                    *(arg1 + 0x68) = var_70
                    rax_6 = var_78
            
            *(arg1 + 0x58) = rax_6
            arg3 = arg_18
            r9 = arg2
            
            if (rax_6 != 0)
                *(arg1 + 0x28) = 0
        
        int64_t rcx_9 = *(arg1 + 0x58)
        
        if (rcx_9 == 0)
            break
        
        uint64_t rdx_3 = zx.q(*(arg1 + 0x28))
        int32_t r14_3 = arg3 - result.d
        int32_t rbp_3 = *(arg1 + 0x68) - rdx_3.d
        int32_t rax_12 = r14_3
        
        if (rbp_3 u<= r14_3)
            rax_12 = rbp_3
        
        uint64_t r15_1 = zx.q(rax_12)
        
        if (rax_12 != 0)
            memcpy(result + r9, rdx_3 + rcx_9, r15_1.d)
            *(arg1 + 0x24) += r15_1.d
            *(arg1 + 0x28) += r15_1.d
            arg3 = arg_18
            result += r15_1
        
        if (r14_3 u>= rbp_3)
            *(arg1 + 0x64) += 1
        
        r9 = arg2
    while (result u< r13)

return result
