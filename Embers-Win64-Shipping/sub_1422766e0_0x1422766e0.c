// 函数: sub_1422766e0
// 地址: 0x1422766e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(arg1 + 0x4d8)).b

if ((result & 1) == 0)
    int64_t* rax = sub_14256a090()
    void* rax_1 = rax[0x23]
    
    if (rax_1 == 0)
        int64_t rdx_1 = *rax
        (*(rdx_1 + 0x390))(rax, rdx_1)
        rax_1 = rax[0x23]
    
    *(arg1 + 0x295) = *(rax_1 + 0x295)
    result = (*(arg1 + 0x4d8)).b

if ((result & 2) == 0)
    int64_t* rax_3 = sub_14256a090()
    void* rax_4 = rax_3[0x23]
    
    if (rax_4 == 0)
        int64_t rdx_2 = *rax_3
        (*(rdx_2 + 0x390))(rax_3, rdx_2)
        rax_4 = rax_3[0x23]
    
    result = *(rax_4 + 0x296)
    *(arg1 + 0x296) = result

return result
