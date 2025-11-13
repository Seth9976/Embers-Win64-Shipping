// 函数: sub_142c51f70
// 地址: 0x142c51f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
char* rbx = arg2

if (arg3 s>= 0)
    int64_t i_2 = sx.q(arg3)
    
    if (arg3 == 0)
        i_2 = -1
        
        do
            i_2 += 1
        while (arg2[i_2] != 0)
    
    int64_t rax_1 = data_143ccb898(i_2 + 1)
    char* rsi_1 = nullptr
    r14 = rax_1
    
    if (rax_1 == 0)
        return rax_1
    
    int64_t i_1 = i_2
    
    if (i_2 != 0)
        int64_t i
        
        do
            char rbp_1 = *rbx
            
            if (rbp_1 == 0x25 && i_1 u> 2 && isxdigit(zx.d(rbx[1])) != 0
                    && isxdigit(zx.d(rbx[2])) != 0)
                char _String = rbx[1]
                char arg_19 = rbx[2]
                char arg_1a = 0
                rbx = &rbx[2]
                char* _EndPtr
                rbp_1 = sub_142c56220(strtoul(&_String, &_EndPtr, 0x10))
                i_1 -= 2
            
            rsi_1[r14] = rbp_1
            rbx = &rbx[1]
            rsi_1 = &rsi_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    rsi_1[r14] = 0
    
    if (arg4 != 0)
        if (rsi_1 u> 0x7fffffff)
            data_143ccb8a0(r14)
            return 0
        
        *arg4 = sub_142c56200(rsi_1.d)

return r14
