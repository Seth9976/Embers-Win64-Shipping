// 函数: sub_140d9fd80
// 地址: 0x140d9fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x130))
int32_t r9 = 0

if (rax.d s<= 0)
label_140d9fdd6:
    *(arg2 + 0x48) = 0
else
    void* r10_1 = arg1 + 8
    int64_t rdx = 0
    void* rax_1 = *(r10_1 + 0x120)
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int64_t rax_2 = 0
    
    while (*(rax_2 + r10_1 + 0x38) != *arg3)
        r9 += 1
        rdx += 1
        rax_2 += 0x48
        
        if (rdx s>= rax)
            goto label_140d9fdd6
    
    int64_t rcx_2 = sx.q(r9) * 9
    *arg2 = *(r10_1 + (rcx_2 << 3))
    arg2[1] = *(r10_1 + (rcx_2 << 3) + 0x10)
    arg2[2] = *(r10_1 + (rcx_2 << 3) + 0x20)
    arg2[3].q = *(r10_1 + (rcx_2 << 3) + 0x30)
    *(arg2 + 0x38) = *(r10_1 + (rcx_2 << 3) + 0x38)
    void* rax_8 = *(r10_1 + (rcx_2 << 3) + 0x40)
    arg2[4].q = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    *(arg2 + 0x48) = 1

int64_t* rdi_2 = arg3[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp1_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

return arg2
