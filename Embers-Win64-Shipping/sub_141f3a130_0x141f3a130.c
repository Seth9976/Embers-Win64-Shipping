// 函数: sub_141f3a130
// 地址: 0x141f3a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x658)

if (rcx == 0 || (*(arg1 + 0x719) & 1) != 0)
    return &__return_addr

int64_t rdi_1 = 0
int64_t arg_8 = 0
int64_t var_38_1 = 0
void* rax = sub_141e02da0(rcx, 0, 0)

if (rax != 0)
    void* rbx_1 = arg3[2]
    char rax_1
    
    if (rbx_1 != 0)
        rax_1 = sub_140d3e110(rbx_1 + 0x30)
    
    if (rbx_1 == 0 || rax_1 == 0 || *(rbx_1 + 0x48) == 0 || *(rbx_1 + 8) s<= 0)
        void* rax_3 = sub_141e04980(*(arg1 + 0x658))
        int32_t rdx_3 = *(rax_3 + 0xa8)
        *(rax + 0x38) = 0
        
        if (rdx_3 s> *(rax + 0x3c))
            sub_1405a5220(rax + 0x30, rdx_3)
        
        int64_t r12_2 = sx.q(*(rax_3 + 0xa8))
        
        if (r12_2.d != 0)
            int32_t rcx_7 = *(rax + 0x38)
            int32_t rdx_4 = rcx_7 + r12_2.d
            
            if (rdx_4 s> *(rax + 0x3c))
                sub_1405a5220(rax + 0x30, rdx_4)
                rcx_7 = *(rax + 0x38)
            
            memcpy(sx.q(rcx_7) * 0x30 + *(rax + 0x30), *(rax_3 + 0xa0), (r12_2 * 0x30).d)
            *(rax + 0x38) += r12_2.d
        
        *(rax + 0x40) = rax_3
        
        if (*(rax_3 + 0xf0) != 0 && sub_140d3c6e0(rax_3 + 0x38) != 0)
            arg_8 = 0
            void* rax_7 = sub_141dec140(sub_140d3c6e0(rax_3 + 0x40), 0)
            int32_t i_2 = *(rax + 0x38)
            
            if (i_2 != 0)
                int64_t r8_5 = 0
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    rdi_1 += 0x30
                    int64_t rax_8 = *(rax + 0x30)
                    r8_5 += 4
                    int128_t* rdx_9 = sx.q(*(*(*(rax + 0x40) + 0x70) + r8_5 - 4)) * 0x30 + *rax_7
                    *(rdi_1 + rax_8 - 0x30) = *rdx_9
                    *(rdi_1 + rax_8 - 0x20) = rdx_9[1]
                    *(rdi_1 + rax_8 - 0x10) = rdx_9[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        sub_141f3f6d0(rax + 0x48, rax_3 + 0xc0)
    else
        int64_t rsi_1 = sx.q(arg3[1].d)
        int64_t r12_1 = *arg3
        int32_t r8 = *(rax + 0x3c)
        *(rax + 0x38) = rsi_1.d
        
        if (rsi_1.d != 0 || r8 != 0)
            sub_1405a4b40(rax + 0x30, rsi_1.d, r8)
            memcpy(*(rax + 0x30), r12_1, (rsi_1 * 0x30).d)
        else
            *(rax + 0x3c) = 0
        
        *(rax + 0x40) = arg3[2]
        sub_141f38350(rax + 0x48, arg4)

int64_t* var_40_1 = arg3
return sub_141f3a0a0(arg1, arg5, *(arg1 + 0x658), arg6, arg4)
