// 函数: sub_142213bc0
// 地址: 0x142213bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* rdi = arg1
int64_t* rax = sub_142218330(arg2)
int64_t arg_18 = *(arg2 + 0xf8)
int32_t rbx = 0
void* rcx_2 = data_143f5b298
int64_t* rsi = rax
int64_t r14 = 0
int64_t var_b8 = 0
int32_t arg_10 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0, 0x24)
int64_t var_a8

if (rcx_2 != 0 && *(rcx_2 + 0x680) != 0)
    int64_t* rax_1 = sub_140d3c6e0(&arg_18)
    
    if (rax_1 != 0)
        int64_t rdx = *rax_1
        int32_t rax_2 = (*(rdx + 0x6a0))(rax_1, rdx)
        int64_t rbx_1 = sx.q(rax_2)
        int32_t var_b0_1
        
        if (rax_2 s> 0)
            var_b0_1 = rbx_1.d
            sub_1405a4d70(&var_b8)
            r14 = var_b8
            memset(r14, 0, rbx_1 << 3)
            arg_10 = var_b0_1
        else if (rax_2 s< 0 && rax_2 != 0)
            var_b0_1 = rbx_1.d
            sub_1405c53d0(&var_b8)
            r14 = var_b8
            arg_10 = var_b0_1
        int32_t rdi_1 = 0
        
        if (rbx_1.d s> 0)
            int64_t rbx_2 = 0
            
            do
                int64_t rsi_1 = *(data_143f5b298 + 0x680)
                int64_t* rax_6 = (*(*rax_1 + 0x548))(rax_1, zx.q(rdi_1))
                
                if (rax_6 != 0)
                    int64_t rdx_3 = *rax_6
                    rsi_1 = (*(rdx_3 + 0x288))(rax_6, rdx_3)
                
                *(r14 + (rbx_2 << 3)) = rsi_1
                rdi_1 += 1
                rbx_2 += 1
            while (rbx_2 s< rbx_1)
            
            rsi = rax
        
        rdi = arg_8
        rbx = arg_10
    
    int64_t rcx_10 = var_a8
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

int64_t var_a0
var_a0:4.d = var_ac
var_a8 = r14
var_a0.d = rbx
int64_t var_88
__builtin_memset(&var_88, 0, 0x33)
int512_t zmm1 = sub_1422119d0(arg2, &var_88)
bool rbx_3 = *sub_142230430(*(rdi + 0x10), &arg_8, zmm1)
int32_t rax_10 = sub_142216be0(arg2)

if (rax_10 != 0)
    bool var_56_1 = ((rax_10 - 1) & 0xfffffffd) == 0
    
    if (data_143a2f080 != 0 && rax_10 - 2 u<= 1)
        int16_t var_58
        char rax_12 = var_58:1.b
        var_58.b = 1
        
        if (rbx_3 == 3)
            rax_12 = 1
        
        var_58:1.b = rax_12

int64_t var_c8 = 0
int128_t* var_d0 = &data_143dbb0c0
int64_t var_98
sub_14222b850(*(rdi + 0x10), arg2, &arg2[8], rsi, &var_a8, &var_98, &var_88)
int32_t rax_13 = sub_14226e220(&arg2[0x78])
int64_t rcx_17 = var_98

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = var_a8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return zx.q(rax_13 == 0)
