// 函数: sub_1427b3720
// 地址: 0x1427b3720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg2
int32_t result_1 = 0
int64_t* rdx = arg1
int64_t rcx = sx.q(arg1[6].d)
int32_t result

if (rcx.d != 0)
    int64_t rbx_1 = 0
    int32_t rbp_1 = 0
    int32_t r12_1 = 0
    int64_t r13
    r13.b = *(rdx[5] + 8) != r10
    
    do
        int64_t r9_1 = sx.q(rbp_1)
        rbx_1 += 1
        rbp_1 += 1
        
        if (rbx_1 s< rcx)
            int64_t rdx_3 = rdx[5] + 8 + (rbx_1 << 5)
            
            do
                int32_t rax_1
                rax_1.b = *rdx_3 != r10
                
                if (zx.d(r13.b) != rax_1)
                    break
                
                rbp_1 += 1
                rbx_1 += 1
                rdx_3 += 0x20
            while (rbx_1 s< rcx)
            
            rdx = arg1
        
        int32_t i_1 = rbp_1 - r9_1.d
        
        if (r13.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rax_2 = rdx[5]
                memmove((sx.q(r12_1) << 5) + rax_2, (r9_1 << 5) + rax_2, i_1 << 5)
            
            r12_1 += i_1
            rdx = arg1
        else if (i_1 != 0)
            int64_t* rdi_4 = (r9_1 << 5) + 0x10 + rdx[5]
            int32_t i
            
            do
                int64_t rcx_6 = *rdi_4
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rdi_4 = &rdi_4[4]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdx = arg1
        
        r10 = arg2
        r13.b ^= 1
    while (rbx_1 s< rcx)
    
    result = rcx.d - r12_1
    result_1 = result
    rdx[6].d = r12_1
    
    if (result s> 0)
        (*(*rdx + 0x2a8))(rdx)

result.b = result_1 s> 0
return result
