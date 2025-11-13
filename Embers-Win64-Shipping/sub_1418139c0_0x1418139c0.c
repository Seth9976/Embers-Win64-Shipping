// 函数: sub_1418139c0
// 地址: 0x1418139c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
void*** rdi = rax
int64_t entry_zmm1

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_142fe5748
    int64_t* entry_rdx
    sub_140596d10(&rdi[1], entry_rdx)
    rdi[3].d = entry_rdx[2].d
    sub_140596d10(&rdi[4], &entry_rdx[3])
    rdi[6].b = entry_rdx[5].b
    void var_28
    int16_t* rax_3 = sub_140a95a00(&var_28)
    *(rax_3 + 0x14) = 3
    *(rax_3 + 0x10) = 3
    *(rdi + 0x38) = *rax_3
    entry_zmm1 = *(rax_3 + 0x10)
    rdi[9] = entry_zmm1
    void*** rax_4 = j_sub_140a82f30(0x18)
    
    if (rax_4 == 0)
        rdi[0xa] = 0
    else
        *rax_4 = &data_142fe5510
        sub_140a464c0()
        rax_4[1] = &data_14399ea08
        sub_140b6b7d0()
        rax_4[2] = &data_1439a9568
        rdi[0xa] = rax_4

char rax_6 = (*rdi)[1](rdi, entry_zmm1)
void** r8 = *rdi
(*r8)(rdi, 1, r8)
return zx.q(rax_6)
