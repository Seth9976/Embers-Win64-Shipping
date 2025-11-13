// 函数: sub_142034e10
// 地址: 0x142034e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_143a2e128
int64_t rbx = arg1[0x58]
int32_t rcx_1 = data_143a2e134 + 1
int64_t rbp
rbp.b = 0
data_143a2e134 = rcx_1
int64_t rdi = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rsi_2 = rdi << 4
    int64_t temp0_1
    
    do
        int64_t rax_1 = data_143a2e120
        
        if (*(rsi_2 + rax_1 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_2 = *(rsi_2 + rax_1)
            
            if (rcx_2 == 0)
                rbp.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, rbx) == 0)
                rbp.b = 1
        
        rsi_2 -= 0x10
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_143a2e134
    rdx = data_143a2e128

data_143a2e134 = rcx_1 - 1

if (rbp.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rbx_1 = 0
    int32_t rsi_3 = rdx
    
    if (rdx s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t rax_4 = data_143a2e120
            
            if (*(rdi_1 + rax_4 + 8) == 0)
                sub_1405a4880(&data_143a2e120, rbx_1, 1, 1)
            else
                int64_t* rcx_4 = *(rdi_1 + rax_4)
                
                if (rcx_4 == 0)
                    sub_1405a4880(&data_143a2e120, rbx_1, 1, 1)
                else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                    sub_1405a4880(&data_143a2e120, rbx_1, 1, 1)
                else
                    rbx_1 += 1
                    rdi_1 = &rdi_1[2]
            
            rdx = data_143a2e128
        while (rbx_1 s< rdx)
    
    int32_t rax_7 = rdx * 2
    
    if (rax_7 s<= 2)
        rax_7 = 2
    
    data_143a2e130 = rax_7
    
    if (rsi_3 s> rax_7 && data_143a2e12c != rdx)
        sub_1405a5410(&data_143a2e120, rdx)

int64_t result = arg1[0x58]

if (result == data_143f405d0)
    jump(*(*arg1 + 0x850))

if (result == data_143f405d8)
    jump(*(*arg1 + 0x858))

if (result == data_143f405e0)
    jump(*(*arg1 + 0x860))

if (result == data_143f405e8)
    jump(*(*arg1 + 0x868))

if (result != data_143f405f0)
    return result

jump(*(*arg1 + 0x870))
