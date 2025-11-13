// 函数: sub_141996dc0
// 地址: 0x141996dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
arg1[1] += rdi
int64_t* r8 = *arg1
__builtin_memset(arg2, 0, 0x14)
int64_t* rbx = r8[2]

if (rbx == 0 || *(rbx + 0x24) + rdi.d u> rbx[4].d)
    int64_t rax_1 = sx.q(r8[1].d)
    
    if (rax_1.d s<= 0)
    label_141996e3b:
        int64_t* rax_2 = j_sub_140a82f30(0x30)
        rbx = rax_2
        
        if (rax_2 == 0)
            rbx = nullptr
        else
            rax_2[1].d = 0xffffffff
            *(rax_2 + 0xc) = 4
            int32_t rcx_5 = (rdi + 0xffff).d & 0xffff0000
            rax_2[2] = 0
            *rbx = &data_14300a620
            int32_t rax_3 = 0x10000
            rbx[3] = 0
            *(rbx + 0x24) = 0
            
            if (rcx_5 u>= 0x10000)
                rax_3 = rcx_5
            
            rbx[4].d = rax_3
        
        int64_t* rsi_1 = *arg1
        int64_t rbp_1 = sx.q(rsi_1[1].d)
        int32_t rax_4 = (rbp_1 + 1).d
        rsi_1[1].d = rax_4
        
        if (rax_4 s> *(rsi_1 + 0xc))
            sub_140638870(rsi_1)
        
        *(*rsi_1 + (rbp_1 << 3)) = rbx
        (*(*rbx + 0x28))(rbx)
    else
        int64_t** r8_1 = *r8
        int64_t rdx = 0
        
        while (true)
            rbx = *r8_1
            
            if (*(rbx + 0x24) + rdi.d u<= rbx[4].d)
                break
            
            rdx += 1
            r8_1 = &r8_1[1]
            
            if (rdx s>= rax_1)
                goto label_141996e3b
    
    if (rbx[3] == 0)
        int64_t* rcx_8 = data_143f0f180
        rbx[3] = (*(*rcx_8 + 0x130))(rcx_8, &data_143f02b98, rbx[2], 0, rbx[4].d, 1)
    
    *(*arg1 + 0x10) = rbx

int32_t rcx_9 = *(rbx + 0x24)
*arg2 = zx.q(rcx_9) + rbx[3]
arg2[1] = rbx
*(rbx + 0x24) = rcx_9 + rdi.d
arg2[2].d = rcx_9
return arg2
