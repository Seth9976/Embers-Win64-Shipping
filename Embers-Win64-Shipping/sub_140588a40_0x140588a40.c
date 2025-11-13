// 函数: sub_140588a40
// 地址: 0x140588a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg2)
int32_t rdi_2 = ((arg1[1] - *arg1) s>> 3).d
int32_t r14 = rdi_2 + i_2.d
sub_14058a280(arg1, sx.q(r14))
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t rdi_3 = sx.q(rdi_2) << 3
    int64_t i
    
    do
        int64_t* rax_2 = j_sub_140a82f30(0x18)
        int64_t* rbx = rax_2
        int64_t* arg_8 = rax_2
        
        if (rax_2 == 0)
            rbx = nullptr
        else
            __builtin_memset(rax_2, 0, 0x18)
            sub_14058d720(rax_2, 0x3e8)
        
        *(rdi_3 + *arg1) = rbx
        int64_t rcx_1 = *arg1
        int64_t* r8_1 = *(rdi_3 + rcx_1)
        int64_t rdx_1 = *r8_1
        
        if (((r8_1[1] - rdx_1) s>> 3).d s< 0x2710 && (r8_1[2] - rdx_1) s>> 3 u< 0x2710)
            sub_14058d720(r8_1, 0x2710)
            rcx_1 = *arg1
        
        sub_14058caa0(*(rdi_3 + rcx_1))
        rdi_3 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r14 - 1)
