// 函数: sub_1417d79d0
// 地址: 0x1417d79d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = data_143ef8a68
void* rdx = data_143ef8a60

if (rdi != 0)
    *(rdi + 0xc) += 1

int32_t rax_1

if (rdx != 0 && rdi != 0)
    rax_1 = 0
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
    else
        rax_1 = rdi[1].d

void* result

if (rdx == 0 || rdi == 0 || rax_1 s<= 0)
    int64_t* rax_16 = sub_1417d64a0(u"ARSaveWorld - requires a valid, running session")
    uint128_t zmm0 = (&rax_16[2]).o
    uint128_t var_58 = zmm0
    int64_t* rbx_2 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = rax_16
    
    result = &var_58
    
    if (arg1 + 0x38 != &var_58)
        *(arg1 + 0x38) = var_58.q
        var_58.q = 0
        result = sub_1405aeff0(arg1 + 0x40, &var_58:8)
        rbx_2 = rax_16
    
    void* rcx_13 = var_58:8.q
    
    if (rcx_13 != 0)
        result = zx.q(*(rcx_13 + 8))
        *(rcx_13 + 8) -= 1
        
        if (result.d == 1)
            int64_t* rbx_3 = var_58:8.q
            (**rbx_3)(rbx_3)
            result = zx.q(*(rbx_3 + 0xc))
            *(rbx_3 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_15 = var_58:8.q
                result = (*(*rcx_15 + 8))(rcx_15, 1)
        
        rbx_2 = rax_16
    
    if (rbx_2 != 0)
        result = zx.q(rbx_2[1].d)
        rbx_2[1].d -= 1
        
        if (result.d == 1)
            (**rbx_2)(rbx_2)
            result = zx.q(*(rbx_2 + 0xc))
            *(rbx_2 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)
else
    void* r8_1 = nullptr
    int64_t* r14_1 = rdi
    int32_t rax_2 = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax_2 = rdi[1].d
        z_1 = false
    
    if (z_1)
    label_1417d7a64:
        r14_1 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_2 == rdi[1].d)
                rdi[1].d = rax_2 + 1
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                r8_1 = rdx
                break
            
            rax_2 = 0
            bool z_3
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax_2 = rdi[1].d
                z_3 = false
            
            if (z_3)
                goto label_1417d7a64
    
    int64_t* rcx_1 = *(r8_1 + 0x50)
    int128_t var_38
    
    if (rcx_1 == 0)
        var_38 = zx.o(0)
    else
        (*(*rcx_1 + 0xb0))(rcx_1, &var_38)
    
    if (arg1 + 0x70 != &var_38)
        *(arg1 + 0x70) = var_38.q
        var_38.q = 0
        sub_1405aeff0(arg1 + 0x78, &var_38:8)
    
    int64_t* rbx = var_38:8.q
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rax_8 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t rax_12 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    int64_t* rcx_7 = *(arg1 + 0x78)
    int64_t rdx_3 = *(arg1 + 0x70)
    int64_t var_68 = rdx_3
    int64_t* var_60 = rcx_7
    
    if (rcx_7 != 0)
        rcx_7[1].d += 1
        rcx_7 = var_60
    
    result = arg1 + 0x38
    
    if (result != &var_68)
        *result = rdx_3
        var_68 = 0
        result = sub_1405aeff0(result + 8, &var_60)
        rcx_7 = var_60
    
    if (rcx_7 != 0)
        result = zx.q(rcx_7[1].d)
        rcx_7[1].d -= 1
        
        if (result.d == 1)
            int64_t* rbx_1 = var_60
            (**rbx_1)(rbx_1)
            result = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_10 = var_60
                result = (*(*rcx_10 + 8))(rcx_10, 1)

if (rdi != 0)
    int32_t rsi_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rsi_1 == 1)
        return (*(*rdi + 8))(rdi, zx.q(rsi_1))

return result
