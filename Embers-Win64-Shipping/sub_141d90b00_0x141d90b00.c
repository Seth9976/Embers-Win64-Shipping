// 函数: sub_141d90b00
// 地址: 0x141d90b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143238a88
arg1[1] = 0
arg1[2].d = 0
__builtin_memset(&arg1[3], 0, 0x15)
uint64_t var_18
uint64_t* rax
int512_t zmm1
rax, zmm1 = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_18, arg2)
uint64_t rcx_1 = *rax
int32_t rdx = rax[1].d
int32_t rdx_1 = neg.d(rdx)
*rax = 0
int32_t r8 = rax[1].d
uint64_t var_38 = rcx_1
int32_t rcx_2 = *(rax + 0xc)
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0xc + r8
int32_t var_2c = rcx_2
rax[1] = 0

if (rdx_4 s> rcx_2)
    sub_1405947f0(&var_38, rdx_4)

sub_140a20ba0(&var_38, u".replayinfo", 0xb)
uint64_t rcx_5 = var_18

if (rcx_5 != 0)
    zmm1 = sub_140a74f90(rcx_5)

sub_140a464c0()
uint64_t rdx_5 = &data_142d40450

if (r8 != 0)
    rdx_5 = var_38

char const (* r9)[0x4] = data_14399ea08
int64_t* rax_1 = (*(r9 + 0x18))(&data_14399ea08, rdx_5, 0, r9)

if (rax_1 != 0)
    if ((*(*rax_1 + 0x28))(rax_1) != 0)
        var_18 = 0
        int32_t var_10_1 = 0
        sub_140a1d9d0(rax_1, &var_18, zmm1)
        uint64_t r14_1 = var_18
        uint64_t var_28 = 0
        int32_t var_20_1 = var_10_1
        
        if (var_10_1 != 0)
            sub_1405a4c70(&var_28, var_10_1, 0)
            memcpy(var_28, r14_1, var_10_1 * 2)
        else
            int32_t var_1c_1 = 0
        
        (*arg1)[5](arg1, &var_28)
        uint64_t rcx_11 = var_28
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        uint64_t rcx_12 = var_18
        *(arg1 + 0x2c) = 1
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    (**rax_1)(rax_1, 1)

if (var_38 != 0)
    sub_140a74f90(var_38)

return arg1
