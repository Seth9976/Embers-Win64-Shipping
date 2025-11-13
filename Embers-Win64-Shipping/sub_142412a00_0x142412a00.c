// 函数: sub_142412a00
// 地址: 0x142412a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
void* var_38 = arg2
int64_t r14 = 0
int64_t* i_1

if (arg2 == 0)
    i_1 = nullptr
else
    i_1 = *(arg2 + 0x50)

int32_t var_28 = 0xffffffff
int16_t var_24 = 0x101
char var_22 = 0
sub_140bc98b0(&var_38)
int64_t* i_2

for (int64_t* i = i_1; i != 0; i = i_2)
    int32_t rbx_1 = 0
    
    if (i != 0 && ((zx.q(*(i[1] + 0x10)) u>> 0x11).b & 1) != 0)
        uint64_t j_2 = zx.q(i[7].d)
        
        if (j_2.d s> 0)
            int64_t rcx_5 = zx.q(*(i + 0x79)) + sx.q(*(i + 0x4c)) + arg1
            uint64_t j
            
            do
                int64_t rax_2
                rax_2.b = (*rcx_5 & *(i + 0x7b)) != 0
                rcx_5 += sx.q(*(i + 0x3c))
                r14 = rax_2 + (r14 << 1)
                j = j_2
                j_2 -= 1
            while (j != 1)
    else if (((i[8] u>> 0x33).b & 1) != 0)
        int32_t j_1 = 0
        
        if (i[7].d s> 0)
            do
                int32_t rax_9 = PDBIsSZPDB(i, sx.q(*(i + 0x4c)) + sx.q(*(i + 0x3c) * j_1) + arg1)
                
                if (rbx_1 == 0)
                    rbx_1 = rax_9
                else
                    int32_t rbx_3 = (rbx_1 - rax_9) ^ rax_9 u>> 0xd
                    int32_t rdx_4 = (0x9e3779b9 - rbx_3 - rax_9) ^ rbx_3 << 8
                    int32_t rbx_7 = (rax_9 - rdx_4 - rbx_3) ^ rdx_4 u>> 0xd
                    int32_t rcx_10 = (rbx_3 - rdx_4 - rbx_7) ^ rbx_7 u>> 0xc
                    int32_t rdx_7 = (rdx_4 - rcx_10 - rbx_7) ^ rcx_10 << 0x10
                    int32_t rbx_10 = (rbx_7 - rdx_7 - rcx_10) ^ rdx_7 u>> 5
                    int32_t rcx_13 = (rcx_10 - rdx_7 - rbx_10) ^ rbx_10 u>> 3
                    int32_t rdx_10 = (rdx_7 - rcx_13 - rbx_10) ^ rcx_13 << 0xa
                    rbx_1 = (rbx_10 - rdx_10 - rcx_13) ^ rdx_10 u>> 0xf
                
                j_1 += 1
            while (j_1 s< i[7].d)
    
    if (rbp == 0)
        rbp = rbx_1
    else
        int32_t rbp_2 = (rbp - rbx_1) ^ rbx_1 u>> 0xd
        int32_t rdx_14 = (0x9e3779b9 - rbp_2 - rbx_1) ^ rbp_2 << 8
        int32_t rbp_6 = (rbx_1 - rdx_14 - rbp_2) ^ rdx_14 u>> 0xd
        int32_t rcx_17 = (rbp_2 - rdx_14 - rbp_6) ^ rbp_6 u>> 0xc
        int32_t rdx_17 = (rdx_14 - rcx_17 - rbp_6) ^ rcx_17 << 0x10
        int32_t rbp_9 = (rbp_6 - rdx_17 - rcx_17) ^ rdx_17 u>> 5
        int32_t rcx_20 = (rcx_17 - rdx_17 - rbp_9) ^ rbp_9 u>> 3
        int32_t rdx_20 = (rdx_17 - rcx_20 - rbp_9) ^ rcx_20 << 0xa
        rbp = (rbp_9 - rdx_20 - rcx_20) ^ rdx_20 u>> 0xf
    
    i_2 = i[4]
    sub_140bc98b0(&var_38)

return zx.q(rbp)
