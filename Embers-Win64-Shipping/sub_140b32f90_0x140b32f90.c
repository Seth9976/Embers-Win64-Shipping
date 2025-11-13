// 函数: sub_140b32f90
// 地址: 0x140b32f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
bool rdx = sub_140b5b8a0(arg2.d, 0).b == 0
int32_t result
result.b = arg_10:4.d != 0
result.b |= rdx

if (result.b != 0)
    int64_t rbx_1 = arg_10
    
    if (*(arg1 + 0x10) != *(arg1 + 0x3c))
        int32_t rax_5 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = arg1 + 0x40
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_5)) << 2))
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c) || result == 0xffffffff)
    label_140b33045:
        result = -1
    else
        int64_t rdx_4 = *(arg1 + 8)
        
        while (true)
            int64_t rcx_4 = sx.q(result) << 5
            
            if (*(rcx_4 + rdx_4) == rbx_1)
                break
            
            result = *(rcx_4 + rdx_4 + 0x18)
            
            if (result == 0xffffffff)
                goto label_140b33045
    
    int64_t var_58
    var_58.d = result
    
    if (result == 0xffffffff)
        void* rax_7 = j_sub_140a82f30(0x38)
        void* const rbx_2 = rax_7
        
        if (rax_7 == 0)
            rbx_2 = nullptr
        else
            __builtin_memset(rax_7, 0, 0x32)
            *(rbx_2 + 0x34) = data_1439a9000
            data_1439a9000 += 1
        
        void* const var_50 = rbx_2
        void*** rax_9 = j_sub_140a82f30(0x18)
        
        if (rax_9 == 0)
            rax_9 = nullptr
        else
            rax_9[1].d = 1
            *rax_9 = &data_142e78738
            *(rax_9 + 0xc) = 1
            rax_9[2] = rbx_2
        
        char var_20_1 = 1
        void** var_38_1 = &var_50
        int128_t var_30 = (&arg_10).o
        result = sub_140b2fb80(&var_30)
        
        if (rax_9 != 0)
            result = rax_9[1].d
            rax_9[1].d -= 1
            
            if (result == 1)
                result = (**rax_9)(rax_9)
                int32_t rsi_1 = *(rax_9 + 0xc)
                *(rax_9 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*rax_9)[1](rax_9, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_78)
return result
