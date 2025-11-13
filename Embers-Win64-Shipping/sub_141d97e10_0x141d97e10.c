// 函数: sub_141d97e10
// 地址: 0x141d97e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
char rax_1 = sub_140b16090(sub_141d9ef80(*arg1, &var_38, &arg1[1]))
int64_t rcx_2 = var_38
int64_t rdi
rdi.b = rax_1 == 0

if (rcx_2 != 0)
    rax_1 = sub_140a74f90(rcx_2)

if (rdi.b != 0)
    *(arg2 + 8) = 2
    return rax_1

int64_t* rcx_3 = *arg1
int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x24)
int64_t var_90 = 0
int64_t var_88 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int64_t var_48 = 0
int64_t var_40 = 0
int32_t var_80 = 0xffffffff
void* var_58

if (sub_141da1e80(rcx_3, &arg1[1], &var_c8, 0) != 0)
    void* rbx_1 = var_58
    int32_t var_50
    void* i = sx.q(var_50) * 0x50 + rbx_1
    
    if (rbx_1 != i)
        int64_t* rbx_2 = rbx_1 + 0x18
        
        do
            int32_t rax_4
            
            if (arg1[4].d s> 1)
                int16_t* rdx_2
                
                if (arg1[4].d == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = arg1[3]
                
                int16_t* const rcx_4
                
                if (rbx_2[1].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *rbx_2
                
                rax_4 = sub_140a54510(rcx_4, rdx_2)
            
            if (arg1[4].d s<= 1 || rax_4 == 0)
                int64_t r14_1 = sx.q(*(arg2 + 0x20))
                int32_t rax_5 = (r14_1 + 1).d
                *(arg2 + 0x20) = rax_5
                
                if (rax_5 s> *(arg2 + 0x24))
                    sub_1405c4fe0(arg2 + 0x18)
                
                int64_t rax_6 = *(arg2 + 0x18)
                int64_t rcx_7 = r14_1 << 6
                *(rcx_7 + rax_6) = &data_143238800
                __builtin_memset(rcx_7 + rax_6 + 8, 0, 0x30)
                void* rdi_2 = *(arg2 + 0x18) + rcx_7
                sub_140597df0(rdi_2 + 8, &rbx_2[-2])
                sub_140597df0(rdi_2 + 0x18, rbx_2)
                sub_140597df0(rdi_2 + 0x28, &rbx_2[2])
                *(rdi_2 + 0x38) = rbx_2[4].d
                *(rdi_2 + 0x3c) = *(rbx_2 + 0x24)
            
            rbx_2 = &rbx_2[0xa]
        while (&rbx_2[-3] != i)
    
    *(arg2 + 8) = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_141d94e70(&var_58)
int64_t var_68
int64_t rax_10 = sub_141d94e70(&var_68)
int64_t rcx_14 = var_78

if (rcx_14 != 0)
    rax_10 = sub_140a74f90(rcx_14)

if (var_90 != 0)
    rax_10 = sub_140a74f90(var_90)

int64_t rcx_16 = var_b8

if (rcx_16 == 0)
    return rax_10

return sub_140a74f90(rcx_16)
