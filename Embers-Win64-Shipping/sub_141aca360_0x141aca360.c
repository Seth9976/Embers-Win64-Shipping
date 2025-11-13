// 函数: sub_141aca360
// 地址: 0x141aca360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_14083ad30(arg1 + 0x48, 0)

void* rbx = *(arg3 + 0x38)
void* arg_8 = rbx

if (rbx == 0)
    return 

int64_t var_38
sub_141e42610(arg3, &var_38)
void* rbp_1 = *(arg1 + 0xa8)
void* r14_3 = sx.q(*(arg1 + 0xb0)) * 0xc0 + rbp_1

if (rbp_1 != r14_3)
    void* rdi_1 = rbp_1 + 0xa8
    
    do
        uint32_t rax_2
        
        if (*(arg1 + 0x125) != 1)
            rax_2 = -1
        else
            rax_2 = zx.d(sub_141e43480(rbx, &data_143f398c8, rdi_1))
        
        *(rdi_1 + 8) = rax_2
        uint64_t rax = sub_141e425d0(arg3, rdi_1)
        uint64_t r8_1
        
        if (rax.d != 0xffffffff)
            r8_1 = zx.q(*(var_38 + sx.q(rax.d) * 0xc + 8))
        
        int64_t rbx_1
        
        if (rax.d == 0xffffffff || r8_1.d s>= *(arg2 + 0xc8)
                || *(*(arg2 + 0xc0) + (r8_1 << 1)) == 0xffff)
            rbx_1 = 0xffffffff
        else
            rbx_1 = sx.q(*(arg1 + 0x50))
            int32_t var_44_1 = rax.d
            int32_t var_40_1 = 0
            int32_t rax_3 = (rbx_1 + 1).d
            *(arg1 + 0x50) = rax_3
            
            if (rax_3 s> *(arg1 + 0x54))
                sub_14083a7e0(arg1 + 0x48)
            
            int64_t rcx_8 = *(arg1 + 0x48)
            int64_t rdx_4 = rbx_1 * 3
            *(rcx_8 + (rdx_4 << 2)) = r8_1.w.q
            *(rcx_8 + (rdx_4 << 2) + 8) = 0
        
        *(rdi_1 + 0xc) = rbx_1.d
        rbp_1 += 0xc0
        rbx = arg_8
        rdi_1 += 0xc0
    while (rbp_1 != r14_3)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
