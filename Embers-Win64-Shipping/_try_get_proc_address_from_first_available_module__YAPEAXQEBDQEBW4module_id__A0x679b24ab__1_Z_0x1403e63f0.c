// 函数: ?try_get_proc_address_from_first_available_module@@YAPEAXQEBDQEBW4module_id@?A0x679b24ab@@1@Z
// 地址: 0x1403e63f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t rax
int32_t rbp_2
int32_t rsi_2
int32_t rdi_1
int32_t r15

if (arg3 s<= 0)
    rdi_1 = 0
label_1403e6495:
    rsi_2 = 0
    r15 = 0
    rbp_2 = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(rdi + &data_1436fda38)) + &data_1436fd9a0, 8)
    int64_t rsi_1 = sx.q(rax)
    rdi_1 = rdi.d - rsi_1.d
    
    if (rax s<= 0)
        goto label_1403e6495
    
    rax = sub_1403f73c0(arg2, zx.q(*(rsi_1 + &data_1436fda38)) + &data_1436fd900, 8)
    int64_t rbp_1 = sx.q(rax)
    rsi_2 = rsi_1.d - rbp_1.d
    
    if (rax s<= 0)
        r15 = 0
        rbp_2 = 0
    else
        rax = sub_1403f73c0(arg2, zx.q(*(rbp_1 + &data_1436fda38)) + &data_1436fd860, 8)
        r15 = rax
        rbp_2 = rbp_1.d - rax

if (r15 s<= 0)
    *arg1 = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(r15) + &data_1436fda38)) + &data_1436fd7c0, 8)
    *arg1 = rax
    arg1[1] = r15 - rax

if (rbp_2 s<= 0)
    *(arg1 + 8) = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rbp_2) + &data_1436fda38)) + &data_1436fd7c0, 8)
    arg1[2] = rax
    arg1[3] = rbp_2 - rax

int32_t rbp_4
int32_t rsi_3

if (rsi_2 s<= 0)
    rbp_4 = 0
    rsi_3 = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rsi_2) + &data_1436fda38)) + &data_1436fd860, 8)
    rbp_4 = rax
    rsi_3 = rsi_2 - rax

if (rbp_4 s<= 0)
    *(arg1 + 0x10) = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rbp_4) + &data_1436fda38)) + &data_1436fd7c0, 8)
    arg1[4] = rax
    arg1[5] = rbp_4 - rax

if (rsi_3 s<= 0)
    *(arg1 + 0x18) = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rsi_3) + &data_1436fda38)) + &data_1436fd7c0, 8)
    arg1[6] = rax
    arg1[7] = rsi_3 - rax

int32_t rbp_6
int32_t rsi_6
int32_t rdi_2

if (rdi_1 s<= 0)
    rdi_2 = 0
    rbp_6 = 0
    rsi_6 = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rdi_1) + &data_1436fda38)) + &data_1436fd900, 8)
    int64_t rsi_5 = sx.q(rax)
    rdi_2 = rdi_1 - rsi_5.d
    
    if (rax s<= 0)
        rbp_6 = 0
        rsi_6 = 0
    else
        rax = sub_1403f73c0(arg2, zx.q(*(rsi_5 + &data_1436fda38)) + &data_1436fd860, 8)
        rbp_6 = rax
        rsi_6 = rsi_5.d - rax

if (rbp_6 s<= 0)
    *(arg1 + 0x20) = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rbp_6) + &data_1436fda38)) + &data_1436fd7c0, 8)
    arg1[8] = rax
    arg1[9] = rbp_6 - rax

if (rsi_6 s<= 0)
    *(arg1 + 0x28) = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rsi_6) + &data_1436fda38)) + &data_1436fd7c0, 8)
    arg1[0xa] = rax
    arg1[0xb] = rsi_6 - rax

int32_t rsi_8
int32_t rdi_3

if (rdi_2 s<= 0)
    rsi_8 = 0
    rdi_3 = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rdi_2) + &data_1436fda38)) + &data_1436fd860, 8)
    rsi_8 = rax
    rdi_3 = rdi_2 - rax

if (rsi_8 s<= 0)
    *(arg1 + 0x30) = 0
else
    rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rsi_8) + &data_1436fda38)) + &data_1436fd7c0, 8)
    arg1[0xc] = rax
    arg1[0xd] = rsi_8 - rax

if (rdi_3 s<= 0)
    *(arg1 + 0x38) = 0
    return 

rax = sub_1403f73c0(arg2, zx.q(*(sx.q(rdi_3) + &data_1436fda38)) + &data_1436fd7c0, 8)
arg1[0xe] = rax
arg1[0xf] = rdi_3 - rax
