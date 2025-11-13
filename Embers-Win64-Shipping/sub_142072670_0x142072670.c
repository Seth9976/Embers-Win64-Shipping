// 函数: sub_142072670
// 地址: 0x142072670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = *(arg1 + 0xf0)
void* result = arg1 + 0xd0
int32_t r12 = 0
int32_t i_2
i_2.b = *(arg1 + 0xf8) != 0
int32_t i = 0
int64_t r10 = 0

if (result_1 != 0)
    result = result_1

int64_t r11 = sx.q(*(arg1 + 0xf8)) << 3
uint64_t r11_1 = r11 u>> 3

if (result u> r11 + result)
    r11_1 = 0

if (r11_1 != 0)
    do
        void* r8_1 = *result
        int64_t r9_1 = sx.q(*(r8_1 + 0x28))
        int32_t rcx_3
        
        if (r9_1.d == 0)
            rcx_3 = 0
        else
            void* rcx_2 = *(r8_1 + 0x20)
            void* rdx = r8_1
            
            if (rcx_2 != 0)
                rdx = rcx_2
            
            rcx_3 = *(*(rdx + (r9_1 << 3) - 8) + 0x48)
        
        int32_t i_1 = i + 1
        
        if (r12 s>= rcx_3)
            rcx_3 = r12
        
        r12 = rcx_3
        
        if (((*(r8_1 + 0x34)).b & 0x24) != 0x24)
            i_1 = i
        
        result += 8
        r10 += 1
        i = i_1
    while (r10 != r11_1)

int32_t r15 = 0

if (i_2 s>= i)
    i = i_2

if (i s> 0)
    int64_t rdi_1 = 0
    
    do
        if (rdi_1 s< 0 || r15 s>= *(arg1 + 0x118))
            void*** rax_3 = j_sub_140a82f30(0x78)
            void*** rbx_1 = rax_3
            
            if (rax_3 == 0)
                rbx_1 = nullptr
            else
                rax_3[1].d = 0xffffffff
                *(rax_3 + 0xc) = 4
                *rbx_1 = &data_1432aade8
                __builtin_memset(&rbx_1[2], 0, 0x60)
            
            rbx_1[0xe].d = r12
            (*rbx_1)[3](rbx_1)
            int64_t rbp_1 = sx.q(*(arg1 + 0x118))
            int32_t rax_5 = (rbp_1 + 1).d
            *(arg1 + 0x118) = rax_5
            
            if (rax_5 s> *(arg1 + 0x11c))
                sub_1408092e0(arg1 + 0x100, rbp_1.d)
            
            void* rax_6 = *(arg1 + 0x110)
            void* rcx_11 = arg1 + 0x100
            
            if (rax_6 != 0)
                rcx_11 = rax_6
            
            *(rcx_11 + (rbp_1 << 3)) = rbx_1
        else
            void* rax = *(arg1 + 0x110)
            void* rcx_6 = arg1 + 0x100
            
            if (rax != 0)
                rcx_6 = rax
            
            int64_t* rbx = *(rcx_6 + (rdi_1 << 3))
            
            if (rbx[0xe].d != r12)
                (*(*rbx + 0x20))(rbx)
                rbx[0xe].d = r12
                (*(*rbx + 0x18))(rbx)
        
        r15 += 1
        result = sx.q(i)
        rdi_1 += 1
    while (rdi_1 s< result)

while (*(arg1 + 0x118) s> i)
    void* rax_7 = *(arg1 + 0x110)
    void* rcx_12 = arg1 + 0x100
    int64_t rdx_3 = sx.q(*(arg1 + 0x118))
    
    if (rax_7 != 0)
        rcx_12 = rax_7
    
    int64_t* rbx_2 = *(rcx_12 + (rdx_3 << 3) - 8)
    *(arg1 + 0x118) = (rdx_3 - 1).d
    sub_1420666d0(arg1 + 0x100)
    (*(*rbx_2 + 0x20))(rbx_2)
    rbx_2[0xe].d = 0
    result = (**rbx_2)(rbx_2, 1)

return result
