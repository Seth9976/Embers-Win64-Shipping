// 函数: sub_142963460
// 地址: 0x142963460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rdi = arg3
char* rbp = arg2

if (arg3 != 0)
    int32_t rax_1 = arg1[5]
    int32_t rcx = arg1[6]
    int32_t rdx = rax_1 + (arg3 << 3).d
    
    if (rdx u< rax_1)
        rcx += 1
    
    arg1[5] = rdx
    uint64_t rcx_1 = zx.q(arg1[0x17])
    arg1[6] = (rdi u>> 0x1d).d + rcx
    
    if (rcx_1 == 0)
        goto label_14296353b
    
    if (rdi u>= 0x40 || rcx_1 + arg3 u>= 0x40)
        memcpy(rcx_1 + &arg1[7], rbp, (0x40 - rcx_1).d)
        sub_1429635a0(arg1, &arg1[7], 1)
        rbp = &rbp[0x40 - rcx_1]
        rdi -= 0x40 - rcx_1
        __builtin_memset(&arg1[7], 0, 0x44)
    label_14296353b:
        uint64_t rbx_3 = rdi u>> 6
        
        if (rbx_3 != 0)
            sub_1429635a0(arg1, rbp, rbx_3)
            uint64_t rbx_4 = rbx_3 << 6
            rbp = &rbp[rbx_4]
            rdi -= rbx_4
        
        if (rdi != 0)
            arg1[0x17] = rdi.d
            memcpy(&arg1[7], rbp, rdi.d)
    else
        memcpy(rcx_1 + &arg1[7], rbp, arg3.d)
        arg1[0x17] += rdi.d

return 1
