// 函数: sub_142169ef0
// 地址: 0x142169ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* _String = sub_142411ce0(arg4, u"InitialConnectTimeout=", nullptr)

if (_String != 0)
    _wtof(_String)
    arg6 = fconvert.s(arg5)
    
    if (not(arg6 f== 0f))
        arg1[0xf].d = arg6

void* _String_1 = sub_142411ce0(arg4, u"ConnectionTimeout=", nullptr)

if (_String_1 != 0)
    _wtof(_String_1)
    arg6 = fconvert.s(arg5)
    
    if (not(arg6 f== 0f))
        *(arg1 + 0x7c) = arg6

if (sub_1424130d0(arg4, u"NoTimeouts") != 0)
    *(arg1 + 0x84) = 1

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rax_1 = *arg1
arg1[0x44] = float.d(performanceCount) f* data_143d796f8 + 16777216.0
char rax_2 = (*(rax_1 + 0x2a0))(arg1, arg6)

if (arg2 == 0)
    int64_t* rcx_7 = arg1[0x21]
    int32_t rsi_1 = 1
    
    if (rcx_7 != 0)
        arg1[0x21] = 0
        int64_t r8 = *rcx_7
        (*r8)(rcx_7, 1, r8)
    
    (*(*arg1 + 0x288))(arg1)
    (*(*arg1 + 0x2a8))(arg1)
    int64_t rbp_1 = arg1[0x28]
    sub_1421645f0()
    int64_t* rax_8
    
    if (data_143f4d2b0 == 0)
    label_14216a084:
        
        if (data_143a2ecd4 == 0)
        label_14216a0ed:
            
            if (data_143a2ec40 != 0)
                goto label_14216a0b2
            
            rax_8 = nullptr
        else
            data_143a2ecd4 = 0
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"RepDriverEnable") == 0)
                sub_140af2b60()
                
                if (sub_140b21a10(&data_143dbb3f0, u"RepDriverDisable") == 0)
                    goto label_14216a0ed
                
                data_143a2ec40 = 0
                rax_8 = nullptr
            else
                data_143a2ec40 = 1
            label_14216a0b2:
                int64_t* rbp_2 = arg1[0x2f]
                
                if (rbp_2 != 0)
                    performanceCount = 0
                    void* rax_12 = sub_140cde0b0()
                    
                    if ((1 & sub_140b5b8a0(0, 0)) != 0)
                        sub_140d19010(rax_12, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    rax_8 = sub_140d2dfc0(rbp_2, rax_12, 0, 0, 0, 0, 0, 0, 0)
                else
                    rax_8 = nullptr
    else
        int64_t* rcx_10 = data_143f4d2a8
        
        if (rcx_10 == 0)
            goto label_14216a084
        
        if ((*(*rcx_10 + 0x28))(rcx_10) == 0)
            goto label_14216a084
        
        sub_1421645f0()
        
        if (data_143f4d2b0 == 0)
            rax_8 = (*(*nullptr + 0x48))(0, arg1, arg4, rbp_1)
        else
            int64_t* rcx_11 = data_143f4d2a8
            rax_8 = (*(*rcx_11 + 0x48))(rcx_11, arg1, arg4, rbp_1)
    
    sub_14217b900(arg1, rax_8)
    int32_t rax_14 = arg1[0xb].d
    
    if (rax_14 s>= 1)
        rsi_1 = 0x3e8
        
        if (rax_14 s< 0x3e8)
            rsi_1 = rax_14
    
    sub_141c7db30(&arg1[0xbc], rsi_1)
    int64_t* rax_15 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_15 != 0)
        rax_15[1] = arg1
        *rax_15 = &data_1432e2980
        rax_15[3] = sub_140a387b0()
        *rax_15 = &data_1432e29d8
    
    void var_48
    
    if (&var_48 != &arg1[0xd4])
        if (rax_15 != 0)
            (*(*rax_15 + 0x40))(rax_15, &arg1[0xd4])
        else if (arg1[0xd5].d != 0)
            int64_t* rcx_17 = arg1[0xd4]
            
            if (rcx_17 != 0)
                (*(*rcx_17 + 0x38))(rcx_17, 0)
                int64_t rcx_18 = arg1[0xd4]
                
                if (rcx_18 != 0)
                    arg1[0xd4] = sub_140a84c80(rcx_18, 0, 0)
                
                arg1[0xd5].d = 0
    
    if (rax_15 != 0)
        (*(*rax_15 + 0x38))(rax_15, 0)
        int64_t rax_21 = sub_140a84c80(rax_15, 0, 0)
        
        if (rax_21 != 0)
            sub_140a74f90(rax_21)

arg1[0xe8].d = *(arg1 + 0xc)
arg1[0x41] = arg3
return zx.q(rax_2)
