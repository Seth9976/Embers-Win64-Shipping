// 函数: sub_1429bc980
// 地址: 0x1429bc980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
int64_t rdi = sx.q(arg2)
memset(arg5, 0, 0x80008)
char* r11 = *arg1
int64_t r10 = 0
int32_t r8 = 0

if (rbx s<= arg4)
    while (true)
        if (r11 - *arg1 s<= rdi)
            if (r8 s< 6)
                uint64_t rax_5 = zx.q(((5 - r8) u>> 3) + 1)
                uint64_t i_2 = zx.q(rax_5.d)
                r8 += (rax_5 << 3).d
                uint64_t i
                
                do
                    uint64_t rax_6 = zx.q(*r11)
                    r11 = &r11[1]
                    r10 = r10 << 8 | rax_6
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            r8 -= 6
            uint64_t* rdi_1 = &arg5[sx.q(rbx)]
            uint64_t rdx_2 = zx.q((r10 u>> r8.b).d) & 0x3f
            *rdi_1 = rdx_2
            
            if (rdx_2 != 0x3f)
                if (rdx_2 u< 0x3b)
                label_1429bcac5:
                    rbx += 1
                    
                    if (rbx s> arg4)
                        break
                    
                    continue
                
                int32_t r9 = (rdx_2 - 0x39).d
                
                if (r9 + rbx s> arg4 + 1)
                    sub_1429bcdd0()
                    noreturn
                
                if (r9 != 0)
                    __builtin_memset(rdi_1, 0, zx.q(r9) << 3)
                    rbx += r9
                
                rbx -= 1
                goto label_1429bcac5
            else if (r11 - *arg1 s<= rdi)
                if (r8 s< 8)
                    uint64_t rax_12 = zx.q(((7 - r8) u>> 3) + 1)
                    uint64_t i_3 = zx.q(rax_12.d)
                    r8 += (rax_12 << 3).d
                    uint64_t i_1
                    
                    do
                        uint64_t rax_13 = zx.q(*r11)
                        r11 = &r11[1]
                        r10 = r10 << 8 | rax_13
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                r8 -= 8
                
                if (zx.d((r10 u>> r8.b).b) + 6 + rbx s> arg4 + 1)
                    sub_1429bcdd0()
                    noreturn
                
                __builtin_memset(rdi_1, 0, zx.q(zx.d((r10 u>> r8.b).b) + 6) << 3)
                rbx = rbx - 1 + zx.d((r10 u>> r8.b).b) + 6
                goto label_1429bcac5
        
        sub_1429bce50()
        noreturn

*arg1 = r11
return sub_1429bbad0(arg5) __tailcall
