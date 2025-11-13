// 函数: sub_141c81200
// 地址: 0x141c81200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int32_t r14 = 0

if (arg2 != rbx)
    *arg2 = *rbx
    *rbx = 0
    sub_1405aeff0(&arg2[1], &rbx[1])

arg2[2] = rbx[2]
int64_t result = sub_141c8be40(arg1, 0, 1, arg4)
int64_t rdx_1 = *arg1
int32_t i = arg1[1].d
int64_t var_48 = rdx_1

if (i s> 1)
    uint64_t rbx_1
    
    do
        int32_t rbp_1 = r14 * 2
        rbx_1 = zx.q(rbp_1 + 1)
        
        if ((rbx_1 + 1).d s< i)
            int64_t rax_6 = (sx.q(rbp_1) + 2) * 3
            int64_t* rsi_1 = *(rdx_1 + (rax_6 << 3))
            int64_t rcx_2 = sx.q(rbx_1.d) * 3
            int64_t* rcx_3 = *(rdx_1 + (rcx_2 << 3))
            int64_t* rax_9 = (*(*rcx_3 + 0x68))(rcx_3)
            int64_t rdx_2 = *rsi_1
            int64_t rax_11 = *(*(rdx_2 + 0x68))(rsi_1, rdx_2)
            int64_t rax_12
            
            if (rax_11 != *rax_9)
                rax_12.b = rax_11 - *rax_9 s> 0
            else
                rax_12.b = *(rdx_1 + (rcx_2 << 3) + 0x10) s< *(rdx_1 + (rax_6 << 3) + 0x10)
            
            rdx_1 = var_48
            
            if (rax_12.b != 0)
                rbx_1 = zx.q(rbp_1)
            
            rbx_1 = zx.q(rbx_1.d + 1)
        
        int64_t rcx_5 = sx.q(r14) * 3
        int64_t* rsi_2 = *(rdx_1 + (rcx_5 << 3))
        int128_t* r15_2 = rdx_1 + (rcx_5 << 3)
        int64_t rcx_6 = sx.q(rbx_1.d) * 3
        int128_t* r14_1 = rdx_1 + (rcx_6 << 3)
        int64_t* rcx_7 = *(rdx_1 + (rcx_6 << 3))
        int64_t* rax_16 = (*(*rcx_7 + 0x68))(rcx_7)
        int64_t rdx_3 = *rsi_2
        int64_t rax_18 = *(*(rdx_3 + 0x68))(rsi_2, rdx_3)
        
        if (rax_18 != *rax_16)
            result.b = rax_18 - *rax_16 s> 0
        else
            result.b = r14_1[1].q s< r15_2[1].q
        
        if (result.b == 0)
            break
        
        if (r15_2 != r14_1)
            int128_t zmm3 = *r15_2
            int64_t zmm2 = r15_2[1].q
            *r15_2 = *r14_1
            r15_2[1].q = r14_1[1].q
            *r14_1 = zmm3
            r14_1[1].q = zmm2
        
        rdx_1 = var_48
        r14 = rbx_1.d
    while (((rbx_1 << 1) + 1).d s< i)

return result
