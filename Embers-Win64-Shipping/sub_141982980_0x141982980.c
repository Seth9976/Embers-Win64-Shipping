// 函数: sub_141982980
// 地址: 0x141982980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rbx = arg1[8]
int64_t rdi_1 = sx.q(arg1[9].d) - 1
void* r12 = &arg1[7]
int32_t r13 = 0
void* rax_2 = r12
int64_t rcx_2 = sx.q(sub_141974050(arg2)) & rdi_1

if (rbx != 0)
    rax_2 = rbx

int32_t i = *(rax_2 + (rcx_2 << 2))

if (i != 0xffffffff)
    void* rbp_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t* rdi_3 = i_1 * 0xb8 + rbp_1
        
        if (sub_141965390(rdi_3, arg2) != 0)
            void* rax_4 = *(r12 + 8)
            void* r10_1 = i_1 * 0xb8
            void* r8_1 = r10_1 + rbp_1
            int64_t rcx_5 = sx.q(*(r8_1 + 0xb4)) & rdi_1
            
            if (rax_4 != 0)
                r12 = rax_4
            
            int32_t j = *(r12 + (rcx_5 << 2))
            void* rdx_1 = r12 + (rcx_5 << 2)
            
            for (; j != 0xffffffff; j = *rdx_1)
                if (j == i)
                    *rdx_1 = *(r8_1 + 0xb0)
                    break
                
                rdx_1 = rbp_1 + 0xb0 + sx.q(j) * 0xb8
            
            r13 = 1
            void* r9_1 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(sx.q(arg1[6].d) * 0xb8 + *arg1) = i
            
            int32_t* rcx_9 = *arg1
            int32_t rax_9 = -1
            *(rcx_9 + r10_1) = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_9 = arg1[6].d
            
            *(rcx_9 + r10_1 + 4) = rax_9
            *(arg1 + 0x34) += 1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            arg1[6].d = i
            void* rcx_10 = *(r9_1 + 0x10)
            
            if (rcx_10 != 0)
                r9_1 = rcx_10
            
            int64_t rcx_11 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(r9_1 + (rcx_11 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = rdi_3[0x16].d
    while (i != 0xffffffff)

return zx.q(r13)
