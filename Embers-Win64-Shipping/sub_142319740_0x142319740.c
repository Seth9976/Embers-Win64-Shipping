// 函数: sub_142319740
// 地址: 0x142319740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x71c) & 2) != 0)
    sub_14230c500(arg1)
    int64_t* rcx_2 = arg1[0xec]
    (*(*rcx_2 + 0x260))(rcx_2)
    sub_141f20210(arg1)
else
    void* rax = arg1[0x15]
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    sub_142317820(arg1, *(rax + 0x1f8))
    sub_141ee9830(arg1)

int64_t rbp
rbp.b = 0
*(arg1 + 0xaac) += 1
int32_t rax_2 = arg1[0x154].d
int32_t rcx_4 = *(arg1 + 0xaac)
int64_t rsi = sx.q(rax_2 - 1)

if (rax_2 - 1 s>= 0)
    int64_t rdi_2 = rsi << 4
    int64_t temp1_1
    
    do
        int64_t rax_4 = arg1[0x153]
        
        if (*(rdi_2 + rax_4 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_5 = *(rdi_2 + rax_4)
            
            if (rcx_5 == 0)
                rbp.b = 1
            else if ((*(*rcx_5 + 0x50))(rcx_5) == 0)
                rbp.b = 1
        
        rdi_2 -= 0x10
        temp1_1 = rsi
        rsi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_4 = *(arg1 + 0xaac)

int32_t result = rcx_4 - 1
*(arg1 + 0xaac) = result

if (rbp.b != 0 && result s<= 0)
    int32_t rbp_1 = arg1[0x154].d
    int32_t rdi_3 = 0
    int32_t rdx_2 = rbp_1
    
    if (rbp_1 s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t rax_7 = arg1[0x153]
            
            if (*(rsi_1 + rax_7 + 8) == 0)
                sub_1405a4880(&arg1[0x153], rdi_3, 1, 1)
            else
                int64_t* rcx_6 = *(rsi_1 + rax_7)
                
                if (rcx_6 == 0)
                    sub_1405a4880(&arg1[0x153], rdi_3, 1, 1)
                else if ((*(*rcx_6 + 0x20))(rcx_6) != 0)
                    sub_1405a4880(&arg1[0x153], rdi_3, 1, 1)
                else
                    rdi_3 += 1
                    rsi_1 = &rsi_1[2]
            
            rdx_2 = arg1[0x154].d
        while (rdi_3 s< rdx_2)
    
    result = rdx_2 * 2
    
    if (result s<= 2)
        result = 2
    
    arg1[0x155].d = result
    
    if (rbp_1 s> result && *(arg1 + 0xaa4) != rdx_2)
        return sub_1405a5410(&arg1[0x153], rdx_2)

return result
