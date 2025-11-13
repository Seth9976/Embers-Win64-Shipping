// 函数: sub_140fff520
// 地址: 0x140fff520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_14083a0c0(arg1, arg3 + arg5, arg4)
int64_t* r14_1 = *arg1

if (i_1 != 0)
    void* rsi_1 = arg2 + 0x50
    int64_t* rbx_1 = &r14_1[0xa]
    int32_t i
    
    do
        *r14_1 = *(rsi_1 - 0x50)
        *rbx_1 = 0
        int64_t rbp_1 = sx.q(*(rsi_1 + 0x10))
        void* r13_1 = *rsi_1
        rbx_1[2].d = rbp_1.d
        
        if (rbp_1.d != 0)
            void* rdi_1 = &rbx_1[-8]
            sub_141034410(rdi_1, rbp_1.d, 0)
            void* rax_3 = *rbx_1
            void* rdx_2 = rsi_1 - 0x40
            
            if (r13_1 != 0)
                rdx_2 = r13_1
            
            if (rax_3 != 0)
                rdi_1 = rax_3
            
            memcpy(rdi_1, rdx_2, (rbp_1 << 6).d)
        else
            *(rbx_1 + 0x14) = 1
        
        rbx_1[4].d = *(rsi_1 + 0x20)
        void* rax_5 = *(rsi_1 + 0x28)
        rbx_1[5] = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rbx_1[7] = 0
        int64_t rbp_2 = sx.q(*(rsi_1 + 0x40))
        void* r13_2 = *(rsi_1 + 0x38)
        rbx_1[8].d = rbp_2.d
        
        if (rbp_2.d != 0)
            void* rdi_2 = &rbx_1[6]
            sub_141034350(rdi_2, rbp_2.d, 0)
            void* rax_6 = rbx_1[7]
            void* rdx_4 = rsi_1 + 0x30
            
            if (r13_2 != 0)
                rdx_4 = r13_2
            
            if (rax_6 != 0)
                rdi_2 = rax_6
            
            memcpy(rdi_2, rdx_4, (rbp_2 << 2).d)
        else
            *(rbx_1 + 0x44) = 1
        
        r14_1 = &r14_1[0x14]
        rbx_1[9].b = *(rsi_1 + 0x48)
        *(rbx_1 + 0x49) = *(rsi_1 + 0x49)
        rax_1 = *(rsi_1 + 0x4a)
        rsi_1 += 0xa0
        *(rbx_1 + 0x4a) = rax_1
        rbx_1 = &rbx_1[0x14]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
