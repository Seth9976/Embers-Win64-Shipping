// 函数: sub_142149bf0
// 地址: 0x142149bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t i = 0

if (*(arg1 + 0x48) s> 0)
    void* r14_1 = nullptr
    
    do
        void* rax_2 = *(arg1 + 0x40)
        
        if ((rax_2.b & 1) != 0)
            rax_2 = (rax_2 s>> 1) + arg1 + 0x40
        
        int64_t* arg_8
        sub_14214a9c0(r14_1 + rax_2, *(r14_1 + rax_2 + 0x20), arg2, &arg_8)
        int64_t* rcx_1 = arg_8
        int64_t rbx_1 = 0
        
        if (rcx_1 != 0 && rcx_1[0xf] != 0 && rcx_1[0x12] != 0
                && ((*(*rcx_1 + 0x308))() & 0x1810) != 0)
            rbx_1 = *(arg_8[0x12] + 0x60)
        
        int32_t rbx_4 = ((rbx_1 u>> 4).d - rdi) ^ rdi u>> 0xd
        int32_t rcx_5 = (0x9e3779b9 - rbx_4 - rdi) ^ rbx_4 << 8
        i += 1
        r14_1 += 0x28
        int32_t rdi_3 = (rdi - rbx_4 - rcx_5) ^ rcx_5 u>> 0xd
        int32_t rbx_7 = (rbx_4 - rcx_5 - rdi_3) ^ rdi_3 u>> 0xc
        int32_t rcx_8 = (rcx_5 - rbx_7 - rdi_3) ^ rbx_7 << 0x10
        int32_t rdi_6 = (rdi_3 - rbx_7 - rcx_8) ^ rcx_8 u>> 5
        int32_t rbx_10 = (rbx_7 - rcx_8 - rdi_6) ^ rdi_6 u>> 3
        int32_t rcx_11 = (rcx_8 - rbx_10 - rdi_6) ^ rbx_10 << 0xa
        rdi = (rdi_6 - rbx_10 - rcx_11) ^ rcx_11 u>> 0xf
    while (i s< *(arg1 + 0x48))

return zx.q(rdi)
