// 函数: sub_141fd1310
// 地址: 0x141fd1310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a80f40()
int32_t rbp = 0x64
int64_t i_2 = 0x10
int64_t rax_1 = sx.q((data_14399fa54 + 1) u% 3)
int64_t rax_2 = rax_1 << 8
int64_t* rsi_2 = ((rax_1 - 3) << 8) + arg1
int64_t i_1 = 0
int32_t result
int64_t i

do
    int32_t j_5 = rsi_2[1].d
    
    if (j_5 != 0)
        int32_t rax_3 = *(-0x100 - rax_2 + rsi_2 + 8)
        int32_t rdx_2 = rax_3 + j_5
        
        if (rdx_2 s> *(rsi_2 + -0xfc - rax_2 + 8))
            sub_1405a5410(-0x100 - rax_2 + rsi_2, rdx_2)
            rax_3 = *(-0x100 - rax_2 + rsi_2 + 8)
        
        int64_t* rdx_3 = *rsi_2
        int32_t j_4 = j_5
        int64_t* rcx_3 = (sx.q(rax_3) << 4) + *(-0x100 - rax_2 + rsi_2)
        int32_t j
        
        do
            void* rax_4 = *rdx_3
            *rcx_3 = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            rcx_3[1].d = rdx_3[1].d
            int32_t rax_6 = *(rdx_3 + 0xc)
            rdx_3 = &rdx_3[2]
            *(rcx_3 + 0xc) = rax_6
            rcx_3 = &rcx_3[2]
            j = j_4
            j_4 -= 1
        while (j != 1)
        *(-0x100 - rax_2 + rsi_2 + 8) += j_5
    
    result = *(rsi_2 + 0xc)
    int64_t* rbx_1 = *rsi_2
    int32_t j_3 = rsi_2[1].d
    
    if (result s< 0)
        if (j_3 != 0)
            int32_t j_1
            
            do
                sub_1405d1550(rbx_1)
                rbx_1 = &rbx_1[2]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            result = *(rsi_2 + 0xc)
        
        rsi_2[1].d = 0
        
        if (result != 0)
            result = sub_1405a5410(rsi_2, 0)
    else
        if (j_3 != 0)
            int32_t j_2
            
            do
                result = sub_1405d1550(rbx_1)
                rbx_1 = &rbx_1[2]
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        rsi_2[1].d = 0
    
    rsi_2 = &rsi_2[2]
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t* rbx_3 = arg1 - 0x400

do
    int32_t rdi_1 = rbx_3[1].d
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int64_t rsi_4 = sx.q(rdi_2) << 4
        int32_t temp7_1
        
        do
            int64_t* rcx_7 = *rbx_3
            result = data_14399fa54 - *(rcx_7 + rsi_4 + 0xc)
            
            if (result u> 0xa)
                void* rax_8 = *(rcx_7 + rsi_4)
                void* arg_18 = rax_8
                
                if (rax_8 != 0)
                    *(rax_8 + 8) += 1
                
                sub_1405d1550(&arg_18)
                int64_t r14_2 = sx.q(rdi_2) << 4
                sub_1405d1550(*rbx_3 + r14_2)
                int32_t rdx_4 = rbx_3[1].d
                int32_t rcx_13 = rdx_4 - rdi_2 - 1
                
                if (rcx_13 s>= 1)
                    rcx_13 = 1
                
                if (rcx_13 != 0)
                    int64_t rax_9 = *rbx_3
                    memcpy(rax_9 + r14_2, (sx.q(rdx_4 - rcx_13) << 4) + rax_9, rcx_13 << 4)
                    rdx_4 = rbx_3[1].d
                
                rbx_3[1].d = rdx_4 - 1
                result = sub_1405a5010(rbx_3)
                int32_t temp8_1 = rbp
                rbp -= 1
                
                if (temp8_1 == 1)
                    return result
            
            rsi_4 -= 0x10
            temp7_1 = rdi_2
            rdi_2 -= 1
        while (temp7_1 - 1 s>= 0)
    
    if (rbp == 0)
        break
    
    i_1 += 1
    rbx_3 = &rbx_3[2]
while (i_1 s< 0x10)

return result
