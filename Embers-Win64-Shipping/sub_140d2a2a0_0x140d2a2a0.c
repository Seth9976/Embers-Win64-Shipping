// 函数: sub_140d2a2a0
// 地址: 0x140d2a2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* rcx_1 = arg1[8]
int32_t rbp = 0
int64_t r10_1 = sx.q(arg1[9].d) - 1
void* rdx_2 = &arg1[7]

if (rcx_1 != 0)
    rdx_2 = rcx_1

int32_t rdi = *(rdx_2 + ((sx.q(rax_1 + (arg2 u>> 0x20).d) & r10_1) << 2))

if (rdi != 0xffffffff)
    void* r8_1 = *arg1
    int64_t rcx_2
    
    while (true)
        rcx_2 = sx.q(rdi)
        int64_t rax_6 = rcx_2 << 5
        
        if (*(rax_6 + r8_1) == arg2)
            break
        
        rdi = *(rax_6 + r8_1 + 0x18)
        
        if (rdi == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r9_2 = rcx_2 << 5
        void* rdx_3 = rdx_2 + ((sx.q(*(r9_2 + r8_1 + 0x1c)) & r10_1) << 2)
        
        for (int32_t i = *rdx_3; i != 0xffffffff; i = *rdx_3)
            if (i == rdi)
                *rdx_3 = *(r9_2 + r8_1 + 0x18)
                break
            
            rdx_3 = r8_1 + 0x18 + (sx.q(i) << 5)
    
    rbp = 1
    int64_t* rbx_1 = *((rcx_2 << 5) + *arg1 + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)
    
    sub_1405c36f0(arg1, rdi, 1)

return zx.q(rbp)
