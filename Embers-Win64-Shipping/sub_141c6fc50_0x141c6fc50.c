// 函数: sub_141c6fc50
// 地址: 0x141c6fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x20)

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

void* rax_1 = *(arg1 + 0x18)

if (rax_1 != 0 && *(rax_1 + 0x130) == 0)
    int32_t rdx_1 = *(rax_1 + 0x120)
    void* rcx_1 = *(arg1 + 0x88)
    *(arg1 + 0x150) = rdx_1
    *(arg1 + 0x158) = sub_141c5d950(rcx_1, rdx_1)
    void* rax_3 = *(arg1 + 0x88)
    *(arg1 + 0x160) = data_14399f720
    int32_t rcx_2
    
    if (rax_3 == 0)
        rcx_2 = 0
    else
        rcx_2 = *(rax_3 + 0x14)
    
    int32_t var_1c_1 = rcx_2
    int32_t rcx_3
    
    if (rax_3 == 0)
        rcx_3 = 0
    else
        rcx_3 = *(rax_3 + 0x958)
    
    int32_t var_24_1 = rcx_3
    uint128_t zmm0
    
    if (rax_3 == 0)
        zmm0 = zx.o(0)
    else
        zmm0 = _mm_cvtepi32_ps(zx.o(*(rax_3 + 0xc)))
    
    int64_t* rcx_4 = *(arg1 + 0x130)
    int64_t r9_1 = *(arg1 + 0x180)
    int32_t var_28 = 1
    int64_t* arg_10
    int64_t* rax_6 =
        (*(*rcx_4 + 0x18))(rcx_4, &arg_10, &var_28, r9_1, var_28, (int.q(zmm0.d)).d, rax_3)
    
    if (arg1 + 0x140 != rax_6)
        int64_t* rcx_5 = *(arg1 + 0x140)
        *(arg1 + 0x140) = *rax_6
        *rax_6 = 0
        
        if (rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
    
    int64_t* rcx_6 = arg_10
    
    if (rcx_6 != 0)
        (**rcx_6)(rcx_6, 1)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_2 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_2 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_2))
