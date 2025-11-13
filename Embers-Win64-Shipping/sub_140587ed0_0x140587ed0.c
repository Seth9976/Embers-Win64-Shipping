// 函数: sub_140587ed0
// 地址: 0x140587ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].d == 1)
    return 

int64_t rdi_1 = sx.q(((arg1[1] - *arg1) s>> 3).d)
int64_t rax_4 = 4 * rdi_1

if (mulu.dp.q(4, rdi_1) u>> 0x40 != zx.o(0))
    rax_4 = -1

int32_t* rax_5 = j_sub_140a82f30(rax_4)

if (rdi_1 s> 0)
    int32_t* rcx_1 = rax_5
    int64_t r10_1 = 0
    
    do
        *rcx_1 = 0
        int64_t* rax_6 = *(*arg1 + (r10_1 << 3))
        int64_t* r8_1 = *rax_6
        
        if (((rax_6[1] - r8_1) s>> 3).d s> 0)
            int32_t i = 1
            *rcx_1 = *(*r8_1 + 0x18)
            int64_t* rdx_6 = *(*arg1 + (r10_1 << 3))
            int64_t r8_2 = *rdx_6
            
            if (((rdx_6[1] - r8_2) s>> 3).d s> 1)
                int64_t* r9_1 = 8
                int64_t* rdx_10
                
                do
                    void* rax_12 = *(r9_1 + r8_2)
                    r9_1 = &r9_1[1]
                    i += 1
                    *rcx_1 += *(rax_12 + 0x18)
                    *(*(**(*arg1 + (r10_1 << 3)) + r9_1 - 8) + 0x18) = *rcx_1
                    rdx_10 = *(*arg1 + (r10_1 << 3))
                    r8_2 = *rdx_10
                while (i s< ((rdx_10[1] - r8_2) s>> 3).d)
        
        r10_1 += 1
        rcx_1 = &rcx_1[1]
    while (r10_1 s< rdi_1)

arg1[4].d = 1
j_sub_140a74f90(rax_5)
