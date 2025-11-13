// 函数: sub_140917270
// 地址: 0x140917270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_1407c35c0(arg1, arg3 + arg5, arg4)
uint64_t r12_1 = *arg1

if (i_1 != 0)
    int64_t* r14_1 = arg2 + 8
    void* rsi_1 = r12_1 + 0x3c
    int32_t i
    
    do
        *r12_1 = &data_142e20658
        sub_140596d10(rsi_1 - 0x34, r14_1)
        sub_140596d10(rsi_1 - 0x24, &r14_1[2])
        rax_1 = r14_1[4].d
        *(rsi_1 - 0x14) = rax_1
        *(rsi_1 - 0xc) = 0
        int32_t j_1 = r14_1[6].d
        void* rdi_1 = r14_1[5]
        *(rsi_1 - 4) = j_1
        
        if (j_1 != 0)
            sub_140874c00(rsi_1 - 0xc, j_1, 0)
            void*** rbx_1 = *(rsi_1 - 0xc)
            int64_t* rdi_2 = rdi_1 + 0x18
            int32_t j
            
            do
                *rbx_1 = &data_142e20618
                sub_140596d10(&rbx_1[1], &rdi_2[-2])
                sub_140596d10(&rbx_1[3], rdi_2)
                rax_1 = sub_140596d10(&rbx_1[5], &rdi_2[2])
                rdi_2 = &rdi_2[7]
                rbx_1 = &rbx_1[7]
                j = j_1
                j_1 -= 1
            while (j != 1)
        else
            *rsi_1 = 0
        
        r12_1 += 0x40
        rsi_1 += 0x40
        r14_1 = &r14_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
