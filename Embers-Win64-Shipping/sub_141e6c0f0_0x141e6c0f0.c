// 函数: sub_141e6c0f0
// 地址: 0x141e6c0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[2]

if (rax != 0)
    *(rax + 0xd4) = 0
    int64_t* rdx_1 = arg1[2]
    void* rax_1 = rdx_1[0x18]
    int64_t rdi_1 = *(rax_1 + 0x28)
    
    if (rdi_1 != 0)
        int64_t rsi_1 = *rdx_1
        int64_t* (* var_58)(int64_t* arg1)
        int64_t zmm2
        
        if (*(rax_1 + 0x182) s< 0)
            int64_t var_70_1 = rsi_1
            (*(*arg1 + 0x70))()
            zmm2.d = arg2
            void** const var_38_1 = &data_142e345d8
            int64_t var_48_1 = 0
            var_58 = j_sub_141e52ac0
            int128_t var_30_1 = rdi_1.o
            int64_t var_68 = zmm2
            int64_t var_20_1 = zmm2
            arg2 = sub_141e85f30(&var_58)
            rdx_1 = arg1[2]
        
        if ((*(rdx_1[0x18] + 0x183) & 1) != 0)
            int64_t var_70_2 = rsi_1
            (*(*arg1 + 0x78))(arg1)
            void** const var_38_2 = &data_142e345d8
            zmm2.d = arg2
            int64_t var_48_2 = 0
            var_58 = j_sub_141e52b80
            int128_t var_30_2 = rdi_1.o
            int64_t var_20_2 = zmm2
            arg2 = sub_141e85f30(&var_58)
            rdx_1 = arg1[2]
        
        if ((*(rdx_1[0x18] + 0x183) & 2) != 0)
            (*(*arg1 + 0x78))(arg1)
            *(arg1[2] + 0xd4) = arg2
            rdx_1 = arg1[2]
    
    sub_140d29f20(arg1[1] + 0x160, rdx_1)
    void* r14_1 = arg1[2]
    int32_t rax_8 = *(r14_1 + 0x100)
    
    if ((rax_8.b & 0x10) == 0)
        *(r14_1 + 0x100) = rax_8 | 0x18
        int32_t rax_10 = *(r14_1 + 0xb8)
        int64_t rsi_2 = sx.q(rax_10 - 1)
        
        if (rax_10 - 1 s>= 0)
            int64_t rdi_3 = rsi_2 << 4
            int64_t temp1_1
            
            do
                int64_t* rcx_6 = *(rdi_3 + *(r14_1 + 0xb0))
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x260))(rcx_6, r14_1)
                
                rdi_3 -= 0x10
                temp1_1 = rsi_2
                rsi_2 -= 1
            while (temp1_1 - 1 s>= 0)
    
    arg1[2] = 0

int64_t* rdi_5 = arg1[1] + 0x150
int64_t rdx_5 = *rdi_5
int64_t r8 = sx.q(rdi_5[1].d)
int64_t* rax_14 = rdx_5
int64_t rcx_7 = rdx_5 + (r8 << 3)
int64_t result

if (rdx_5 != rcx_7)
    while (*rax_14 != arg1)
        rax_14 = &rax_14[1]
        
        if (rax_14 == rcx_7)
            goto label_141e6c2ec
    
    result = (rax_14 - rdx_5) s>> 3

if (rdx_5 == rcx_7 || result.d == 0xffffffff)
label_141e6c2ec:
    int32_t rax_16 = (r8 + 1).d
    rdi_5[1].d = rax_16
    
    if (rax_16 s> *(rdi_5 + 0xc))
        sub_1405a4d70(rdi_5)
    
    result = *rdi_5
    *(result + (r8 << 3)) = arg1

return result
