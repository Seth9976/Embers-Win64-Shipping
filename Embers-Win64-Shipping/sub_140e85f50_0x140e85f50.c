// 函数: sub_140e85f50
// 地址: 0x140e85f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
void* r9 = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rbp = 0
void* rax_2 = arg1[8]

if (rax_2 != 0)
    r9 = rax_2

int32_t rbx_2 = *(r9 + ((sx.q(rax_1 + (rbx u>> 0x20).d) & r10_1) << 2))

if (rbx_2 != 0xffffffff)
    void* rdx = *arg1
    int64_t rdi_1
    
    while (true)
        rdi_1 = sx.q(rbx_2)
        int64_t rax_6 = rdi_1 << 5
        
        if (*(rax_6 + rdx) == *arg2)
            break
        
        rbx_2 = *(rax_6 + rdx + 0x18)
        
        if (rbx_2 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r8_2 = rdi_1 << 5
        int64_t rax_10 = sx.q(*(r8_2 + rdx + 0x1c)) & r10_1
        void* rcx_3 = r9 + (rax_10 << 2)
        
        for (int32_t i = *(r9 + (rax_10 << 2)); i != 0xffffffff; i = *rcx_3)
            if (i == rbx_2)
                *rcx_3 = *(r8_2 + rdx + 0x18)
                break
            
            rcx_3 = rdx + 0x18 + (sx.q(i) << 5)
    
    rbp = 1
    int64_t* rdi_4 = *((rdi_1 << 5) + *arg1 + 0x10)
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp1_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_3 = *rdi_4
                (*(r8_3 + 8))(rdi_4, 1, r8_3)
    
    sub_1405c36f0(arg1, rbx_2, 1)

return zx.q(rbp)
