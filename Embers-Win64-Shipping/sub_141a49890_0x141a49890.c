// 函数: sub_141a49890
// 地址: 0x141a49890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_3
int128_t zmm0
int64_t zmm1

if (*(arg1 + 0xa8) != 1 || *(arg1 + 0x20) != 1)
    int64_t rdx_2
    
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x20))
        rdx_2 = sx.q(*(*(arg1 + 0x18) + (sx.q(arg2) << 2)))
    
    if (arg2 s< 0 || arg2 s>= *(arg1 + 0x20) || rdx_2.d == 0xffffffff)
        rcx_3 = *(arg4 + 0x38)
    else
        int32_t* rdx_5 = *(arg1 + 0x28) + 0x18 + rdx_2 * 0x58
        int32_t* rdi_2 = rdx_5
        int32_t* rax_5 = *(rdx_5 + 0x30)
        
        if (rax_5 != 0)
            rdi_2 = rax_5
        
        void* r12_1 = &rdi_2[sx.q(rdx_5[0xe]) * 3]
        
        if (rdi_2 != r12_1)
            int128_t* r8_1 = arg6 + 0x138
            
            do
                void** rbx_3 = sx.q(*rdi_2) * 0x88 + *(arg1 + 0xa0)
                
                if ((rbx_3[0x10].b & 2) == 0)
                    rbx_3 = *rbx_3
                
                char rcx_7 = *(arg4 + 0x54)
                *(arg4 + 0x24) = rdi_2[1]
                rcx_7 &= 0xfb
                char rax_8 = rdi_2[2].b
                uint8_t rdx_6 = rax_8
                rax_8 &= 1
                rdx_6 = rdx_6 u>> 1 & 1
                
                if (arg4[2].d != 0)
                    rax_8 = ((rdx_6 << 2 | rcx_7) & 0xf7) | rax_8 << 3
                else
                    rax_8 = ((rax_8 << 2 | rcx_7) & 0xf7) | rdx_6 << 3
                
                *(arg4 + 0x54) = rax_8
                int32_t rax_9 = *rdi_2
                zmm1 = *(arg5 + 0x18)
                *(arg5 + 0x24) = zmm1
                int32_t var_30_1 = rax_9
                *(arg5 + 0x2c) = rax_9
                char var_2c_1 = rbx_3[2].b
                zmm0.q = zmm1
                int128_t var_38 = zmm0
                *(arg6 + 0x124) = zmm0
                sub_140747650(r8_1, arg4)
                (*(*rbx_3 + 0x30))(rbx_3, arg3, arg4, arg5, arg6)
                rdi_2 = &rdi_2[3]
                r8_1 = arg6 + 0x138
            while (rdi_2 != r12_1)
        
        rcx_3 = *(arg4 + 0x38)
else
    void* rcx = arg1 + 0xa0
    void* rax_1 = *rcx
    zmm1 = *(arg5 + 0x18)
    
    if ((*(rax_1 + 0x80) & 2) == 0)
        rcx = rax_1
    
    int64_t* rsi_1 = *rcx
    int32_t var_40_1 = *(arg5 + 0x20)
    *(arg5 + 0x24) = zmm1
    *(arg5 + 0x2c) = 0
    int32_t var_40_2 = 0
    char var_3c_1 = rsi_1[2].b
    zmm0.q = zmm1
    *(arg6 + 0x124) = zmm0
    sub_140747650(arg6 + 0x138, arg4)
    (*(*rsi_1 + 0x30))(rsi_1, arg3, arg4, arg5, arg6)
    rcx_3 = *(arg4 + 0x38)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
