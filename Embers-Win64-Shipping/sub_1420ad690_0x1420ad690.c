// 函数: sub_1420ad690
// 地址: 0x1420ad690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)
int128_t zmm6 = arg2

if (rcx == 0)
    return 

int64_t rax = (*(*rcx + 0x260))(rcx)
int64_t rdi_1 = rax

if (rax == 0)
    return 

int64_t r12_1 = *(*(arg3 + 0x20) + 0x20)
void* rax_2 = sub_1424a23e0()
void* rdx_1 = *(rdi_1 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_2 + 0x30)
    rax = *(rdi_1 + 0x220)
    
    if (rax != 0)
        int64_t rcx_3 = rax
        
        if (not(zmm6.d f<= *(arg3 + 0x28)) && arg4 == 0)
            int32_t i = 0
            
            if (*(arg1 + 0x78) s> 0)
                int128_t* rbx_1 = nullptr
                
                do
                    int64_t rsi_1 = *(arg1 + 0x70)
                    arg2 = *(rbx_1 + rsi_1)
                    float zmm0_1 = arg2.d
                    
                    if (not(arg2.d f>= zmm6.d) && not(arg2.d f< *(arg3 + 0x28)))
                        rdx_1.b = 1
                        *(*(rdi_1 + 0x220) + 0x43f) = 2
                        *(*(rdi_1 + 0x220) + 0x4f0) = *(rbx_1 + rsi_1 + 8)
                        *(*(rdi_1 + 0x220) + 0x4f4) = 0
                        int64_t* rcx_5 = *(rdi_1 + 0x220)
                        rax, rdx_1 = (*(*rcx_5 + 0x278))(rcx_5, rdx_1, 0)
                        zmm0_1 = *(rbx_1 + rsi_1)
                    
                    zmm0_1 = zmm0_1 f+ *(rbx_1 + rsi_1 + 4)
                    
                    if (not(zmm0_1 f>= zmm6.d) && not(zmm0_1 f< *(arg3 + 0x28)))
                        int64_t* rcx_6 = *(rdi_1 + 0x220)
                        (*(*rcx_6 + 0x278))(rcx_6, 0, 0)
                        *(*(rdi_1 + 0x220) + 0x43f) = 2
                        *(*(rdi_1 + 0x220) + 0x4f0) = 0xffffffff
                        *(*(rdi_1 + 0x220) + 0x4f4) = 0xffffffff
                    
                    i += 1
                    rbx_1 += 0xc
                while (i s< *(arg1 + 0x78))
                
                rcx_3 = *(rdi_1 + 0x220)
        
        if (*(rcx_3 + 0x43f) == 2)
            int32_t rax_10 = *(rcx_3 + 0x4f4)
            
            if ((*(r12_1 + 0x280) & 2) == 0)
                rax = zx.q(rax_10 + 1)
            else
                rax = zx.q(rax_10 - 1)
            
            *(rcx_3 + 0x4f4) = rax.d

*(arg3 + 0x28) = zmm6.d
