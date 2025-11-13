// 函数: sub_142c7cd40
// 地址: 0x142c7cd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg1[0x47]
void* r14 = *arg1
bool cond:0 = arg1[0xe1].d != 5
int64_t arg_18 = 0

if (not(cond:0))
    return sub_142c7c7a0(arg1)

if (arg1[0xd9] != 0)
    return sub_142c8ec60(&arg1[0xd3], arg4)

int32_t rbp = 0x38
int32_t rsi_1
char i

do
    int32_t arg_8
    int32_t rax_3
    rax_3, arg3 = FindVITargetTypeInstance(r15, &arg1[0xd3], &arg_8, &arg_18, arg3)
    rsi_1 = rax_3
    
    if (rax_3 != 0)
        return rax_3
    
    int32_t rdx_2 = arg_8
    
    if (arg1[0xe1].d != 0xc && rdx_2 != 1)
        *(r14 + 0x4ef0) = rdx_2
        rdx_2 = arg_8
    
    if (rdx_2 == 0)
        break
    
    uint64_t r8_2 = zx.q(arg1[0xe1].d)
    
    switch ((r8_2 - 1).d)
        case 0
            if (rdx_2 - 0xc8 u< 0x64)
                int64_t r8_4 = arg1[0xe2]
                *(arg1 + 0x724) = 0
                *(arg1 + 0x72c) = 0
                arg1[0xe7].b = 0
                *(arg1 + 0x73a) = 0
                int32_t rax_7
                rax_7, arg3 = gzprintf(&arg1[0xd3], "EHLO %s", r8_4, arg3)
                rsi_1 = rax_7
                
                if (rax_7 == 0)
                    arg1[0xe1].d = 2
            else
                arg3 = sub_142c64760(*arg1, "Got unexpected smtp-server response: %d", zx.q(rdx_2), 
                    arg3)
                rsi_1 = 8
            
            goto label_142c7d06f
        case 1
            int32_t rax_8
            rax_8, arg3 = sub_142c7ca10(arg1, rdx_2, r8_2, arg3)
            rsi_1 = rax_8
        label_142c7d06f:
            
            if (rsi_1 != 0)
                break
        case 2
            rsi_1 = 0
            
            if (rdx_2 - 0xc8 u< 0x64)
                goto label_142c7d068
            
            arg3 = sub_142c64760(*arg1, "Remote access denied: %d", zx.q(rdx_2), arg3)
            rsi_1 = 9
            goto label_142c7d06f
        case 3
            void* rcx_8 = *arg1
            
            if (rdx_2 == 0xdc)
                int32_t rax_11
                rax_11, arg2, arg3 = sub_142c7c7a0(arg1)
                rsi_1 = rax_11
            else if (*(rcx_8 + 0x5f8) == 1)
                int32_t rax_10
                rax_10, arg3 = sub_142c7c430(arg1)
                rsi_1 = rax_10
            else
                arg3 = sub_142c64760(rcx_8, "STARTTLS denied, code %d", zx.q(rdx_2), arg3)
                rsi_1 = 0x40
            
            goto label_142c7d06f
        case 5
            void* rbp_1 = *arg1
            int32_t arg_10
            int32_t rax_12
            int64_t r8_8
            rax_12, r8_8, arg2, arg3 =
                sub_142c8f450(&arg1[0xe3], arg1, zx.q(rdx_2), &arg_10, arg2, arg3)
            rsi_1 = rax_12
            
            if (rax_12 != 0)
                rbp = 0x38
            else
                int32_t rax_13 = arg_10
                
                if (rax_13 == 0)
                    arg3 = sub_142c64760(rbp_1, "Authentication cancelled", r8_8, arg3)
                    rsi_1 = 0x43
                    rbp = 0x38
                else if (rax_13 != 2)
                    rbp = 0x38
                else
                    arg1[0xe1].d = 0
                    rbp = rsi_1 + 0x38
            
            goto label_142c7d06f
        case 6
            int32_t rax_14
            rax_14, arg3 = sub_142c7c910(arg1, rdx_2, arg3)
            rsi_1 = rax_14
            goto label_142c7d06f
        case 7
            if (rdx_2 - 0xc8 u< 0x64)
                char const* const rdx_4 = "RCPT TO:%s"
                char* r8_10 = **(*(*arg1 + 0x250) + 0x10)
                
                if (*r8_10 != 0x3c)
                    rdx_4 = "RCPT TO:<%s>"
                
                int32_t rax_18
                rax_18, arg3 = gzprintf(&arg1[0xd3], rdx_4, r8_10, arg3)
                rsi_1 = rax_18
                
                if (rax_18 != 0)
                    break
                
                arg1[0xe1].d = 9
            else
                arg3 = sub_142c64760(*arg1, "MAIL failed: %d", zx.q(rdx_2), arg3)
                rsi_1 = 0x37
            
            goto label_142c7d06f
        case 8
            int32_t rax_19
            rax_19, arg3 = sub_142c7ccb0(arg1, rdx_2, arg3)
            rsi_1 = rax_19
            goto label_142c7d06f
        case 9
            void* rcx_18 = *arg1
            rsi_1 = 0
            
            if (rdx_2 != 0x162)
                arg3 = sub_142c64760(rcx_18, "DATA failed: %d", zx.q(rdx_2), arg3)
                rsi_1 = 0x37
                goto label_142c7d06f
            
            sub_142c6f270(rcx_18, *(rcx_18 + 0x4e68))
            arg3 = sub_142c68d40(arg1, 0xffffffff, -1, 0, arg3, 0, 0, nullptr)
        label_142c7d068:
            arg1[0xe1].d = 0
            goto label_142c7d06f
        case 0xa
            rsi_1 = 0
            
            if (rdx_2 != 0xfa)
                rsi_1 = rbp
            
            goto label_142c7d068
        default
            arg1[0xe1].d = 0
    
    if (arg1[0xe1].d == 0)
        break
    
    i = sub_142c8ed60(&arg1[0xd3])
while (i != 0)
return rsi_1
