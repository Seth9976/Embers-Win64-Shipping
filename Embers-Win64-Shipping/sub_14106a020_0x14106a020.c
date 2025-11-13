// 函数: sub_14106a020
// 地址: 0x14106a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int16_t* var_2b8
sub_1410615f0(&var_2b8, arg1, arg4)
int16_t* const rbp = &data_142d40450

if (arg1 == 0x887a0005)
    sub_1410693f0(arg4, nullptr, 0)
else if (arg1 == 0x8007000e)
    void var_2a8
    int64_t* rax_3 = sub_140ac6680(
        _vfprintf_p_l(&var_2a8, 
            Out of video memory trying to allocate a rendering resource. Make sure your vid", 
        D3D12RHI"))
    PWSTR rdx_1
    
    if (rax_3[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_3
    
    sub_140b709d0(0, rdx_1, u"Error")
    int64_t* var_2a0
    
    if (var_2a0 != 0)
        var_2a0[1].d -= 1
        
        if (var_2a0[1].d == 1)
            (**var_2a0)(var_2a0)
            int32_t rdi_1 = *(var_2a0 + 0xc)
            *(var_2a0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_2a0 + 8))(var_2a0, zx.q(rdi_1))
    
    sub_140b721f0(1)

int16_t* const rdi_2

if (arg5[1].d == 0)
    rdi_2 = &data_142d40450
else
    rdi_2 = *arg5

int32_t var_2b0

if (var_2b0 != 0)
    rbp = var_2b8

void var_168
sub_1405eb940(&var_168, arg3)
void var_288
sub_1405eb940(&var_288, arg2)
int16_t* const var_2c0 = rdi_2
int16_t* const var_2c8 = rbp
int32_t r9
int32_t var_2d0 = r9
int64_t var_60
int64_t var_2d8 = var_60
int64_t var_180
sub_140af98a0("Unknown", 0x245, u"%s failed \n at %s:%u \n with error %s\n%s", var_180)
int64_t var_188

if (var_188 != 0)
    sub_140a74f90(var_188)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140afbb40()
sub_140b19e60()
void* rdx_5 = data_1439a8bd0
(*(rdx_5 + 0x50))(&data_1439a8bd0, rdx_5)
sub_140b19e60()
void* rdx_6 = data_1439a8bd0
int64_t result = (*(rdx_6 + 0x18))(&data_1439a8bd0, rdx_6)
int16_t* rcx_11 = var_2b8

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = *arg5

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
