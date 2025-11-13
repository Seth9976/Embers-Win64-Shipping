// 函数: sub_142464340
// 地址: 0x142464340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_142467e00(arg1, arg3 + arg5, arg4)
int32_t* r15_1 = *arg1

if (i_1 != 0)
    void* rsi_1 = arg2 + 0x50
    void* rdi_1 = &r15_1[7]
    int32_t i
    
    do
        *r15_1 = *(rsi_1 - 0x50)
        *(rdi_1 - 0x18) = *(rsi_1 - 0x4c)
        *(rdi_1 - 0x14) = *(rsi_1 - 0x48)
        *(rdi_1 - 0xc) = 0
        int64_t rbx_1 = sx.q(*(rsi_1 - 0x38))
        int64_t r13_1 = *(rsi_1 - 0x40)
        *(rdi_1 - 4) = rbx_1.d
        
        if (rbx_1.d != 0)
            sub_1405a4b40(rdi_1 - 0xc, rbx_1.d, 0)
            memcpy(*(rdi_1 - 0xc), r13_1, (rbx_1 * 0x30).d)
        else
            *rdi_1 = 0
        
        *(rdi_1 + 4) = *(rsi_1 - 0x30)
        *(rdi_1 + 0x14) = *(rsi_1 - 0x20)
        *(rdi_1 + 0x18) = *(rsi_1 - 0x1c)
        *(rdi_1 + 0x1c) = *(rsi_1 - 0x18)
        *(rdi_1 + 0x20) = *(rsi_1 - 0x14)
        *(rdi_1 + 0x24) = *(rsi_1 - 0x10)
        *(rdi_1 + 0x2c) = 0
        int64_t rbx_2 = sx.q(*rsi_1)
        int64_t r13_2 = *(rsi_1 - 8)
        *(rdi_1 + 0x34) = rbx_2.d
        
        if (rbx_2.d != 0)
            sub_1405c4a00(rdi_1 + 0x2c, rbx_2.d, 0)
            memcpy(*(rdi_1 + 0x2c), r13_2, (rbx_2 << 3).d)
        else
            *(rdi_1 + 0x38) = 0
        
        *(rdi_1 + 0x3c) = 0
        sub_142464560(rdi_1 + 0x3c, *(rsi_1 + 8), *(rsi_1 + 0x10), 0, 0)
        *(rdi_1 + 0x5c) = 0
        int64_t r14_1 = sx.q(*(rsi_1 + 0x30))
        void* r13_3 = *(rsi_1 + 0x28)
        *(rdi_1 + 0x64) = r14_1.d
        
        if (r14_1.d != 0)
            void* rbx_3 = rdi_1 + 0x4c
            sub_141e30770(rbx_3, r14_1.d, 0)
            void* rax_10 = *(rdi_1 + 0x5c)
            void* rdx_7 = rsi_1 + 0x18
            
            if (r13_3 != 0)
                rdx_7 = r13_3
            
            if (rax_10 != 0)
                rbx_3 = rax_10
            
            memcpy(rbx_3, rdx_7, (r14_1 << 2).d)
        else
            *(rdi_1 + 0x68) = 3
        
        r15_1 = &r15_1[0x32]
        *(rdi_1 + 0x6c) = *(rsi_1 + 0x38)
        *(rdi_1 + 0x7c) = *(rsi_1 + 0x48)
        *(rdi_1 + 0x8c) = *(rsi_1 + 0x58)
        *(rdi_1 + 0x9c) = *(rsi_1 + 0x68)
        *(rdi_1 + 0xa4) = *(rsi_1 + 0x70)
        *(rdi_1 + 0xa5) = *(rsi_1 + 0x71)
        rax_1 = *(rsi_1 + 0x72)
        rsi_1 += 0xc8
        *(rdi_1 + 0xa6) = rax_1
        rdi_1 += 0xc8
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
