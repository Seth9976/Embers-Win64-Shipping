// 函数: sub_1409283f0
// 地址: 0x1409283f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14092d020(arg1) == 0)
    return 1

void** const var_58 = &data_142e1f860
int128_t var_50 = zx.o(0)
int16_t* var_40
(*(*arg2 + 0x30))(arg2, &var_40)
void var_30
(*(*arg2 + 0x10))(arg2, &var_30)
int32_t rbp = 0
var_58 = &data_142e1f860
void* rcx_7

if (*(arg1 + 0x30) == *(arg1 + 0x5c))
label_1409284f7:
    rcx_7 = nullptr
else
    int32_t var_38
    int32_t rcx_2
    int16_t* rdx_2
    
    if (var_38 == 0)
        rdx_2 = &data_142d40450
        rcx_2 = 0
    else
        rdx_2 = var_40
        rcx_2 = var_38 - 1
    
    void* rbx_1 = *(arg1 + 0x68)
    void* rdi_1 = arg1 + 0x60
    int64_t rcx_3 = sx.q(sub_1405969c0(rcx_2, rdx_2))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t rbx_2 = *(rdi_1 + ((rcx_3 & (sx.q(*(arg1 + 0x70)) - 1)) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_1409284f7_1:
        rcx_7 = nullptr
    else
        int64_t rcx_5 = *(arg1 + 0x28)
        int64_t rdi_2
        
        while (true)
            rdi_2 = sx.q(rbx_2) * 9
            
            if ((**(rcx_5 + (rdi_2 << 3)))(rcx_5 + (rdi_2 << 3), &var_58) != 0)
                break
            
            rcx_5 = *(arg1 + 0x28)
            rbx_2 = *(rcx_5 + (rdi_2 << 3) + 0x40)
            
            if (rbx_2 == 0xffffffff)
                goto label_1409284f7_2
        
        if (rbx_2 == 0xffffffff)
        label_1409284f7_2:
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x28) + (rdi_2 << 3)

int64_t* r14 = rcx_7 + 0x30

if (rcx_7 == 0)
    r14 = nullptr

int32_t rsi_1
int64_t r15_1

if (r14 != 0)
    r15_1 = sx.q(r14[1].d)
    rsi_1 = 0

if (r14 == 0 || r15_1 s<= 0)
label_140928570:
    rbp = 1
else
    int64_t rdi_3 = 0
    int64_t* rbx_3 = nullptr
    
    while (true)
        int64_t rax_12 = *r14
        int16_t* rdx_4
        
        if (arg3[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *arg3
        
        int16_t* const rcx_8
        
        if (*(rbx_3 + rax_12 + 8) == 0)
            rcx_8 = &data_142d40450
        else
            rcx_8 = *(rbx_3 + rax_12)
        
        if (sub_140a54510(rcx_8, rdx_4) == 0)
            int64_t* rbx_4 = *r14 + sx.q(rsi_1) * 0x18
            sub_140597df0(arg4, rbx_4)
            arg4[2] = rbx_4[2]
            break
        
        rsi_1 += 1
        rdi_3 += 1
        rbx_3 = &rbx_3[3]
        
        if (rdi_3 s>= r15_1)
            goto label_140928570

int16_t* rcx_9 = var_40

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rcx_10 = var_50:8.q

if (rcx_10 != 0)
    int32_t temp0_1 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (temp0_1 == 1)
        int64_t r8 = *rcx_10
        (*(r8 + 8))(rcx_10, 1, r8)

return zx.q(rbp)
