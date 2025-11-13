// 函数: sub_140af8930
// 地址: 0x140af8930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_14399fe58
int32_t r8_1 = data_14399fe64 + 1
int64_t rsi
rsi.b = 0
data_14399fe64 = r8_1
int64_t rdi = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp0_1
    
    do
        int64_t rax_1 = data_14399fe50
        
        if (*(rbx_2 + rax_1 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx = *(rbx_2 + rax_1)
            
            if (rcx == 0)
                rsi.b = 1
            else if ((*(*rcx + 0x50))(rcx, arg1, arg2) == 0)
                rsi.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    r8_1 = data_14399fe64
    rdx = data_14399fe58

data_14399fe64 = r8_1 - 1

if (rsi.b != 0 && r8_1 - 1 s<= 0)
    int32_t rsi_1 = rdx
    int32_t rbx_3 = 0
    
    if (rdx s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t rax_4 = data_14399fe50
            
            if (*(rdi_1 + rax_4 + 8) == 0)
                sub_1405a4880(&data_14399fe50, rbx_3, 1, 1)
            else
                int64_t* rcx_1 = *(rdi_1 + rax_4)
                
                if (rcx_1 == 0)
                    sub_1405a4880(&data_14399fe50, rbx_3, 1, 1)
                else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                    sub_1405a4880(&data_14399fe50, rbx_3, 1, 1)
                else
                    rbx_3 += 1
                    rdi_1 = &rdi_1[2]
            
            rdx = data_14399fe58
        while (rbx_3 s< rdx)
    
    int32_t rax_7 = rdx * 2
    
    if (rax_7 s<= 2)
        rax_7 = 2
    
    data_14399fe60 = rax_7
    
    if (rsi_1 s> rax_7 && data_14399fe5c != rdx)
        sub_1405a5410(&data_14399fe50, rdx)

int32_t result = arg2[1].d
int32_t rcx_2 = result - 1

if (result == 0)
    rcx_2 = 0

if (rcx_2 == 0)
    return sub_140b1f370(arg2, arg1, 0, 0) __tailcall

result.b = 1
return result
