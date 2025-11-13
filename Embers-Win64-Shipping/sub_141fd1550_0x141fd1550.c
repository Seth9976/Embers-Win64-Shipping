// 函数: sub_141fd1550
// 地址: 0x141fd1550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1417f5d40(arg1 - 0x10)
int64_t i = -0x100
void* rsi = arg1 - 0x310
int32_t r15 = 0x64
int64_t i_2 = 0x10
int32_t result

do
    int64_t j_1 = 0x10
    int64_t j
    
    do
        int32_t k_5 = *(rsi + 8)
        
        if (k_5 != 0)
            int32_t rax_1 = *(rsi + i + 8)
            int32_t rdx_1 = rax_1 + k_5
            
            if (rdx_1 s> *(rsi + i + 0xc))
                sub_1405a5410(rsi + i, rdx_1)
                rax_1 = *(rsi + i + 8)
            
            int64_t* rdx_2 = *rsi
            int32_t k_4 = k_5
            int64_t* rcx_4 = (sx.q(rax_1) << 4) + *(rsi + i)
            int32_t k
            
            do
                void* rax_2 = *rdx_2
                *rcx_4 = rax_2
                
                if (rax_2 != 0)
                    *(rax_2 + 8) += 1
                
                rcx_4[1].d = rdx_2[1].d
                int32_t rax_4 = *(rdx_2 + 0xc)
                rdx_2 = &rdx_2[2]
                *(rcx_4 + 0xc) = rax_4
                rcx_4 = &rcx_4[2]
                k = k_4
                k_4 -= 1
            while (k != 1)
            *(rsi + i + 8) += k_5
        
        result = *(rsi + 0xc)
        int64_t* rbx_1 = *rsi
        int32_t k_3 = *(rsi + 8)
        
        if (result s< 0)
            if (k_3 != 0)
                int32_t k_1
                
                do
                    sub_1405d1550(rbx_1)
                    rbx_1 = &rbx_1[2]
                    k_1 = k_3
                    k_3 -= 1
                while (k_1 != 1)
                result = *(rsi + 0xc)
            
            *(rsi + 8) = 0
            
            if (result != 0)
                result = sub_1405a5410(rsi, 0)
        else
            if (k_3 != 0)
                int32_t k_2
                
                do
                    result = sub_1405d1550(rbx_1)
                    rbx_1 = &rbx_1[2]
                    k_2 = k_3
                    k_3 -= 1
                while (k_2 != 1)
            
            *(rsi + 8) = 0
        
        rsi += 0x10
        j = j_1
        j_1 -= 1
    while (j != 1)
    i -= 0x100
while (i s> -0x400)

void* rbx_2 = arg1 - 0x410
int64_t i_1

do
    int32_t rdi_1 = *(rbx_2 + 8)
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int64_t rsi_2 = sx.q(rdi_2) << 4
        int64_t r14_1 = rsi_2
        int32_t temp6_1
        
        do
            void* rcx_8 = *(rsi_2 + *rbx_2)
            void* arg_8 = rcx_8
            
            if (rcx_8 != 0)
                *(rcx_8 + 8) += 1
            
            sub_1405d1550(&arg_8)
            sub_1405d1550(*rbx_2 + r14_1)
            int32_t rdx_3 = *(rbx_2 + 8)
            int32_t rcx_14 = rdx_3 - rdi_2 - 1
            
            if (rcx_14 s>= 1)
                rcx_14 = 1
            
            if (rcx_14 != 0)
                int64_t rax_6 = *rbx_2
                memcpy(rax_6 + r14_1, (sx.q(rdx_3 - rcx_14) << 4) + rax_6, rcx_14 << 4)
                rdx_3 = *(rbx_2 + 8)
            
            *(rbx_2 + 8) = rdx_3 - 1
            result = sub_1405a5010(rbx_2)
            r15 -= 1
            r14_1 -= 0x10
            rsi_2 -= 0x10
            temp6_1 = rdi_2
            rdi_2 -= 1
        while (temp6_1 - 1 s>= 0)
    
    rbx_2 += 0x10
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
