// 函数: sub_140d9f870
// 地址: 0x140d9f870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rsi = 0
int16_t rdi = 0
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140da5fb0(*(arg1 + 0x18), arg4)
void** var_38
sub_140da70c0(*(arg1 + 0x20), &var_38, rax, 0, zmm1, *(arg4 + 0x4c))
void** rbx_1 = var_38

if (rbx_1 != 0)
    sub_140d9a4a0(*rbx_1, zx.q(arg4[9].d), arg5)
    void* rax_1 = *rbx_1
    char rcx_3 = (*(rax_1 + 8)).b
    int32_t rax_3
    
    if ((rcx_3 & 1) == 0)
        if ((rcx_3 & 2) == 0)
            rax_3 = 0
        else
            void* rax_5 = *(rax_1 + 0x80)
            rax_3 = sub_142b93e80(*(rax_5 + 0x28), *(rax_5 + 0x20))
    else if (rbx_1[0x20].b != 0)
        rax_3 = sub_142b93e80(*(rax_1 + 0x5c), *(*(rax_1 + 0x80) + 0x20))
    else
        rax_3 = sub_142b93e80(sx.d(*(rax_1 + 0x6c)), *(*(rax_1 + 0x80) + 0x20))
    
    void* rax_6 = *rbx_1
    rsi = ((rax_3 + 0x20) s>> 6).w
    char rcx_7 = (*(rax_6 + 8)).b
    int32_t rax_8
    
    if ((rcx_7 & 1) == 0)
        if ((rcx_7 & 2) == 0)
            rax_8 = 0
        else
            void* rax_10 = *(rax_6 + 0x80)
            rax_8 = sub_142b93e80(*(rax_10 + 0x2c), *(rax_10 + 0x20))
    else if (rbx_1[0x20].b != 0)
        rax_8 = sub_142b93e80(*(rax_6 + 0x64) - *(rax_6 + 0x5c), *(*(rax_6 + 0x80) + 0x20))
    else
        rax_8 = sub_142b93e80(sx.d(*(rax_6 + 0x6e)), *(*(rax_6 + 0x80) + 0x20))
    
    rdi = ((rax_8 + 0x20) s>> 6).w

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

void*** rax_13 = j_sub_140a82f30(0x80)
void*** rbx_3 = rax_13

if (rax_13 == 0)
    rbx_3 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rbx_3 = &data_142ec7ac8
    void** rcx_14 = *arg3
    *arg3 = 0
    var_30:4.d = *(arg3 + 0xc)
    var_38 = rcx_14
    int32_t rcx_15 = arg3[1].d
    arg3[1] = 0
    var_30.d = rcx_15
    char var_68
    var_68.q = arg4[1]
    sub_140d92a40(&rbx_3[2], &var_38, rsi, rdi, var_68, &arg4[2], arg6)

*arg2 = &rbx_3[2]
arg2[1] = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rbx_3)[1](rbx_3, 1)

sub_140d949f0(arg3)
return arg2
