// 函数: sub_140ecdf60
// 地址: 0x140ecdf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
(*(*arg1 + 0x260))(arg1, &var_38)
int32_t i_3
int32_t i_2 = i_3
int32_t rbx = 0
int32_t rbp = 0

if (i_2 s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        sub_140f138b0(*(rsi_1 + var_38))
        i_2 = i_3
        rsi_1 = &rsi_1[2]
        rbp += 1
    while (rbp s< i_2)

char i = 1
int32_t rsi_2 = 0
int64_t* r14 = nullptr

do
    if (rsi_2 s>= i_2)
        if (i != 0)
            if (i_2 s> 0)
                int64_t* rdi = nullptr
                
                do
                    sub_140f14cf0(*(rdi + var_38))
                    rbx += 1
                    rdi = &rdi[2]
                while (rbx s< i_3)
            
            int64_t* rcx_5 = data_143e29f28
            int64_t var_28 = *arg2
            void* rax_3 = arg2[1]
            void* var_20_1 = rax_3
            
            if (rax_3 != 0)
                *(rax_3 + 8) += 1
            
            i = (*(*rcx_5 + 0x130))(rcx_5, &var_28)
            i_2 = i_3
        
        break
    
    i = sub_140eec340(*(r14 + var_38), arg3)
    i_2 = i_3
    rsi_2 += 1
    r14 = &r14[2]
while (i != 0)

if (i_2 != 0)
    int64_t* rsi_4 = var_38 + 8
    int32_t i_1
    
    do
        int64_t* rbx_1 = *rsi_4
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                i = (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    i = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_4 = &rsi_4[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void* rcx_8 = var_38

if (rcx_8 == 0)
    return i

return sub_140a74f90(rcx_8)
