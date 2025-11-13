// 函数: sub_140fff020
// 地址: 0x140fff020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int16_t* var_2b8
sub_140fe7a50(&var_2b8, arg1, arg4)
sub_140ffdc90(arg1, arg4)
int16_t* const rsi = &data_142d40450

if (arg1 == 0x8007000e)
    void var_2a8
    int64_t* rax_3 = sub_140ac6680(
        _vfprintf_p_l(&var_2a8, 
            Out of video memory trying to allocate a rendering resource. Make sure your vid", 
        D3D11RHI"))
    PWSTR rdx_2
    
    if (rax_3[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_3
    
    sub_140b709d0(0, rdx_2, u"Error")
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

int32_t var_2b0

if (var_2b0 != 0)
    rsi = var_2b8

void var_168
sub_1405eb940(&var_168, arg3)
void var_288
sub_1405eb940(&var_288, arg2)
int16_t* const var_2c8 = rsi
int32_t r9
int32_t var_2d0 = r9
int64_t var_60
int64_t var_2d8 = var_60
int64_t var_180
sub_140af98a0("Unknown", 0x102, u"%s failed \n at %s:%u \n with error %s", var_180)
int64_t var_188

if (var_188 != 0)
    sub_140a74f90(var_188)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t result = sub_140afbb40()
int16_t* rcx_11 = var_2b8

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
