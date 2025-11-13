// 函数: sub_140a18190
// 地址: 0x140a18190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = data_143dbb180
MFCreateMediaSession(0, &arg1[2])
int64_t* rcx = arg1[2]
(*(*rcx + 0x20))(rcx, arg1, 0)
struct IMFSourceResolver ppISourceResolver = 0
int64_t* var_70 = nullptr
MFCreateSourceResolver(&ppISourceResolver)
int16_t* const r14 = &data_142d40450
int16_t* const r8

if (arg3[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg3

int16_t* var_50
sub_140a2e390(&var_50, u"%s.%s", r8)
struct IMFSourceResolver ppISourceResolver_1 = ppISourceResolver
int64_t* var_a0 = &var_70
int32_t var_48

if (var_48 != 0)
    r14 = var_50

int32_t arg_18 = 2
int64_t* var_a8 = &arg_18
int32_t rax_3 = (*(*ppISourceResolver_1 + 0x18))(ppISourceResolver_1, r14, 1, 0, var_a8, var_a0)
struct IMFSourceResolver ppISourceResolver_2 = ppISourceResolver
int64_t rdx_3 = *ppISourceResolver_2
(*(rdx_3 + 0x10))(ppISourceResolver_2, rdx_3)

if (rax_3 s< 0)
    arg1[4].d
    arg1[4].d = 1
else
    int64_t* rcx_3 = var_70
    (**rcx_3)(rcx_3, &data_142d60428, &arg1[3])
    int64_t* rcx_4 = var_70
    (*(*rcx_4 + 0x10))(rcx_4)
    int64_t* rcx_5 = arg1[3]
    int64_t* var_88 = nullptr
    int32_t rsi_1 = 0
    int32_t r14_1 = 0
    (*(*rcx_5 + 0x40))(rcx_5, &var_88)
    struct IMFTopology ppTopo = 0
    MFCreateTopology(&ppTopo)
    int64_t* rcx_7 = var_88
    int32_t arg_8 = 0
    (*(*rcx_7 + 0x108))(rcx_7, &arg_8)
    int32_t rbx_2 = 0
    
    if (arg_8 u> 0)
        do
            int64_t* rcx_8 = var_88
            int32_t arg_10 = 0
            int64_t* var_68 = nullptr
            char var_98
            (*(*rcx_8 + 0x110))(rcx_8, zx.q(rbx_2), &arg_10, &var_68, var_a8, var_a0, var_98)
            
            if (arg_10 != 0)
                var_98 = arg5
                var_a0 = arg4
                var_a8 = var_68
                int64_t var_60
                sub_140a16220(arg1, &var_60, ppTopo, var_88, var_a8, var_a0, var_98)
                int32_t rax_10 = var_60.d
                int32_t rcx_10 = var_60:4.d
                
                if (rax_10 != 0 || rcx_10 != 0)
                    rsi_1 = rax_10
                    r14_1 = rcx_10
            
            int64_t* rcx_11 = var_68
            (*(*rcx_11 + 0x10))(rcx_11)
            rbx_2 += 1
        while (rbx_2 u< arg_8)
    
    int64_t* rcx_13 = arg1[2]
    (*(*rcx_13 + 0x38))(rcx_13, 0, ppTopo)
    struct IMFTopology ppTopo_1 = ppTopo
    (*(*ppTopo_1 + 0x10))(ppTopo_1)
    int64_t* rcx_14 = var_88
    (*(*rcx_14 + 0x10))(rcx_14)
    *arg2 = rsi_1
    *(arg2 + 4) = r14_1

int16_t* rcx_15 = var_50

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg2
