// 函数: sub_140a5f8a0
// 地址: 0x140a5f8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int64_t* r9 = arg2
int64_t* rdx = arg1

if (r8.d == 0)
    return 0

int32_t r12 = 0
int32_t r14 = 0
int64_t r13
r13.b = **arg1 != *r9
int64_t rdi = 0

do
    int64_t r10_1 = sx.q(r14)
    rdi += 1
    r14 += 1
    
    if (rdi s< r8)
        int64_t* rdx_1 = *rdx + rdi * 0x18
        
        do
            int32_t rax_3
            rax_3.b = *rdx_1 != *r9
            
            if (zx.d(r13.b) != rax_3)
                break
            
            r14 += 1
            rdi += 1
            rdx_1 = &rdx_1[3]
        while (rdi s< r8)
        
        rdx = arg1
    
    int32_t i_1 = r14 - r10_1.d
    
    if (r13.b != 0)
        if (r12 != r10_1.d)
            int64_t r9_2 = *rdx
            memmove(r9_2 + sx.q(r12) * 0x18, r9_2 + r10_1 * 0x18, i_1 * 0x18)
        
        r12 += i_1
        rdx = arg1
    else if (i_1 != 0)
        int64_t* rsi_1 = *rdx + ((r10_1 + ((r10_1 + 1) << 1)) << 3)
        int32_t i
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_9 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_9 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdx = arg1
    
    r9 = arg2
    r13.b ^= 1
while (rdi s< r8)

rdx[1].d = r12
return zx.q(r8.d - r12)
