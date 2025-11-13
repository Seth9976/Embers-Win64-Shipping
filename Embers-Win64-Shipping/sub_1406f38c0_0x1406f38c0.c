// 函数: sub_1406f38c0
// 地址: 0x1406f38c0
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

uint64_t rax_12 = zx.q(*(arg1 + 0x68))
void** const rax_6
void*** rdi_1

if (rax_12.b == 0 || rdi == 0)
    void*** rax_9 = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax_9
    
    if (rax_9 == 0)
        goto label_1406f39ce
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142da3f48
    rdi_1[3] = sub_140a387b0()
    rax_6 = &data_142da3fa0
label_1406f39cb:
    *rdi_1 = rax_6
label_1406f39ce:
    void var_18
    rax_12 = &var_18
    
    if (&var_18 == arg4)
        goto label_1406f39e9
    
    if (rdi_1 != 0)
        rax_12 = (*rdi_1)[8](rdi_1, arg4)
    label_1406f39e9:
        
        if (rdi_1 != 0)
            (*rdi_1)[7](rdi_1, 0)
            rax_12 = sub_140a84c80(rdi_1, 0, 0)
            
            if (rax_12 != 0)
                return sub_140a74f90(rax_12)
    else if (arg4[1].d != 0)
        int64_t* rcx_6 = *arg4
        
        if (rcx_6 != 0)
            int64_t rax_15 = (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t rcx_7 = *arg4
            
            if (rcx_7 != 0)
                rax_15 = sub_140a84c80(rcx_7, 0, 0)
                *arg4 = rax_15
            
            arg4[1].d = 0
            return rax_15
else
    if (rax_12.b == 1)
        void*** rax_4 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_4
        
        if (rax_4 == 0)
            goto label_1406f39ce
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142da3ff8
        rdi_1[3] = sub_140a387b0()
        rax_6 = &data_142da4050
        goto label_1406f39cb
    
    if (rax_12.b == 2)
        void*** rax_7 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_7
        
        if (rax_7 == 0)
            goto label_1406f39ce
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142da3ff8
        rdi_1[3] = sub_140a387b0()
        rax_6 = &data_142da4050
        goto label_1406f39cb
return rax_12
