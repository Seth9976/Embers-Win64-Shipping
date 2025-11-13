// 函数: sub_14220abb0
// 地址: 0x14220abb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_143303c30
arg1[0x44] = &data_143304388
arg1[0x47] = 0
int32_t rax = arg1[1].d
*(arg1 + 0x32) |= 2
arg1[6].b = 0
*(arg1 + 0x231) = 1
int64_t rax_2
int64_t rbx_1

if (((rax u>> 4).b & 1) != 0)
    rbx_1 = arg1[2]
    rax_2 = sub_14255d000()

if (((rax u>> 4).b & 1) == 0 || rbx_1 != rax_2)
    int64_t* rax_7 = sub_14255d000()
    void* rax_8 = rax_7[0x23]
    
    if (rax_8 == 0)
        int64_t rdx_4 = *rax_7
        (*(rdx_4 + 0x390))(rax_7, rdx_4)
        rax_8 = rax_7[0x23]
    
    arg1[0x47] = *(rax_8 + 0x238)
else
    int64_t* rax_3 = sub_1424a3bf0()
    void* rcx = rax_3[0x23]
    
    if (rcx == 0)
        int64_t rdx_1 = *rax_3
        (*(rdx_1 + 0x390))(rax_3, rdx_1)
        rcx = rax_3[0x23]
    
    int64_t var_18
    int64_t* rax_4 = sub_140d30800(rcx + 0x218, &var_18)
    int16_t* rbx_3
    
    if (rax_4[1].d == 0)
        rbx_3 = &data_142d40450
    else
        rbx_3 = *rax_4
    
    void* rax_6 = sub_140d2f240(sub_142497110(), 0, rbx_3, 0, 0, 0)
    int64_t rcx_4 = var_18
    arg1[0x47] = rax_6
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_141dd7d00(arg1, 1)
*(arg1 + 0x5b) |= 1
*(arg1 + 0x5f) = 1
arg1[0x22].d = 0x40400000
arg1[0x21].d = 0x42c80000
sub_141dd8f80(arg1, 1)
arg1[0x45].d &= 0xffffffd8
arg1[0x45].d |= 0x10
*(arg1 + 0x5a) |= 0xa
*(arg1 + 0x22c) = 0x42800000
arg1[0x4c].d = 0x412fd70a
arg1[0x49].d = 0
*(arg1 + 0xf2) = 3
*(sub_140f76fa0(arg1) + 0x31) = 2
return arg1
