// 函数: sub_141c8a610
// 地址: 0x141c8a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3[1]
int64_t* r14 = arg3
char result = sub_140b5b8a0(*arg3, 0)
bool r9 = rbx == 0

if ((r9 & result) == 0)
    int64_t* rcx_1 = *(arg1 + 0x38)
    
    if (rcx_1 != 0)
        result = (**rcx_1)(rcx_1, arg2, r14, r9)
    
    if (rcx_1 == 0 || result != 0)
        void* rsi_1 = *(arg1 + 0x28)
        int64_t (* var_38)(void* arg1, int64_t* arg2, int64_t arg3) = sub_141c88e30
        int32_t var_30_1 = 0
        int128_t zmm0 = var_38.o
        var_38 = *arg2
        void* rax_2 = arg2[1]
        int128_t var_28 = zmm0
        var_30_1.q = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        void var_18
        int64_t* rax_4 = sub_141c7fc70(&var_18, rsi_1, &var_28, &var_38, *r14)
        
        if (sub_141c87730(rsi_1 + 0x110, rax_4) != 0)
            int64_t* rcx_4 = *(rsi_1 + 0x158)
            (*(*rcx_4 + 0x10))(rcx_4)
        
        return sub_140745b20(rax_4)

return result
