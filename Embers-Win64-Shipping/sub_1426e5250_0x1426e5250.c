// 函数: sub_1426e5250
// 地址: 0x1426e5250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg2 + 0xc0)

if (rdi != 0)
    char r8 = *(arg1 + 0x98)
    int64_t* rax
    bool z_1
    
    if (*(arg3 + 0x14) != 0)
        if (zx.d(r8) s>= rdi[0x59].d)
            z_1 = *arg3 == 0
        else
            rax = sub_140d3c6e0(rdi[0x58] + zx.q(r8) * 0x14)
            z_1 = *arg3 == rax
        
        goto label_1426e52e7
    
    void var_18
    rax = sub_1426b1cc0(rdi, &var_18, r8)
    
    if (not(*rax f!= arg3[1].d) && not(*(rax + 4) f!= *(arg3 + 0xc)))
        float zmm0 = rax[1].d
        float temp2_1 = arg3[2].d
        zmm0 - temp2_1
        z_1 = zmm0 == temp2_1
    label_1426e52e7:
        
        if (z_1)
            (*(*rdi + 0x7e8))(rdi, zx.q(*(arg1 + 0x98)))

void* rcx_4 = *(arg2 + 0xb8)

if (rcx_4 != 0)
    sub_1426c1d20(rcx_4, arg1)
