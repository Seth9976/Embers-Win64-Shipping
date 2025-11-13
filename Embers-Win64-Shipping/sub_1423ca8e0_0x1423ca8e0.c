// 函数: sub_1423ca8e0
// 地址: 0x1423ca8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax
rax.b = *data_143f5a5a8 != 0
*(arg1 + 0x9b5) = rax.b
int32_t* rax_1
rax_1.b = *data_143f5a5c0 != 0
*(arg1 + 0x9b6) = rax_1.b
int32_t* rax_2

if (sub_140b011d0().b == 0)
    rax_2.b = 1
else if (sub_140b70ca0().d s< 3)
    rax_2.b = 1
else if (sub_140a54810().b == 0)
    rax_2.b = 1
else
    rax_2.b = 0

if (rax_2.b == 0)
    rax_2.b = *data_143f5a5d8 != 0
else
    rax_2.b = 0

*(arg1 + 0x9b4) = rax_2.b

if (*(arg1 + 0x9a8) s> 0)
    int64_t* rax_3 = sub_140a242a0()
    int64_t r9_1 = *rax_3
    (*(r9_1 + 0x48))(rax_3, arg1 + 0x980, 2, r9_1)
    sub_141983280(arg1 + 0x980, 0)

void* rbp = arg1
void* rbx = arg1 + 0x58c
int64_t i_1 = 8
int32_t result
int64_t i

do
    int32_t rax_6 = *(rbp + 0x2c)
    void* rsi_1 = rbp
    void* rcx_2 = *(rbp + 0x20)
    int32_t j_3 = *(rbp + 0x28)
    
    if (rax_6 s< 0)
        if (rcx_2 != 0)
            rsi_1 = rcx_2
        
        if (j_3 != 0)
            int32_t j
            
            do
                int64_t* rcx_4 = *rsi_1
                
                if (rcx_4 != 0)
                    rcx_4[9].d -= 1
                    
                    if (rcx_4[9].d == 1)
                        sub_140a2f6e0(rcx_4)
                
                rsi_1 += 8
                j = j_3
                j_3 -= 1
            while (j != 1)
            rax_6 = *(rbp + 0x2c)
        
        *(rbp + 0x28) = 0
        
        if (rax_6 != 0)
            sub_14085a940(rbp, 0)
    else
        if (rcx_2 != 0)
            rsi_1 = rcx_2
        
        if (j_3 != 0)
            int32_t j_1
            
            do
                int64_t* rcx_3 = *rsi_1
                
                if (rcx_3 != 0)
                    rcx_3[9].d -= 1
                    
                    if (rcx_3[9].d == 1)
                        sub_140a2f6e0(rcx_3)
                
                rsi_1 += 8
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        *(rbp + 0x28) = 0
    
    int64_t j_4 = 8
    int64_t j_2
    
    do
        int32_t rax_7 = *rbx
        *(rbx - 4) = 0
        
        if (rax_7 s< 0 && rax_7 != 0)
            sub_1405c5570(rbx - 0xc, 0)
        
        result = *(rbx - 0x400)
        *(rbx - 0x404) = 0
        
        if (result s< 0 && result != 0)
            result = sub_1405c5570(rbx - 0x40c, 0)
        
        rbx += 0x10
        j_2 = j_4
        j_4 -= 1
    while (j_2 != 1)
    rbp += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x9b0) = 0
return result
