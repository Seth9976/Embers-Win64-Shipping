// 函数: sub_142a36e20
// 地址: 0x142a36e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg2 + arg3
int64_t arg_18 = 1
int64_t rbx = arg2
int64_t var_58 = 0
int64_t* r14 = **arg1
int64_t arg_10 = -1
int64_t r15 = -1
int64_t r12 = -1

if (arg2 s< rbp)
    while (true)
        int32_t arg_8
        uint64_t rax_1 = sub_142a3e160(r14, rbx, &arg_8, arg5)
        
        if (rax_1 s< 0)
            break
        
        int64_t rbx_1 = rbx + sx.q(arg_8)
        
        if (rbx_1 s> rbp)
            break
        
        int64_t rax_3 = sub_142a3e270(r14, rbx_1, &arg_8, arg5)
        int64_t rbx_2 = rbx_1 + sx.q(arg_8)
        int64_t rsi_2
        
        if (rax_1 == 0xa1)
            int64_t rax_5 = rbx_2
            
            if (r15 s>= 0)
                rax_5 = r15
            
            if (r15 s< 0)
                r12 = rax_3
            
            r15 = rax_5
            rsi_2 = arg_10
        else if (rax_1 == 0x9b)
            if (rax_3 s> 8)
                break
            
            int64_t rax_8 = sub_142a3ea30(r14, rbx_2, rax_3)
            arg_10 = rax_8
            rsi_2 = rax_8
            
            if (rax_8 s< 0)
                break
        else if (rax_1 != 0xfb)
            rsi_2 = arg_10
        else
            if (rax_3 s> 8)
                break
            
            if (rax_3 s<= 0)
                break
            
            int64_t var_50[0x2]
            
            if (sub_142a3e880(r14, rbx_2, sx.q(rax_3.d), &var_50) != 0)
                return -1
            
            int64_t rax_10 = var_50[0]
            rsi_2 = arg_10
            
            if (rax_10 s> 0)
                var_58 = rax_10
            else
                arg_18 = rax_10
        
        rbx = rbx_2 + rax_3
        
        if (rbx s> rbp)
            break
        
        if (rbx s>= rbp)
            if (r15 s< 0 || rbx != rbp)
                break
            
            int64_t rdi_2 = sx.q(*(arg1 + 0x3c))
            void** rbx_3 = arg1[6] + (rdi_2 << 3)
            struct mkvparser::BlockEntry::mkvparser::BlockGroup::VTable** rax_7 =
                j_sub_140a82f30(0x68)
            arg_8.q = rax_7
            
            if (rax_7 == 0)
                rax_7 = nullptr
            else
                rax_7[1] = arg1
                *rax_7 = &mkvparser::BlockGroup::`vftable'{for `mkvparser::BlockEntry'}
                rax_7[2].d = rdi_2.d
                rax_7[9] = arg4
                rax_7[3] = r15
                rax_7[4] = r12
                rax_7[5] = 0
                rax_7[6].w = 0xffff
                *(rax_7 + 0x32) = 0
                rax_7[7] = 0
                rax_7[8].d = 0xffffffff
                rax_7[0xa] = arg_18
                rax_7[0xb] = var_58
                rax_7[0xc] = rsi_2
            
            *rbx_3 = rax_7
            
            if (rax_7 == 0)
                return -1
            
            int32_t result = sub_142a39b60(rax_7, arg5)
            
            if (result == 0)
                *(arg1 + 0x3c) += 1
                return result
            
            int64_t* rcx_8 = *rbx_3
            
            if (rcx_8 != 0)
                (**rcx_8)(rcx_8, 1)
            
            *rbx_3 = nullptr
            return result

return -2
