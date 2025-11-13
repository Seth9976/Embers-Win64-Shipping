// 函数: sub_1405b6ea0
// 地址: 0x1405b6ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg3
void*** rax = j_sub_140a82f30(0x28)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142d4c298
    *(rbx + 0xc) = 0
    rbx[3] = 0
    rbx[4] = 0

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*arg1 = rbx
arg1[1] = rax_1
(*arg1)[1].d = 0
void* r15_1 = &(*arg1)[3]

if (r15_1 != arg4)
    int32_t i_2 = *(r15_1 + 8)
    int64_t* rbx_1 = *r15_1
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg4[1].d
    void* rsi_1 = *arg4
    int32_t r8_1 = *(r15_1 + 0xc)
    *(r15_1 + 8) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_1405a4be0(r15_1, i_3, r8_1)
        int64_t* rbx_2 = *r15_1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rbx_2 = 0
                int32_t rbp_1 = *(rsi_1 + 8)
                int64_t r15_2 = *rsi_1
                rbx_2[1].d = rbp_1
                
                if (rbp_1 != 0)
                    sub_1405a4c70(rbx_2, rbp_1, 0)
                    memcpy(*rbx_2, r15_2, rbp_1 * 2)
                else
                    *(rbx_2 + 0xc) = 0
                
                rbx_2 = &rbx_2[2]
                rsi_1 += 0x10
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(r15_1 + 0xc) = 0
    
    rsi = arg3

*(*arg1 + 0xc) = *(arg2 + 0x18)
void* rdi = arg1[1]
void*** rbp_2 = *arg1

if (rdi != 0)
    *(rdi + 0xc) += 1

int64_t rsi_2 = sx.q(*(rsi + 0x870))
int32_t rax_4 = (rsi_2 + 1).d
*(rsi + 0x870) = rax_4

if (rax_4 s> *(rsi + 0x874))
    sub_1405a4f90(rsi + 0x868)

void**** rax_7 = (rsi_2 << 4) + *(rsi + 0x868)
*rax_7 = rbp_2
rax_7[1] = rdi
return arg1
