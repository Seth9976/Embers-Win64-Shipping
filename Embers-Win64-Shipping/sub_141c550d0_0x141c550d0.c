// 函数: sub_141c550d0
// 地址: 0x141c550d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[4].b == 0
*arg1 = &data_143209958

if (not(cond:0))
    int16_t* const r9_1
    
    if (arg1[3].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = arg1[2]
    
    sub_140af98a0("Unknown", 0x2b, 
        Can't free resource '%s' as it was allocated in permanent pool.", r9_1)
    sub_140afbb40()

int64_t* rcx_2 = arg1[7]

if (rcx_2 != 0)
    if (arg1[8].d == 3)
        int64_t* rax_2 = sub_1405f7040(sub_141f88540())
        int64_t r8_1 = *rax_2
        (*(r8_1 + 0xb0))(rax_2, arg1[7], r8_1)
        rcx_2 = arg1[7]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    arg1[7] = 0

int32_t rcx_3 = arg1[8].d

if (rcx_3 == 0)
label_141c55179:
    int64_t rcx_4 = arg1[0xa]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else if (rcx_3 == 1 && arg1[0xc].b != 0)
    goto label_141c55179

sub_141e50f80(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
