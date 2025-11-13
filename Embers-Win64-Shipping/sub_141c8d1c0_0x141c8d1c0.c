// 函数: sub_141c8d1c0
// 地址: 0x141c8d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)

if (i == 0)
    return 

int64_t* rdi_1 = *(arg1 + 0x18)
int64_t* i_2 = i

if (rdi_1 != 0)
    *(rdi_1 + 0xc) += 1
    i_2 = *(arg1 + 0x10)

(*(*i_2 + 0x30))(i_2)
int128_t var_38 = zx.o(0)
int64_t* rax

if (arg1 + 0x10 != &var_38)
    *(arg1 + 0x10) = 0
    sub_1405aeff0(arg1 + 0x18, &var_38:8)
    void* rcx_1 = var_38:8.q
    
    if (rcx_1 != 0)
        rax = zx.q(*(rcx_1 + 8))
        *(rcx_1 + 8) -= 1
        
        if (rax.d == 1)
            int64_t* rbx_1 = var_38:8.q
            (**rbx_1)(rbx_1)
            rax = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (rax.d == 1)
                int64_t* rcx_3 = var_38:8.q
                (*(*rcx_3 + 8))(rcx_3, 1)

int128_t zmm6 = 0x3dcccccd
int32_t rbx_2 = 0

while (i != 0)
    if (rdi_1 == 0)
        break
    
    rax = nullptr
    
    if (0 == rdi_1[1].d)
        rdi_1[1].d = 0
    else
        rax = zx.q(rdi_1[1].d)
    
    if (rax.d s<= 0)
        break
    
    if (rbx_2 s> 0xa)
        break
    
    rbx_2 += 1
    rax, zmm6 = sub_140b73230(zmm6)

int64_t** i_1 = *(arg1 + 0x20)

for (void* rbp_2 = &i_1[sx.q(*(arg1 + 0x28)) * 2]; i_1 != rbp_2; i_1 = &i_1[2])
    int64_t* rcx_4 = i_1[1]
    rax = *i_1
    
    if (rcx_4 != 0)
        *(rcx_4 + 0xc) += 1
    
    if (rax == 0)
    label_141c8d2f6:
        
        if (rcx_4 != 0)
            rax = zx.q(*(rcx_4 + 0xc))
            *(rcx_4 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
    else if (rcx_4 != 0)
        rax = nullptr
        
        if (0 == rcx_4[1].d)
            rcx_4[1].d = 0
        else
            rax = zx.q(rcx_4[1].d)
        
        if (rax.d s<= 0)
            goto label_141c8d2f6
        
        if (rcx_4 != 0)
            rax = zx.q(*(rcx_4 + 0xc))
            *(rcx_4 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        break

if (rdi_1 == 0)
    return 

int32_t rsi_1 = *(rdi_1 + 0xc)
*(rdi_1 + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))
