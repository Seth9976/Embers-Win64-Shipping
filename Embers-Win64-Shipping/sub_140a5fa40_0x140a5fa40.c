// 函数: sub_140a5fa40
// 地址: 0x140a5fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
void* r9 = arg1

if (arg4 == 0)
    return 

int32_t r14_1 = arg3 - r15.d
int32_t rax_1 = r14_1
int32_t i_3 = arg4
int64_t i_4
int32_t i

do
    i_4 = sx.q(i_3)
    i = mods.dp.d(sx.q(rax_1), i_3)
    rax_1 = i_4.d
    i_3 = i
while (i != 0)
int64_t i_2 = i_4
uint64_t rax = zx.q(divs.dp.d(sx.q(r14_1), i_4.d))
int32_t r12_1 = 0
int32_t j_3 = rax.d
int32_t j_2 = rax.d

if (i_4.d s<= 0)
    return 

void* rbx_2 = r9 + 0x1c + r15 * 0x30
int64_t i_1

do
    int64_t rbp_1 = *(rbx_2 - 0x1c)
    int32_t rdx_6 = r12_1
    __builtin_memset(rbx_2 - 0x1c, 0, 0x20)
    int32_t var_88_1 = *(rbx_2 - 0x14)
    int64_t rsi_1 = *(rbx_2 - 0xc)
    int32_t var_84_1 = *(rbx_2 - 0x10)
    int32_t var_78_1 = *(rbx_2 - 4)
    int32_t rax_8 = *rbx_2
    int64_t rdi_1 = *(rbx_2 + 4)
    *(rbx_2 + 4) = 0
    int32_t var_74_1 = rax_8
    int32_t var_68_1 = *(rbx_2 + 0xc)
    int32_t var_64_1 = *(rbx_2 + 0x10)
    *(rbx_2 + 0xc) = 0
    int64_t var_90 = rbp_1
    
    if (j_2 s> 0)
        int128_t zmm3 = rdi_1.o
        uint64_t j_1 = zx.q(j_2)
        int128_t zmm4 = rsi_1.o
        int128_t zmm5 = var_90.o
        uint64_t j
        
        do
            rdx_6 = mods.dp.d(sx.q(rdx_6 + arg4), r14_1)
            rax = sx.q(r15.d + rdx_6) * 0x30 + r9
            
            if (rax != &var_90)
                int128_t zmm0 = *rax
                int128_t zmm1 = *(rax + 0x10)
                int128_t zmm2 = *(rax + 0x20)
                *rax = zmm5
                *(rax + 0x10) = zmm4
                *(rax + 0x20) = zmm3
                zmm5 = zmm0
                zmm4 = zmm1
                zmm3 = zmm2
            
            j = j_1
            j_1 -= 1
        while (j != 1)
        int64_t var_70_1
        var_70_1.o = zmm3
        rdi_1 = var_70_1
        int64_t var_80_1
        var_80_1.o = zmm4
        rsi_1 = var_80_1
        var_90.o = zmm5
        rbp_1 = var_90
    
    if (rdi_1 != 0)
        int64_t* rcx_1 = data_143ddb3f0
        
        if (rcx_1 == 0)
            sub_140a750a0()
            rcx_1 = data_143ddb3f0
        
        (*(*rcx_1 + 0x30))(rcx_1, rdi_1)
    
    if (rsi_1 != 0)
        int64_t* rcx_2 = data_143ddb3f0
        
        if (rcx_2 == 0)
            sub_140a750a0()
            rcx_2 = data_143ddb3f0
        
        (*(*rcx_2 + 0x30))(rcx_2, rsi_1)
    
    if (rbp_1 != 0)
        int64_t* rcx_3 = data_143ddb3f0
        
        if (rcx_3 == 0)
            sub_140a750a0()
            rcx_3 = data_143ddb3f0
        
        (*(*rcx_3 + 0x30))(rcx_3, rbp_1)
    
    r9 = arg1
    r12_1 += 1
    j_2 = j_3
    rbx_2 += 0x30
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
