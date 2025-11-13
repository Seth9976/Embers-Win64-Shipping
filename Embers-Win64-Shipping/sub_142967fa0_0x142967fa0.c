// 函数: sub_142967fa0
// 地址: 0x142967fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rdi = arg3
char* rbp = arg2

if (arg3 != 0)
    int32_t rax_1 = arg1[8]
    int32_t rcx = arg1[9]
    int32_t rdx = rax_1 + (arg3 << 3).d
    
    if (rdx u< rax_1)
        rcx += 1
    
    arg1[8] = rdx
    uint64_t rcx_1 = zx.q(arg1[0x1a])
    arg1[9] = (rdi u>> 0x1d).d + rcx
    
    if (rcx_1 == 0)
        goto label_14296807b
    
    if (rdi u>= 0x40 || rcx_1 + arg3 u>= 0x40)
        memcpy(rcx_1 + &arg1[0xa], rbp, (0x40 - rcx_1).d)
        sub_142965420(arg1, &arg1[0xa], 1)
        rbp = &rbp[0x40 - rcx_1]
        rdi -= 0x40 - rcx_1
        __builtin_memset(&arg1[0xa], 0, 0x44)
    label_14296807b:
        uint64_t rbx_3 = rdi u>> 6
        
        if (rbx_3 != 0)
            sub_142965420(arg1, rbp, rbx_3)
            uint64_t rbx_4 = rbx_3 << 6
            rbp = &rbp[rbx_4]
            rdi -= rbx_4
        
        if (rdi != 0)
            arg1[0x1a] = rdi.d
            memcpy(&arg1[0xa], rbp, rdi.d)
    else
        memcpy(rcx_1 + &arg1[0xa], rbp, arg3.d)
        arg1[0x1a] += rdi.d

return 1
