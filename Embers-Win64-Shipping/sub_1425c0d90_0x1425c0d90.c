// 函数: sub_1425c0d90
// 地址: 0x1425c0d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) s> 1)
    return arg1 + 0x50

int64_t var_18
int64_t* rax
int64_t r9
rax, r9 = sub_140b1aa20(&var_18)

if (arg1 + 0x50 != rax)
    int64_t rcx_1 = *(arg1 + 0x50)
    
    if (rcx_1 != 0)
        r9 = sub_140a74f90(rcx_1)
    
    *(arg1 + 0x50) = *rax
    *rax = 0
    *(arg1 + 0x58) = rax[1].d
    *(arg1 + 0x5c) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    r9 = sub_140a74f90(rcx_2)

if (*(arg1 + 0x58) s<= 1)
    sub_140af98a0("Unknown", 0x16b, 
        SandboxFileWrapper tried to access project path before it was set.", r9)
    sub_140afbb40()

int64_t* rax_4 = sub_140b11c80(&var_18, arg1 + 0x50)

if (arg1 + 0x50 != rax_4)
    int64_t rcx_4 = *(arg1 + 0x50)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(arg1 + 0x50) = *rax_4
    *rax_4 = 0
    *(arg1 + 0x58) = rax_4[1].d
    *(arg1 + 0x5c) = *(rax_4 + 0xc)
    rax_4[1] = 0

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rax_7 = sub_140b1a780(&var_18, arg1 + 0x50)

if (arg1 + 0x50 != rax_7)
    int64_t rcx_8 = *(arg1 + 0x50)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(arg1 + 0x50) = *rax_7
    *rax_7 = 0
    *(arg1 + 0x58) = rax_7[1].d
    *(arg1 + 0x5c) = *(rax_7 + 0xc)
    rax_7[1] = 0

int64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg1 + 0x50
