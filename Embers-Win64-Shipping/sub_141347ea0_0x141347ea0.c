// 函数: sub_141347ea0
// 地址: 0x141347ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_68
sub_140a2e390(&var_68, u"Visualize MotionBlur", arg3)
int16_t* const r15 = &data_142d40450
int16_t* const rbx = &data_142d40450
int16_t* rsi = var_68
int32_t var_60

if (var_60 != 0)
    rbx = rsi

uint128_t var_58 = data_142f2cb30
int128_t zmm7 =
    sub_142409910(arg2, 0x41a00000, 0x42500000, rbx, sub_1423de050(), &var_58, &data_14399f5e0)
TEB* gsbase
int64_t r13 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ec1200 s> *(0x14 + r13))
    _Init_thread_header(&data_143ec1200)
    
    if (data_143ec1200 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_19 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.MotionBlurDebug", r8_3)
        int64_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0
        else
            int64_t rdx_2 = *rax_19
            rax_20 = (*(rdx_2 + 0x58))(rax_19, rdx_2)
        
        data_143ec11f8 = rax_20
        _Init_thread_footer(&data_143ec1200)

void* rax_3 = data_143ec11f8

if (rax_3 != 0)
    *(rax_3 + 4)

sub_140a2e390(&var_68, u"%d, %d", zx.q(*(**arg1 + 0x3c)))

if (rsi != 0)
    sub_140a74f90(rsi)

var_58 = data_142f2cb30
int128_t zmm6 = sub_142409910(arg2, zmm7, 0x42840000, FrameNo, r.MotionBlurDebug:", 
    sub_1423de050(), &var_58, &data_14399f5e0)
int16_t* const rbx_1 = &data_142d40450
int16_t* rsi_1 = var_68

if (var_60 != 0)
    rbx_1 = rsi_1

var_58 = data_142f2cb30
int128_t zmm7_1 =
    sub_142409910(arg2, 0x435c0000, zmm6, rbx_1, sub_1423de050(), &var_58, &data_14399f5e0)

if (data_143ec1210 s> *(0x14 + r13))
    _Init_thread_header(&data_143ec1210)
    
    if (data_143ec1210 == 0xffffffff)
        int64_t* rcx_20 = data_143db18d0
        
        if (rcx_20 == 0)
            sub_140a53c40()
            rcx_20 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_22 = (*(*rcx_20 + 0xb0))(rcx_20, u"r.VelocityTest", r8_4)
        int64_t rax_17
        
        if (rax_22 == 0)
            rax_17 = 0
        else
            int64_t rdx_3 = *rax_22
            rax_17 = (*(rdx_3 + 0x58))(rax_22, rdx_3)
        
        data_143ec1208 = rax_17
        _Init_thread_footer(&data_143ec1210)

void* rax_8 = data_143ec1208

if (rax_8 != 0)
    *(rax_8 + 4)

void* var_88_2
var_88_2.d = zx.d(sub_1414d5e30())
sub_140a2e390(&var_68, u"%d, %d, %d", zx.q(*(**arg1 + 0x50)))

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

var_58 = data_142f2cb30
int128_t zmm6_1 = sub_142409910(arg2, zmm7_1, 0x42a00000, Paused, r.VelocityTest, Parallel:", 
    sub_1423de050(), &var_58, &data_14399f5e0)
int16_t* const rbx_2 = &data_142d40450
int16_t* rsi_2 = var_68

if (var_60 != 0)
    rbx_2 = rsi_2

var_58 = data_142f2cb30
int128_t zmm7_2 =
    sub_142409910(arg2, 0x435c0000, zmm6_1, rbx_2, sub_1423de050(), &var_58, &data_14399f5e0)
void* rbx_3 = *arg1
sub_140acff80(rbx_3 + 0x4a50)
sub_140a2e390(&var_68, u"View=%.4x PrevView=%.4x", zx.q(sub_140acff80(rbx_3 + 0x340)))

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

var_58 = data_142f2cb30
int128_t zmm6_2 =
    sub_142409910(arg2, zmm7_2, 0x42bc0000, ViewMatrix:", sub_1423de050(), &var_58, &data_14399f5e0)
int16_t* rbx_4 = var_68

if (var_60 != 0)
    r15 = rbx_4

var_58 = data_142f2cb30
uint64_t result =
    sub_142409910(arg2, 0x435c0000, zmm6_2, r15, sub_1423de050(), &var_58, &data_14399f5e0)

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
