// 函数: sub_140796680
// 地址: 0x140796680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t var_48 = __security_cookie ^ &var_4c8
void var_368
NewDBIHdr::NewDBIHdr(&var_368)
sub_1407a6260(&var_368, arg2)
void var_398
void var_378
sub_140b2f3e0(&var_398, sub_140596d10(&var_378, &arg3[1]))
int64_t var_458 = 0
int32_t var_450 = 0
sub_1405947f0(&var_458, 0x15)
int32_t rax_3 = var_450 + 0x15
var_450 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_458)

UnDecorator::getReferenceType(var_458, u"InstanceFunctionName", 0x2a)
int64_t var_468 = 0
int64_t* var_98 = &var_458
int32_t var_460 = 0
void* var_90 = &var_398
sub_1405947f0(&var_468, 0x1c)
int32_t rax_4 = var_460 + 0x1c
var_460 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_468)

UnDecorator::getReferenceType(var_468, u"MeshTriCoordinateStructName", 0x38)
void var_3b8
sub_140b2f3c0(&var_3b8, u"MeshTriCoordinate")
int64_t* var_88 = &var_468
void* var_80 = &var_3b8
int64_t var_448 = 0
int32_t var_220
int32_t var_440 = var_220

if (var_220 != 0)
    sub_1405a4c70(&var_448, var_220, 0)
    int64_t var_228
    memcpy(var_448, var_228, var_220 * 2)
else
    int32_t var_43c_1 = 0

void var_3d8
sub_140b2f3e0(&var_3d8, &var_448)
int64_t var_478 = 0
int32_t var_470 = 0
sub_1405947f0(&var_478, 0x12)
int32_t rax_5 = var_470 + 0x12
var_470 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_478)

UnDecorator::getReferenceType(var_478, u"MeshTriangleCount", 0x24)
int64_t* var_78 = &var_478
void* var_70 = &var_3d8
int64_t var_438 = 0
int32_t var_210
int32_t var_430 = var_210

if (var_210 != 0)
    sub_1405a4c70(&var_438, var_210, 0)
    int64_t var_218
    memcpy(var_438, var_218, var_210 * 2)
else
    int32_t var_42c_1 = 0

void var_3f8
sub_140b2f3e0(&var_3f8, &var_438)
int64_t var_488 = 0
int32_t var_480 = 0
sub_1405947f0(&var_488, 0x10)
int32_t rax_6 = var_480 + 0x10
var_480 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_488)

UnDecorator::getReferenceType(var_488, u"MeshVertexCount", 0x20)
int64_t** var_4a8 = nullptr
int64_t* var_68 = &var_488
int32_t rdx_13 = 0
int32_t var_4a0 = 0
void* var_60 = &var_3f8
int64_t** rsi = nullptr
int32_t rax_7 = arg2[1].d
int32_t r15 = 0
int32_t var_49c = 0
int32_t rbx_2 = rax_7 - 1

if (rax_7 == 0)
    rbx_2 = 0

if (rbx_2 + 0x19 s> 0)
    sub_1405947f0(&var_4a8, rbx_2 + 0x19)
    rdx_13 = var_4a0
    r15 = var_49c
    rsi = var_4a8

int32_t r14_1 = rbx_2 + 0x19 + rdx_13

if (r14_1 s> r15)
    sub_140594770(&var_4a8)
    r15 = var_49c
    rsi = var_4a8

int64_t rbx_3 = sx.q(rbx_2)
__builtin_memcpy(rsi, u"DISKELMESH_MAKE_CONTEXT(", 0x30)
memcpy(&rsi[6], *arg2, rbx_3.d * 2)
var_4a8 = rsi
*(rsi + (rbx_3 << 1) + 0x30) = 0
int32_t rax_9
rax_9.b = r14_1 == 0
int32_t rdx_17 = rax_9 + 1 + r14_1

if (rdx_17 s> r15)
    sub_1405947f0(&var_4a8, rdx_17)

sub_140a20ba0(&var_4a8, &data_142da76f4, 1)
int64_t** var_428 = var_4a8
int32_t var_420 = r14_1
int32_t var_41c = r15
int32_t var_4a0_2
var_4a0_2.q = 0
var_4a8 = nullptr
void var_418
sub_140b2f3e0(&var_418, &var_428)
int64_t var_498 = 0
int32_t var_490 = 0
sub_1405947f0(&var_498, 0x19)
int32_t rax_13 = var_490 + 0x19
var_490 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_498)

UnDecorator::getReferenceType(var_498, u"GetDISkelMeshContextName", 0x32)
int64_t* var_58 = &var_498
void* var_50 = &var_418
var_4a8 = &var_98
var_4a0_2.q = &var_48
var_4a8.o = var_4a8.o
void var_e8
sub_140742130(&var_e8, &var_4a8)
int64_t rcx_33 = var_498

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t var_408

if (var_408 != 0)
    sub_140a74f90(var_408)

int64_t rcx_35 = var_488

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int64_t var_3e8

if (var_3e8 != 0)
    sub_140a74f90(var_3e8)

int64_t rcx_37 = var_478

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

int64_t var_3c8

if (var_3c8 != 0)
    sub_140a74f90(var_3c8)

int64_t var_3a8

if (var_3a8 != 0)
    sub_140a74f90(var_3a8)

int64_t rcx_40 = var_468

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = var_458

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

int64_t var_388

if (var_388 != 0)
    sub_140a74f90(var_388)

int64_t rax_14 = *arg3
int16_t* rdx_21

if (rax_14 != data_143cdfa80)
    if (rax_14 == data_143cdfa88)
        rdx_21 = data_14396ecf0
        goto label_140796eef
    
    if (rax_14 == data_143cdfa98)
        rdx_21 = data_14396ecf8
        goto label_140796eef
    
    if (rax_14 == data_143cdfaa8)
        rdx_21 = data_14396ed00
        goto label_140796eef
    
    if (rax_14 == data_143cdfa90)
        rdx_21 = data_14396ed08
        goto label_140796eef
    
    if (rax_14 == data_143cdfaa0)
        rdx_21 = data_14396ed10
        goto label_140796eef
    
    if (rax_14 == data_143cdfab8)
        rdx_21 = data_14396ed18
        goto label_140796eef
    
    if (rax_14 == data_143cdfab0)
        rdx_21 = data_14396ed20
        goto label_140796eef
    
    if (rax_14 == data_143cdfac0)
        rdx_21 = data_14396ed28
        goto label_140796eef
    
    if (rax_14 == data_143cdfac8)
        rdx_21 = data_14396ed30
        goto label_140796eef
    
    if (rax_14 == data_143cdfad0)
        rdx_21 = data_14396ed38
        goto label_140796eef
    
    if (rax_14 == data_143cdfad8)
        rdx_21 = data_14396ed40
        goto label_140796eef
    
    if (rax_14 == data_143cdfae0)
        rdx_21 = data_14396ed48
        goto label_140796eef
    
    if (rax_14 == data_143cdfae8)
        rdx_21 = data_14396ed50
        goto label_140796eef
    
    if (rax_14 == data_143cdf9e0)
        rdx_21 = data_14396ed58
        goto label_140796eef
    
    if (rax_14 == data_143cdf9f0)
        rdx_21 = data_14396ed60
        goto label_140796eef
    
    if (rax_14 == data_143cdf9e8)
        rdx_21 = data_14396ed68
        goto label_140796eef
    
    if (rax_14 == data_143cdf9f8)
        rdx_21 = data_14396ed70
        goto label_140796eef
    
    if (rax_14 == data_143cdfaf0)
        rdx_21 = data_14396ed78
        goto label_140796eef
    
    if (rax_14 == data_143cdfaf8)
        rdx_21 = data_14396ed80
        goto label_140796eef
    
    if (rax_14 == data_143cdfb00)
        rdx_21 = data_14396ed88
        goto label_140796eef
    
    if (rax_14 == data_143cdfb08)
        rdx_21 = data_14396ed90
        goto label_140796eef
    
    if (rax_14 == data_143cdfb10)
        rdx_21 = data_14396ed98
        goto label_140796eef
    
    if (rax_14 == data_143cdfb18)
        rdx_21 = data_14396eda0
        goto label_140796eef
    
    if (rax_14 == data_143cdfb20)
        rdx_21 = data_14396eda8
        goto label_140796eef
    
    if (rax_14 == data_143cdfb28)
        rdx_21 = data_14396edb0
        goto label_140796eef
    
    if (rax_14 == data_143cdfb30)
        rdx_21 = data_14396edb8
        goto label_140796eef
    
    if (rax_14 == data_143cdfb38)
        rdx_21 = data_14396edc0
        goto label_140796eef
    
    if (rax_14 == data_143cdfb40)
        rdx_21 = data_14396edc8
        goto label_140796eef
    
    if (rax_14 == data_143cdfa00)
        rdx_21 = data_14396edd0
        goto label_140796eef
    
    if (rax_14 == data_143cdfa08)
        rdx_21 = data_14396edd8
        goto label_140796eef
    
    if (rax_14 == data_143cdfa10)
        rdx_21 = data_14396ede0
        goto label_140796eef
    
    if (rax_14 == data_143cdfa20)
        rdx_21 = data_14396ede8
        goto label_140796eef
    
    if (rax_14 == data_143cdfa28)
        rdx_21 = data_14396edf0
        goto label_140796eef
    
    if (rax_14 == data_143cdfa18)
        rdx_21 = data_14396edf8
        goto label_140796eef
    
    if (rax_14 == data_143cdfa38)
        rdx_21 = data_14396ee00
        goto label_140796eef
    
    if (rax_14 == data_143cdfa40)
        rdx_21 = data_14396ee08
        goto label_140796eef
    
    if (rax_14 == data_143cdfa30)
        rdx_21 = data_14396ee10
        goto label_140796eef
    
    if (rax_14 == data_143cdfa50)
        rdx_21 = data_14396ee18
        goto label_140796eef
    
    if (rax_14 == data_143cdfa60)
        rdx_21 = data_14396ee20
        goto label_140796eef
    
    if (rax_14 == data_143cdfa48)
        rdx_21 = data_14396ee28
        goto label_140796eef
    
    if (rax_14 == data_143cdfa68)
        rdx_21 = data_14396ee30
        goto label_140796eef
    
    if (rax_14 == data_143cdfa70)
        rdx_21 = data_14396ee38
        goto label_140796eef
    
    if (rax_14 == data_143cdfa78)
        rdx_21 = data_14396ee40
        goto label_140796eef
    
    rbx_3.b = 0
else
    rdx_21 = data_14396ece8
label_140796eef:
    int64_t* rax_15 = sub_140b3b600(&var_4a8, rdx_21, &var_e8)
    int32_t rcx_44 = rax_15[1].d
    int32_t r8_6 = rcx_44 - 1
    
    if (rcx_44 == 0)
        r8_6 = 0
    
    sub_140a20ba0(arg4, *rax_15, r8_6)
    int64_t** rcx_46 = var_4a8
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    sub_140a20ba0(arg4, &data_142d576a0, 1)
    rbx_3.b = 1
int32_t var_a0 = 0
int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_1407464c0(&var_e8)
sub_140780360(&var_368)
__security_check_cookie(var_48 ^ &var_4c8)
return zx.q(rbx_3.b)
