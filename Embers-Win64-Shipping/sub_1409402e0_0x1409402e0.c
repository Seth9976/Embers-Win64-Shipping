// 函数: sub_1409402e0
// 地址: 0x1409402e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
uint64_t result = zx.q(*arg1 - 6)
int16_t* rbp_1

if ((result.d & 0xfffffffb) == 0)
    rbp_1 = *(arg1 + 8)

if ((result.d & 0xfffffffb) != 0 || rbp_1 == 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) s<= 0xffffffff)
        sub_1405947f0(rdi, 0)
    
    result = *rdi
    
    if (result != 0)
        *result = 0
else if (*arg2 != rbp_1)
    int32_t rsi_1 = 0
    int32_t rbx_2
    
    if (*rbp_1 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rbp_1[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != rbx_2)
        sub_1405947f0(rdi, rbx_2)
        rsi_1 = rdi[1].d
    
    result = zx.q(rsi_1 + rbx_2)
    rdi[1].d = result.d
    
    if (result.d s> *(rdi + 0xc))
        result = sub_140594770(rdi)
    
    if (rbx_2 != 0)
        return memcpy(*rdi, rbp_1, rbx_2 * 2)

return result
