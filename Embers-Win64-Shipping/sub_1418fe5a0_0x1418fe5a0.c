// 函数: sub_1418fe5a0
// 地址: 0x1418fe5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x48)
int64_t r12 = arg3
int64_t r15 = arg2

if ((*(result + 0x1af0) & 0x30) != 0 || *(arg1 + 0xd0) != 0)
    int32_t rax = *(arg1 + 0x14)
    int32_t var_58
    int64_t var_50
    uint64_t r14_1
    
    if (rax s< 0 || *(arg1 + 0xb0) s< rax)
        int32_t rax_1 = sub_140a5ff80(arg4, 0)
        int32_t r8 = *(arg1 + 0x8c)
        r14_1 = sx.q(rax_1)
        int32_t rax_2 = *(arg1 + 0x60)
        int32_t var_48
        void arg_8
        
        if (rax_2 - r8 s> 0x2710)
            sub_140fe5880(arg1 + 0x58, 0x2710)
            sub_140de7870(arg1 + 0x58, &var_48)
            int32_t* var_40
            *var_40 = data_143efbbc8
            sub_140596d10(&var_40[2], &data_143efbbb8)
            int32_t rax_4 = var_48
            var_40[6] = 0xffffffff
            var_50 = 0
            var_58 = rax_4
            sub_140619c60(arg1 + 0x58, &arg_8, *var_40, var_40, var_58, nullptr)
            rax_2 = *(arg1 + 0x60)
            r8 = *(arg1 + 0x8c)
        
        if (rax_2 == r8)
        label_1418fe710:
            int64_t r15_1 = 0
            int32_t rsi_1 = 0
            int32_t r12_1 = 0
            var_48.q = 0
            int32_t* var_40_1 = nullptr
            
            if (arg4 != 0 && *arg4 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (arg4[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_48, rbx_2.d + 1)
                    r12_1 = var_40_1:4.d
                    rsi_1 = var_40_1.d
                    r15_1 = var_48.q
                
                rsi_1 += rbx_2.d + 1
                var_40_1.d = rsi_1
                
                if (rsi_1 s> r12_1)
                    sub_140594770(&var_48)
                    r12_1 = var_40_1:4.d
                    rsi_1 = var_40_1.d
                    r15_1 = var_48.q
                
                UnDecorator::getReferenceType(r15_1, arg4, (rbx_2.d + 1) * 2)
            
            sub_140de7870(arg1 + 0x58, &var_48)
            var_50 = 0
            var_58 = var_48
            *var_40_1 = r14_1.d
            *(var_40_1 + 8) = r15_1
            var_40_1[4] = rsi_1
            var_40_1[5] = r12_1
            var_40_1[6] = 0xffffffff
            sub_140619c60(arg1 + 0x58, &arg_8, *var_40_1, var_40_1, var_58, nullptr)
            r15 = arg2
            r12 = arg3
        else
            void* r8_2 = arg1 + 0x90
            void* rcx_7 = *(r8_2 + 8)
            
            if (rcx_7 != 0)
                r8_2 = rcx_7
            
            int32_t rax_5 = *(r8_2 + (((sx.q(*(arg1 + 0xa0)) - 1) & r14_1) << 2))
            
            if (rax_5 == 0xffffffff)
                goto label_1418fe710
            
            int32_t* rdx_7
            
            while (true)
                rdx_7 = (sx.q(rax_5) << 5) + *(arg1 + 0x58)
                
                if (*rdx_7 == r14_1.d)
                    break
                
                rax_5 = rdx_7[6]
                
                if (rax_5 == 0xffffffff)
                    goto label_1418fe710
            
            if (rax_5 == 0xffffffff || rdx_7 == 0 || rdx_7 == -8)
                goto label_1418fe710
    else
        r14_1 = zx.q(data_143efbbc8)
    
    int64_t rsi_2 = sx.q(*(arg1 + 0xb0))
    int32_t rax_8 = (rsi_2 + 1).d
    *(arg1 + 0xb0) = rax_8
    
    if (rax_8 s> *(arg1 + 0xb4))
        sub_1405a4cf0(arg1 + 0xa8)
    
    *(*(arg1 + 0xa8) + (rsi_2 << 2)) = r14_1.d
    result = *(arg1 + 0x48)
    int64_t rsi_3 = *(arg1 + 0xa8)
    int64_t rbx_5 = sx.q(*(arg1 + 0xb0))
    char rcx_14 = (*(result + 0x1af0)).b
    
    if ((rcx_14 & 0x10) != 0)
        data_143efbb38(r15, 0x2000, r12, 0, rbx_5.d, var_50)
        var_58 = *(rsi_3 + (rbx_5 << 2) - 4)
        result = data_143efbb38(r15, 0x2000, r12, rbx_5 << 2, var_58)
    else if ((rcx_14 & 0x20) != 0)
        result = data_143efbb40(r15, zx.q(*(rsi_3 + (rbx_5 << 2) - 4)))
    
    if (data_143efb318 != 0)
        result = *(arg1 + 0x48)
        
        if ((*(result + 0x1af0) & 0x30) == 0)
            return data_143efba80(r15, 1, *(*(arg1 + 0xb8) + 0x10), zx.q(*(arg1 + 0xb0) - 1), 
                var_58, var_50)

return result
