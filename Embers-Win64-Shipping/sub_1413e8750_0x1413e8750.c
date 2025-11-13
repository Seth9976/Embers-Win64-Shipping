// 函数: sub_1413e8750
// 地址: 0x1413e8750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4420)
void var_4428
int64_t rax_1 = __security_cookie ^ &var_4428
int32_t rsi = 0
int32_t var_43f8 = 0
int64_t var_4318
sub_1413c1ea0(&var_4318)
int32_t var_43e8 = 0xca000000
int64_t var_43c0 = (_mm_unpacklo_ps(0xca000000, 0xca000000)).q
int64_t var_43b4 = (_mm_unpacklo_ps(0x4a000000, 0x4a000000)).q
var_4318 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_43b8 = 0xca000000
float zmm0[0x4] = data_142f794d0
int128_t var_4398
__builtin_memcpy(&var_4398, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
int128_t var_4308
__builtin_memcpy(&var_4308, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
int32_t var_43c8 = 0x4a000000
int32_t var_43ac = 0x4a000000
float var_4328[0x4] = zmm0
int128_t var_4298
__builtin_memcpy(&var_4298, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x
        00", 
    0x30)
char var_43a8 = 1
int32_t var_43e8_1 = 0
int32_t var_4310 = 0
int128_t var_4358
__builtin_memcpy(&var_4358, 
    "\x00\x00\x00\x35\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x35\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xb4\x00\x00\x00\x
        00", 
    0x30)
int128_t var_42c8
__builtin_memcpy(&var_42c8, 
    "\x00\x00\x00\x35\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x35\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xb4\x00\x00\x00\x
        00", 
    0x30)
void var_15c8
sub_1422d8af0(&var_15c8, &var_4318)
int32_t zmm6_1 = sub_1419a21e0(0)
void var_4128
sub_1413c14b0(&var_4128, &var_15c8)

if (sub_140a80f40() == 0)
    uint32_t rax_3
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
        void*** rax_5 = j_sub_140a82f30(0x15d0)
        void*** rdi_1 = rax_5
        int64_t* var_43e0
        
        if (rax_5 == 0)
            rdi_1 = nullptr
        else
            rdi_1[1].d = 0xff
            *rdi_1 = &data_142d40498
            int64_t var_43d0_1 = 0
            var_43e0 = nullptr
            *(rdi_1 + 0xc) = 1
            rdi_1[0x2b8].b = 0
            rsi = 4
            *rdi_1 = &data_142f790e8
            rdi_1[0x2b9] = 0
        
        if ((rsi.b & 8) != 0)
            rsi &= 0xfffffff7
            int64_t* var_43f0
            
            if (var_43f0 != 0)
                var_43f0[9].d -= 1
                
                if (var_43f0[9].d == 1)
                    sub_140a2f6e0(var_43f0)
        
        if ((rsi.b & 4) != 0 && var_43e0 != 0)
            var_43e0[9].d -= 1
            
            if (var_43e0[9].d == 1)
                sub_140a2f6e0(var_43e0)
        
        sub_1413c0af0(&rdi_1[2], &var_4128)
        rdi_1[0x2b6].d = zmm6_1
        rdi_1[0x2b7] = arg2
        int64_t* rbx_1 = rdi_1[0x2b9]
        int64_t* var_43d8_1 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = var_43d8_1
        
        sub_1413f8530(rdi_1, nullptr, 0xff, 1)
        
        if (rbx_1 != 0)
            int32_t rax_9 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_9 == 1)
                sub_140a2f6e0(var_43d8_1)
    else
        void var_2b78
        sub_1413c0af0(&var_2b78, &var_4128)
        char var_4408_2 = 0
        sub_1411989d0(&data_143f02b98, arg2, &var_2b78, zmm6_1)
        sub_1413c58e0(&var_2b78)
else
    char var_4408_1 = 0
    sub_1411989d0(&data_143f02b98, arg2, &var_4128, zmm6_1)

sub_1413c58e0(&var_4128)
sub_1419a21e0(0)
sub_1413c58e0(&var_15c8)
void var_41b0
sub_1413c3330(&var_41b0)
int32_t var_41b8 = 0
int64_t var_41c0

if (var_41c0 != 0)
    sub_140a74f90(var_41c0)

int32_t var_41f8 = 0
int64_t var_4200
int32_t var_41f4

if (var_41f4 != 0)
    sub_140638cc0(&var_4200, 0)

int32_t var_41d0 = 0xffffffff
int32_t var_41cc = 0
void var_41f0
void* result = sub_14059a8e0(&var_41f0, 0)
int64_t var_41e0

if (var_41e0 != 0)
    result = sub_140a74f90(var_41e0)

int64_t rcx_18 = var_4200

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

__security_check_cookie(rax_1 ^ &var_4428)
return result
