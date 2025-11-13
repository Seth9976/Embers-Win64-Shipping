// 函数: sub_1428b50e0
// 地址: 0x1428b50e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* rsi = *(arg1 + 0x70)
int64_t rbx = arg3
int32_t i_2 = rsi[0x1c]
void* rdi = &rsi[0x1c]
int64_t rbp = arg4
char* r14 = arg2

if (i_2 == 0)
label_1428b5160:
    void* rax_1 = &rsi[8]
    int32_t r13_1 = *rax_1
    int32_t i_5 = rbp.d & 0x3f
    uint64_t i_4 = zx.q(i_5)
    int64_t i = rbp - i_4
    
    if (i u>= 0x40)
        do
            uint64_t rdx_1 = i u>> 6
            
            if (rdx_1 u> 0x10000000)
                rdx_1 = 0x10000000
            
            int32_t r13_2 = r13_1 + rdx_1.d
            uint64_t rcx_1 = zx.q(r13_2)
            r13_1 = 0
            
            if (rcx_1 u>= rdx_1)
                r13_1 = r13_2
            
            uint64_t rdi_2 = rdx_1 - rcx_1
            
            if (rcx_1 u>= rdx_1)
                rdi_2 = rdx_1
            
            uint64_t rdi_3 = rdi_2 << 6
            sub_142902860(r14, rbx, rdi_3, rsi, &rsi[8])
            i -= rdi_3
            rsi[8] = r13_1
            rbx += rdi_3
            r14 = &r14[rdi_3]
            
            if (r13_1 == 0)
                rsi[9] += 1
        while (i u>= 0x40)
        
        rax_1 = &rsi[8]
        i_4 = zx.q(i_5)
    
    if (i_5 != 0)
        __builtin_memset(&rsi[0xc], 0, 0x40)
        sub_142902860(&rsi[0xc], &rsi[0xc], 0x40, rsi, rax_1)
        
        if (i_5 != 0)
            void* rsi_1 = rsi - rbx
            void* r14_1 = r14 - rbx
            uint64_t i_1
            
            do
                *(r14_1 + rbx) = *(rsi_1 + rbx + 0x30) ^ *rbx
                rbx += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        *rdi = i_5
else
    if (arg4 != 0)
        while (i_2 u< 0x40)
            uint64_t i_3 = zx.q(i_2)
            i_2 += 1
            char rcx = *(i_3 + rsi + 0x30) ^ *rbx
            rbx += 1
            *r14 = rcx
            r14 = &r14[1]
            int64_t temp0_1 = rbp
            rbp -= 1
            
            if (temp0_1 == 1)
                break
    
    *rdi = i_2
    
    if (rbp != 0)
        if (i_2 == 0x40)
            *rdi = 0
            int32_t temp1_1 = rsi[8]
            rsi[8] += 1
            
            if (temp1_1 == 0xffffffff)
                rsi[9] += 1
        
        goto label_1428b5160

return 1
