// 函数: sub_142b24190
// 地址: 0x142b24190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rbp_1 = (arg2 u>> 0x10).b
char rdi = arg2.b
uint8_t rsi_1 = (arg2 u>> 8).b
uint64_t rcx

if (rbp_1 == 0)
    rcx = 1
else if (rsi_1 != 0)
    int32_t rcx_1
    rcx_1.b = rdi != 0
    rcx = zx.q(rcx_1 + 3)
else
    rcx = 2

uint32_t r8 = arg1[7].d
int32_t rdx = arg1[1].d
uint64_t result = zx.q(r8 + rcx.d)

if (result.d s<= rdx)
label_142b24224:
    int64_t rax_1 = sx.q(arg1[7].d)
    arg1[7].d = rax_1.d + 1
    result = *arg1
    rax_1[result] = (arg2 u>> 0x18).b
    
    if (rbp_1 != 0)
        int64_t rax_3 = sx.q(arg1[7].d)
        arg1[7].d = rax_3.d + 1
        result = *arg1
        rax_3[result] = rbp_1
        
        if (rsi_1 != 0)
            uint8_t* rax_5 = sx.q(arg1[7].d)
            arg1[7].d = rax_5.d + 1
            result = *arg1
            rax_5[result] = rsi_1
            
            if (rdi != 0)
                int64_t rax_7 = sx.q(arg1[7].d)
                arg1[7].d = rax_7.d + 1
                result = *arg1
                *(rax_7 + result) = rdi
else if (*(arg1 + 0x3c) != 0)
    int32_t rax = rdx * 2
    int32_t rdx_1 = r8 + (rcx << 1).d
    
    if (rax s>= rdx_1)
        rdx_1 = rax
    
    if (rdx_1 s< 0xc8)
        rdx_1 = 0xc8
    
    result = sub_142a46cb0(arg1, rdx_1, r8)
    
    if (result != 0)
        goto label_142b24224
    
    *(arg1 + 0x3c) = result.b

return result
