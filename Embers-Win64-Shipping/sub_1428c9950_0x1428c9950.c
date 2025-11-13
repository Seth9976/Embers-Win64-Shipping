// 函数: sub_1428c9950
// 地址: 0x1428c9950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rbx = arg3
void* rsi = arg2

if (arg3 != 0)
    int64_t rax_1 = arg1[8]
    int64_t rcx = arg1[9]
    int64_t rdx = rax_1 + (arg3 << 3)
    
    if (rdx u< rax_1)
        rcx += 1
    
    arg1[8] = rdx
    arg1[9] = (rbx u>> 0x3d) + rcx
    uint64_t rax_5 = zx.q(arg1[0x1a].d)
    
    if (rax_5.d == 0)
        goto label_1428c9a0b
    
    void* rcx_1 = rax_5 + &arg1[0xa]
    
    if (rbx u>= 0x80 - rax_5)
        memcpy(rcx_1, rsi, (0x80 - rax_5).d)
        arg1[0x1a].d = 0
        rbx -= 0x80 - rax_5
        rsi += 0x80 - rax_5
        sub_1428c9b90(arg1, &arg1[0xa], 1)
    label_1428c9a0b:
        
        if (rbx u>= 0x80)
            sub_1428c9b90(arg1, rsi, rbx u>> 7)
            void* rsi_1 = rsi + rbx
            rbx = zx.q(rbx.d) & 0x7f
            rsi = rsi_1 - rbx
        
        if (rbx != 0)
            memcpy(&arg1[0xa], rsi, rbx.d)
            arg1[0x1a].d = rbx.d
    else
        memcpy(rcx_1, rsi, arg3.d)
        arg1[0x1a].d += rbx.d

return 1
