// 函数: sub_141cb4260
// 地址: 0x141cb4260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_48 = nullptr
int64_t var_40 = 0
void* rax = sub_141cb9750()
int64_t rdi = *(arg2 + 8)
char arg_10 = 0
int16_t* const rbx = *(rax + 0x18)
char* var_30 = &arg_10
void*** (* var_38)() = sub_140cf2ef0
void* rax_1 = sub_140a756e0(&var_38, &data_1439aa2e4)
int64_t r13 = sx.q(*(rax_1 + 0x18))
int32_t rcx_1 = (r13 + 1).d
*(rax_1 + 0x18) = rcx_1

if (rcx_1 s> *(rax_1 + 0x1c))
    sub_1405c4d20(rax_1 + 0x10)

int64_t rax_2 = *(rax_1 + 0x10)
int64_t rcx_4 = r13 * 5
*(rax_2 + (rcx_4 << 2)) = rdi
*(rax_2 + (rcx_4 << 2) + 8) = rbx
*(rax_2 + (rcx_4 << 2) + 0x10) = 0x202
char rax_4 = sub_1408301c0(arg2, *(sub_141cb9750() + 0x18), &var_48)
int16_t* rsi_1 = var_48
int16_t* rax_7

if (rax_4 != 0)
    char* var_30_1 = &arg_10
    rbx = &data_142d40450
    arg_10.q = arg2
    var_38 = sub_141c99d60
    
    if (var_40.d != 0)
        rbx = rsi_1
    
    int64_t* rax_5
    int512_t zmm2_1
    rax_5, zmm2_1 = sub_141cb9750()
    rax_7 = sub_140be11d0(rax_5, rbx, arg1, 0, zmm2_1, 0, data_143ddb418, &var_38, 1)

if (rax_4 == 0 || rax_7 == 0)
    rbx.b = 0
else
    sub_141ca3350(arg2, &var_48)
    rbx = var_48
    arg_10.q = 0
    
    if (rbx != 0)
        int32_t rcx_8
        rcx_8.b = sub_140b5b8a0(var_40.d, 0) == 0
        rcx_8.b |= var_40:4.d != 0
        
        if (rcx_8.b != 0)
            int16_t** i = *arg1
            
            for (void* rcx_10 = &i[sx.q(arg1[1].d) * 5]; i != rcx_10; i = &i[5])
                *i = rbx
                i[1] = var_40
    
    rbx.b = 1

arg_10 = 0
char* var_30_2 = &arg_10
var_38 = sub_140cf2ef0
int64_t* rax_10 = sub_140a756e0(&var_38, &data_1439aa2e4) + 0x10
rax_10[1].d -= 1
sub_1413a8970(rax_10)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

return zx.q(rbx.b)
