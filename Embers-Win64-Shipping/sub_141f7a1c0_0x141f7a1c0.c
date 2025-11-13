// 函数: sub_141f7a1c0
// 地址: 0x141f7a1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbp = nullptr
arg1[1] = 0
*arg1 = &data_143282eb8
arg1[2] = 0
arg1[3] = 0
arg1[4] = 1
arg1[5].d = 0x40a00000
arg1[6] = 0
sub_140af2b60()
int16_t* var_18

if (sub_140b21a10(&data_143dbb3f0, u"NoTextureStreaming") != 0)
    int64_t* rbx_1 = data_143f5a128
    sub_140a2e390(&var_18, u"%d", 0)
    int16_t* const rdx_2 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        rdx_2 = var_18
    
    (*(*rbx_1 + 0x80))(rbx_1, rdx_2, 0x7000000)
    int16_t* rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

sub_141f7fb70(arg1, 1)
void*** rbx_2

if (sub_141e644e0() == 0)
    void*** rax_5 = j_sub_140a82f30(0x130)
    
    if (rax_5 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_141e715b0(rax_5)
    
    arg1[7] = rbx_2
else
    sub_141e56260(&var_18)
    void*** rax_3
    char r8_1
    rax_3, r8_1 = j_sub_140a82f30(0x20)
    
    if (rax_3 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_141e71370(rax_3, &var_18, r8_1)
    
    int16_t* rcx_6 = var_18
    arg1[7] = rbx_2
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
        rbx_2 = arg1[7]

int64_t r14 = sx.q(arg1[3].d)
int32_t rax_7 = (r14 + 1).d
arg1[3].d = rax_7

if (rax_7 s> *(arg1 + 0x1c))
    sub_1405a4d70(&arg1[2])

arg1[2][r14] = rbx_2
void*** rax_9 = j_sub_140a82f30(0x88)
void*** rbx_3

if (rax_9 == 0)
    rbx_3 = nullptr
else
    rbx_3 = sub_141ddd6f0(rax_9)

arg1[8] = rbx_3
int64_t r14_1 = sx.q(arg1[3].d)
int32_t rax_11 = (r14_1 + 1).d
arg1[3].d = rax_11

if (rax_11 s> *(arg1 + 0x1c))
    sub_1405a4d70(&arg1[2])

arg1[2][r14_1] = rbx_3
void*** rax_13 = j_sub_140a82f30(0x80)

if (rax_13 != 0)
    rbp = sub_142428680(rax_13)

arg1[9] = rbp
int64_t rbx_4 = sx.q(arg1[3].d)
int32_t rax_15 = (rbx_4 + 1).d
arg1[3].d = rax_15

if (rax_15 s> *(arg1 + 0x1c))
    sub_1405a4d70(&arg1[2])

arg1[2][rbx_4] = rbp
return arg1
