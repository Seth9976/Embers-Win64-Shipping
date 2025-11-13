// 函数: sub_142aa90c0
// 地址: 0x142aa90c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = &data_144015f60
int64_t i_1 = 0xa
int64_t i

do
    void* rsi_1 = *r14
    
    if (rsi_1 != 0)
        int64_t j_2 = sx.q(*(rsi_1 + 0xa8))
        void* rbp_1 = *(rsi_1 + 0xa0)
        
        if (j_2 s> 0)
            int64_t* rbx_1 = rbp_1 + 8
            int64_t j
            
            do
                if ((*(rbx_1 + 0xc) & 1) != 0)
                    sub_142a7dcd0(*rbx_1)
                
                rbx_1 = &rbx_1[3]
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        sub_142a7dcd0(rbp_1)
        int64_t j_3 = sx.q(*(rsi_1 + 0xb8))
        void* rbp_2 = *(rsi_1 + 0xb0)
        
        if (j_3 s> 0)
            int64_t* rbx_2 = rbp_2 + 8
            int64_t j_1
            
            do
                if ((*(rbx_2 + 0xc) & 1) != 0)
                    sub_142a7dcd0(*rbx_2)
                
                rbx_2 = &rbx_2[3]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        sub_142a7dcd0(rbp_2)
        sub_142a7dcd0(rsi_1)
        *r14 = 0
    
    r14 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t result
result.b = 1
return result
