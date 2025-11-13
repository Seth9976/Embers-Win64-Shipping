// 函数: sub_142368de0
// 地址: 0x142368de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x210) != 0)
    return 

void* rax = sub_140bc7f20(arg2)
*(arg1 + 0x210) = rax.d

if (rax.d s<= 0)
    return 

int64_t* rax_1 = sub_140bd19b0(arg2)
*(arg1 + 0x280) = rax_1
rax = sub_140bc8810(rax_1)
*(arg1 + 0x288) = rax

if (rax != 0)
    return 

int64_t* rdi_1 = *(arg1 + 0x280)

if (rdi_1 != 0)
    sub_140bc04a0(rdi_1)
    j_sub_140a74f90(rdi_1)

sub_140bc78b0(arg2)
int64_t* rax_2 = sub_140bd19b0(arg2)
*(arg1 + 0x280) = rax_2
rax = sub_140bc8810(rax_2)
*(arg1 + 0x288) = rax

if (rax != 0)
    return 

int64_t var_18
int64_t* rax_3 = sub_140d21830(arg1, &var_18, 0, 0)
int16_t* const r9_1

if (rax_3[1].d == 0)
    r9_1 = &data_142d40450
else
    r9_1 = *rax_3

sub_140af98a0("Unknown", 0x3fb, Soundwave '%s' failed to load even after forcing a sync load.", 
    r9_1)
int64_t rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140afbb40()
