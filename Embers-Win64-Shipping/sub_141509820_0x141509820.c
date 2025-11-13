// 函数: sub_141509820
// 地址: 0x141509820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg3[1].d
int32_t rbx_3 = *(arg1 + 0x90) - *(arg3 + 0x34) - *(arg1 + 0x28) + rdx

if (rbx_3 s> rdx - *(arg3 + 0x34))
    sub_1410339f0(arg3, rbx_3)
    uint64_t rax
    
    if (rbx_3 u< 4)
        rax = 1
    else
        uint32_t rbx_4 = rbx_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_4 + 8)
        int32_t rcx_1
        
        if (rbx_4 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_4 + 7)
        
        if (rcx_3 == 0)
            rax = 1
        else
            rax = zx.q(1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_3))))
    
    int32_t rcx_6 = arg3[9].d
    
    if (rcx_6 == 0 || rcx_6 s< rax.d)
        arg3[9].d = rax.d
        sub_140908c40(arg3)

int32_t i = 0

if (*(arg1 + 0x90) u<= 0)
    return 

do
    if (*(*(arg1 + 0x48) + (zx.q(i.w) << 1)) == 0xffff)
        int64_t rdx_4 = *(arg1 + 0x70)
        int64_t rcx_9 = sx.q(i) << 3
        int32_t rax_4 = *(rcx_9 + rdx_4)
        int32_t arg_1c = *(rcx_9 + rdx_4 + 4) & 0xfffffff
        int32_t var_28
        sub_140b9b5d0(arg3, &var_28)
        int64_t* var_20
        *var_20 = rax_4.q
        var_20[1].d = 0xffffffff
        void arg_8
        sub_141505840(arg3, &arg_8, *var_20, var_20, var_28, nullptr)
    
    i += 1
while (i u< *(arg1 + 0x90))
