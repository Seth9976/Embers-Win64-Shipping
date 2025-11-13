// 函数: sub_1409286c0
// 地址: 0x1409286c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14092d020(arg1) == 0)
    return 1

void** const var_48 = &data_142e1f860
int128_t var_40 = zx.o(0)
int16_t* var_30
(*(*arg2 + 0x30))(arg2, &var_30)
void var_20
(*(*arg2 + 0x10))(arg2, &var_20)
int32_t rbp = 0
var_48 = &data_142e1f860
void* rcx_7

if (*(arg1 + 0x30) == *(arg1 + 0x5c))
label_1409287b7:
    rcx_7 = nullptr
else
    int32_t var_28
    int32_t rcx_2
    int16_t* rdx_2
    
    if (var_28 == 0)
        rdx_2 = &data_142d40450
        rcx_2 = 0
    else
        rdx_2 = var_30
        rcx_2 = var_28 - 1
    
    void* rbx_1 = *(arg1 + 0x68)
    void* rdi_1 = arg1 + 0x60
    int64_t rcx_3 = sx.q(sub_1405969c0(rcx_2, rdx_2))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t rbx_2 = *(rdi_1 + ((rcx_3 & (sx.q(*(arg1 + 0x70)) - 1)) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_1409287b7_1:
        rcx_7 = nullptr
    else
        int64_t rcx_5 = *(arg1 + 0x28)
        int64_t rdi_2
        
        while (true)
            rdi_2 = sx.q(rbx_2) * 9
            
            if ((**(rcx_5 + (rdi_2 << 3)))(rcx_5 + (rdi_2 << 3), &var_48) != 0)
                break
            
            rcx_5 = *(arg1 + 0x28)
            rbx_2 = *(rcx_5 + (rdi_2 << 3) + 0x40)
            
            if (rbx_2 == 0xffffffff)
                goto label_1409287b7_2
        
        if (rbx_2 == 0xffffffff)
        label_1409287b7_2:
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x28) + (rdi_2 << 3)

int64_t* r15 = rcx_7 + 0x30

if (rcx_7 == 0)
    r15 = nullptr

if (r15 == 0)
    rbp = (r15 + 1).d
else if (arg3 != r15)
    int32_t i_3 = arg3[1].d
    int64_t* rbx_3 = *arg3
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_8 = *rbx_3
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rbx_3 = &rbx_3[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = r15[1].d
    void* rbx_4 = *r15
    int32_t r8 = *(arg3 + 0xc)
    arg3[1].d = i_2
    
    if (i_2 != 0 || r8 != 0)
        sub_140808f70(arg3, i_2, r8)
        void* rdi_3 = *arg3
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                sub_140596d10(rdi_3, rbx_4)
                int64_t rax_13 = *(rbx_4 + 0x10)
                rbx_4 += 0x18
                *(rdi_3 + 0x10) = rax_13
                rdi_3 += 0x18
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg3 + 0xc) = 0

int16_t* rcx_11 = var_30

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rcx_12 = var_40:8.q

if (rcx_12 != 0)
    int32_t temp0_1 = *(rcx_12 + 0xc)
    *(rcx_12 + 0xc) -= 1
    
    if (temp0_1 == 1)
        int64_t r8_1 = *rcx_12
        (*(r8_1 + 8))(rcx_12, 1, r8_1)

return zx.q(rbp)
