// 函数: sub_1419527d0
// 地址: 0x1419527d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[6].b == 0
*arg1 = &data_142ff8be8

if (not(cond:0))
    ChangeDisplaySettingsW(nullptr, 0)

arg1[9][6](&arg1[9])
int64_t* rbx = arg1[8]
arg1[8] = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_2
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

int64_t var_58 = 0
void** const var_48 = &data_142da2668
void*** var_40 = arg1
int64_t (* var_68)(int64_t* arg1) = sub_141953e40
int128_t entry_zmm2
int128_t entry_zmm3
sub_14195af10(&var_68, 1, entry_zmm2, entry_zmm3)
void* r13 = arg1[3]
arg1[4] = 0
int64_t rcx_3 = sx.q(*(r13 + 0x8b0))

if (rcx_3.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **(r13 + 0x8a8) != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx_3)
            int64_t* rcx_4 = *(r13 + 0x8a8) + (rbx_1 << 3)
            
            do
                int32_t rax_7
                rax_7.b = *rcx_4 != arg1
                
                if (zx.d(r15.b) != rax_7)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_4 = &rcx_4[1]
            while (rbx_1 s< rcx_3)
        
        int32_t r14_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_5 = *(r13 + 0x8a8)
                memmove(rcx_5 + (sx.q(r12_1) << 3), rcx_5 + (r9_1 << 3), r14_2 << 3)
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (rbx_1 s< rcx_3)
    
    *(r13 + 0x8b0) = r12_1

sub_14081c9d0(&arg1[0xd])
sub_1419948a0(&arg1[9])
sub_14081c9d0(&arg1[8])
*arg1 = &data_142d3ff08
return &data_142d3ff08
