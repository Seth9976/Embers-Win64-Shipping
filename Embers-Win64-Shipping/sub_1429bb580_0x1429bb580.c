// 函数: sub_1429bb580
// 地址: 0x1429bb580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d s> arg3)
    return 

int64_t* r14_1 = arg1 + (rdi << 3)

while (true)
    int64_t rdx = *r14_1
    int32_t rdx_1 = rdx.d & 0x3f
    uint64_t rbx_2 = rdx u>> 6
    uint64_t rax = rbx_2 u>> rdx_1.b
    
    if (rax == 0)
        if (rdx_1 u<= 0xe)
            if (rdx_1 != 0)
                rax = zx.q(1 << (0xe - rdx_1.b))
                int32_t* rbx_8 = (rbx_2 << (0xe - rdx_1.b) << 4) + arg4
                int64_t i_2 = sx.q(rax.d)
                
                if (rax.d != 0)
                    int64_t i
                    
                    do
                        if (*rbx_8 != 0)
                            goto label_1429bb717
                        
                        if (*(rbx_8 + 8) != 0)
                            goto label_1429bb717
                        
                        *rbx_8 = rdx_1.b
                        *rbx_8 &= 0xff
                        *rbx_8 |= rdi.d << 8
                        rbx_8 = &rbx_8[4]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
            
            goto label_1429bb6ec
        
        char* rbx_5 = (rbx_2 u>> (rdx_1.b - 0xe) << 4) + arg4
        
        if (*rbx_5 == rax.b)
            int32_t rax_2 = *rbx_5
            int64_t rsi_1 = *(rbx_5 + 8)
            int32_t rcx_5 = ((rax_2 & 0xffffff00) + 0x100) | zx.d(rax_2.b)
            *rbx_5 = rcx_5
            
            if (rsi_1 == 0)
                rax = j_sub_140a82f30(4)
                int64_t rcx_13 = sx.q(*rbx_5) s>> 8
                *(rbx_5 + 8) = rax
                *(rax + (rcx_13 << 2) - 4) = rdi.d
            else
                int64_t rcx_7 = sx.q(rcx_5 s>> 8)
                int64_t rax_4 = 4 * rcx_7
                
                if (mulu.dp.q(4, rcx_7) u>> 0x40 != zx.o(0))
                    rax_4 = -1
                
                *(rbx_5 + 8) = j_sub_140a82f30(rax_4)
                int32_t i_1 = 0
                
                if ((*rbx_5 s>> 8) - 1 s> 0)
                    int32_t* r8 = nullptr
                    
                    do
                        int32_t rax_9 = *(r8 + rsi_1)
                        r8 = &r8[1]
                        i_1 += 1
                        *(r8 + *(rbx_5 + 8) - 4) = rax_9
                    while (i_1 s< (*rbx_5 s>> 8) - 1)
                
                j_sub_140a74f90(rsi_1)
                *(*(rbx_5 + 8) + (sx.q(*rbx_5) s>> 8 << 2) - 4) = rdi.d
            
        label_1429bb6ec:
            rdi = zx.q(rdi.d + 1)
            r14_1 = &r14_1[1]
            
            if (rdi.d s> arg3)
                break
            
            continue
    
label_1429bb717:
    sub_1429bcb80()
    noreturn
