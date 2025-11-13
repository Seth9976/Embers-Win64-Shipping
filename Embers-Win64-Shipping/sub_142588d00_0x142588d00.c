// 函数: sub_142588d00
// 地址: 0x142588d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_28 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_8 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rcx_2 = *(arg2 + 0x20)
int32_t rdx_4 = 0
int64_t r8_4 = var_28.q
int64_t rax_3
rax_3.b = rcx_2 != 0
int64_t rax_4 = rax_3 + rcx_2
*(arg2 + 0x20) = rax_4

if (r8_4 != 0)
    int64_t rax_5 = sx.q(*(arg1 + 0x7e8))
    
    if (rax_5.d s> 0)
        void* r10_1 = *(arg1 + 0x7e0)
        int64_t rcx_3 = 0
        int64_t* rax_6 = r10_1 + 8
        
        do
            if (*rax_6 == r8_4)
                int64_t rax_9 = sx.q(rdx_4) * 2
                *(r10_1 + (rax_9 << 3)) = arg_8.d
                return rax_9
            
            rdx_4 += 1
            rcx_3 += 1
            rax_6 = &rax_6[2]
        while (rcx_3 s< rax_5)
    
    int64_t rdi_1 = sx.q(*(arg1 + 0x7e8))
    int32_t var_18_1 = arg_8.d
    int64_t var_10_1 = r8_4
    int32_t rax_7 = (rdi_1 + 1).d
    *(arg1 + 0x7e8) = rax_7
    
    if (rax_7 s> *(arg1 + 0x7ec))
        sub_1405a4f90(arg1 + 0x7e0)
    
    rax_4 = *(arg1 + 0x7e0)
    *(rax_4 + rdi_1 * 0x10) = var_18_1.o

return rax_4
