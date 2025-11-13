// 函数: sub_14040bc00
// 地址: 0x14040bc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2
int32_t rdi = 0
int32_t rax = sub_1403f76d0(arg1, 0xf)
int32_t r10 = 0

if (rax u>= rbx)
    r10 = rbx
    rdi = 1
    rbx = (((0x7fe0 - rbx) * (0x4000 - arg3)) u>> 0xf) + 1
    
    if (rbx u<= 1)
    label_14040bc82:
        uint64_t rax_5 = zx.q((rax - r10) u>> 1)
        rdi += rax_5.d
        r10 += (rax_5 << 1).d
    else
        while (true)
            int32_t rcx = rbx * 2
            
            if (rax u< rcx + r10)
                break
            
            r10 += rcx
            rdi += 1
            rbx = (((rcx - 2) * arg3) u>> 0xf) + 1
            
            if (rbx u<= 1)
                goto label_14040bc82
        
        if (rbx u<= 1)
            goto label_14040bc82
    
    int32_t rax_6 = r10 + rbx
    
    if (rax u>= rax_6)
        r10 = rax_6
    else
        rdi = neg.d(rdi)

int32_t rcx_1 = r10 + rbx
int32_t r8 = 0x8000

if (rcx_1 u< 0x8000)
    r8 = rcx_1

sub_1403f7650(arg1, r10, r8, 0x8000)
return zx.q(rdi)
