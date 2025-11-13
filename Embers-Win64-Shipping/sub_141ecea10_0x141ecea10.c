// 函数: sub_141ecea10
// 地址: 0x141ecea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rdx = data_14399fb70
int32_t rcx_1 = data_14399fb7c + 1
data_14399fb7c = rcx_1
uint64_t result = zx.q(rdx - 1)
int64_t rbx = sx.q(result.d)

if (result.d s>= 0)
    int64_t rdi_2 = rbx << 4
    int64_t temp0_1
    
    do
        result = data_14399fb68
        
        if (*(rdi_2 + result + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_2 = *(rdi_2 + result)
            
            if (rcx_2 == 0)
                rsi.b = 1
            else
                result = (*(*rcx_2 + 0x50))(rcx_2)
                
                if (result.b == 0)
                    rsi.b = 1
        
        rdi_2 -= 0x10
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_14399fb7c
    rdx = data_14399fb70

data_14399fb7c = rcx_1 - 1

if (rsi.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rbx_1 = 0
    int32_t rsi_1 = rdx
    
    if (rdx s> 0)
        int64_t* rdi_3 = nullptr
        
        do
            int64_t rax_1 = data_14399fb68
            
            if (*(rdi_3 + rax_1 + 8) == 0)
                sub_1405a4880(&data_14399fb68, rbx_1, 1, 1)
            else
                int64_t* rcx_4 = *(rdi_3 + rax_1)
                
                if (rcx_4 == 0)
                    sub_1405a4880(&data_14399fb68, rbx_1, 1, 1)
                else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                    sub_1405a4880(&data_14399fb68, rbx_1, 1, 1)
                else
                    rbx_1 += 1
                    rdi_3 = &rdi_3[2]
            
            rdx = data_14399fb70
        while (rbx_1 s< rdx)
    
    result = zx.q(rdx * 2)
    
    if (result.d s<= 2)
        result = 2
    
    data_14399fb78 = result.d
    
    if (rsi_1 s> result.d && data_14399fb74 != rdx)
        return sub_1405a5410(&data_14399fb68, rdx)

return result
