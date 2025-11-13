// 函数: sub_140cd0060
// 地址: 0x140cd0060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void* rax = sub_140d3c6e0(&arg1[1])
int64_t var_18
int64_t* rax_1

if (rax == 0)
    rax_1 = sub_140cc37d0(&var_18, &arg1[2])
label_140cd0169:
    
    if (arg2 != rax_1)
        int64_t rcx_12 = *arg2
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        *arg2 = *rax_1
        *rax_1 = 0
        arg2[1].d = rax_1[1].d
        *(arg2 + 0xc) = *(rax_1 + 0xc)
        rax_1[1] = 0
else
    void* rcx_1 = *arg1
    int64_t* rdx = &var_18
    
    if (rcx_1 != 0)
        rax_1 = sub_140cbdce0(rcx_1, rdx, 0)
        goto label_140cd0169
    
    int64_t* rax_2 = sub_140d21e10(rax, rdx, 0)
    
    if (arg2 != rax_2)
        int64_t rcx_3 = *arg2
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg2 = *rax_2
        *rax_2 = 0
        arg2[1].d = rax_2[1].d
        *(arg2 + 0xc) = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int32_t rdx_1 = arg2[1].d
    int32_t rax_5
    rax_5.b = rdx_1 s<= 0
    int32_t rdi_1 = rdx_1 - 1
    
    if (rdx_1 s<= 0)
        rdi_1 = 0
    
    int32_t rax_7 = rax_5 + 1 + rdx_1
    arg2[1].d = rax_7
    
    if (rax_7 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    int64_t rcx_7 = sx.q(rdi_1)
    *(*arg2 + (rcx_7 << 1)) = 0x3a
    *(*arg2 + (rcx_7 << 1) + 2) = 0
    int64_t* rax_10 = sub_140cc37d0(&var_18, &arg1[2])
    int32_t rcx_9 = rax_10[1].d
    int32_t r8_1 = rcx_9 - 1
    
    if (rcx_9 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, *rax_10, r8_1)
int64_t rcx_14 = var_18

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_140be0c40()

if (sub_140a32a50(arg2, &data_143e1ad70, 1) != 0)
    sub_140be0c40()
    sub_140a2fba0(arg2, &data_143e1ad70, 1)

return arg2
