// 函数: sub_140f75a00
// 地址: 0x140f75a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x398)
int64_t* rax = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 == 0)
        rdi = nullptr
        rax = nullptr
    else
        rdi[1].d = rax_1 + 1
        rax = rdi

int64_t* r14 = nullptr

if (rax != 0)
    r14 = *(arg1 + 0x390)

if (*(arg1 + 0x3e0) != 0)
    int64_t* rcx = *(arg1 + 0x3d8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3e0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x3d8)
        
        *(arg1 + 0x3d0) = (*(*rcx_1 + 0x48))(rcx_1)

int32_t rbp_1 = (*(*r14 + 0x30))(r14) - *(arg1 + 0x3d0)

if (rbp_1 s<= 0)
    rbp_1 = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int32_t zmm1 = 0x41200000
int32_t arg_8 = 0x41200000

if (*(arg1 + 0x3bc) != 0)
    if (*(arg1 + 0x3c8) != 0)
        int64_t* rcx_5 = *(arg1 + 0x3c0)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            int64_t* rcx_6
            
            if (*(arg1 + 0x3c8) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(arg1 + 0x3c0)
            
            (*(*rcx_6 + 0x48))(rcx_6)
            *(arg1 + 0x3b8) = arg3.d
    
    zmm1 = *(arg1 + 0x3b8)

arg3 = _mm_cvtepi32_ps(zx.o(rbp_1))
*(arg2 + 4) = 0
arg2[3] = 0
arg3.d = arg3.d f* zmm1
*arg2 = arg3.d
return arg2
