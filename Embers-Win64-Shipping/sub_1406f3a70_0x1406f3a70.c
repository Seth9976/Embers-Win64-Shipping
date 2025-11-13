// 函数: sub_1406f3a70
// 地址: 0x1406f3a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg3)
void* const rdi = rax
void* rax_1
int64_t rax_2
void* rdx

if (rax != 0)
    rax_1 = sub_142591550()
    rdx = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rax == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

uint64_t rax_11 = zx.q(*(arg1 + 0x68))
void*** rdi_1

if (rax_11.b == 0 || rdi == 0)
    void*** rax_8 = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax_8
    
    if (rax_8 == 0)
        goto label_1406f3b7e
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142da3868
    rdi_1[3] = sub_140a387b0()
label_1406f3b7b:
    *rdi_1 = &data_142da38c0
label_1406f3b7e:
    void var_18
    rax_11 = &var_18
    
    if (&var_18 == arg4)
        goto label_1406f3b99
    
    if (rdi_1 != 0)
        rax_11 = (*rdi_1)[8](rdi_1, arg4)
    label_1406f3b99:
        
        if (rdi_1 != 0)
            (*rdi_1)[7](rdi_1, 0)
            rax_11 = sub_140a84c80(rdi_1, 0, 0)
            
            if (rax_11 != 0)
                return sub_140a74f90(rax_11)
    else if (arg4[1].d != 0)
        int64_t* rcx_6 = *arg4
        
        if (rcx_6 != 0)
            int64_t rax_14 = (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t rcx_7 = *arg4
            
            if (rcx_7 != 0)
                rax_14 = sub_140a84c80(rcx_7, 0, 0)
                *arg4 = rax_14
            
            arg4[1].d = 0
            return rax_14
else
    if (rax_11.b == 1)
        void*** rax_4 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_4
        
        if (rax_4 == 0)
            goto label_1406f3b7e
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142da3868
        rdi_1[3] = sub_140a387b0()
        goto label_1406f3b7b
    
    if (rax_11.b == 2)
        void*** rax_6 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_6
        
        if (rax_6 == 0)
            goto label_1406f3b7e
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142da3868
        rdi_1[3] = sub_140a387b0()
        goto label_1406f3b7b
return rax_11
