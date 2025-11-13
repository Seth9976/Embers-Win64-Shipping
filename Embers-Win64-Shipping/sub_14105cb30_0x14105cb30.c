// 函数: sub_14105cb30
// 地址: 0x14105cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpLibFileName_2
int64_t* rax = sub_140b13b30(&lpLibFileName_2)
int32_t rdx = rax[1].d
int32_t rdx_1 = neg.d(rdx)
int64_t var_28 = *rax
*rax = 0
int32_t rcx_2 = rax[1].d
int32_t rcx_3 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0x2f + rcx_2

if (rdx_4 s> rcx_3)
    sub_1405947f0(&var_28, rdx_4)

sub_140a2cf70(&var_28, u"Binaries/ThirdParty/NVIDIA/NVaftermath/Win64/", 0x2d)
int16_t* lpLibFileName_4 = lpLibFileName_2

if (lpLibFileName_4 != 0)
    sub_140a74f90(lpLibFileName_4)

lpLibFileName_2 = nullptr
int32_t var_30 = 0
sub_1405947f0(&lpLibFileName_2, 0x1c)
int32_t rbx = var_30 + 0x1c

if (rbx s> 0)
    sub_140594770(&lpLibFileName_2)

int16_t* lpLibFileName_3 = lpLibFileName_2
sub_1405a7220(lpLibFileName_3, 0x1c, "GFSDK_Aftermath_Lib.x64.dll", 0x1c, 0x3f)
int16_t* lpLibFileName_1

if (rcx_2 s> 1)
    int32_t rbx_1
    
    if (rbx == 0)
        rbx_1 = 0
    else
        rbx_1 = rbx - 1
    
    int32_t rax_1
    
    if (rcx_2 == 0)
        rax_1 = rcx_2 + 1
    
    if (rcx_2 != 0 || rbx_1 == 0)
        rax_1 = 0
    
    int64_t r14_1 = var_28
    int32_t rcx_9 = rax_1 + rbx_1
    lpLibFileName_2 = nullptr
    var_30 = rcx_2
    
    if (rcx_2 != 0 || rcx_9 != 0)
        sub_1405a4c70(&lpLibFileName_2, rcx_9 + rcx_2, 0)
        memcpy(lpLibFileName_2, r14_1, rcx_2 * 2)
    else
        var_30 = 0
    
    sub_140a20ba0(&lpLibFileName_2, lpLibFileName_3, rbx_1)
    lpLibFileName_1 = lpLibFileName_2
    rbx = var_30
    lpLibFileName_2 = nullptr
    int64_t var_30_1 = 0
else
    lpLibFileName_1 = lpLibFileName_3
    lpLibFileName_3 = nullptr

int16_t* const lpLibFileName = &data_142d40450

if (rbx != 0)
    lpLibFileName = lpLibFileName_1

rbx.b = LoadLibraryW(lpLibFileName) == 0

if (lpLibFileName_1 != 0)
    sub_140a74f90(lpLibFileName_1)

if (lpLibFileName_3 != 0)
    sub_140a74f90(lpLibFileName_3)

int64_t rcx_15 = var_28
int32_t result = zx.d(rbx.b) ^ 1
data_143e2c7c8 = result

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
