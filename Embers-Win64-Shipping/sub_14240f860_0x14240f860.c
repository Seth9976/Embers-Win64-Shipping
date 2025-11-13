// 函数: sub_14240f860
// 地址: 0x14240f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140bded20(arg1, &var_28, arg3)
int16_t* rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t arg_8
sub_140b58260(&arg_8, rdx_1, 1)
int64_t rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rbx = arg_8
void* const rcx_5

if (*(arg1 + 0x68) == *(arg1 + 0x94))
label_14240f930:
    rcx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0x98
    void* rcx_3 = *(r8 + 8)
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_14240f930_1:
        rcx_5 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x60)
        
        while (true)
            int64_t rdx_5 = sx.q(rax_5) * 5
            rcx_5 = r8_1 + (rdx_5 << 3)
            
            if (*(r8_1 + (rdx_5 << 3)) == rbx)
                break
            
            rax_5 = *(rcx_5 + 0x20)
            
            if (rax_5 == 0xffffffff)
                goto label_14240f930_2
        
        if (rax_5 == 0xffffffff)
        label_14240f930_2:
            rcx_5 = nullptr

int64_t* rax_6 = rcx_5 + 8

if (rcx_5 == 0)
    rax_6 = nullptr

int64_t* rax_7

if (rax_6 != 0)
    rax_7 = sub_140ab1d50(rax_6)

if (rax_6 == 0 || rax_7 == 0)
    sub_140bdcef0(arg1, arg2, arg3)
else
    sub_140596d10(arg2, rax_7)

return arg2
