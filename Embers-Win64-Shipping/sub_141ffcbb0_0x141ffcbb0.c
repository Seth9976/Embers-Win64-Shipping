// 函数: sub_141ffcbb0
// 地址: 0x141ffcbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xd8))
int64_t rbx = 0
int64_t rbp = *(arg1 + 0xd0)
uint64_t var_38 = 0
uint64_t r14 = 0
int32_t var_30 = rdi.d

if (rdi.d != 0)
    sub_1405c4a00(&var_38, rdi.d, 0)
    r14 = var_38
    memcpy(r14, rbp, (rdi << 3).d)
    rdi = zx.q(var_30)

uint64_t i = sx.q(rdi.d)
uint64_t rdi_1 = r14
uint64_t rcx_2 = r14 + (i << 3)
uint64_t rbp_4 = (rcx_2 - r14 + 7) u>> 3

if (r14 u> rcx_2)
    rbp_4 = 0

if (rbp_4 != 0)
    do
        void* rdx_3 = *rdi_1
        void* arg_18 = rdx_3
        
        if (rdx_3 != 0)
            i = *(arg1 + 0xd0)
            
            for (int64_t r8_3 = i + (sx.q(*(arg1 + 0xd8)) << 3); i != r8_3; i += 8)
                if (*i == rdx_3)
                    void* arg_8 = arg1
                    sub_1409d7d20(rdx_3 + 0xd0, &arg_8)
                    i = sub_1409d7d20(arg1 + 0xd0, &arg_18)
                    break
        
        rdi_1 += 8
        rbx += 1
    while (rbx != rbp_4)

if (r14 == 0)
    return i

return sub_140a74f90(r14)
