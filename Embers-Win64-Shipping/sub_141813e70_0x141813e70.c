// 函数: sub_141813e70
// 地址: 0x141813e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d
int32_t rbx_2 = arg2[1].d - *(arg1 + 0x34) + r8

if (rbx_2 s> r8 - *(arg1 + 0x34))
    sub_140976540(arg1, rbx_2)
    int32_t rax
    
    if (rbx_2 u< 4)
        rax = 1
    else
        uint32_t rbx_3 = rbx_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_3 + 8)
        int32_t rcx
        
        if (rbx_3 == 0xfffffff8)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        int32_t rcx_2 = rcx << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_3 + 7)
        
        if (rcx_2 == 0)
            rax = 1
        else
            rax = 1 << ((not.d(rcx_2)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_5 = arg1[9].d
    
    if (rcx_5 == 0 || rcx_5 s< rax)
        arg1[9].d = rax
        sub_1405a4480(arg1)

int64_t* i = *arg2

for (void* rbp_2 = &i[sx.q(arg2[1].d) * 2]; i != rbp_2; i = &i[2])
    int32_t var_28
    sub_140598750(arg1, &var_28)
    int64_t* var_20
    sub_140596d10(var_20, i)
    var_20[2].d = 0xffffffff
    int32_t rax_3 = var_20[1].d
    int16_t* rdx_4
    
    if (rax_3 == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *var_20
    
    int32_t rcx_9 = rax_3 - 1
    
    if (rax_3 == 0)
        rcx_9 = 0
    
    void arg_8
    sub_14059a6d0(arg1, &arg_8, sub_1405969c0(rcx_9, rdx_4), var_20, var_28, nullptr)
