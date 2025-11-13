// 函数: sub_142861320
// 地址: 0x142861320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t result = sub_142882cb0(arg1)

if (result == 0)
    return result

__builtin_memset(&arg1[0x180], 0, 0x1a)

if (arg1[0xe] == 0)
    void* rax_10 = *(arg1 + 0xa8)
    int32_t* rcx_12
    
    if (*(rax_10 + 0x198) == 0 || *(rax_10 + 0x220) == 0)
        rcx_12 = *(arg1 + 0x738) + 0x68
    else
        rcx_12 = *(arg1 + 0x738) + 0x6c
    
    *rcx_12 += 1
    __builtin_memset(*(arg1 + 0xa8) + 0xb8, 0, 0x20)
    arg1[0x32] = 0
    *(*(arg1 + 0xa8) + 0x248) = 0
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
        arg1[0x1e] = 1
else
    int32_t* rax = sub_14284fa00(arg1)
    int32_t arg_10
    void arg_18
    
    if (sub_14285f240(arg1, &arg_18, &arg_10, nullptr) != 0)
        sub_142856580(arg1, 0x50, 0x1fc, 0x44, "ssl\statem\statem_lib.c", 0x6e)
        return 0
    
    int32_t rdi_1 = 0
    
    if (sub_142898c70(rax) s<= 0)
    label_1428614c6:
        sub_142856580(arg1, 0x28, 0x1fc, 0xb5, "ssl\statem\statem_lib.c", 0x80)
        sub_1428a4880(1)
        return 0
    
    int32_t rsi_1 = arg_10
    
    while (true)
        void* rax_4 = sub_142898ea0(rax, rdi_1)
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            int32_t rcx_6 = *(rax_4 + 0x34)
            int32_t rdx_4 = rsi_1
            
            if (rcx_6 == 0x100)
                rcx_6 = 0xff00
            
            if (rsi_1 == 0x100)
                rdx_4 = 0xff00
            
            if (rdx_4 s> rcx_6)
                goto label_14286148f
            
            int32_t rax_5 = *(rax_4 + 0x38)
            
            if (rax_5 == 0x100)
                rax_5 = 0xff00
            
            if (rdx_4 s< rax_5)
                goto label_14286148f
            
            goto label_142861438
        
        if (rsi_1 s>= *(rax_4 + 0x2c) && rsi_1 s<= *(rax_4 + 0x30))
        label_142861438:
            void* rax_6 = *(arg1 + 0xa8)
            
            if (*(rax_6 + 0x198) == 0 || *(rax_6 + 0x220) == 0)
                void* rcx_10 = *(arg1 + 0x738)
                *(rcx_10 + 0x74)
                *(rcx_10 + 0x74) += 1
            else
                void* rcx_7 = *(arg1 + 0x598)
                *(rcx_7 + 0x78) += 1
                *(*(arg1 + 0xa8) + 0x2a0) = 0
            
            break
        
    label_14286148f:
        rdi_1 += 1
        
        if (rdi_1 s>= sub_142898c70(rax))
            goto label_1428614c6

return 1
