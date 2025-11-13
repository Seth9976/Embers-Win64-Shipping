// 函数: sub_140cd0810
// 地址: 0x140cd0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rbp
rbp.b = 1
int64_t result

if (*(arg1 + 0x190) == 0)
    int128_t* var_88
    sub_140b4e1a0(&var_88, arg1 + 0xb8)
    int128_t* r8_1 = var_88
    int128_t* rax_2 = r8_1
    int32_t var_80
    void* rdx_4 = &r8_1[sx.q(var_80)]
    
    if (r8_1 != rdx_4)
        rbp.b = 0
        
        do
            int128_t zmm0_1 = *rax_2
            int32_t rcx_1 = zmm0_1.d
            
            if (rcx_1 != 0 && rcx_1 == 1)
                void var_48
                int128_t* rax_16 = sub_140b50890(&var_48, zmm0_1:8.q)
                int128_t* rcx_17 = var_88
                int128_t var_68_1 = *rax_16
                int128_t var_58_1 = rax_16[1]
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                result = 0
                goto label_140cd0a94
            
            rax_2 = &rax_2[1]
        while (rax_2 != rdx_4)
    
    if (r8_1 != 0)
        sub_140a74f90(r8_1)

(*(*(arg1 + 0x200) + 0xe0))(arg1 + 0x200, zx.q(*(arg1 + 0xac)))
(*(*(arg1 + 0x200) + 0xe8))(arg1 + 0x200, zx.q(*(arg1 + 0xb0)))
(*(*(arg1 + 0x200) + 0xf0))(arg1 + 0x200, arg1 + 0x148)
(*(*(arg1 + 0x200) + 0x50))(arg1 + 0x200, arg1 + 0xb8)

if (*(arg1 + 0xcc) s< 0)
    int64_t rdx_9
    rdx_9.b = 1
    (*(*(arg1 + 0x200) + 0x60))(arg1 + 0x200, rdx_9)

*(arg1 + 0x22a) |= 0x10
int64_t* rcx_8 = *(arg1 + 0x2d8)

if (rcx_8 != 0)
    (*(*rcx_8 + 0xe0))(rcx_8, zx.q(*(arg1 + 0xac)))
    int64_t* rcx_9 = *(arg1 + 0x2d8)
    (*(*rcx_9 + 0xe8))(rcx_9, zx.q(*(arg1 + 0xb0)))
    int64_t* rcx_10 = *(arg1 + 0x2d8)
    (*(*rcx_10 + 0xf0))(rcx_10, arg1 + 0x148)
    int64_t* rcx_11 = *(arg1 + 0x2d8)
    (*(*rcx_11 + 0x50))(rcx_11, arg1 + 0xb8)

void* rdi_2 = *(arg1 + 0xa0)

if (rdi_2 != 0)
    int32_t rdx_14 = *(arg1 + 0xcc)
    int32_t rax_13 = rdx_14 | 0x100000
    
    if (((*(rdi_2 + 0x50) u>> 0x14).b & 1) == 0)
        rax_13 = rdx_14
    
    *(rdi_2 + 0x50) = rax_13
    sub_14090a0d0(rdi_2 + 0x40, arg1 + 0x1a8)
    int64_t* rcx_15 = *(arg1 + 0x2d8)
    int64_t rax_15
    
    if (rcx_15 == 0)
        rax_15 = 0
    else
        rax_15 = (*(*rcx_15 + 0x28))(rcx_15)
    
    *(rdi_2 + 0x88) = rax_15
    *(rdi_2 + 0x30) = *(arg1 + 0x124)
    *(rdi_2 + 0x70) = *(arg1 + 0xac)
    *(rdi_2 + 0x74) = *(arg1 + 0xb0)
    
    if (rbp.b == 0 && rdi_2 + 0x78 != arg1 + 0xb8)
        int64_t rdi_3 = sx.q(*(arg1 + 0xc0))
        int64_t rsi_2 = *(arg1 + 0xb8)
        int32_t r8_2 = *(rdi_2 + 0x84)
        *(rdi_2 + 0x80) = rdi_3.d
        
        if (rdi_3.d != 0 || r8_2 != 0)
            sub_14083a1f0(rdi_2 + 0x78, rdi_3.d, r8_2)
            memcpy(*(rdi_2 + 0x78), rsi_2, (rdi_3 << 5).d)
        else
            *(rdi_2 + 0x84) = rdi_3.d

result = 1
label_140cd0a94:
__security_check_cookie(rax_1 ^ &var_a8)
return result
