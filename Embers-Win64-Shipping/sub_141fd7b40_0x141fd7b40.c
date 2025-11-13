// 函数: sub_141fd7b40
// 地址: 0x141fd7b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0x64
int32_t* i = 0x100
int64_t i_3 = 0x10
*arg1 = &data_1432927f0
int32_t result

do
    void* rsi_1 = &arg1[3]
    int64_t j_3 = 0x10
    int64_t j
    
    do
        int32_t k_5 = *(i + rsi_1)
        
        if (k_5 != 0)
            int32_t rax_1 = *rsi_1
            int32_t rdx_1 = rax_1 + k_5
            
            if (rdx_1 s> *(rsi_1 + 4))
                sub_1405a5410(rsi_1 - 8, rdx_1)
                rax_1 = *rsi_1
            
            int64_t* rdx_2 = *(i + rsi_1 - 8)
            int32_t k_4 = k_5
            int64_t* rcx_3 = (sx.q(rax_1) << 4) + *(rsi_1 - 8)
            int32_t k
            
            do
                void* rax_2 = *rdx_2
                *rcx_3 = rax_2
                
                if (rax_2 != 0)
                    *(rax_2 + 8) += 1
                
                rcx_3[1].d = rdx_2[1].d
                int32_t rax_4 = *(rdx_2 + 0xc)
                rdx_2 = &rdx_2[2]
                *(rcx_3 + 0xc) = rax_4
                rcx_3 = &rcx_3[2]
                k = k_4
                k_4 -= 1
            while (k != 1)
            *rsi_1 += k_5
        
        result = *(i + rsi_1 + 4)
        int32_t* r14_1 = i + rsi_1
        int64_t* rbx_1 = *(r14_1 - 8)
        int32_t k_3 = *(i + rsi_1)
        
        if (result s< 0)
            if (k_3 != 0)
                int32_t k_1
                
                do
                    sub_14081c9d0(rbx_1)
                    rbx_1 = &rbx_1[2]
                    k_1 = k_3
                    k_3 -= 1
                while (k_1 != 1)
                result = r14_1[1]
            
            *r14_1 = 0
            
            if (result != 0)
                result = sub_1405a5410(&r14_1[-2], 0)
        else
            if (k_3 != 0)
                int32_t k_2
                
                do
                    result = sub_14081c9d0(rbx_1)
                    rbx_1 = &rbx_1[2]
                    k_2 = k_3
                    k_3 -= 1
                while (k_2 != 1)
            
            *r14_1 = 0
        
        rsi_1 += 0x10
        j = j_3
        j_3 -= 1
    while (j != 1)
    i = &i[0x40]
while (i s< 0x400)

int64_t i_4 = 0x10
int32_t r12_1 = 0x64
void* rbx_3 = &arg1[2]
int64_t i_1

do
    int32_t rdi_1 = *(rbx_3 + 8)
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int64_t rsi_3 = sx.q(rdi_2) << 4
        int64_t r14_2 = rsi_3
        int32_t temp7_1
        
        do
            void* rcx_7 = *(rsi_3 + *rbx_3)
            void* arg_18 = rcx_7
            
            if (rcx_7 != 0)
                *(rcx_7 + 8) += 1
            
            sub_14081c9d0(&arg_18)
            sub_14081c9d0(*rbx_3 + r14_2)
            int32_t rdx_3 = *(rbx_3 + 8)
            int32_t rcx_13 = rdx_3 - rdi_2 - 1
            
            if (rcx_13 s>= 1)
                rcx_13 = 1
            
            if (rcx_13 != 0)
                int64_t rax_6 = *rbx_3
                memcpy(r14_2 + rax_6, (sx.q(rdx_3 - rcx_13) << 4) + rax_6, rcx_13 << 4)
                rdx_3 = *(rbx_3 + 8)
            
            *(rbx_3 + 8) = rdx_3 - 1
            result = sub_1405a5010(rbx_3)
            r12_1 -= 1
            r14_2 -= 0x10
            rsi_3 -= 0x10
            temp7_1 = rdi_2
            rdi_2 -= 1
        while (temp7_1 - 1 s>= 0)
    
    rbx_3 += 0x10
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int64_t i_2 = 0x30
void* rsi_4 = &arg1[0x82]

do
    int32_t j_4 = *(rsi_4 - 8)
    rsi_4 -= 0x10
    int64_t* rbx_4 = *rsi_4
    i_2 -= 1
    
    if (j_4 != 0)
        int32_t j_1
        
        do
            result = sub_14081c9d0(rbx_4)
            rbx_4 = &rbx_4[2]
            j_1 = j_4
            j_4 -= 1
        while (j_1 != 1)
        rbx_4 = *rsi_4
    
    if (rbx_4 != 0)
        result = sub_140a74f90(rbx_4)
while (i_2 != 0)

void* rsi_5 = &arg1[0x22]

do
    int32_t j_5 = *(rsi_5 - 8)
    rsi_5 -= 0x10
    int64_t* rbx_5 = *rsi_5
    i_3 -= 1
    
    if (j_5 != 0)
        int32_t j_2
        
        do
            result = sub_14081c9d0(rbx_5)
            rbx_5 = &rbx_5[2]
            j_2 = j_5
            j_5 -= 1
        while (j_2 != 1)
        rbx_5 = *rsi_5
    
    if (rbx_5 != 0)
        result = sub_140a74f90(rbx_5)
while (i_3 != 0)

return result
