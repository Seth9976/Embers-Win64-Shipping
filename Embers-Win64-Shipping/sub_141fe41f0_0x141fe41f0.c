// 函数: sub_141fe41f0
// 地址: 0x141fe41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg3
int32_t r15 = arg1[8].d
int128_t var_44
__builtin_memset(&var_44, 0, 0x14)
int128_t var_2c
__builtin_memset(&var_2c, 0, 0x14)
int128_t var_48
int128_t var_30

if (r15 != 0)
    void* rax_1 = arg1[7]
    var_48 = *(rax_1 + 4)
    var_44:0xc.q = *(rax_1 + 0x14)
    var_30 = *(rax_1 + 4)
    var_2c:0xc.q = *(rax_1 + 0x14)
    
    if (r15 != 1)
        int32_t r12_1 = r15 - 1
        
        if (arg1[9].b == 0)
            r15 = r12_1
        
        int32_t rcx = 0
        
        if (r15 s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_2 = 0
                rbx_1 = rcx + 1
                arg3 = &var_48
                
                if (rcx != r12_1)
                    rax_2 = rbx_1
                
                sub_140ad2ca0(sx.q(rcx) * 0x50 + arg1[7], sx.q(rax_2) * 0x50 + arg1[7], arg3, 
                    &var_30)
                rcx = rbx_1
            while (rbx_1 s< r15)
else
    var_48.d = r15
    var_30.d = r15

(*(*arg1 + 0x2b0))(arg1, &var_48, arg3)
int64_t result = (*(*arg1 + 0x2b0))(arg1, &var_30)
int128_t zmm0 = var_48.d
int64_t zmm1 = var_30.d

if (zmm0.d f>= zmm1.d)
    *arg2 = zmm1.d
else
    *arg2 = zmm0.d

zmm0 = var_44.d
zmm1 = var_2c.d

if (zmm0.d f>= zmm1.d)
    arg2[1] = zmm1.d
else
    arg2[1] = zmm0.d

zmm0 = var_44:4.d
zmm1 = var_2c:4.d

if (zmm0.d f>= zmm1.d)
    arg2[2] = zmm1.d
else
    arg2[2] = zmm0.d

zmm0 = var_44:8.d
zmm1 = var_2c:8.d

if (zmm0.d f<= zmm1.d)
    *rdi = zmm1.d
else
    *rdi = zmm0.d

zmm0 = var_44:0xc.d
zmm1 = var_2c:0xc.d

if (zmm0.d f<= zmm1.d)
    rdi[1] = zmm1.d
else
    rdi[1] = zmm0.d

int32_t var_34
zmm0 = var_34
int32_t var_1c
zmm1 = var_1c

if (zmm0.d f<= zmm1.d)
    rdi[2] = zmm1.d
    return result

rdi[2] = zmm0.d
return result
