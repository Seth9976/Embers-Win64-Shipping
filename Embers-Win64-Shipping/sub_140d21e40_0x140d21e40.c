// 函数: sub_140d21e40
// 地址: 0x140d21e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2 || arg1 == 0)
    return sub_140a20ba0(arg3, u"None", 4) __tailcall

void* rsi = *(arg1 + 0x20)

if (rsi != 0 && rsi != arg2)
    sub_140d21e40(rsi)
    int64_t rbx_1 = *(rsi + 0x10)
    int64_t rax_1 = sub_140cddea0()
    int64_t rax_3
    int64_t rbx_2
    
    if (rbx_1 != rax_1)
        rbx_2 = *(*(rsi + 0x20) + 0x10)
        rax_3 = sub_140cddea0()
    
    int16_t rdx_2
    int32_t rsi_1
    
    if (rbx_1 == rax_1 || rbx_2 != rax_3)
        int32_t rdx_1 = arg3[1].d
        int32_t rax_7
        rax_7.b = rdx_1 s<= 0
        rsi_1 = rdx_1 - 1
        
        if (rdx_1 s<= 0)
            rsi_1 = 0
        
        int32_t rax_9 = rax_7 + 1 + rdx_1
        arg3[1].d = rax_9
        
        if (rax_9 s> *(arg3 + 0xc))
            sub_140594770(arg3)
        
        rdx_2 = 0x2e
    else
        int32_t rdx = arg3[1].d
        int32_t rax_4
        rax_4.b = rdx s<= 0
        rsi_1 = rdx - 1
        
        if (rdx s<= 0)
            rsi_1 = 0
        
        int32_t rax_6 = rax_4 + 1 + rdx
        arg3[1].d = rax_6
        
        if (rax_6 s> *(arg3 + 0xc))
            sub_140594770(arg3)
        
        rdx_2 = 0x3a
    
    int64_t rcx_3 = sx.q(rsi_1)
    *(*arg3 + (rcx_3 << 1)) = rdx_2
    *(*arg3 + (rcx_3 << 1) + 2) = 0

int64_t arg_8 = *(arg1 + 0x18)
return sub_140b5c770(&arg_8, arg3)
