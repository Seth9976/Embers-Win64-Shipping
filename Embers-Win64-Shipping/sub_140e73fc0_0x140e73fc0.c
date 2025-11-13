// 函数: sub_140e73fc0
// 地址: 0x140e73fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140b67530()
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"simmobile") == 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"faketouches") == 0)
        *(arg1 + 0x320) = rax == 2

int64_t rsi
rsi.b = 0
int32_t rdx = data_1439a0188
int32_t rcx_1 = data_1439a0194 + 1
data_1439a0194 = rcx_1
uint64_t result = zx.q(rdx - 1)
int64_t rbx_1 = sx.q(result.d)

if (result.d s>= 0)
    int64_t rdi_2 = rbx_1 << 4
    int64_t temp0_1
    
    do
        result = data_1439a0180
        
        if (*(rdi_2 + result + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_2 = *(rdi_2 + result)
            
            if (rcx_2 == 0)
                rsi.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, zx.q(rax)).b == 0)
                rsi.b = 1
        
        rdi_2 -= 0x10
        temp0_1 = rbx_1
        rbx_1 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_1439a0194
    rdx = data_1439a0188

data_1439a0194 = rcx_1 - 1

if (rsi.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rbx_2 = 0
    int32_t rsi_1 = rdx
    
    if (rdx s> 0)
        int64_t* rdi_3 = nullptr
        
        do
            int64_t rax_4 = data_1439a0180
            
            if (*(rdi_3 + rax_4 + 8) == 0)
                sub_1405a4880(&data_1439a0180, rbx_2, 1, 1)
            else
                int64_t* rcx_4 = *(rdi_3 + rax_4)
                
                if (rcx_4 == 0)
                    sub_1405a4880(&data_1439a0180, rbx_2, 1, 1)
                else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                    sub_1405a4880(&data_1439a0180, rbx_2, 1, 1)
                else
                    rbx_2 += 1
                    rdi_3 = &rdi_3[2]
            
            rdx = data_1439a0188
        while (rbx_2 s< rdx)
    
    result = zx.q(rdx * 2)
    
    if (result.d s<= 2)
        result = 2
    
    data_1439a0190 = result.d
    
    if (rsi_1 s> result.d && data_1439a018c != rdx)
        sub_1405a5410(&data_1439a0180, rdx)

result.b = 1
return result
