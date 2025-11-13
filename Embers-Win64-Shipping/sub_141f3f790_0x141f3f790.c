// 函数: sub_141f3f790
// 地址: 0x141f3f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rdi = arg1
char rcx = (data_1439c7a34).b
char var_50 = 0
int128_t var_78 = zx.o(0)
int64_t var_48 = 0
int32_t var_68 = 1
int64_t* rcx_1 = data_143f0f180
int32_t var_54 = (1 << rcx) - 1
int128_t var_64 = data_143dbb1e0
int32_t var_40 = 0
int64_t var_d8
(*(*rcx_1 + 0x5e8))(rcx_1, &var_d8, &data_143f02b98, zx.q(*(rdi + 0x48)), *(rdi + 0x50), 
    *(rdi + 0x4c), 0, &var_78)
void* r12 = rdi + 0x58
void* var_88 = r12

if (r12 != &var_d8)
    int64_t* rbx_1 = *r12
    *r12 = var_d8
    var_d8 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_8
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_10 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_10)
                    void* const rax_11
                    
                    if (rax_10 != 0)
                        rax_11 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_11 = nullptr
                    
                    *(rax_11 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)

sub_1405d1550(&var_d8)
sub_1408c8cf0(rdi + 0x10, *r12)
int64_t* r8 = *(rdi + 0x60)

if (r8 != 0)
    int32_t rdx_3 = 0
    int32_t rbx_2 = 0
    int32_t var_c4_1 = 0
    int32_t var_c0_1 = 0
    int32_t rax_17 = (&data_1439c85f4)[sx.q(*(rdi + 0x50)) * 0xa]
    int32_t rcx_9 = *(rdi + 0x4c)
    var_d8.d = rax_17
    
    if (rcx_9 s> 0)
        do
            int32_t i_1 = 0
            int32_t var_c8_1 = rdx_3
            int32_t i = 0
            int32_t rdi_1 = rdx_3
            int32_t r14_1 = 1 << (rcx_9.b - rbx_2.b - 1)
            uint64_t rsi_3 = zx.q(r14_1 * r14_1 * rax_17)
            int32_t var_bc_1 = rsi_3.d
            
            do
                int64_t* rcx_12 = data_143f0f180
                char var_e8_1 = 0
                int32_t var_d0
                int32_t* var_f0_1 = &var_d0
                int32_t var_f8_1 = 1
                int64_t r8_1 = *r12
                var_d0 = 0
                char var_108
                var_108.d = 0
                int64_t rax_19 = (*(*rcx_12 + 0x600))(rcx_12, &data_143f02b98, r8_1, zx.q(i), 
                    var_108, rbx_2, var_f8_1, var_f0_1, var_e8_1)
                int32_t rbx_3 = 0
                
                if (r14_1 s> 0)
                    int32_t count = r14_1 * var_d8.d
                    
                    do
                        memcpy(zx.q(rbx_3 * var_d0) + rax_19, sx.q(rdi_1) + **(arg1 + 0x60), count)
                        rbx_3 += 1
                        rdi_1 += count
                    while (rbx_3 s< r14_1)
                    
                    i = i_1
                    rdi_1 = var_c8_1
                    rsi_3 = zx.q(var_bc_1)
                    r12 = var_88
                
                int64_t* rcx_17 = data_143f0f180
                rbx_2 = var_c0_1
                var_f8_1.b = 0
                var_108.d = 0
                (*(*rcx_17 + 0x608))(rcx_17, &data_143f02b98, *r12, zx.q(i), var_108, rbx_2, 
                    var_f8_1)
                i += 1
                rdi_1 += rsi_3.d
                i_1 = i
                var_c8_1 = rdi_1
            while (i s< 6)
            
            rdi = arg1
            rbx_2 += 1
            var_c0_1 = rbx_2
            rdx_3 = var_c4_1 + ((rsi_3 * 3).d << 1)
            rax_17 = var_d8.d
            rcx_9 = *(rdi + 0x4c)
            var_c4_1 = rdx_3
        while (rbx_2 s< rcx_9)
        
        r8 = *(rdi + 0x60)
    
    r8[1].d = 0
    
    if (*(r8 + 0xc) != 0)
        sub_1405c5510(r8, 0)

int64_t* rcx_19 = data_143f0f180
int32_t var_ac = 0x7f7fffff
int32_t var_b8 = 0x1010102
int64_t var_b4 = 0
int64_t var_a8 = 0
char var_a0 = 0
void var_90
(*(*rcx_19 + 0x28))(rcx_19, &var_90, &var_b8)
sub_1405d1600(rdi + 0x18, &var_90)
int64_t result = sub_1405d1550(&var_90)
__security_check_cookie(rax_1 ^ &var_128)
return result
