// 函数: sub_141c6fa70
// 地址: 0x141c6fa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
void* var_58 = nullptr

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rbx == 0)
    return 

void* rdi_1 = *arg2
var_58 = rdi_1

if (rdi_1 != 0)
    int64_t* rcx_8
    
    if (*(rdi_1 + 0x130) != 0)
    label_141c6fbca:
        int64_t* arg_20
        int64_t* rax_8 = sub_141c5f000(arg1, &arg_20, &var_58)
        
        if (&arg2[3] != rax_8)
            int64_t* rcx_7 = arg2[3]
            arg2[3] = *rax_8
            *rax_8 = 0
            
            if (rcx_7 != 0)
                (**rcx_7)(rcx_7, 1, &arg2[3])
        
        rcx_8 = arg_20
        goto label_141c6fbfb
    
    int64_t* rcx_1 = *(arg1 + 0x130)
    
    if ((*(*rcx_1 + 0x50))(rcx_1, *(arg1 + 0x180)) != 0)
        void* rax_3 = *(arg1 + 0x88)
        void* var_38_1 = rax_3
        int32_t rcx_2
        
        if (rax_3 == 0)
            rcx_2 = 0
        else
            rcx_2 = *(rax_3 + 0x14)
        
        int32_t var_3c_1 = rcx_2
        int32_t rcx_3
        
        if (rax_3 == 0)
            rcx_3 = 0
        else
            rcx_3 = *(rax_3 + 0x958)
        
        int32_t var_44_1 = rcx_3
        uint128_t zmm0
        
        if (rax_3 == 0)
            zmm0 = zx.o(0)
        else
            zmm0 = _mm_cvtepi32_ps(zx.o(*(rax_3 + 0xc)))
        
        int64_t* rcx_4 = *(arg1 + 0x130)
        int64_t r9_1 = *(arg1 + 0x180)
        int32_t var_48 = 1
        int32_t var_40_1 = (int.q(zmm0.d)).d
        int64_t* arg_18
        int64_t* rax_6 = (*(*rcx_4 + 0x10))(rcx_4, &arg_18, &var_48, r9_1)
        
        if (&arg2[2] != rax_6)
            int64_t* rcx_5 = arg2[2]
            arg2[2] = *rax_6
            *rax_6 = 0
            
            if (rcx_5 != 0)
                (**rcx_5)(rcx_5, 1, &arg2[2])
        
        rcx_8 = arg_18
    label_141c6fbfb:
        
        if (rcx_8 != 0)
            (**rcx_8)(rcx_8, 1)
    else if (*(rdi_1 + 0x130) != 0)
        goto label_141c6fbca

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_2 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_2 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_2))
