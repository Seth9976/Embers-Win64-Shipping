// 函数: sub_140857750
// 地址: 0x140857750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
sub_140835420(&arg1[8])
sub_140835420(&arg1[0x1f])
sub_140820ac0(&arg1[8], &arg1[0x1f], &arg1[0x3a])
arg1[0x39].b |= 1
int32_t i_3 = arg1[0x3b].d

if (i_3 != 0)
    int64_t* rbx_1 = arg1[0x3a] + 0x18
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[6]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg1[0x3b].d = 0

if (*(arg1 + 0x1dc) != 0)
    sub_1405a5220(&arg1[0x3a], 0)

int64_t* i_1 = arg1[0xa2]

for (void* rdi_1 = sx.q(arg1[0xa3].d) * 0x38 + i_1; i_1 != rdi_1; i_1 = &i_1[7])
    int64_t* rcx_5 = *i_1
    
    if (rcx_5 != 0)
        sub_140cd85e0(rcx_5)

int128_t var_28 = data_14396e7c0
sub_140cdd5d0(arg1, &var_28)
void* i_2 = arg1[0x45]

for (void* rbp_1 = sx.q(arg1[0x46].d) * 0x170 + i_2; i_2 != rbp_1; i_2 += 0x170)
    void* rdi_2 = *(i_2 + 0x40)
    
    if (rdi_2 != 0 && zx.d(*(*(rdi_2 + 0x28) + 0x58)) == data_143f0f1a0)
        sub_140847e30(&arg1[0x47], i_2)
        *(*(rdi_2 + 0x28) + 0x90)
        void*** rbx_2 = arg1[sx.q(*(*(rdi_2 + 0x28) + 0x90)) + 0x75]
        
        if (rbx_2 == 0)
            void*** rax_4 = j_sub_140a82f30(0x170)
            
            if (rax_4 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = sub_1408437e0(rax_4)
            
            arg1[sx.q(*(*(rdi_2 + 0x28) + 0x90)) + 0x75] = rbx_2
        
        void* rbp_2 = rbx_2[8]
        rbx_2[8] = rdi_2
        sub_140883b30(rdi_2)
        
        if (rbp_2 != 0)
            sub_1408883d0(rbp_2)
        
        rbx_2[0x1b].d |= 1
        sub_140847d00(&rbx_2[0x1c], *(rdi_2 + 0x28) + 0x80)
        sub_140889140(&arg1[0x47], &arg1[0x9b])
        break

return sub_140849a90(arg1) __tailcall
