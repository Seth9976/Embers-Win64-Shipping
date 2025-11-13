// 函数: sub_142c8fa60
// 地址: 0x142c8fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg2
int64_t arg_8 = 0
int32_t* rcx = 0x314
int64_t arg_10 = 0
int32_t arg_18 = 0x10
int32_t rdx = *(arg2 + 0x164)
int32_t r15 = 0
int32_t* rax_1

if (rdx == 2)
    rax_1 = 0x314
    
    if (arg2[0x48] != -1)
        rax_1 = 0x33c

int64_t rax_2

if (rdx != 2 || *(rax_1 + arg2) == rdx)
    rax_2 = arg2[0x1a]
else
    rax_2 = arg2[0x2a]

if (rdx == 2 && arg2[0x48] != -1)
    rcx = 0x33c

int32_t r13

if (rdx != 2 || *(rcx + arg2) == rdx)
    r13 = *(arg2 + 0x17c)
else
    r13 = arg2[0x2f].d

int32_t rdi_1 = arg1[2].d & *(arg1 + 0xc)
*(arg1 + 0x1a) = arg3
*(arg1 + 0x14) = 0
*arg4 = 0
int32_t rax_4
int32_t rsi_1
char const* const rdi_2

if ((rdi_1.b & 0x20) != 0 && *arg2[0x3f] == 0)
    *(arg1 + 0x14) = 0x20
    rdi_2 = "EXTERNAL"
    rsi_1 = 4
    
    if (arg3 != 0 || *(rbp + 0x800) != 0)
        rax_4 = j_sub_142c91ff0(rbp, arg2[0x3e], &arg_8, &arg_10, arg5)
    label_142c8fde2:
        r15 = rax_4
        
        if (rax_4 == 0 && rdi_2 != 0)
            goto label_142c8fdf6
    else
    label_142c8fe52:
        int32_t rax_13 = (*(*arg1 + 0x18))(arg2, rdi_2, arg_8)
        r15 = rax_13
        
        if (rax_13 == 0)
            if (arg_8 != 0)
                rsi_1 = arg_18
            
            *arg4 = 1
            arg1[1].d = rsi_1
else if (arg2[0x7f].b != 0)
    char rax_5
    
    if ((rdi_1.b & 8) != 0)
        rax_5 = sub_14058f640()
    
    if ((rdi_1.b & 8) != 0 && rax_5 != 0)
        rdi_2 = "DIGEST-MD5"
        *(arg1 + 0x14) = 8
        rsi_1 = 6
    label_142c8fdf6:
        
        if (arg_8 == 0)
            goto label_142c8fe52
        
        int64_t rcx_7 = *(*arg1 + 0x10)
        
        if (rcx_7 != 0)
            int64_t rax_10 = -1
            
            do
                rax_10 += 1
            while (rdi_2[rax_10] != 0)
            
            if (rax_10 + arg_10 u> rcx_7)
                data_143ccb8a0(arg_8)
                arg_8 = 0
        
        goto label_142c8fe52
    
    if ((rdi_1.b & 4) != 0)
        rdi_2 = "CRAM-MD5"
        *(arg1 + 0x14) = 4
        rsi_1 = 5
        goto label_142c8fdf6
    
    char rax_6
    
    if ((rdi_1.b & 0x40) != 0)
        rax_6 = sub_14058f640()
    
    if ((rdi_1.b & 0x40) != 0 && rax_6 != 0)
        arg_18 = 9
        rdi_2 = "NTLM"
        *(arg1 + 0x14) = 0x40
        rsi_1 = 8
        
        if (arg3 == 0 && *(rbp + 0x800) == 0)
            goto label_142c8fdf6
        
        rax_4 = sub_142c8c110(arg2[0x3e], arg2[0x3f], &arg2[0xa4], &arg_8, arg5, &arg_10)
        goto label_142c8fde2
    
    if (test_bit(rdi_1, 8) && arg2[0x41] != 0)
        arg_18 = 0xe
        rdi_2 = "OAUTHBEARER"
        *(arg1 + 0x14) = 0x100
        rsi_1 = 0xd
        
        if (arg3 == 0 && *(rbp + 0x800) == 0)
            goto label_142c8fdf6
        
        rax_4 = sub_142c92430(rbp, arg2[0x3e], rax_2, r13, arg5, arg2[0x41], &arg_8, &arg_10)
        goto label_142c8fde2
    
    if (rdi_1.b s< 0 && arg2[0x41] != 0)
        *(arg1 + 0x14) = 0x80
        rdi_2 = "XOAUTH2"
        rsi_1 = 0xd
        
        if (arg3 == 0 && *(rbp + 0x800) == 0)
            goto label_142c8fdf6
        
        rax_4 = sub_142c92430(rbp, arg2[0x3e], 0, 0, arg5, arg2[0x41], &arg_8, &arg_10)
        goto label_142c8fde2
    
    if ((rdi_1.b & 1) != 0)
        arg_18 = 3
        rdi_2 = "LOGIN"
        *(arg1 + 0x14) = 1
        rsi_1 = 2
        
        if (arg3 == 0 && *(rbp + 0x800) == 0)
            goto label_142c8fdf6
        
        rax_4 = sub_142c91ff0(rbp, arg2[0x3e], &arg_8, &arg_10, arg5)
        goto label_142c8fde2
    
    if ((rdi_1.b & 2) != 0)
        *(arg1 + 0x14) = 2
        rdi_2 = "PLAIN"
        rsi_1 = 1
        
        if (arg3 == 0 && *(rbp + 0x800) == 0)
            goto label_142c8fdf6
        
        rax_4 = sub_142c92070(rbp, arg2[0x3e], arg2[0x3f], &arg_8, arg5, &arg_10)
        goto label_142c8fde2
data_143ccb8a0(arg_8)
return zx.q(r15)
