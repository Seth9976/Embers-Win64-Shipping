// 函数: sub_14183d1a0
// 地址: 0x14183d1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_78 = zx.o(0)
*arg2 = 0
arg2[1] = 0
int64_t* rsi = *(arg1 + 0xf8)
void* rax_3 = &rsi[sx.q(*(arg1 + 0x100)) * 0xc]
void* i_3

if (rsi == rax_3)
    i_3 = var_78.q
label_14183d3b3:
    int32_t i_2 = arg2[1].d
    int64_t* rbx_2 = *arg2
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_13 = *rbx_2
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            rbx_2 = &rbx_2[6]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405a5220(arg2, 0)
else
    do
        int32_t* rbx_1 = rsi[9]
        int64_t r15_1 = 0
        void* r12_1 = &rbx_1[sx.q(rsi[0xa].d) * 6]
        void* arg_8 = r12_1
        
        while (rbx_1 != r12_1)
            if (((rbx_1[2] ^ *(arg3 + 8)) | (rbx_1[1] ^ *(arg3 + 4)) | (rbx_1[3] ^ *(arg3 + 0xc))
                    | (*rbx_1 ^ *arg3)) == 0)
                int64_t var_68
                __builtin_memset(&var_68, 0, 0x30)
                
                if (&var_68 != rsi)
                    int32_t rdi_1 = rsi[1].d
                    int64_t r12_2 = *rsi
                    int64_t var_60_1
                    var_60_1.d = rdi_1
                    
                    if (rdi_1 != 0)
                        sub_1405a4c70(&var_68, rdi_1, 0)
                        memcpy(var_68, r12_2, rdi_1 * 2)
                    
                    r12_1 = arg_8
                
                int64_t rdi_2 = sx.q(arg2[1].d)
                int64_t zmm1 = *(rbx_1 + 0x10)
                int32_t rax_11 = (rdi_2 + 1).d
                int64_t var_50_1
                var_50_1.o = *rbx_1
                arg2[1].d = rax_11
                
                if (rax_11 s> *(arg2 + 0xc))
                    sub_1405c4f50(arg2)
                
                int64_t* rdi_5 = rdi_2 * 0x30 + *arg2
                sub_140596d10(rdi_5, &var_68)
                *(rdi_5 + 0x18) = var_50_1.o
                rdi_5[2] = r15_1
                rdi_5[5] = zmm1
                sub_1418286b0(&var_78, zx.q(rbx_1[4]), zx.q(rbx_1[5]), 1)
                int64_t rcx_11 = var_68
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
            
            uint64_t rax_13 = zx.q(rbx_1[5])
            rbx_1 = &rbx_1[6]
            r15_1 += rax_13
        
        rsi = &rsi[0xc]
    while (rsi != rax_3)
    
    i_3 = var_78.q
    
    if (i_3 == 0 || i_3 != var_78:8.q)
        goto label_14183d3b3

if (i_3 != 0)
    void* i_1
    
    do
        i_1 = *(i_3 + 0x18)
        *(i_3 + 0x10) = 0
        *(i_3 + 0x18) = 0
        j_sub_140a74f90(i_3)
        i_3 = i_1
    while (i_1 != 0)

return arg2
