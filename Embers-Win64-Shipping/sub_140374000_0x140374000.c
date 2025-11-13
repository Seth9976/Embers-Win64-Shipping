// 函数: sub_140374000
// 地址: 0x140374000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x28)
int64_t rax = *(rsi + 0x38)
int32_t rbp_1

if (rax != 0)
label_140374045:
    int32_t rbx_2 = *(rsi + 0x2c)
    
    if (rbx_2 != 0)
        if (rbx_2 u<= arg3)
            goto label_1403740a4
        
        goto label_140374050
    
    arg1.b = *(rsi + 0x28)
    rbx_2 = 1 << arg1.b
    *(rsi + 0x2c) = rbx_2
    *(rsi + 0x30) = 0
    
    if (rbx_2 u> arg3)
    label_140374050:
        uint64_t rcx_1 = zx.q(*(rsi + 0x34))
        uint32_t count = rbx_2 - rcx_1.d
        
        if (count u> arg3)
            count = arg3
        
        memcpy(rax + rcx_1, arg2 - zx.q(arg3), count)
        uint32_t rdi_1 = arg3 - count
        
        if (arg3 == count)
            int32_t rcx_7 = *(rsi + 0x34) + count
            int32_t rdx_5 = *(rsi + 0x2c)
            int32_t rax_4 = *(rsi + 0x30)
            rbp_1 = 0
            
            if (rcx_7 == rdx_5)
                rcx_7 = 0
            
            *(rsi + 0x34) = rcx_7
            
            if (rax_4 u< rdx_5)
                *(rsi + 0x30) = rax_4 + count
        else
            uint64_t r8_1 = zx.q(rdi_1)
            memcpy(*(rsi + 0x38), arg2 - r8_1, r8_1.d)
            *(rsi + 0x34) = rdi_1
            *(rsi + 0x30) = *(rsi + 0x2c)
            rbp_1 = 0
    else
    label_1403740a4:
        uint64_t r8_2 = zx.q(rbx_2)
        memcpy(rax, arg2 - r8_2, r8_2.d)
        *(rsi + 0x34) = 0
        *(rsi + 0x30) = *(rsi + 0x2c)
        rbp_1 = 0
else
    void* rbx_1 = arg1
    arg1.b = *(rsi + 0x28)
    rbp_1 = 1
    rax, arg1 = (*(rbx_1 + 0x30))(*(rbx_1 + 0x40), zx.q(1 << arg1.b), 1)
    *(rsi + 0x38) = rax
    
    if (rax != 0)
        goto label_140374045

return zx.q(rbp_1)
