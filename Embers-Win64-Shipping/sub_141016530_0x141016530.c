// 函数: sub_141016530
// 地址: 0x141016530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void** var_48 = nullptr
int32_t rsi = 0
int32_t i_4 = 0
int32_t var_3c = 1
void* r12 = *(*(*arg1 + 0x20) + 0x4e8)
EnterCriticalSection(&arg1[0x11])
int32_t i = 0
int32_t i_2 = 0
void* var_58

if (arg1[0xf].d s> 0)
    int64_t* rcx_2 = nullptr
    int64_t r13_1 = 0
    int64_t* var_60_1 = nullptr
    
    do
        int64_t rdi_1 = *(rcx_2 + arg1[0xc])
        
        if (rdi_1 u> *(r12 + 0x48))
            if (rdi_1 u> sub_141037da0(r12))
                break
            
            i = i_2
        
        int64_t i_6 = sx.q(i_4)
        rsi += 1
        int64_t* r15_2 = arg1[0xe] + r13_1
        int32_t i_5 = (i_6 + 1).d
        i_4 = i_5
        
        if (i_5 s> var_3c)
            sub_140dbc6f0(&var_58, i_6.d)
            i = i_2
        
        void** rcx_5 = &var_58
        
        if (var_48 != 0)
            rcx_5 = var_48
        
        i += 1
        i_2 = i
        r13_1 += 0x10
        void* rcx_6 = &rcx_5[i_6 * 2]
        *rcx_6 = 0
        *rcx_6 = *r15_2
        *r15_2 = 0
        *(rcx_6 + 8) = r15_2[1].d
        *(rcx_6 + 0xc) = *(r15_2 + 0xc)
        rcx_2 = &var_60_1[1]
        r15_2[1] = 0
        var_60_1 = rcx_2
    while (i s< arg1[0xf].d)
    
    if (rsi != 0)
        int32_t rax_11 = arg1[0xd].d
        
        if (rax_11 != rsi)
            int64_t rcx_8 = arg1[0xc]
            memmove(rcx_8, rcx_8 + (sx.q(rsi) << 3), (rax_11 - rsi) << 3)
            rax_11 = arg1[0xd].d
        
        arg1[0xd].d = rax_11 - rsi
        sub_1405c53d0(&arg1[0xc])
        sub_140838580(&arg1[0xe], 0, rsi, 1)

if (arg1 != -0x88)
    LeaveCriticalSection(&arg1[0x11])

void** result = sub_141001af0(arg1, &var_58)
void** rcx_13 = var_48
void** rbx_1 = &var_58
int32_t i_3 = i_4

if (rcx_13 != 0)
    rbx_1 = rcx_13

if (i_3 != 0)
    int32_t i_1
    
    do
        void* rcx_14 = *rbx_1
        
        if (rcx_14 != 0)
            result = sub_140a74f90(rcx_14)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_13 = var_48

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_88)
return result
