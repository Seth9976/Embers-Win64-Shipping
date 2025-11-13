// 函数: sub_14092beb0
// 地址: 0x14092beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg3

if (sub_14092d020(arg1) == 0)
    return sub_140926490(rbp, arg2, 0)

void** const var_58 = &data_142e1f860
int128_t var_50 = zx.o(0)
int16_t* var_40
(*(*arg2 + 0x30))(arg2, &var_40)
void var_30
(*(*arg2 + 0x10))(arg2, &var_30)
int32_t i_3 = 0
var_58 = &data_142e1f860
int64_t rcx_8
int64_t r8

if (*(arg1 + 0x30) == *(arg1 + 0x5c))
label_14092bfcb:
    rcx_8 = 0
else
    int32_t var_38
    int32_t rcx_3
    int16_t* rdx_3
    
    if (var_38 == 0)
        rdx_3 = &data_142d40450
        rcx_3 = 0
    else
        rdx_3 = var_40
        rcx_3 = var_38 - 1
    
    void* rbx_1 = *(arg1 + 0x68)
    void* rdi_1 = arg1 + 0x60
    int32_t rax_6
    rax_6, r8 = sub_1405969c0(rcx_3, rdx_3)
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t rbx_2 = *(rdi_1 + ((sx.q(rax_6) & (sx.q(*(arg1 + 0x70)) - 1)) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_14092bfcb_1:
        rcx_8 = 0
    else
        int64_t rcx_6 = *(arg1 + 0x28)
        int64_t rdi_2
        
        while (true)
            rdi_2 = sx.q(rbx_2) * 9
            char rax_11
            rax_11, r8 = (**(rcx_6 + (rdi_2 << 3)))(rcx_6 + (rdi_2 << 3), &var_58)
            
            if (rax_11 != 0)
                break
            
            rcx_6 = *(arg1 + 0x28)
            rbx_2 = *(rcx_6 + (rdi_2 << 3) + 0x40)
            
            if (rbx_2 == 0xffffffff)
                goto label_14092bfcb_2
        
        if (rbx_2 == 0xffffffff)
        label_14092bfcb_2:
            rcx_8 = 0
        else
            rcx_8 = *(arg1 + 0x28) + (rdi_2 << 3)

int64_t rax_12 = rcx_8 + 0x30

if (rcx_8 == 0)
    rax_12 = 0

if (rax_12 == 0)
    int32_t rcx_9 = 0
    int64_t r15_1 = sx.q(*(arg1 + 0xd0))
    int64_t* var_68 = nullptr
    int32_t i_2 = 0
    int32_t var_5c_1 = 0
    
    if (r15_1 s> 0)
        int64_t rdi_3 = 0
        
        while (true)
            int64_t* rbp_2 = *(arg1 + 0xc8) + rdi_3
            i_2 = i_3 + 1
            
            if (i_3 + 1 s> rcx_9)
                sub_1405a4df0(&var_68)
            
            int64_t* rbx_3 = &var_68[sx.q(i_3) * 3]
            sub_140596d10(rbx_3, rbp_2)
            rdi_3 += 0x70
            rbx_3[2] = rbp_2[2]
            int64_t temp1_1 = r15_1
            r15_1 -= 1
            
            if (temp1_1 == 1)
                break
            
            rcx_9 = var_5c_1
            i_3 = i_2
        
        rbp = arg3
    
    sub_140917ec0(arg1 + 0x28, &var_58)
    int32_t i_1 = i_2
    int64_t* rbx_4 = var_68
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_14 = *rbx_4
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rbx_4 = &rbx_4[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_4 = var_68
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)

r8.b = 1
int64_t result = sub_140926490(rbp, arg2, r8)
int16_t* rcx_17 = var_40

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t* rcx_18 = var_50:8.q

if (rcx_18 != 0)
    int32_t temp0_1 = *(rcx_18 + 0xc)
    *(rcx_18 + 0xc) -= 1
    
    if (temp0_1 == 1)
        return (*(*rcx_18 + 8))(rcx_18, 1)

return result
