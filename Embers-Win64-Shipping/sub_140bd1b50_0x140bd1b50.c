// 函数: sub_140bd1b50
// 地址: 0x140bd1b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0

if (0 == *(arg1 + 0x19))
    *(arg1 + 0x19) = 0
else
    rax = *(arg1 + 0x19)

if (rax != 0)
    return zx.q(sbb.d(arg1.d, arg1.d, rax != 0) + 2)

TlsGetValue(data_143e1a81c)
char rbx = *(arg1 + 0x35)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char arg_8 = 0
int32_t rbp = sub_140bcdaa0(arg1, &arg_8, arg2)
int64_t performanceCount_1[0x2]
QueryPerformanceCounter(&performanceCount_1)

if (rbx != 0)
label_140bd1c52:
    
    if (rbp != 0)
        EnterCriticalSection(arg1 + 0x60)
        EnterCriticalSection(arg1 + 0x98)
        bool z_3
        
        if (0 == *(arg1 + 0x1f4))
            *(arg1 + 0x1f4) = 0
            z_3 = true
        else
            *(arg1 + 0x1f4)
            z_3 = false
        
        char r14_1
        
        if (not(z_3))
            r14_1 = arg_8
        else
            r14_1 = 1
            sub_140bc74b0()
        
        if (arg1 != -0x98)
            LeaveCriticalSection(arg1 + 0x98)
        
        if (arg1 != -0x60)
            LeaveCriticalSection(arg1 + 0x60)
        
        if (r14_1 == 0 && data_14399fa4c != r14_1)
            int64_t* rcx_13 = *(arg1 + 0x158)
            
            if ((*(*rcx_13 + 0x18))(rcx_13, 0) == 0)
                int64_t* rcx_14 = *(arg1 + 0x158)
                (*(*rcx_14 + 0x10))(rcx_14)
else if (rbp != 0)
    rbp = 2
    int32_t var_34 = 0
    bool z_1
    
    if (0 == *(arg1 + 0x1f8))
        *(arg1 + 0x1f8) = 0
        z_1 = true
    else
        *(arg1 + 0x1f8)
        z_1 = false
    
    if (not(z_1))
        void* rcx_5 = data_143e1adf0
        bool z_2
        
        if (0 == *(rcx_5 + 8))
            *(rcx_5 + 8) = 0
            z_2 = true
        else
            *(rcx_5 + 8)
            z_2 = false
        
        if (not(z_2))
            rbp = 0
        else
            TlsGetValue(data_143e1a81c)
            void var_38
            sub_140cad130(&var_38)
            rbp = sub_140bcd2d0(arg1, &var_34)
            
            if (arg_8 != 0 || var_34 s> 0)
                arg_8 = 1
                sub_140cad790()
            else
                arg_8 = 0
                sub_140cad790()
    
    goto label_140bd1c52

sub_140599090(&data_14399fad8)
return zx.q(rbp)
