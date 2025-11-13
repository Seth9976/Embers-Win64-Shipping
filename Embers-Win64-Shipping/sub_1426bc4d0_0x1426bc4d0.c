// 函数: sub_1426bc4d0
// 地址: 0x1426bc4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = arg2

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int32_t rbp = 0
void* rax_4 = &arg1[7]
int64_t rdx_2 = (zx.q(*arg2) ^ zx.q(r15[1])) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_4 = r8

int32_t i = *(rax_4 + (rdx_2 << 2))
void* r14 = rax_4 + (rdx_2 << 2)

for (; i != 0xffffffff; i = *r14)
    void* r8_1 = *arg1
    int64_t r9_2 = sx.q(i) << 5
    
    if (r15[1] != *(r9_2 + r8_1 + 2) || *r15 != *(r9_2 + r8_1))
        r14 = r8_1 + 0x18 + r9_2
    else
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_3 = arg1[8]
            int64_t rcx_2 = sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x1c))
            void* rax_11 = &arg1[7]
            
            if (rdx_3 != 0)
                rax_11 = rdx_3
            
            void* rdx_4 = rax_11 + (rcx_2 << 2)
            
            for (int32_t j = *(rax_11 + (rcx_2 << 2)); j != 0xffffffff; j = *rdx_4)
                if (j == i)
                    *rdx_4 = *(r9_2 + r8_1 + 0x18)
                    break
                
                rdx_4 = r8_1 + 0x18 + (sx.q(j) << 5)
        
        int64_t* rbx_1 = *(r9_2 + *arg1 + 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_1405c36f0(arg1, i, 1)
        rbp += 1

return zx.q(rbp)
