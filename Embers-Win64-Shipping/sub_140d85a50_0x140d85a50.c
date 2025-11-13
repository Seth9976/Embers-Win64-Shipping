// 函数: sub_140d85a50
// 地址: 0x140d85a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = arg2

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
uint32_t r10_1 = (*arg2 u>> 4).d
int32_t rbp = 0
int32_t r9_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t rcx_2 = neg.d(r9_1 + r10_1) ^ r9_1 u>> 0xd
int32_t r10_4 = (r10_1 - r9_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r10_4 - rcx_2) ^ r10_4 << 0x10
int32_t rcx_5 = (rcx_2 - r9_4 - r10_4) ^ r9_4 u>> 5
int32_t r10_7 = (r10_4 - r9_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r9_7 = (r9_4 - r10_7 - rcx_5) ^ r10_7 << 0xa
void* rax_19 = &arg1[7]
int64_t rdx_2 = (sx.q(rcx_5 - r9_7 - r10_7) ^ zx.q(r9_7) u>> 0xf) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_19 = r8

void* r13 = rax_19 + (rdx_2 << 2)
int32_t i = *(rax_19 + (rdx_2 << 2))

while (i != 0xffffffff)
    int64_t r12_1 = 0
    int64_t rcx_9 = sx.q(i) * 3
    int64_t rax_21 = *arg1
    int64_t* rbx_1 = *(rax_21 + (rcx_9 << 3) + 8)
    int64_t* rsi_1 = rax_21 + (rcx_9 << 3)
    
    if (rbx_1 != 0)
        int32_t rax_22 = rbx_1[1].d
        
        if (rax_22 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_22 + 1
            
            if (rbx_1 != 0)
                r12_1 = *rsi_1
    
    int64_t* rdi_1 = r11[1]
    int64_t r15_1 = 0
    
    if (rdi_1 != 0)
        int32_t rax_24 = rdi_1[1].d
        
        if (rax_24 != 0)
            rdi_1[1].d = rax_24 + 1
            
            if (rdi_1 != 0)
                r15_1 = *r11
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (r12_1 == r15_1)
        int64_t rbx_2 = sx.q(*r13)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_3 = arg1[8]
            void* r10_8 = &arg1[7]
            int64_t r8_1 = *arg1
            void* r9_8 = r8_1 + rbx_2 * 0x18
            int64_t rcx_16 = sx.q(arg1[9].d - 1) & sx.q(*(r9_8 + 0x14))
            
            if (rdx_3 != 0)
                r10_8 = rdx_3
            
            int32_t j = *(r10_8 + (rcx_16 << 2))
            void* rdx_4 = r10_8 + (rcx_16 << 2)
            
            while (j != 0xffffffff)
                if (j == rbx_2.d)
                    *rdx_4 = *(r9_8 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_6 = j_1 + ((j_1 + 1) << 1)
                j = *(r8_1 + (rdx_6 << 3))
                rdx_4 = r8_1 + (rdx_6 << 3)
        
        int64_t* rcx_18 = *(*arg1 + rbx_2 * 0x18 + 8)
        
        if (rcx_18 != 0)
            int32_t temp4_1 = *(rcx_18 + 0xc)
            *(rcx_18 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_18 + 8))(rcx_18, 1)
        
        sub_1405c3640(arg1, rbx_2.d, 1)
        rbp = 1
        break
    
    i = rsi_1[2].d
    r13 = &rsi_1[2]
    r11 = arg2

return zx.q(rbp)
