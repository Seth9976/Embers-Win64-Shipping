// 函数: sub_141b86bf0
// 地址: 0x141b86bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_141c122a0()
    void* rcx = *(arg2 + 0x10)
    arg3 = rax_1 + 0x30
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx + 0x38))
        int64_t result = *(rcx + 0x30)
        
        if (*(result + (rax_2 << 3)) == arg3)
            void* rcx_1 = *(arg2 + 0x1a8)
            
            if (rcx_1 == 0)
                return result
            
            int64_t* rdx_1 = *arg1
            int64_t rax_3 = *rdx_1
            int64_t var_18 = rax_3
            
            if (rax_3 != 0)
                int64_t var_10_1 = rdx_1[1]
            
            return sub_141ba85e0(rcx_1, &var_18)

void* rax_6 = *arg1
void* arg_10 = arg2
return (*rax_6)(*(rax_6 + 8), &arg_10, arg3)
