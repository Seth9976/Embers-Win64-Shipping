// 函数: sub_142c7df50
// 地址: 0x142c7df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET rbp = arg2[0x47]
void* rbx = *arg2
SOCKET arg_18 = rbp
int32_t arg_10 = 0
int32_t r15 = 0
int32_t rdi = 0

if (arg3 != 0)
    *arg3 = 0

*arg1 = 0
int32_t* r14 = &arg_10

if (arg3 != 0)
    r14 = arg3

while (*r14 == 0)
    int64_t rax_1
    int64_t r8
    rax_1, r8 = sub_142c8f090(&arg2[0xd3])
    
    if (rax_1 s<= 0)
        sub_142c64760(rbx, "FTP response timeout", r8, arg4)
        return 0x1c
    
    int64_t rbx_1 = 0x3e8
    
    if (rax_1 s< 0x3e8)
        rbx_1 = rax_1
    
    if (arg2[0xd3] == 0 || rdi s>= 2)
        if (sub_142c65270(arg2, 0) != 0)
            goto label_142c7e02b
        
        int32_t rax_3
        int64_t rdx
        rax_3, rdx = sub_142c64080(rbp, -1, -1, rbx_1)
        
        if (rax_3 == 0xffffffff)
            sub_142c64760(rbx, "FTP response aborted due to select/poll error: %d", 
                zx.q(WSAGetLastError()), arg4)
            return 0x38
        
        if (rax_3 != 0)
            goto label_142c7e02b
        
        int32_t rax_4
        rax_4, arg4 = sub_142c6f450(arg2, rdx, arg4)
        
        if (rax_4 != 0)
            return 0x2a
    else
    label_142c7e02b:
        int64_t* rbx_2 = arg2[0xde]
        void* rbp_1 = *rbx_2
        int64_t var_58
        int32_t arg_8
        int32_t rax_6
        int64_t r8_2
        rax_6, r8_2, arg4 = FindVITargetTypeInstance(arg_18, &arg2[0xd3], &arg_8, &var_58, arg4)
        r15 = rax_6
        *(rbp_1 + 0x4ef0) = arg_8
        int32_t rax_8 = arg_8
        
        if (r14 != 0)
            *r14 = rax_8
        
        if (rax_8 == 0x1a5)
            sub_142c64850(rbp_1, "We got a 421 - timeout!\n", r8_2, arg4)
            rbx_2[0xea].d = 0
            r15 = 0x1c
            break
        
        if (r15 != 0)
            break
        
        int64_t rax_9 = var_58
        
        if (rax_9 != 0 || arg2[0xd3] == rax_9)
            rdi = 0
        else
            rdi += 1
        
        *arg1 += rax_9
        rbp = arg_18

arg2[0xd7].b = 0
return zx.q(r15)
