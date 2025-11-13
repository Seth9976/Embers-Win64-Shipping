// 函数: sub_1429bd870
// 地址: 0x1429bd870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rcx = arg1[2]
int32_t rax_3 = 0
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
int32_t rdx_1
int32_t r10

if (rcx == 0)
    r10 = 1
    rdx_1 = 1
else if (rcx == 1)
    int32_t r8_1 = arg3 - arg2
    int32_t r9_1 = arg5 - arg4
    r10 = 1
    int32_t rcx_5 = 0
    
    if (r8_1 + 1 s>= r9_1 + 1)
        r9_1 = r8_1
    
    int32_t i = r9_1 + 1
    
    if (arg1[3] != 0)
        int32_t rdx_3 = 0
        
        for (; i s> 1; i s>>= 1)
            if ((1 & i.b) != 0)
                rcx_5 = 1
            
            rdx_3 += 1
        
        rdx_1 = rcx_5 + rdx_3 + 1
    else if (i s<= 1)
        rdx_1 = rcx_5 + 1
    else
        do
            rcx_5 += 1
            i s>>= 1
        while (i s> 1)
        
        rdx_1 = rcx_5 + 1
else
    if (rcx != 2)
        sub_14297d3f0(&exceptionObject, "Unknown LevelMode format.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    r10 = 1
    int32_t rdx = 0
    int32_t i_1 = arg3 - arg2 + 1
    
    if (arg1[3] != 0)
        int32_t r8 = 0
        
        for (; i_1 s> 1; i_1 s>>= 1)
            if ((1 & i_1.b) != 0)
                rdx = 1
            
            r8 += 1
        
        rdx_1 = rdx + r8 + 1
    else if (i_1 s<= 1)
        rdx_1 = rdx + 1
    else
        do
            rdx += 1
            i_1 s>>= 1
        while (i_1 s> 1)
        
        rdx_1 = rdx + 1

*arg8 = rdx_1
int32_t rdx_4 = arg1[2]

if (rdx_4 != 0)
    if (rdx_4 == 1)
        int32_t r9_3 = arg5 - arg4
        int32_t r8_3 = arg3 - arg2
        
        if (r8_3 + 1 s>= r9_3 + 1)
            r9_3 = r8_3
        
        int32_t i_2 = r9_3 + 1
        
        if (arg1[3] != 0)
            int32_t rcx_9 = 0
            
            for (; i_2 s> 1; i_2 s>>= 1)
                if ((i_2.b & 1) != 0)
                    rcx_9 = 1
                
                rax_3 += 1
            
            rax_3 += rcx_9
        else
            for (; i_2 s> 1; i_2 s>>= 1)
                rax_3 += 1
    else
        if (rdx_4 != 2)
            sub_14297d3f0(&exceptionObject, "Unknown LevelMode format.")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        int32_t i_3 = arg5 - arg4 + 1
        
        if (arg1[3] != 0)
            int32_t rdx_6 = 0
            
            for (; i_3 s> 1; i_3 s>>= 1)
                if ((i_3.b & 1) != 0)
                    rdx_6 = 1
                
                rax_3 += 1
            
            rax_3 += rdx_6
        else if (i_3 s> rdx_4 - 1)
            do
                rax_3 += 1
                i_3 s>>= 1
            while (i_3 s> 1)
    
    r10 = rax_3 + 1

*arg9 = r10
int64_t rcx_10 = sx.q(*arg8)
int64_t rax_4 = 4 * rcx_10

if (mulu.dp.q(4, rcx_10) u>> 0x40 != zx.o(0))
    rax_4 = -1

*arg6 = j_sub_140a82f30(rax_4)
int64_t rcx_12 = sx.q(*arg9)
int64_t rax_6 = 4 * rcx_12

if (mulu.dp.q(4, rcx_12) u>> 0x40 != zx.o(0))
    rax_6 = -1

*arg7 = j_sub_140a82f30(rax_6)
sub_1429bd220(*arg6, *arg8, arg2, arg3, *arg1, arg1[3])
int64_t result = sub_1429bd220(*arg7, *arg9, arg4, arg5, arg1[1], arg1[3])
__security_check_cookie(rax_1 ^ &var_e8)
return result
