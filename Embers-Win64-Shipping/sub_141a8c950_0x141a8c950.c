// 函数: sub_141a8c950
// 地址: 0x141a8c950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = 0
__builtin_memset(arg1, 0, 0x11)
int128_t zmm0 = *arg2
uint64_t var_60 = 0
*(arg1 + 0x18) = zmm0
arg1[6] = *arg3
arg1[8] = 0

if (arg1[6] != 0)
    void* rax_1 = arg3[2]
    void* rcx = &arg3[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx)

int32_t i = arg1[4].d
int32_t i_1 = i
uint64_t rax

if (i s>= 2)
    int64_t rbp_1 = 0
    int32_t r15_1 = 0
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((i - 1) * i)
    int32_t rax_7 = (temp1_1 - temp0_1) s>> 1
    int128_t zmm6
    
    if (rax_7 s> 0)
        zmm0, zmm6 = sub_14113b8b0(&var_78, rax_7)
        r15_1 = var_70_1.d
        rbp_1 = var_78
    
    if (i s> 0)
        int128_t var_48_1 = zmm6
        
        if (0 s>= i)
            goto label_141a8cac2
        
        do
            int64_t rax_9 = sx.q(rsi.d) << 4
            int64_t rdi_1 = rax_9
            uint64_t j_1 = zx.q(i - rsi.d)
            uint64_t j
            
            do
                void* rax_10 = arg1[8]
                void* rcx_2 = &arg1[0xa]
                int64_t rbx_1 = arg1[3]
                
                if (rax_10 != 0)
                    rcx_2 = rax_10
                
                arg1[6]((*(*rcx_2 + 8))(rcx_2), rbx_1 + rax_9, rdi_1 + rbx_1)
                int64_t rbx_2 = sx.q(r15_1)
                zmm6 = zmm0
                r15_1 = (rbx_2 + 1).d
                var_70_1.d = r15_1
                
                if (r15_1 s> var_70_1:4.d)
                    zmm0, zmm6 = sub_14113b710(&var_78, rbx_2.d)
                    r15_1 = var_70_1.d
                    rbp_1 = var_78
                
                rdi_1 += 0x10
                *(rbp_1 + (rbx_2 << 2)) = zmm6.d
                j = j_1
                j_1 -= 1
            while (j != 1)
            rsi = var_60
            i = i_1
        label_141a8cac2:
            rsi = zx.q(rsi.d + 1)
            var_60 = rsi
        while (rsi.d s< i)
    
    var_78 = rbp_1
    var_70_1.d = r15_1
    rax = sub_141acd950(arg1, &var_78, i)
else
    rax.b = 1

arg1[2].b = rax.b

if (*arg3 != 0)
    void* rdx_6 = arg3[2]
    void* rcx_6 = &arg3[4]
    
    if (rdx_6 != 0)
        rcx_6 = rdx_6
    
    int64_t rdx_7 = *rcx_6
    (*(rdx_7 + 0x10))(rcx_6, rdx_7)

return arg1
