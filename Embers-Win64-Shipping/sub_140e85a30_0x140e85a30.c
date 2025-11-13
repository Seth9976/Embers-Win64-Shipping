// 函数: sub_140e85a30
// 地址: 0x140e85a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
void* r10 = &arg1[7]
int32_t r8 = arg2[3].d
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rbp = 0
void* rax_2 = arg1[8]

if (rax_2 != 0)
    r10 = rax_2

int32_t rbx_2 = *(r10 + ((((zx.q(r8) & 1) ^ sx.q(rax_1 + (rbx u>> 0x20).d)) & r11_1) << 2))

if (rbx_2 != 0xffffffff)
    int64_t rdx_1 = *arg1
    int64_t rdi_2
    
    while (true)
        rdi_2 = sx.q(rbx_2) * 6
        
        if (*(rdx_1 + (rdi_2 << 3)) == *arg2)
            char rax_5 = (*(rdx_1 + (rdi_2 << 3) + 0x18)).b
            
            if (((rax_5 ^ r8.b) & 1) == 0 && ((rax_5 ^ r8.b) & 2) == 0 && ((rax_5 ^ r8.b) & 4) == 0
                    && ((rax_5 ^ r8.b) & 8) == 0)
                break
        
        rbx_2 = *(rdx_1 + (rdi_2 << 3) + 0x28)
        
        if (rbx_2 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_10 = sx.q(*(rdx_1 + (rdi_2 << 3) + 0x2c)) & r11_1
        void* rcx_11 = r10 + (rax_10 << 2)
        
        for (int32_t i = *(r10 + (rax_10 << 2)); i != 0xffffffff; i = *rcx_11)
            if (i == rbx_2)
                *rcx_11 = *(rdx_1 + (rdi_2 << 3) + 0x28)
                break
            
            rcx_11 = sx.q(i) * 0x30 + 0x28 + rdx_1
    
    rbp = 1
    int64_t* rdi_3 = *(*arg1 + (rdi_2 << 3) + 0x10)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp1_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_1 = *rdi_3
                (*(r8_1 + 8))(rdi_3, 1, r8_1)
    
    sub_1407c2ba0(arg1, rbx_2, 1)

return zx.q(rbp)
