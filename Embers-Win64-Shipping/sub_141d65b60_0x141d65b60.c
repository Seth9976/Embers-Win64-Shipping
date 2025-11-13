// 函数: sub_141d65b60
// 地址: 0x141d65b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[5]
arg1[1] = 0
arg1[2] = 0
*arg1 = &data_14302dca0
arg1[3] = 0
arg1[4] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
*arg1 = &data_14322dfb0
arg1[0xd] = 0
arg1[0xe] = 0
char arg_8
int64_t rbx = *sub_140b58170(&arg_8, "LevelSequence", 1)
j_sub_140b3db50()
void* rax_2 = sub_140b3da90(&data_143de7d78, rbx)
int64_t* i = *(rax_2 + 8)

for (void* rbp_2 = &i[sx.q(*(rax_2 + 0x10)) * 2]; i != rbp_2; i = &i[2])
    int64_t* rcx_1
    
    if (i[1].d == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *i
    
    int64_t var_28
    (*(*rcx_1 + 0x48))(rcx_1, &var_28)
    int64_t rbx_1 = sx.q(arg1[0xe].d)
    int32_t rax_4 = (rbx_1 + 1).d
    arg1[0xe].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x74))
        sub_1405a4f90(&arg1[0xd])
    
    int64_t* rcx_5 = &arg1[0xd][rbx_1 * 2]
    *rcx_5 = var_28
    int64_t* var_20
    rcx_5[1] = var_20
    
    if (var_20 != 0)
        var_20[1].d += 1
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)

int32_t rdx_4 = arg1[0xe].d
int64_t rcx_8 = arg1[0xd]
arg_8 = 0
sub_141d64ea0(rcx_8, rdx_4, arg_8)
return arg1
