// 函数: sub_141c27200
// 地址: 0x141c27200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141c27b40()
int64_t* result_1 = result
void* rbp = result[0x23]

if (rbp == 0)
    int64_t r8_1 = *result
    result = (*(r8_1 + 0x390))(result, arg3, r8_1)
    rbp = result_1[0x23]

int64_t r15 = sx.q(*(rbp + 0x868))

if (r15 s> 0)
    int64_t rbx = 0
    int64_t rsi_1 = 0
    
    do
        int64_t* rdi_2 = *(rbp + 0x860) + rsi_1
        int16_t* rdx
        
        if (arg2[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        int16_t* const rcx_1
        
        if (rdi_2[1].d == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *rdi_2
        
        result = sub_140a54510(rcx_1, rdx)
        
        if (result.d == 0)
            *(arg1 + 0x7c8) = *(rdi_2 + 0x10)
            *(arg1 + 0x7d8) = rdi_2[4]
            break
        
        rbx += 1
        rsi_1 += 0x28
    while (rbx s< r15)

return result
