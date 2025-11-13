// 函数: sub_140ed4fe0
// 地址: 0x140ed4fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t* r8 = arg2
int64_t* rcx = *arg2

if (rcx != data_143e244b0)
    sub_140de9860(rcx, *(rbx + 8))
    r8 = arg2

int64_t rdx_1 = sx.q(*(rbx + 0x18))

if (rdx_1.d == 0)
    return 0

int32_t r12 = 0
int32_t r14 = 0
int64_t r13
r13.b = **(rbx + 0x10) != *r8
int64_t rsi = 0

do
    int64_t r9_1 = sx.q(r14)
    rsi += 1
    r14 += 1
    
    if (rsi s< rdx_1)
        int64_t* rcx_4 = (rsi << 4) + *(rbx + 0x10)
        
        do
            int32_t rax_2
            rax_2.b = *rcx_4 != *r8
            
            if (zx.d(r13.b) != rax_2)
                break
            
            r14 += 1
            rsi += 1
            rcx_4 = &rcx_4[2]
        while (rsi s< rdx_1)
    
    int32_t i_1 = r14 - r9_1.d
    
    if (r13.b != 0)
        if (r12 != r9_1.d)
            memmove((sx.q(r12) << 4) + *(rbx + 0x10), (r9_1 << 4) + *(rbx + 0x10), i_1 << 4)
        
        r12 += i_1
    else if (i_1 != 0)
        int64_t* rdi_4 = (r9_1 << 4) + 8 + *(rbx + 0x10)
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_4
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_4 = &rdi_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx = arg1
    
    r8 = arg2
    r13.b ^= 1
while (rsi s< rdx_1)

*(rbx + 0x18) = r12
return zx.q(rdx_1.d - r12)
