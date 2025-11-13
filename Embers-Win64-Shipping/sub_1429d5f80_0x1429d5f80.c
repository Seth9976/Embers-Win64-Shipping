// 函数: sub_1429d5f80
// 地址: 0x1429d5f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int64_t result = *(arg1 + 8)
int32_t rdx_2 = ((*(result + 0x1d0) - *(result + 0x1c8)) s>> 3).d
int64_t i = 0

if (rdx_2 s> 0)
    do
        int64_t rbx_1 = *(*(*(arg1 + 8) + 0x1c8) + (i << 3))
        int64_t* rax_2 = j_sub_140a82f30(0xd8)
        int64_t* arg_18 = rax_2
        int64_t* rsi_1
        
        if (rax_2 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = sub_1429cfeb0(rax_2, *(arg1 + 0x10))
        
        int64_t* arg_8 = rsi_1
        int64_t* rax_4 = j_sub_140a82f30(0x40)
        int64_t* arg_20 = rax_4
        int64_t* rbp_1
        
        if (rax_4 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = sub_1429d1ef0(rax_4, arg1, rbx_1, rsi_1)
        
        int64_t* arg_10 = rbp_1
        sub_1429d1f60(rbp_1)
        int64_t* rbx_3 = *(arg1 + 0x10) + 0x1c8
        int64_t rax_6 = rbx_3[1]
        int64_t rcx_3
        
        if (&arg_8 u< rax_6)
            rcx_3 = *rbx_3
        
        if (&arg_8 u>= rax_6 || rcx_3 u> &arg_8)
            if (rax_6 == rbx_3[2])
                sub_1429cade0(rbx_3, 1)
            
            int64_t** rax_8 = rbx_3[1]
            
            if (rax_8 != 0)
                *rax_8 = rsi_1
        else
            if (rax_6 == rbx_3[2])
                sub_1429cade0(rbx_3, 1)
            
            int64_t* rdx_5 = rbx_3[1]
            
            if (rdx_5 != 0)
                *rdx_5 = *(*rbx_3 + ((&arg_8 - rcx_3) s>> 3 << 3))
        
        rbx_3[1] += 8
        result = *(arg1 + 0x1e8)
        int64_t rcx_7
        
        if (&arg_10 u< result)
            rcx_7 = *(arg1 + 0x1e0)
        
        if (&arg_10 u>= result || rcx_7 u> &arg_10)
            if (result == *(arg1 + 0x1f0))
                sub_1429cade0(arg1 + 0x1e0, 1)
            
            result = *(arg1 + 0x1e8)
            
            if (result != 0)
                *result = rbp_1
        else
            if (result == *(arg1 + 0x1f0))
                result = sub_1429cade0(arg1 + 0x1e0, 1)
            
            int64_t* rdx_6 = *(arg1 + 0x1e8)
            
            if (rdx_6 != 0)
                result = *(arg1 + 0x1e0)
                *rdx_6 = *(result + ((&arg_10 - rcx_7) s>> 3 << 3))
        
        *(arg1 + 0x1e8) += 8
        i += 1
    while (i s< sx.q(rdx_2))

return result
