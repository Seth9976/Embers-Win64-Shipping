// 函数: sub_140f71920
// 地址: 0x140f71920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140de1940(arg1 + 0x2e0, *(arg2 + 0x1d0))
sub_14065da90(arg1 + 0x6a0, arg2 + 0x330)
*(arg1 + 0x6b8) = *(arg2 + 0x348)
sub_140692f90(arg1 + 0x6c0, arg2 + 0x350)
*(arg1 + 0x6d0) = *(arg2 + 0x360)
*(arg1 + 0x6d4) = *(arg2 + 0x364)
sub_140692f90(arg1 + 0x6d8, arg2 + 0x368)
*(arg1 + 0x6e8) = *(arg2 + 0x378)
*(arg1 + 0x6e9) = *(arg2 + 0x379)
sub_140692f90(arg1 + 0x6f0, arg2 + 0x380)
*(arg1 + 0x700) = *(arg2 + 0x390)
*(arg1 + 0x701) = *(arg2 + 0x391)
sub_1407473e0(arg1 + 0x708, arg2 + 0x398)
*(arg1 + 0x718) = *(arg2 + 0x3a8)
*(arg1 + 0x728) = *(arg2 + 0x3b8)
sub_140692f90(arg1 + 0x730, arg2 + 0x3c0)
*(arg1 + 0x758) = *(arg2 + 0x3d0)
*(arg1 + 0x75c) = *(arg2 + 0x3d4)
sub_140692f90(arg1 + 0x760, arg2 + 0x3d8)
*(arg1 + 0x740) = *(arg2 + 0x3e8)
*(arg1 + 0x744) = *(arg2 + 0x3ec)
sub_140692f90(arg1 + 0x748, arg2 + 0x3f0)
*(arg1 + 0x770) = *(arg2 + 0x400)
*(arg1 + 0x774) = *(arg2 + 0x404)
sub_140692f90(arg1 + 0x778, arg2 + 0x408)
sub_140d962e0(arg1 + 0x548, arg2 + 0x1d8)
*(arg1 + 0x598) = *(arg2 + 0x228)
sub_140692f90(arg1 + 0x5a0, arg2 + 0x230)
*(arg1 + 0x5b0) = *(arg2 + 0x240)
*(arg1 + 0x5b8) = *(arg2 + 0x248)
sub_140692f90(arg1 + 0x5c0, arg2 + 0x250)
sub_140693390(arg1 + 0x5d0, arg2 + 0x260)
*(arg1 + 0x5f8) = *(arg2 + 0x288)
sub_140692f90(arg1 + 0x600, arg2 + 0x290)
*(arg1 + 0x610) = *(arg2 + 0x2a0)
*(arg1 + 0x618) = *(arg2 + 0x2a8)
sub_140692f90(arg1 + 0x620, arg2 + 0x2b0)
*(arg1 + 0x630) = *(arg2 + 0x2c0)
*(arg1 + 0x640) = *(arg2 + 0x2d0)
sub_140692f90(arg1 + 0x648, arg2 + 0x2d8)
*(arg1 + 0x658) = *(arg2 + 0x2e8)
*(arg1 + 0x668) = *(arg2 + 0x2f8)
sub_140692f90(arg1 + 0x670, arg2 + 0x300)
*(arg1 + 0x680) = *(arg2 + 0x310)
*(arg1 + 0x688) = *(arg2 + 0x318)
sub_140692f90(arg1 + 0x690, arg2 + 0x320)
*(arg1 + 0x794) = *(arg2 + 0x430)
int64_t var_2f8 = 0
int32_t var_2f0 = 0

if (arg2 + 0x438 != &var_2f8 && *(arg2 + 0x440) != 0)
    int64_t* rcx_20 = *(arg2 + 0x438)
    
    if (rcx_20 != 0)
        (*(*rcx_20 + 0x40))(rcx_20, &var_2f8)

sub_140e24c00(arg1, &var_2f8)
sub_14065da90(arg1 + 0x2a8, arg2 + 0x1a0)
*(arg1 + 0x2c0) = *(arg2 + 0x1b8)
sub_140692f90(arg1 + 0x2c8, arg2 + 0x1c0)
int64_t var_2b0 = 0
int32_t var_2a8 = 0
void*** var_2a0
void**** rax_26 = sub_140ef7130(&var_2a0)
void* rax_27 = sub_140e13900()
int64_t* rax_28 = j_sub_140a82f30(0x70)
char arg_8
int64_t* rbx_1

if (rax_28 == 0)
    rbx_1 = nullptr
else
    var_2f8 = *(arg2 + 0x420)
    void* rcx_26 = *(arg2 + 0x428)
    var_2f0.q = rcx_26
    
    if (rcx_26 != 0)
        *(rcx_26 + 8) += 1
    
    void*** var_2c0 = *rax_26
    void* rax_30 = rax_26[1]
    void* var_2b8_1 = rax_30
    
    if (rax_30 != 0)
        *(rax_30 + 8) += 1
    
    char arg_9 = 0
    
    if (*(arg2 + 0x41b) != 0)
        arg_8 = *(arg2 + 0x41a)
        arg_9 = 1
    
    char arg_11 = 0
    char arg_10
    
    if (*(arg2 + 0x419) != 0)
        arg_10 = *(arg2 + 0x418)
        arg_11 = 1
    
    void** var_290
    rbx_1 = sub_140f66170(rax_28, arg1, sub_140ddd070(&var_290, rax_27), &arg_10, &arg_8, &var_2b0, 
        &var_2c0, &var_2f8)

if (arg1 + 0x2d8 != &arg_8)
    int64_t* rsi_1 = *(arg1 + 0x2d8)
    *(arg1 + 0x2d8) = rbx_1
    
    if (rsi_1 != 0)
        sub_140f67a30(rsi_1)
        j_sub_140a74f90(rsi_1)
else if (rbx_1 != 0)
    sub_140f67a30(rbx_1)
    j_sub_140a74f90(rbx_1)

int64_t* var_298

if (var_298 != 0)
    var_298[1].d -= 1
    
    if (var_298[1].d == 1)
        (**var_298)(var_298)
        int32_t temp1_1 = *(var_298 + 0xc)
        *(var_298 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_298 + 8))(var_298, 1)

int64_t* rax_37 = sub_140a84c80(0, 0x20, 0)

if (rax_37 != 0)
    rax_37[1] = arg1
    *rax_37 = &data_142ee2080
    rax_37[3] = sub_140a387b0()

int64_t var_2e8 = 0
int64_t var_2e0 = 0
char var_2d8 = 1
int64_t var_2d0 = 0
int32_t var_2c8 = 0

if (rax_37 != 0)
    (*(*rax_37 + 0x40))(rax_37, &var_2d0)

sub_140f15630(**(arg1 + 0x2d8), &var_2e8)
uint64_t result = sub_140745b20(&var_2d0)
int64_t rcx_38 = var_2e8

if (rcx_38 != 0)
    result = sub_140a74f90(rcx_38)

if (rax_37 != 0)
    (*(*rax_37 + 0x38))(rax_37, 0)
    result = sub_140a84c80(rax_37, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
