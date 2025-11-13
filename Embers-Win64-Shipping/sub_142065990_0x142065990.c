// 函数: sub_142065990
// 地址: 0x142065990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
void* r10 = &arg1[7]
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rbp = 0
void* rax_2 = arg1[8]

if (rax_2 != 0)
    r10 = rax_2

int32_t rbx_2 = *(r10 + ((sx.q(rax_1 + (rbx u>> 0x20).d) & r11_1) << 2))

if (rbx_2 != 0xffffffff)
    int64_t rdx = *arg1
    int64_t r8_1
    
    while (true)
        r8_1 = sx.q(rbx_2)
        int64_t rax_5 = r8_1 * 5
        
        if (*(rdx + (rax_5 << 3)) == *arg2)
            break
        
        rbx_2 = *(rdx + (rax_5 << 3) + 0x20)
        
        if (rbx_2 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t r9_1 = r8_1 * 5
        int64_t rax_9 = sx.q(*(rdx + (r9_1 << 3) + 0x24)) & r11_1
        void* rcx_3 = r10 + (rax_9 << 2)
        int32_t i = *(r10 + (rax_9 << 2))
        
        while (i != 0xffffffff)
            if (i == rbx_2)
                *rcx_3 = *(rdx + (r9_1 << 3) + 0x20)
                break
            
            int64_t i_1 = sx.q(i)
            int64_t rcx_5 = i_1 + ((i_1 + 1) << 2)
            i = *(rdx + (rcx_5 << 3))
            rcx_3 = rdx + (rcx_5 << 3)
    
    rbp = 1
    int64_t* rdi_1 = *(*arg1 + r8_1 * 0x28 + 0x10)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_2 = *rdi_1
                (*(r8_2 + 8))(rdi_1, 1, r8_2)
    
    sub_1405c3590(arg1, rbx_2, 1)

return zx.q(rbp)
