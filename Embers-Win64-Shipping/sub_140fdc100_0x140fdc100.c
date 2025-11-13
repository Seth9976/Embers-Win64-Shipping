// 函数: sub_140fdc100
// 地址: 0x140fdc100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
bool cond:0 = arg1[6] != 0
*arg1 = &data_142ef59f0

if (not(cond:0))
    int64_t* rcx = arg1[5]
    
    if (rcx != 0)
        int32_t var_48
        (*(*rcx + 0x50))(rcx, &var_48)
        int32_t var_44
        int32_t var_3c
        
        if (var_3c == 0x10000 && var_44 == 2)
            int64_t* rsi_1 = arg1[5]
            
            if (rsi_1 != 0)
                (*(*rsi_1 + 8))(rsi_1)
            
            int32_t r15_1 = data_14399fa54
            int32_t r12_1 = var_48
            void* rbp_4 = ((zx.q(sub_140fe86a0(r12_1)) + sx.q((r15_1 - 1) u% 3) * 0x11) << 4) +
                &data_143e2bbe0
            int64_t rbx_3 = sx.q(*(rbp_4 + 8))
            int32_t rax_7 = (rbx_3 + 1).d
            *(rbp_4 + 8) = rax_7
            
            if (rax_7 s> *(rbp_4 + 0xc))
                sub_1405a4f90(rbp_4)
            
            int64_t** rbx_5 = (rbx_3 << 4) + *rbp_4
            *rbx_5 = rsi_1
            
            if (rsi_1 != 0)
                (*(*rsi_1 + 8))(rsi_1)
            
            rbx_5[1].d = r12_1
            *(rbx_5 + 0xc) = r15_1
            
            if (rsi_1 != 0)
                (*(*rsi_1 + 0x10))(rsi_1)

sub_14081c910(&arg1[9])
int64_t* rcx_8 = arg1[5]

if (rcx_8 != 0)
    int64_t rdx_4 = *rcx_8
    (*(rdx_4 + 0x10))(rcx_8, rdx_4)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

__security_check_cookie(rax_1 ^ &var_68)
return arg1
