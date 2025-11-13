// 函数: sub_140db8860
// 地址: 0x140db8860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x798) == 0)
    return 

void* rax_1 = *(arg1 + 0x790)
void* r8 = arg1 + 0x780
void* rbx_1 = arg1 + 0x750
void* r11_1 = *(rbx_1 + 0x20)

if (rax_1 != 0)
    r8 = rax_1

if (r11_1 != 0)
    rbx_1 = r11_1

if (*(rbx_1 + (sx.q(*(r8 + (sx.q(*(arg1 + 0x798)) << 2) - 4)) << 3)) == 0)
    return 

int64_t* rsi
int64_t* arg_10 = rsi

if (*arg4 != 0)
    int64_t* rbx_2 = arg4[1]
    
    if (rbx_2 != 0)
        int32_t rax_2 = rbx_2[1].d
        
        if (rax_2 s> 0)
            int64_t* rax_4
            
            if (rax_2 == 0)
                rbx_2 = nullptr
                rax_4 = nullptr
            else
                rbx_2[1].d = rax_2 + 1
                rax_4 = rbx_2
            
            if (rax_4 != 0)
                rsi = *arg4
                
                if (rsi != 0)
                    sub_140d9cbf0(rsi)
                    void* const rax_5 = j_sub_140a82f30(0x40)
                    
                    if (rax_5 == 0)
                        rax_5 = nullptr
                    else
                        *(rax_5 + 0x10) = 0
                        *(rax_5 + 0x18) = 0
                        *(rax_5 + 0x1c) = 1
                        __builtin_memset(rax_5 + 0x20, 0, 0x20)
                    
                    rsi[6] = rax_5
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)

char rax_8 = *(arg2 + 0x28)

if (rax_8 s< 0 || (rax_8 & 0x40) != 0)
    rsi.b = 1
else
    rsi.b = 0

void* rbx_3 = arg1 + 0x100
int64_t rbp_1 = sx.q(*(arg1 + 0x748))
int32_t rax_9 = (rbp_1 + 1).d
*(rbx_3 + 0x648) = rax_9

if (rax_9 s> *(rbx_3 + 0x64c))
    sub_140dbcba0(rbx_3, rbp_1.d)

void* rax_10 = *(rbx_3 + 0x640)

if (rax_10 != 0)
    rbx_3 = rax_10

void* rcx_6 = (rbp_1 << 5) + rbx_3
*rcx_6 = *arg4
int64_t rax = arg4[1]
*(rcx_6 + 8) = rax

if (rax != 0)
    *(rax + 0xc) += 1

*(rcx_6 + 0x18) = rsi.b
*(rcx_6 + 0x10) = arg2
