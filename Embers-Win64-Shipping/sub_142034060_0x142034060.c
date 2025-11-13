// 函数: sub_142034060
// 地址: 0x142034060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_14256a090()
void* r8_1 = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t rdx_1 = data_143a2e110
int32_t rcx_1 = data_143a2e11c + 1
int64_t rsi
rsi.b = 0
data_143a2e11c = rcx_1
int64_t rbx_1 = sx.q(rdx_1 - 1)
void* r9_1

if (rdx_1 - 1 s>= 0)
    int64_t rdi_2 = rbx_1 << 4
    int64_t temp0_1
    
    do
        int64_t rax_3 = data_143a2e108
        
        if (*(rdi_2 + rax_3 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_2 = *(rdi_2 + rax_3)
            
            if (rcx_2 == 0)
                rsi.b = 1
            else
                char rax_5
                rax_5, r9_1 = (*(*rcx_2 + 0x50))(rcx_2, arg1, arg2)
                
                if (rax_5 == 0)
                    rsi.b = 1
        
        rdi_2 -= 0x10
        temp0_1 = rbx_1
        rbx_1 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_143a2e11c
    rdx_1 = data_143a2e110

data_143a2e11c = rcx_1 - 1

if (rsi.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rbx_2 = 0
    int32_t rsi_1 = rdx_1
    
    if (rdx_1 s> 0)
        int64_t* rdi_3 = nullptr
        
        do
            int64_t rax_6 = data_143a2e108
            
            if (*(rdi_3 + rax_6 + 8) == 0)
                r9_1.b = 1
                sub_1405a4880(&data_143a2e108, rbx_2, 1, r9_1.b)
            else
                int64_t* rcx_4 = *(rdi_3 + rax_6)
                
                if (rcx_4 == 0)
                    r9_1.b = 1
                    sub_1405a4880(&data_143a2e108, rbx_2, 1, r9_1.b)
                else
                    char rax_8
                    rax_8, r9_1 = (*(*rcx_4 + 0x20))(rcx_4)
                    
                    if (rax_8 != 0)
                        r9_1.b = 1
                        sub_1405a4880(&data_143a2e108, rbx_2, 1, r9_1.b)
                    else
                        rbx_2 += 1
                        rdi_3 = &rdi_3[2]
            
            rdx_1 = data_143a2e110
        while (rbx_2 s< rdx_1)
    
    int32_t rax_9 = rdx_1 * 2
    
    if (rax_9 s<= 2)
        rax_9 = 2
    
    data_143a2e118 = rax_9
    
    if (rsi_1 s> rax_9 && data_143a2e114 != rdx_1)
        sub_1405a5410(&data_143a2e108, rdx_1)

sub_1424b28e0(arg1, arg2)
int64_t* rcx_6 = arg1[0x4f]

if (rcx_6 != 0)
    (*(*rcx_6 + 0x668))(rcx_6, arg2)
