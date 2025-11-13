// 函数: sub_14277b460
// 地址: 0x14277b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9528)
int32_t result
int512_t zmm1
result, zmm1 = sub_140b4e7c0(arg2, &data_1439a9528)

if (result s>= 6)
    int64_t* rcx_2 = arg2[1]
    int32_t result_1 = *(arg1 + 0x30)
    int32_t* rdx = *rcx_2
    
    if (&rdx[1] u> rcx_2[1])
        int32_t* rdx_1 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_1, zmm1)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        result = *rdx
        result_1 = result
        *rcx_2 += 4
    
    int32_t rbx_1 = 0
    
    if ((arg2[5].b & 1) != 0)
        void var_98
        sub_140b58170(&var_98, &data_1437020ab, 1)
        int32_t rsi_1 = result_1
        int64_t* var_90
        __builtin_memset(&var_90, 0, 0x34)
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        sub_1427799b0(arg1 + 0x28, rsi_1)
        
        if (rsi_1 s> 0)
            uint64_t i_1 = zx.q(rsi_1)
            uint64_t i
            
            do
                int64_t rsi_2 = sx.q(*(arg1 + 0x30))
                int32_t rax_6 = (rsi_2 + 1).d
                *(arg1 + 0x30) = rax_6
                
                if (rax_6 s> *(arg1 + 0x34))
                    sub_14090a6a0(arg1 + 0x28)
                
                int64_t rcx_8 = rsi_2 * 0x60
                
                if (rcx_8 != neg.q(*(arg1 + 0x28)))
                    sub_141d2d5a0(rcx_8 + *(arg1 + 0x28), &var_98)
                
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        int64_t var_88
        result = sub_1409aaf90(&var_88)
        int64_t* rcx_12 = var_90
        
        if (rcx_12 != 0)
            result = (**rcx_12)(rcx_12, 1)
    
    if (result_1 s> 0)
        do
            result = sub_1417c5280(sx.q(rbx_1) * 0x60 + *(arg1 + 0x28), arg2)
            rbx_1 += 1
        while (rbx_1 s< result_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
