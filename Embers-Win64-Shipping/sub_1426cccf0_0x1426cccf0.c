// 函数: sub_1426cccf0
// 地址: 0x1426cccf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx_1

if (*(arg1 + 0x40) == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg1 + 0x40)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

void* rax_4 = sub_14273b0e0()

if (rax_4 != 0)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s<= *(rbx_1 + 0x38))
        int64_t result = *(rbx_1 + 0x30)
        
        if (*(result + (rax_5 << 3)) == rax_4 + 0x30)
            return result

int32_t rax_6 = arg2[1].d
int64_t* rcx_2 = *(arg1 + 0x78)
int64_t var_18 = *arg2
int32_t var_10_1 = rax_6
return sub_1426f0420(rcx_2, &var_18)
