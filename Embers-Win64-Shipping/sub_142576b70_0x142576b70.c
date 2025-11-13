// 函数: sub_142576b70
// 地址: 0x142576b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x60
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[0xe]
        sub_140780b40(rdi_1, &rbx_1[-0xc])
        sub_1417d6d70(&rdi_1[2], &rbx_1[-0xa])
        
        if (&rdi_1[0xc] != rbx_1)
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x6c)
            rdi_1[0xd].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_140638750(&rdi_1[0xc], rsi_1.d, r8)
                memcpy(rdi_1[0xc], r15_1, (rsi_1 << 2).d)
            else
                *(rdi_1 + 0x6c) = 0
        
        rbx_1 = &rbx_1[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
