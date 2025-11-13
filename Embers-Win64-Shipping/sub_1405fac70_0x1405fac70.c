// 函数: sub_1405fac70
// 地址: 0x1405fac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
int64_t* rax = sub_14060a8e0()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    (*(*rax + 0x390))(rax)
    rax_1 = rax[0x23]

char result = sub_1405fa740(*(arg1 + 0x38), *(rax_1 + 0x29))

if (result == 0)
    return result

sub_140597df0(arg1 + 0x28, arg3)
int128_t var_138_1 = data_142d57d10
int64_t var_128_1 = -1
int32_t var_120_1 = 0
int64_t var_118_1 = 0
int16_t var_110_1 = 0

if (arg7 != 0)
    var_138_1 = *arg7
    var_128_1.o = arg7[1]
    var_118_1.o = arg7[2]

int64_t var_78[0x2]
int64_t (* arg_8)[0x2] = &var_78
var_78[0] = 0
int64_t var_68_1 = 0
int64_t r13_1 = *(arg1 + 0x40)
int64_t var_108_1 = r13_1
int64_t* rbx_1 = *(arg1 + 0x48)
int64_t* var_100_1 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

int64_t var_e0 = *arg2
int64_t* rax_4 = arg2[1]

if (rax_4 != 0)
    rax_4[1].d += 1

int64_t var_d0
sub_140596d10(&var_d0, arg3)
char var_c0_1 = arg4
int128_t var_b8_1 = var_138_1
int128_t var_a8_1 = var_128_1.o
int128_t var_98_1 = var_118_1.o
int64_t var_88_1 = r13_1
int64_t var_100_2 = 0
int64_t var_108_2 = 0
void* var_f8
sub_1405e9320(&var_f8, (zx.d(arg4) ^ 1) + 2, &var_e0, &var_78, arg5, arg6)
int64_t* var_f0

if (var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        (**var_f0)(var_f0)
        int32_t rax_8 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_f0 + 8))(var_f0, 1)

if (rbx_1 != 0)
    int32_t rax_10 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rax_10 == 1 && rbx_1 != 0)
        (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_9 = var_d0

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rdi_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rax_4 + 8))(rax_4, zx.q(rdi_1))

return 1
