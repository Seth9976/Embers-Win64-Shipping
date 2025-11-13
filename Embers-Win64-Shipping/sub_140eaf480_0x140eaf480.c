// 函数: sub_140eaf480
// 地址: 0x140eaf480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x2e8)
void* rbp = *(arg1 + 0x2e0)
int32_t r14 = 0
*arg2 = 0

if (rdi != 0)
    rdi[1].d += 1

float arg_8

if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s> 0)
    int64_t* rsi_1 = nullptr
    int32_t rax_3
    
    do
        int64_t rcx_1 = *(arg1 + 0x2b8)
        
        if (rbp == 0 || rbp != *(rsi_1 + rcx_1))
            sub_140e13cf0(*(rsi_1 + rcx_1), &arg_8)
            float zmm0_1 = arg_8 f+ *arg2
            int32_t temp0_1 = __maxss_xmmss_memss(*(arg2 + 4), arg3)
            *arg2 = zmm0_1
            *(arg2 + 4) = temp0_1
        
        r14 += 1
        rsi_1 = &rsi_1[2]
        rax_3 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (r14 s< rax_3)

if (rbp != 0)
    sub_140e13cf0(rbp, &arg_8)
    float zmm0_2 = arg_8 f+ *arg2
    int32_t temp0_2 = __maxss_xmmss_memss(*(arg2 + 4), arg3)
    *arg2 = zmm0_2
    *(arg2 + 4) = temp0_2

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
