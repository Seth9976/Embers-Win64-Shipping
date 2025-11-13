// 函数: sub_14238cea0
// 地址: 0x14238cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* var_18
sub_1423a4df0(&var_18, arg2, arg1)
int32_t i_1
int32_t i = i_1

while (i != 0xffffffff)
    int64_t rsi_1 = *(var_18[4] + sx.q(i) * 0x28)
    
    if (rsi_1 != 0)
        void* rax_3 = *(arg3 + 0x10)
        void* rcx_2 = arg3 + 0x20
        int64_t arg_10 = rsi_1
        
        if (rax_3 != 0)
            rcx_2 = rax_3
        
        if ((*arg3)((*(*rcx_2 + 8))(rcx_2), &arg_10) != 0)
            int64_t rdi_1 = sx.q(arg4[1].d)
            int32_t rax_7 = (rdi_1 + 1).d
            arg4[1].d = rax_7
            
            if (rax_7 s> *(arg4 + 0xc))
                sub_1405a4d70(arg4)
            
            *(*arg4 + (rdi_1 << 3)) = rsi_1
        
        i = i_1
    
    i = *(var_18[4] + sx.q(i) * 0x28 + 0x20)
    i_1 = i
