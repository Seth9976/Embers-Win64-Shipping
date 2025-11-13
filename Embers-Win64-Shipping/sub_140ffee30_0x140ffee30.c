// 函数: sub_140ffee30
// 地址: 0x140ffee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
uint32_t rbx = zx.d(arg6)
int16_t* var_2c0
sub_140fe7a50(&var_2c0, arg1, nullptr)
void* rax_2 = sub_140fe83b0(rbx)
sub_140ffdc90(arg1, arg7)
int16_t* const rbp = &data_142d40450

if (arg1 == 0x8007000e)
    void var_2b0
    int64_t* rax_4 = sub_140ac6680(
        _vfprintf_p_l(&var_2b0, 
            Out of video memory trying to allocate a texture! Make sure your video card has the minimum "
    "required memory, try lowering the resolution and/or closing", 
        Developer.MessageLog"))
    PWSTR rdx_2
    
    if (rax_4[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_4
    
    sub_140b709d0(0, rdx_2, u"Error")
    int64_t* var_2a8
    
    if (var_2a8 != 0)
        var_2a8[1].d -= 1
        
        if (var_2a8[1].d == 1)
            (**var_2a8)(var_2a8)
            int32_t rdi_1 = *(var_2a8 + 0xc)
            *(var_2a8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_2a8 + 8))(var_2a8, zx.q(rdi_1))
    
    sub_140b721f0(1)

int32_t var_2b8

if (var_2b8 != 0)
    rbp = var_2c0

void var_178
sub_1405eb940(&var_178, arg3)
void var_298
sub_1405eb940(&var_298, arg2)
uint32_t var_2d8 = rbx
void* var_2e0 = rax_2
int32_t var_2e8 = arg5
int32_t var_2f0 = arg4
int16_t* const var_2f8 = rbp
int32_t r9
int32_t var_300 = r9
int64_t var_70
int64_t var_308 = var_70
int64_t var_190
sub_140af98a0("Unknown", 0x174, 
    %s failed \n at %s:%u \n with error %s, \n Size=%ix%i Format=%s(0x%08X)", var_190)
int64_t var_198

if (var_198 != 0)
    sub_140a74f90(var_198)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t result = sub_140afbb40()
int16_t* rcx_12 = var_2c0

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_328)
return result
