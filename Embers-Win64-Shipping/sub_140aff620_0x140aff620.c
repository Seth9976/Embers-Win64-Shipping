// 函数: sub_140aff620
// 地址: 0x140aff620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = data_14399fe7c + 1
int32_t rdx = data_14399fe70
int64_t rsi
rsi.b = 0
int32_t arg_18 = 0
data_14399fe7c = r8_1
int64_t rdi = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp0_1
    
    do
        int64_t rax_1 = data_14399fe68
        
        if (*(rbx_2 + rax_1 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx = *(rbx_2 + rax_1)
            
            if (rcx == 0)
                rsi.b = 1
            else if ((*(*rcx + 0x50))(rcx, arg1, arg2, &arg_18) == 0)
                rsi.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    r8_1 = data_14399fe7c
    rdx = data_14399fe70

data_14399fe7c = r8_1 - 1

if (rsi.b != 0 && r8_1 - 1 s<= 0)
    int32_t rbx_3 = 0
    int32_t rsi_1 = rdx
    
    if (rdx s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t rax_4 = data_14399fe68
            
            if (*(rdi_1 + rax_4 + 8) == 0)
                sub_1405a4880(&data_14399fe68, rbx_3, 1, 1)
            else
                int64_t* rcx_1 = *(rdi_1 + rax_4)
                
                if (rcx_1 == 0)
                    sub_1405a4880(&data_14399fe68, rbx_3, 1, 1)
                else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                    sub_1405a4880(&data_14399fe68, rbx_3, 1, 1)
                else
                    rbx_3 += 1
                    rdi_1 = &rdi_1[2]
            
            rdx = data_14399fe70
        while (rbx_3 s< rdx)
    
    int32_t rax_7 = rdx * 2
    
    if (rax_7 s<= 2)
        rax_7 = 2
    
    data_14399fe78 = rax_7
    
    if (rsi_1 s> rax_7 && data_14399fe74 != rdx)
        sub_1405a5410(&data_14399fe68, rdx)

sub_140a464c0()
char result = sub_140b27210(arg2, arg1, 0, &data_14399ea08, 0)

if (arg_18 s<= 0 && result == 0)
    return result

return 1
