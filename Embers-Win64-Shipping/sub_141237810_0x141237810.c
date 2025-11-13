// 函数: sub_141237810
// 地址: 0x141237810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

void* arg_8 = arg1
int64_t rdi_1 = sx.q(*(arg3 + 0xc))

if (rdi_1.d s>= *(arg3 + 0x48))
    return 

int64_t rsi_2 = rdi_1 * 0x18

do
    int32_t* rbx_1 = *(arg3 + 0x40)
    uint64_t r14_1 = *(rbx_1 + rsi_2 + 8)
    
    if (*(r14_1 + 0x20) != 0)
        int64_t* r9 = *arg5
        int64_t* arg_18 = r9
        
        if (r9 != 0)
            (*(*r9 + 0x30))(r9)
            r9 = arg_18
            arg1 = arg_8
        
        uint8_t rbp_2 = (*(rbx_1 + rsi_2) u>> 4).b
        int128_t var_58 = zx.o(0)
        rbp_2 &= 1
        
        if (rbp_2 != 0)
            int64_t* var_48
            int64_t* rax_3 = sub_1411e9d70(&var_48, arg2, arg1 + 0xa0, r14_1, arg4, &arg_18)
            
            if (&var_58 != rax_3)
                int64_t* rcx_2 = var_58.q
                var_58.q = *rax_3
                *rax_3 = 0
                
                if (rcx_2 != 0)
                    sub_1411e8d60(rcx_2)
            
            sub_1405d1600(&var_58:8, &rax_3[1])
            void var_40
            sub_1405ec8a0(&var_40)
            int64_t* rcx_5 = var_48
            
            if (rcx_5 != 0)
                sub_1411e8d60(rcx_5)
            
            r9 = arg_18
        
        int128_t* rax_4 = &var_58
        
        if (rbp_2 == 0)
            rax_4 = nullptr
        
        sub_141232b80(arg_8, arg2, r14_1, r9, rax_4, arg4)
        sub_1405ec8a0(&var_58:8)
        int64_t* rcx_8 = var_58.q
        
        if (rcx_8 != 0)
            sub_1411e8d60(rcx_8)
        
        int64_t* rcx_9 = arg_18
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 0x38))(rcx_9)
        
        arg1 = arg_8
    
    rdi_1 = zx.q(rdi_1.d + 1)
    rsi_2 += 0x18
while (rdi_1.d s< *(arg3 + 0x48))
