// 函数: sub_1423b9ab0
// 地址: 0x1423b9ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j_1 = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
__builtin_memset(&arg1[2], 0, 0x18)
int64_t i_2 = 6
arg1[5] = -0x3810000020000000
__builtin_memset(&arg1[6], 0, 0x14)
*arg1 = &data_14333c908
*(arg1 + 0x44) = 0
*(arg1 + 0x46) = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0x5f] = arg2
void* rdx = &arg1[0xc]
arg1[0x60].d = 0
int64_t i

do
    int32_t j = 0
    void* rax_1 = rdx
    
    do
        *(rax_1 - 8) = 0
        j += 0xe
        __builtin_memset(rax_1, 0, 0x68)
        rax_1 += 0x70
    while (j u< 0xe)
    
    rdx += 0x70
    i = i_2
    i_2 -= 1
while (i != 1)
void* rdx_1 = *(arg2 + 0xb8)
void* arg_10 = rdx_1
int32_t rcx = *(rdx_1 + 0x14)
int32_t rax_2 = *(rdx_1 + 0x20)

if (rcx s<= 1)
    rcx = 1

if (rax_2 - rcx s>= 0)
    int64_t i_1 = 0
    
    do
        int64_t* r12_2 = *(*(rdx_1 + 0x18) + (i_1 << 3)) + 0x10
        
        if (sub_140bc7f20(r12_2) s> 0)
            int32_t rax_7 = sub_140bc7f20(r12_2)
            arg1[0x60].d += rax_7
            int64_t rax_9
            int64_t rdx_2
            rdx_2:rax_9 = muls.dp.q(0x2aaaaaaaaaaaaaab, sub_140bc7f20(r12_2))
            int32_t r15_3 = (rdx_2 u>> 0x3f).d + rdx_2.d
            int64_t rax_10 = sub_140bcb6b0(r12_2, 1)
            uint64_t rbp_1 = zx.q(r15_3)
            void* rdi_2 = &arg1[0xb + i_1]
            
            do
                int64_t rax_11 = sub_140a82f30(rbp_1, 0)
                *rdi_2 = rax_11
                memcpy(rax_11, zx.q(j_1 * r15_3) + rax_10, rbp_1.d)
                j_1 += 1
                rdi_2 += 0x70
            while (j_1 u< 6)
            
            sub_140bd1d40(r12_2)
            j_1 = 0
        
        rdx_1 = arg_10
        i_1 += 1
    while (i_1 s<= sx.q(rax_2 - rcx))

return arg1
