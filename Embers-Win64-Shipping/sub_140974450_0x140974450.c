// 函数: sub_140974450
// 地址: 0x140974450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int64_t* rcx = *(arg2 + 8)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x28))(rcx)

int32_t r8

if (rcx == 0 || rax_2 == 0)
    r8 = -1
else
    int64_t* rdi_1 = *(arg2 + 8)
    int32_t rax_4 = (*(*rdi_1 + 0x20))(rdi_1)
    int64_t rdx = *rdi_1
    r8 = sub_140a6af60((*(rdx + 0x18))(rdi_1, rdx), rax_4)

void* r15 = &arg1[7]
void* rdx_2 = *(r15 + 8)
int32_t rbp = 0
int64_t rcx_5 = sx.q(arg1[9].d - 1) & sx.q(r8)
void* rax_10 = r15

if (rdx_2 != 0)
    rax_10 = rdx_2

void* rdi_2 = rax_10 + (rcx_5 << 2)

for (int32_t i = *(rax_10 + (rcx_5 << 2)); i != 0xffffffff; i = *rdi_2)
    void* rbx_3 = sx.q(i) * 0x118 + *arg1
    
    if (sub_14094dfb0(rbx_3, arg2) != 0)
        int64_t rbx_4 = sx.q(*rdi_2)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_4 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_1 = rbx_4 * 0x118
            int64_t rcx_8 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + r8_1 + 0x114))
            
            if (rdx_4 != 0)
                r15 = rdx_4
            
            int32_t j = *(r15 + (rcx_8 << 2))
            void* rdx_5 = r15 + (rcx_8 << 2)
            
            for (; j != 0xffffffff; j = *rdx_5)
                if (j == rbx_4.d)
                    *rdx_5 = *(r9_1 + r8_1 + 0x110)
                    break
                
                rdx_5 = r8_1 + 0x110 + sx.q(j) * 0x118
        
        void* rdi_4 = rbx_4 * 0x118 + *arg1
        sub_14094bf00(rdi_4 + 0x18)
        int64_t* rdi_5 = *(rdi_4 + 0x10)
        rbp = 1
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp1_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_2 = *rdi_5
                    (*(r8_2 + 8))(rdi_5, 1, r8_2)
        
        sub_140974f00(arg1, rbx_4.d, 1)
        break
    
    rdi_2 = rbx_3 + 0x110

return zx.q(rbp)
