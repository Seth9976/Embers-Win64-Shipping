// 函数: sub_142c7a6e0
// 地址: 0x142c7a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[0x47]
bool cond:0 = arg1[0xe1].d != 4
int64_t arg_10 = 0

if (not(cond:0))
    return sub_142c79ea0(arg1)

if (arg1[0xd9] != 0)
    return sub_142c8ec60(&arg1[0xd3], arg4)

int32_t rbx_1
char i

do
    uint32_t arg_8
    int32_t rax_3
    rax_3, arg3 = FindVITargetTypeInstance(rbp, &arg1[0xd3], &arg_8, &arg_10, arg3)
    rbx_1 = rax_3
    
    if (rax_3 != 0)
        return rax_3
    
    uint32_t rdx_2 = arg_8
    
    if (rdx_2 == 0xffffffff)
        return 8
    
    if (rdx_2 == 0)
        break
    
    uint64_t r8_2 = zx.q(arg1[0xe1].d)
    int32_t rax_7
    
    switch ((r8_2 - 1).d)
        case 0
            if (rdx_2 == 0x4f)
                *(arg1 + 0x71c) = 0
                *(arg1 + 0x724) = 0
                *(arg1 + 0x73d) = 0
                int32_t rax_6
                rax_6, arg3 = sub_142c79fe0(arg1)
                rbx_1 = rax_6
                
                if (rax_6 == 0)
                    arg1[0xe1].d = 2
            else
                arg3 = sub_142c64760(*arg1, "Got unexpected imap-server response", r8_2, arg3)
                rbx_1 = 8
            
            goto label_142c7a902
        case 1
            rax_7, arg3 = sub_142c7a150(arg1, rdx_2, r8_2, arg3)
        label_142c7a900:
            rbx_1 = rax_7
        label_142c7a902:
            
            if (rbx_1 != 0)
                break
        case 2
            void* rcx_7 = *arg1
            
            if (rdx_2 == 0x4f)
                rax_7, arg2, arg3 = sub_142c79ea0(arg1)
                goto label_142c7a900
            
            if (*(rcx_7 + 0x5f8) == 1)
                rax_7, arg3 = sub_142c79a90(arg1)
                goto label_142c7a900
            
            arg3 = sub_142c64760(rcx_7, "STARTTLS denied", r8_2, arg3)
            rbx_1 = 0x40
            goto label_142c7a902
        case 4
            rax_7, arg2, arg3 = sub_142c7a0c0(arg1, rdx_2, arg3, arg2)
            goto label_142c7a900
        case 5
            rbx_1 = 0
            
            if (rdx_2 == 0x4f)
                goto label_142c7a8e0
            
            arg3 = sub_142c64760(*arg1, "Access denied. %c", zx.q(rdx_2), arg3)
            rbx_1 = 0x43
            goto label_142c7a902
        case 6, 0xc
            rax_7, arg3 = sub_142c7a530(arg1, rdx_2, arg3)
            goto label_142c7a900
        case 7
            rax_7, arg3 = sub_142c7a5b0(arg1, rdx_2, r8_2, arg3)
            goto label_142c7a900
        case 8
            rax_7, arg3 = sub_142c7a340(arg1, rdx_2, r8_2, arg3)
            goto label_142c7a900
        case 9
            rbx_1 = 0
            
            if (rdx_2 == 0x4f)
                goto label_142c7a8e0
            
            rbx_1 = 8
            goto label_142c7a902
        case 0xa
            void* rcx_14 = *arg1
            rbx_1 = 0
            
            if (rdx_2 != 0x2b)
                rbx_1 = 0x19
                goto label_142c7a902
            
            sub_142c6f270(rcx_14, *(rcx_14 + 0x4e68))
            arg3 = sub_142c68d40(arg1, 0xffffffff, -1, 0, arg3, 0, 0, nullptr)
        label_142c7a8e0:
            arg1[0xe1].d = 0
            goto label_142c7a902
        case 0xb
            rbx_1 = 0
            
            if (rdx_2 == 0x4f)
                goto label_142c7a8e0
            
            rbx_1 = 0x19
            goto label_142c7a902
        default
            arg1[0xe1].d = 0
    
    if (arg1[0xe1].d == 0)
        break
    
    i = sub_142c8ed60(&arg1[0xd3])
while (i != 0)
return rbx_1
