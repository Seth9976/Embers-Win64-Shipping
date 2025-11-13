// 函数: sub_142c68910
// 地址: 0x142c68910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[0xf0].d
arg1[0xf0].d = 0
char rcx = (*(arg2 + 0x220)).b
int32_t arg_8 = 0
SOCKET r10

if ((rcx & 0x15) != 1)
    r10 = -1
else
    r10 = arg1[0x8a]

SOCKET r8

if ((rcx & 0x2a) != 2)
    r8 = -1
else
    r8 = arg1[0x8b]

if (*(*arg1 + 0x4e70) != 0)
    rsi |= 1

if (rsi == 0)
    int32_t rax_2
    rax_2, r8, arg5 = sub_142c64080(r10, -1, r8, 0)
    rsi = rax_2

if (rsi == 4)
    sub_142c64760(arg2, "select/poll returned error", r8, arg6)
    return rsi + 0x33

int32_t result

if ((*(arg2 + 0x220) & 1) == 0 || ((rsi.b & 1) == 0 && *(arg1 + 0x409) == 0))
label_142c68a14:
    
    if ((rsi.b & (*(arg2 + 0x220)).b & 2) != 0)
        result, arg5, arg6 = sub_142c699b0(arg2, arg1, &arg_8, arg5, arg6)
    
    if ((rsi.b & (*(arg2 + 0x220)).b & 2) == 0 || result == 0)
        int128_t var_38
        uint64_t* rax_3
        int64_t rdx_2
        rax_3, rdx_2 = sub_142c59600(&var_38)
        bool cond:0_1 = arg_8 == 0
        arg5.o = *rax_3
        *(arg2 + 0x120) = arg5.o
        int128_t var_48
        
        if (not(cond:0_1))
            int64_t* rcx_6 = *(arg2 + 0xe0)
            
            if (rcx_6 != 0)
                *rcx_6 = *(arg2 + 0xf8)
            
            int64_t* rcx_7 = *(arg2 + 0xf0)
            
            if (rcx_7 != 0)
                *rcx_7 = *(arg2 + 0x100)
        else if (*(arg2 + 0x198) == 1)
            arg5.o = *(arg2 + 0x188)
            var_48 = arg5.o
            arg5.o = *rax_3
            var_38 = arg5.o
            int64_t rax_6
            rax_6, rdx_2 = sub_142c595d0(&var_38, &var_48)
            
            if (rax_6 s>= sx.q(*(arg2 + 0x854)))
                *(arg2 + 0x220) |= 2
                *(arg2 + 0x198) = 0
                rdx_2, arg6 = sub_142c64850(arg2, "Done waiting for 100-continue\n", 
                    sub_142c52d00(arg2, 0), arg6)
        
        int32_t rax_7
        int512_t zmm2
        rax_7, zmm2 = sub_142c6f450(arg1, rdx_2, arg6)
        
        if (rax_7 != 0)
            return 0x2a
        
        var_38 = *(arg2 + 0x120)
        int64_t rdx_5
        int512_t zmm2_1
        result, rdx_5, zmm2_1 = sub_142c6fd10(arg2, &var_38, zmm2)
        
        if (result == 0)
            if (*(arg2 + 0x220) != result)
                if (sub_142c65dc0(arg2, arg2 + 0x120, 0, arg2 + 0xd8) s>= 0)
                    *arg3 = ((*(arg2 + 0x220)).b & 0x33) == 0
                    return 0
                
                int64_t r14_1 = *(arg2 + 0xd8)
                var_38 = *(arg2 + 0x950)
                var_48 = *(arg2 + 0x120)
                int64_t rax_9 = sub_142c595d0(&var_48, &var_38)
                *(arg2 + 0xf8)
                
                if (r14_1 == -1)
                    sub_142c64760(arg2, 
                        "Operation timed out after %ld milliseconds with %I64d bytes received", 
                        rax_9, zmm2_1)
                    return 0x1c
                
                int64_t var_58_2 = r14_1
                sub_142c64760(arg2, 
                    "Operation timed out after %ld milliseconds with %I64d out of %I64d bytes received", 
                    rax_9, zmm2_1)
                return 0x1c
            
            char rax_10 = *(arg2 + 0x5e8)
            
            if (rax_10 == 0)
                int64_t r8_5 = *(arg2 + 0xd8)
                
                if (r8_5 != -1)
                    int64_t rcx_17 = *(arg2 + 0xf8)
                    
                    if (rcx_17 != r8_5 && *(arg2 + 0x230) == 0)
                        sub_142c64760(arg2, "transfer closed with %I64d bytes remaining to read", 
                            r8_5 - rcx_17, zmm2_1)
                        return 0x12
                
                if (rax_10 == 0 && *(arg2 + 0x248) != rax_10 && arg1[7].d != 4)
                    sub_142c64760(arg2, "transfer closed with outstanding read data remaining", 
                        r8_5, zmm2_1)
                    return 0x12
            
            if (sub_142c6f450(arg1, rdx_5, zmm2_1) != 0)
                return 0x2a
            
            *arg3 = ((*(arg2 + 0x220)).b & 0x33) == 0
            return 0
else
    result, arg5, arg6 = sub_142c69190(arg2, arg1, arg2 + 0xd8, &arg_8, arg5, arg6, arg3, arg4)
    
    if (result == 0 && *arg3 == result.b)
        goto label_142c68a14

return result
