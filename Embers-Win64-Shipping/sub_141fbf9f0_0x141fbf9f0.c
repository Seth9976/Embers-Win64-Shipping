// 函数: sub_141fbf9f0
// 地址: 0x141fbf9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_143a30438
int32_t rcx_1 = data_143a30444 + 1
int64_t rsi
rsi.b = 0
data_143a30444 = rcx_1
int64_t rdi = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp0_1
    
    do
        int64_t rax_1 = data_143a30430
        
        if (*(rbx_2 + rax_1 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_2 = *(rbx_2 + rax_1)
            
            if (rcx_2 == 0)
                rsi.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, arg2, arg3) == 0)
                rsi.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_143a30444
    rdx = data_143a30438

data_143a30444 = rcx_1 - 1

if (rsi.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rsi_1 = rdx
    int32_t rbx_3 = 0
    
    if (rdx s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t rax_4 = data_143a30430
            
            if (*(rdi_1 + rax_4 + 8) == 0)
                sub_1405a4880(&data_143a30430, rbx_3, 1, 1)
            else
                int64_t* rcx_4 = *(rdi_1 + rax_4)
                
                if (rcx_4 == 0)
                    sub_1405a4880(&data_143a30430, rbx_3, 1, 1)
                else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                    sub_1405a4880(&data_143a30430, rbx_3, 1, 1)
                else
                    rbx_3 += 1
                    rdi_1 = &rdi_1[2]
            
            rdx = data_143a30438
        while (rbx_3 s< rdx)
    
    int32_t rax_7 = rdx * 2
    
    if (rax_7 s<= 2)
        rax_7 = 2
    
    data_143a30440 = rax_7
    
    if (rsi_1 s> rax_7 && data_143a3043c != rdx)
        sub_1405a5410(&data_143a30430, rdx)

int32_t result = *(arg3 + 8)
int32_t rcx_5 = result - 1

if (result == 0)
    rcx_5 = 0

result.b = rcx_5 == 0
return result
