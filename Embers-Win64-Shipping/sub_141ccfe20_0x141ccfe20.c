// 函数: sub_141ccfe20
// 地址: 0x141ccfe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t rdi = sx.q(arg2)
void* rcx = arg1 + 0x70
int64_t r12 = 2
int32_t* r15 = *(arg1 + 0x70) + rdi * 0x18

if (r15 u> &r15[2])
    r12 = 0

if (r15 u<= &r15[2])
    do
        int64_t rbx_1 = sx.q(*r15)
        void* rsi_3 = (rbx_1 << 5) + *arg1
        int32_t* r8 = *(rsi_3 + 0x10)
        int64_t r9_1 = sx.q(*(rsi_3 + 0x18))
        int32_t* rax_2 = r8
        void* rdx_1 = &r8[r9_1]
        
        if (r8 != rdx_1)
            do
                if (*rax_2 == rdi.d)
                    int32_t rax_4 = ((rax_2 - r8) s>> 2).d
                    
                    if (rax_4 != 0xffffffff)
                        void* rcx_2 = &r8[sx.q(rax_4)]
                        memmove(rcx_2, rcx_2 + 4, (r9_1.d - rax_4 - 1) << 2)
                        *(rsi_3 + 0x18) -= 1
                    
                    break
                
                rax_2 = &rax_2[1]
            while (rax_2 != rdx_1)
        
        if (arg3 != 0 && *(rsi_3 + 0x18) == 0)
            int32_t* rdx_3 = *arg3
            int64_t r8_3 = sx.q(arg3[1].d)
            int32_t* rcx_3 = rdx_3
            void* rax_5 = &rdx_3[r8_3]
            
            if (rdx_3 != rax_5)
                while (*rcx_3 != rbx_1.d)
                    rcx_3 = &rcx_3[1]
                    
                    if (rcx_3 == rax_5)
                        goto label_141ccff0e
            
            if (rdx_3 == rax_5 || ((rcx_3 - rdx_3) s>> 2).d == 0xffffffff)
            label_141ccff0e:
                int32_t rax_6 = (r8_3 + 1).d
                arg3[1].d = rax_6
                
                if (rax_6 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *((r8_3 << 2) + *arg3) = rbx_1.d
        
        r15 = &r15[1]
        rbp += 1
    while (rbp != r12)
    
    rcx = arg1 + 0x70

sub_1409d8340(rcx, rdi.d, 1)
return sub_1409d8140(arg1 + 0x200, rdi.d) __tailcall
