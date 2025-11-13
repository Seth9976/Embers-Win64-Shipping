// 函数: sub_1423ceb40
// 地址: 0x1423ceb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[3].d = 0xffffffff
*(arg1 + 0x1c) = 4
*arg1 = &data_14333f488
arg1[2] = &data_14333f638
arg1[4] = 0
arg1[5] = 0
arg1[6] = arg2
arg1[7] = &data_143328318
arg1[8] = &data_142f18c08
arg1[9] = 0
sub_1405ab8c0(&arg1[0xa])
arg1[7] = &data_14333f420
arg1[8] = &data_14333f428
arg1[0xa] = &data_14333f468
__builtin_memset(&arg1[0xd], 0, 0x48)
arg1[0x17].d &= 0xffffffc9
*(arg1 + 0xb4) = data_143a30338
*(arg1 + 0xbc) = 0
int64_t* rcx_1 = arg1[6]
*(arg1 + 0xc4) = 0
arg1[0x16].d = 5
int32_t rax_3
bool cond:0_1

if (rcx_1 != 0)
    cond:0_1 = (*(*rcx_1 + 0x108))(rcx_1) != 0
    rax_3 = 1

if (rcx_1 == 0 || not(cond:0_1))
    rax_3 = 0

arg1[0x17].d &= 0xfffffffe
arg1[0x17].d |= rax_3
j_sub_140a1b080()
int64_t var_18
sub_140a2e390(&var_18, u"Build: %s", u"++UE4+Release-4.25-CL-14469661")

if (&arg1[4] == &var_18)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = arg1[4]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[4] = var_18
    int32_t var_10
    arg1[5].d = var_10
    int32_t var_c
    *(arg1 + 0x2c) = var_c

arg1[0x17].d &= 0xfffffff7
*arg1 = &data_14333f678
arg1[2] = &data_14333f828
arg1[0x19] = 0
*(arg1 + 0xbc) = data_143f5b330
void* const rbx

if (arg2 == 0)
    rbx = nullptr
else
    rbx = (*(*arg2 + 0x30))(arg2)

int32_t* rax_10 = j_sub_140a82f30(0x110)
int32_t* rax_11

if (rax_10 == 0)
    rax_11 = nullptr
else
    uint32_t rcx_6
    
    if (rbx == 0)
        rcx_6 = data_1439c7a08
    else
        rcx_6 = zx.d(*(rbx + 0x118))
    
    rax_11 = sub_1423fa990(rax_10, arg1, 0, rbx, rcx_6, 0, 0x3f800000)

arg1[0x19] = rax_11
rax_11[0x1e] = 0
return arg1
