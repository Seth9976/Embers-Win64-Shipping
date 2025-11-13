// 函数: sub_142065e10
// 地址: 0x142065e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)

if (rsi.d == 0)
    int64_t result
    result.b = 1
    return result

int64_t rbx = *arg2
uint64_t var_18 = 0
int32_t var_10 = rsi.d
sub_140638750(&var_18, rsi.d, 0)
uint64_t rbx_1 = var_18
memcpy(rbx_1, rbx, (rsi << 2).d)
sub_142045a20(rbx_1, var_10)
int32_t rax = *rbx_1
int64_t* rdi

if (rax s< 0)
    rdi.b = 0
else
    int32_t rdx_3 = arg1[0x94].d
    
    if (rax s>= rdx_3)
        rdi.b = 0
    else
        int32_t rax_2 = *(rbx_1 + (sx.q(var_10 - 1) << 2))
        
        if (rax_2 s< 0 || rax_2 s>= rdx_3)
            rdi.b = 0
        else
            int128_t zmm1_1 = sub_142065f00(arg1, rbx_1, var_10)
            
            if ((arg1[0xbc].b & 8) != 0)
                sub_1420516f0(arg1, 1, 0, zmm1_1)
            
            sub_141ee8490(arg1)
            rdi.b = 1

sub_140a74f90(rbx_1)
return zx.q(rdi.b)
