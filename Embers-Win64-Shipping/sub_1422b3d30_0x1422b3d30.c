// 函数: sub_1422b3d30
// 地址: 0x1422b3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
void* rcx = *arg1
int16_t* var_1c8
int32_t var_1c0

if (rcx == 0)
    var_1c8 = nullptr
    var_1c0 = 0
    sub_1405947f0(&var_1c8, 5)
    int32_t rax_1 = var_1c0 + 5
    var_1c0 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_1c8)
    
    UnDecorator::getReferenceType(var_1c8, u"None", 0xa)
else
    arg5 = sub_140b63b70(rcx + 0x28, &var_1c8)

int16_t* const r15 = &data_142d40450
int16_t* r14 = var_1c8
int32_t rcx_5
int16_t* rdx_2

if (var_1c0 == 0)
    rdx_2 = &data_142d40450
    rcx_5 = 0
else
    rdx_2 = r14
    rcx_5 = var_1c0 - 1

int32_t var_1b8 = sub_1405969c0(rcx_5, rdx_2)

if (r14 != 0)
    arg5 = sub_140a74f90(r14)

int32_t rax_4 = sub_140b212b0(&var_1b8, 4, 0)
int32_t arg_8 = rax_4
int32_t rax_5 = sub_140b212b0(arg1 + 0xc, 4, rax_4)
arg_8 = rax_5
int32_t rax_6 = sub_140b212b0(&arg_10, 4, rax_5)
int64_t* rdx_3 = arg4[1]
arg_8 = rax_6
int32_t* r8_2 = *rdx_3

if (&r8_2[1] u> rdx_3[1])
    int32_t* rdx_4 = &arg_8
    
    if ((*(arg4 + 0x29) & 0x20) != 0)
        sub_140b54070(arg4, rdx_4, arg5)
    else
        (*(*arg4 + 0x150))(arg4, rdx_4, 4)
else
    arg_8 = *r8_2
    *rdx_3 += 4

if (arg_8 != rax_6)
    int16_t** rax_8 = sub_140cbc340(*arg1, &var_1c8)
    
    if (rax_8[1].d != 0)
        r15 = *rax_8
    
    sub_140af98a0("Unknown", 0x2d0, 
        SerializeReadWritePropertyChecksum: Property checksum marker failed! [%s]", r15)
    int16_t* rcx_14 = var_1c8
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    sub_140afbb40()

void** result
int512_t zmm1
result, zmm1 = sub_140cea290()

if ((data_143e1b8c8 & *(*(*arg1 + 8) + 0x10)) != 0)
    return result

void var_1a8
sub_140b4c4f0(&var_1a8, 0, 1)
int64_t* rcx_18 = *arg1
(*(*rcx_18 + 0x90))(rcx_18, &var_1a8, 0, arg3, 0)
char* var_118
int64_t var_108

if ((arg4[5].b & 2) != 0)
    void* rax_10 = *arg1
    int16_t* rbx_1 = nullptr
    var_1c8 = nullptr
    var_1c0 = 0
    int32_t r12_1 = *(rax_10 + 0x38)
    *(rax_10 + 0x38) = 1
    int32_t r15_2 = *(*arg1 + 0x3c) + 4
    int32_t r14_2 = r15_2
    
    if (r15_2 s> 0)
        sub_1405daba0(&var_1c8)
        r14_2 = r15_2
        rbx_1 = var_1c8
    
    memset(rbx_1, 0, sx.q(r15_2))
    *(sx.q(r14_2 - 4) + rbx_1) = 0xabadf00d
    int64_t* rcx_22 = *arg1
    
    if (not(test_bit(zx.q(rcx_22[8].d), 9)))
        (*(*rcx_22 + 0xf0))(rcx_22, rbx_1)
    else
        memset(rbx_1, 0, sx.q(*(rcx_22 + 0x3c) * rcx_22[7].d))
    
    void** var_e8
    sub_140b4c3a0(&var_e8, var_118, var_108)
    int64_t* rcx_25 = *arg1
    (*(*rcx_25 + 0x90))(rcx_25, &var_e8, 0, rbx_1, 0)
    sub_140b527a0(&var_1a8)
    int64_t* rcx_27 = *arg1
    (*(*rcx_27 + 0x90))(rcx_27, &var_1a8, 0, rbx_1, 0)
    int64_t* rcx_28 = *arg1
    
    if ((not.b((rcx_28[8] u>> 0x24).b) & 1) != 0)
        (*(*rcx_28 + 0xe8))(rcx_28, rbx_1)
        rcx_28 = *arg1
    
    rcx_28[7].d = r12_1
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    zmm1 = sub_140b4cb40(&var_e8)
    
    if (rbx_1 != 0)
        zmm1 = sub_140a74f90(rbx_1)

int32_t rax_22 = sub_140b212b0(var_118, ((var_108 + 7) s>> 3).d, 0)
int64_t* rcx_33 = arg4[1]
int32_t arg_20 = rax_22
int32_t* rdx_17 = *rcx_33

if (&rdx_17[1] u> rcx_33[1])
    int32_t* rdx_18 = &arg_20
    
    if ((*(arg4 + 0x29) & 0x20) != 0)
        sub_140b54070(arg4, rdx_18, zmm1)
    else
        (*(*arg4 + 0x150))(arg4, rdx_18, 4)
else
    arg_20 = *rdx_17
    *rcx_33 += 4

if (var_118 != 0)
    sub_140a74f90(var_118)

return sub_140b4cb40(&var_1a8)
