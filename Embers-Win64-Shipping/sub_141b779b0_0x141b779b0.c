// 函数: sub_141b779b0
// 地址: 0x141b779b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2 = 0
int128_t* result = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_78 = 0
int64_t r12 = 0
int32_t var_bc = 0
char var_108 = 0
uint128_t var_d8
void* r15 = &var_d8 - arg1
int32_t* r14 = arg1 + 0x20
void* var_e8 = r15
int64_t* rdi = arg3

do
    int32_t rsi_1 = 1 << rbx.b
    int32_t rcx_2 = rsi_1 & *(arg1 + 0x1c)
    
    if (rcx_2 != 0)
        if (0f f== *r14)
            goto label_141b77b61
        
        goto label_141b77a40
    
    int32_t var_100
    uint128_t var_b8
    int64_t var_a8
    int32_t var_a0
    uint128_t zmm0
    
    if ((*(arg1 + 0x58) & rsi_1) == 0)
    label_141b77a40:
        
        if (rcx_2 != 0)
            zmm0.d = r14[-8].d f/ *r14
            *(r15 + r14 - 0x20) = zmm0.d
            rax_2 = var_bc | rsi_1
            var_bc = rax_2
    else
    label_141b77b61:
        
        if (*(arg1 + 0x7c) == 0)
            *(arg1 + 0x78) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x7c) = 1
            int32_t r8_1 = -1
            void* rdx_1 = rdi[2]
            var_100 = 0xffffffff
            int32_t var_fc_1 = 0
            int64_t rbx_1
            
            if (rdx_1 == 0)
                rbx_1 = var_100.q
            else
                int64_t var_f8
                sub_140d3a3a0(&var_f8, rdx_1)
                rbx_1 = var_f8
                var_100.q = rbx_1
                r9_2 = var_fc_1
                r8_1 = var_100
            
            int64_t* r10_1 = *rdi
            int32_t* rdx_2 = r10_1[3]
            void* rax_11 = &rdx_2[sx.q(r10_1[4].d) * 9]
            int32_t rax_15
            uint128_t zmm3
            
            if (rdx_2 == rax_11)
            label_141b77bfa:
                (*(*r10_1 + 0x28))(r10_1, &var_b8, rdi[2], rdi[3], var_108, var_100)
                
                if (rdi[3] != 0)
                    void* rdi_1 = *rdi
                    int64_t r15_1 = sx.q(*(rdi_1 + 0x20))
                    int32_t rax_13 = (r15_1 + 1).d
                    *(rdi_1 + 0x20) = rax_13
                    
                    if (rax_13 s> *(rdi_1 + 0x24))
                        sub_140adefe0(rdi_1 + 0x18)
                    
                    int64_t rcx_10 = *(rdi_1 + 0x18)
                    int64_t rdx_5 = r15_1 * 9
                    rdi = arg3
                    r15 = var_e8
                    *(rcx_10 + (rdx_5 << 2)) = rbx_1
                    *(rcx_10 + (rdx_5 << 2) + 8) = var_b8
                    *(rcx_10 + (rdx_5 << 2) + 0x18) = var_a8
                    *(rcx_10 + (rdx_5 << 2) + 0x20) = var_a0
                
                zmm3 = var_b8
                rax_15 = var_a0
                zmm0 = zx.o(var_a8)
            else
                while (*rdx_2 != r8_1 || rdx_2[1] != r9_2)
                    rdx_2 = &rdx_2[9]
                    
                    if (rdx_2 == rax_11)
                        goto label_141b77bfa
                
                zmm3 = *(rdx_2 + 8)
                rax_15 = rdx_2[8]
                zmm0 = zx.o(*(rdx_2 + 0x18))
            
            rbx = zx.q(var_108)
            arg2 = zx.q(var_78)
            int32_t var_9c_1 = 0x7f
            var_a0 = rax_15
            *(arg1 + 0x5c) = zmm3
            zmm0.q = zmm0.q
            var_a8.o = zmm0
            *(arg1 + 0x6c) = zmm0
        
        *(r15 + r14 - 0x20) = r14[0xf]
        rax_2 = var_bc | rsi_1
        var_bc = rax_2
    
    if ((*(arg1 + 0x58) & rsi_1) != 0)
        zmm0 = r14[7]
        
        if ((rax_2 & rsi_1) != 0)
            zmm0.d = zmm0.d f+ *(&var_d8 + (r12 << 2))
        
        *(&var_d8 + (r12 << 2)) = zmm0.d
        rax_2 = var_bc | rsi_1
        var_bc = rax_2
    
    if ((rax_2 & rsi_1) == 0)
        uint128_t var_98
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rdi
            var_78 = 1
            (*(*rcx_3 + 0x28))(rcx_3, &var_b8, rdi[2], rdi[3], var_108, var_100)
            arg2.b = 1
            var_98 = var_b8
            int32_t var_54_1 = 0x7f
            int32_t var_58_1 = var_a0
            zmm0.q = var_a8
            uint128_t var_60 = zmm0
            uint128_t var_88_1 = zmm0
        
        *(&var_d8 + (r12 << 2)) = *(&var_98 + (r12 << 2))
        rax_2 = var_bc | rsi_1
        var_bc = rax_2
    
    rbx.b += 1
    r12 += 1
    r14 = &r14[1]
    var_108 = rbx.b
while (rbx.b u< 7)

*result = var_d8
int32_t var_c8
result[1].d = var_c8.d
int32_t var_c0
*(result + 0x18) = var_c0.d
int32_t var_c4
*(result + 0x14) = var_c4.d
__security_check_cookie(rax_1 ^ &var_128)
return result
