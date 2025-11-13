// 函数: sub_1424404b0
// 地址: 0x1424404b0
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

void* rbx_2 = rax_10 + (rcx_5 << 2)
int32_t i = *(rax_10 + (rcx_5 << 2))

while (i != 0xffffffff)
    void* rdi_2 = *arg1 + sx.q(i) * 0x28
    
    if (sub_14094dfb0(rdi_2, arg2) != 0)
        int64_t rbx_3 = sx.q(*rbx_2)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_4 = *(r15 + 8)
            int64_t r8_1 = *arg1
            void* r9_1 = r8_1 + rbx_3 * 0x28
            int64_t rcx_10 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + 0x24))
            
            if (rdx_4 != 0)
                r15 = rdx_4
            
            int32_t j = *(r15 + (rcx_10 << 2))
            void* rdx_5 = r15 + (rcx_10 << 2)
            
            while (j != 0xffffffff)
                if (j == rbx_3.d)
                    *rdx_5 = *(r9_1 + 0x20)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_7 = j_1 + ((j_1 + 1) << 2)
                j = *(r8_1 + (rdx_7 << 3))
                rdx_5 = r8_1 + (rdx_7 << 3)
        
        rbp = 1
        int64_t* rdi_3 = *(*arg1 + rbx_3 * 0x28 + 0x10)
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp1_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_2 = *rdi_3
                    (*(r8_2 + 8))(rdi_3, 1, r8_2)
        
        sub_1405c3590(arg1, rbx_3.d, 1)
        break
    
    i = *(rdi_2 + 0x20)
    rbx_2 = rdi_2 + 0x20

return zx.q(rbp)
