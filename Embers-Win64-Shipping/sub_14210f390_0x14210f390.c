// 函数: sub_14210f390
// 地址: 0x14210f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rsi = u"False"

if ((arg1[0x9c].b & 2) != 0)
    rsi = u"True"

int64_t rbp = 0
int32_t rdi = 0
int32_t rax = 0
int64_t var_48 = 0
uint64_t var_40 = 0

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rax = var_40:4.d
        rdi = var_40.d
        rbp = var_48
    
    rdi += rbx_1.d + 1
    var_40.d = rdi
    
    if (rdi s> rax)
        sub_140594770(&var_48)
        rdi = var_40.d
        rbp = var_48
    
    UnDecorator::getReferenceType(rbp, rsi, (rbx_1.d + 1) * 2)

void arg_8
int64_t* rax_1 = sub_140b58170(&arg_8, "HasSceneColor", 1)
var_40 = 0
int64_t rbx_3 = *rax_1
var_48 = rbx_3
int32_t r12
uint64_t r15

if (rdi != 0)
    sub_1405a4c70(&var_40, rdi, 0)
    r15 = var_40
    memcpy(r15, rbp, rdi * 2)
    int32_t var_34
    r12 = var_34
    rbx_3 = var_48
else
    r12 = 0
    r15 = 0

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_2 = (rsi_1 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_5 = (rsi_1 << 5) + *arg2
*rax_5 = rbx_3
rax_5[1] = r15
rax_5[2].d = rdi
*(rax_5 + 0x14) = r12
rax_5[3] = 1

if (rbp != 0)
    sub_140a74f90(rbp)

return sub_140cdbf60(arg1, arg2) __tailcall
