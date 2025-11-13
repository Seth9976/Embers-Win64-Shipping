// 函数: sub_142069ab0
// 地址: 0x142069ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg2 + 0x40))

if (*(arg1 + 0x468) s<= 0)
    return 

void* rax = sub_141f641a0(arg1, *(arg1 + 0x460), 0)
void* rbp_1 = rax

if (rax == 0 || rbx.d s<= 0)
    return 

int64_t rbx_1 = 0
int128_t zmm6
int128_t var_28_1 = zmm6
int128_t zmm7
int128_t var_38_1 = zmm7
int128_t zmm8
int128_t var_48_1 = zmm8
int128_t zmm9
int128_t var_58_1 = zmm9

do
    int64_t rcx = sx.q(*(*(arg1 + 0x550) + (rbx_1 << 2)))
    
    if (rcx.d s>= 0 && rcx.d s< *(rbp_1 + 0x28))
        int64_t rax_1 = *(rbp_1 + 0x20)
        int64_t rcx_1 = rcx * 2
        int64_t rdi_1 = *(arg2 + 0x28)
        zmm6 = *(rax_1 + (rcx_1 << 3))
        zmm8 = *(rax_1 + (rcx_1 << 3) + 4)
        zmm7 = *(rax_1 + (rcx_1 << 3) + 8)
        zmm9 = *(rax_1 + (rcx_1 << 3) + 0xc)
        int64_t* rcx_2 = *(arg2 + 0x20)
        (*(*rcx_2 + 0x28))(rcx_2)
        int64_t* rcx_3 = *(arg2 + 0x20)
        (*(*rcx_3 + 0x20))(rcx_3)
        zmm6.d = zmm6.d f* 32767f
        int32_t rcx_4 = int.d(zmm6.d)
        int16_t rax_4
        
        if (rcx_4 s>= 0xffff8000)
            rax_4 = 0x7fff
            
            if (rcx_4 s< 0x7fff)
                rax_4 = rcx_4.w
        else
            rax_4 = -0x8000
        
        zmm8.d = zmm8.d f* 32767f
        *(rdi_1 + (rbx_1 << 3)) = rax_4
        int32_t rcx_5 = int.d(zmm8.d)
        int16_t rax_5
        
        if (rcx_5 s>= 0xffff8000)
            rax_5 = 0x7fff
            
            if (rcx_5 s< 0x7fff)
                rax_5 = rcx_5.w
        else
            rax_5 = -0x8000
        
        zmm7.d = zmm7.d f* 32767f
        *(rdi_1 + (rbx_1 << 3) + 2) = rax_5
        int32_t rcx_6 = int.d(zmm7.d)
        int16_t rax_6
        
        if (rcx_6 s>= 0xffff8000)
            rax_6 = 0x7fff
            
            if (rcx_6 s< 0x7fff)
                rax_6 = rcx_6.w
        else
            rax_6 = -0x8000
        
        zmm9.d = zmm9.d f* 32767f
        *(rdi_1 + (rbx_1 << 3) + 4) = rax_6
        int32_t rcx_7 = int.d(zmm9.d)
        
        if (rcx_7 s>= 0xffff8000)
            rax = 0x7fff
            
            if (rcx_7 s< 0x7fff)
                rax = zx.q(rcx_7)
        else
            rax = 0xffff8000
        
        *(rdi_1 + (rbx_1 << 3) + 6) = rax.w
    
    rbx_1 += 1
while (rbx_1 s< rbx)
