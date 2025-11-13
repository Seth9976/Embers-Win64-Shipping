// 函数: sub_140947ba0
// 地址: 0x140947ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1
int64_t rcx = sx.q(arg1[1].d)

if (rcx.d == 0)
    return 0

int32_t r12 = 0
int32_t r14 = 0
int64_t r15 = rcx
int64_t r13
r13.b = *(*rdx + 0x38) != 0
int64_t rsi = 0

do
    int64_t r10_1 = sx.q(r14)
    rsi += 1
    r14 += 1
    
    if (rsi s< r15)
        int32_t* rdx_3 = *rdx + 0x38 + rsi * 0x50
        
        do
            int32_t rax_2
            rax_2.b = *rdx_3 != 0
            
            if (zx.d(r13.b) != rax_2)
                break
            
            r14 += 1
            rsi += 1
            rdx_3 = &rdx_3[0x14]
        while (rsi s< r15)
        
        rdx = arg1
    
    int32_t i_1 = r14 - r10_1.d
    
    if (r13.b != 0)
        if (r12 != r10_1.d)
            int64_t r9_1 = *rdx
            memmove(sx.q(r12) * 0x50 + r9_1, r10_1 * 0x50 + r9_1, i_1 * 0x50)
        
        r12 += i_1
        rdx = arg1
    else if (i_1 != 0)
        void* rdi_4 = r10_1 * 0x50 + 0x18 + *rdx
        int32_t i
        
        do
            sub_14094b070(rdi_4 + 0x28)
            sub_14094b070(rdi_4 + 0x18)
            *(rdi_4 - 0x10) = &data_142e259e0
            int64_t rcx_8 = *(rdi_4 + 8)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t* rbx_1 = *rdi_4
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_4 += 0x50
            i = i_1
            i_1 -= 1
        while (i != 1)
        r15 = rcx
        rdx = arg1
    
    r13.b ^= 1
while (rsi s< r15)

rdx[1].d = r12
return zx.q(rcx.d - r12)
