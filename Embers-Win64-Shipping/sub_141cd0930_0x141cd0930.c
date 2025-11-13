// 函数: sub_141cd0930
// 地址: 0x141cd0930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rdi = sx.q(*(arg1[7] + rbx * 0x18))
int64_t r14_1 = rdi << 5
int64_t* r15_1 = *arg1 + r14_1
int32_t* r9 = *r15_1
int64_t r8 = sx.q(r15_1[1].d)
int32_t* rax_1 = r9
void* rdx_1 = &r9[r8]

if (r9 != rdx_1)
    do
        if (*rax_1 == rbx.d)
            int32_t rax_3 = ((rax_1 - r9) s>> 2).d
            
            if (rax_3 != 0xffffffff)
                void* rcx_1 = &r9[sx.q(rax_3)]
                memmove(rcx_1, rcx_1 + 4, (r8.d - rax_3 - 1) << 2)
                r15_1[1].d -= 1
            
            break
        
        rax_1 = &rax_1[1]
    while (rax_1 != rdx_1)

if (arg3 != 0)
    int64_t rax_4 = *arg1
    
    if (*(r14_1 + rax_4 + 8) == 0 && *(r14_1 + rax_4 + 0x18) == 0)
        int32_t* rdx_3 = *arg3
        int64_t r8_5 = sx.q(arg3[1].d)
        int32_t* rcx_2 = rdx_3
        int32_t* r14_2 = r8_5 << 2
        void* rax_5 = r14_2 + rdx_3
        
        if (rdx_3 != rax_5)
            while (*rcx_2 != rdi.d)
                rcx_2 = &rcx_2[1]
                
                if (rcx_2 == rax_5)
                    goto label_141cd0a0e
        
        if (rdx_3 == rax_5 || ((rcx_2 - rdx_3) s>> 2).d == 0xffffffff)
        label_141cd0a0e:
            int32_t rax_6 = (r8_5 + 1).d
            arg3[1].d = rax_6
            
            if (rax_6 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(r14_2 + *arg3) = rdi.d

sub_1409d8340(&arg1[7], rbx.d, 1)
return sub_1409d8140(&arg1[0x35], rbx.d) __tailcall
