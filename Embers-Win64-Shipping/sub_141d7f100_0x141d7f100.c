// 函数: sub_141d7f100
// 地址: 0x141d7f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa0) = *(arg1 + 0x28)
void* rdi = *(arg1 + 0x30)
int64_t* rcx = *(arg1 + 0xa8)

if (rdi != rcx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rcx = *(arg1 + 0xa8)
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0xa8) = rdi

int64_t var_68 = 0
int64_t var_60 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"-CustomRenderPasses=", &var_68, 0) != 0)
    sub_140a2ccb0(&var_68, arg1 + 0x58, U",", 1)

uint32_t arg_8 = zx.d(*(arg1 + 0x70))
sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"-CaptureGamut=", &arg_8)
sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"-HDRCompressionQuality=", arg1 + 0x6c)
sub_140af2b60()
sub_140b0e8d0(&data_143dbb3f0, u"-CaptureFramesInHDR=", arg1 + 0x68)
sub_140af2b60()
sub_140b0e8d0(&data_143dbb3f0, u"-DisableScreenPercentage=", arg1 + 0x90)
int64_t var_78 = 0
int64_t var_70 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"-PostProcessingMaterial=", &var_78, 0) != 0)
    void var_38
    int128_t var_58 = *sub_140a1dfc0(&var_78, &var_38)
    sub_140d2c760(arg1 + 0x78, &var_58)

void* rax_6 = sub_140d30a00(arg1 + 0x78, 0)
void* const rdi_1 = rax_6
void* rax_7
void* rcx_5
int64_t rdx_4

if (rax_6 != 0)
    rax_7 = sub_142543940()
    rcx_5 = *(rdi_1 + 0x10)
    rdx_4 = sx.q(*(rax_7 + 0x38))

if (rax_6 == 0 || rdx_4.d s> *(rcx_5 + 0x38) || *(*(rcx_5 + 0x30) + (rdx_4 << 3)) != rax_7 + 0x30)
    rdi_1 = nullptr

*(arg1 + 0x98) = rdi_1
void*** var_48
void**** rax_10 =
    sub_141d73890(&var_48, arg1 + 0x58, arg1 + 0x68, arg1 + 0x6c, &arg_8, arg1 + 0x98, arg1 + 0x90)
int64_t* rcx_8 = rax_10[1]
void*** rdx_6 = *rax_10
void*** var_88 = rdx_6
int64_t* var_80 = rcx_8

if (rcx_8 != 0)
    rcx_8[1].d += 1
    rcx_8 = var_80
    rdx_6 = var_88

if (arg1 + 0xb0 != &var_88)
    *(arg1 + 0xb0) = rdx_6
    var_88 = nullptr
    sub_1405aeff0(arg1 + 0xb8, &var_80)
    rcx_8 = var_80

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        int64_t* rbx_2 = var_80
        (**rbx_2)(rbx_2)
        int32_t rax_13 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_13 == 1)
            int64_t* rcx_11 = var_80
            (*(*rcx_11 + 8))(rcx_11, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rdi_2 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_40 + 8))(var_40, zx.q(rdi_2))

int64_t rcx_14 = var_78

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_68

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t* result
result.b = 1
return result
