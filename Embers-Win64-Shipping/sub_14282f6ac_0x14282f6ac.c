// 函数: sub_14282f6ac
// 地址: 0x14282f6ac
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* var_1c8 = arg1
int64_t rbx
rbx.b = sub_14282aff8(arg2)
int32_t rbp = sx.d(sub_14282aff8(arg2))
void* const rdx

if (rbx.b == 0x27 && rbp.b == rbx.b)
label_14282f6f7:
    rdx = &data_143701ed4
label_14282f88f:
    arg1[2] = 0
    arg1[3] = 0xf
    *arg1 = 0
    SimpleString::operator=(arg1, rdx)
    __security_check_cookie(rax_1 ^ &var_1e8)
    return arg1

int32_t r8_1

if (rbp s<= 0x5f)
    switch (rbp)
        case 9
            rdx = &(*U""\tv 0")[1]
            goto label_14282f88f
        case 0x20
            rdx = &(*U""\tv 0")[3]
            goto label_14282f88f
        case 0x22
            rdx = U""\tv 0"
            goto label_14282f88f
        case 0x27
            goto label_14282f6f7
        case 0x2f
            rdx = &data_142d63b88
            goto label_14282f88f
        case 0x30
            arg1[3] = 0xf
            *arg1 = 0
            arg1[2] = 1
            memset(arg1, 0, 1)
            *(arg1 + 1) = 0
            __security_check_cookie(rax_1 ^ &var_1e8)
            return arg1
        case 0x4c
            rdx = &data_1434d3ea4
            goto label_14282f88f
        case 0x4e
            rdx = &data_1434d3e9c
            goto label_14282f88f
        case 0x50
            rdx = &data_1434d3ea8
            goto label_14282f88f
        case 0x55
            r8_1 = 8
            goto label_14282f7bf
        case 0x5c
            rdx = &data_142d6bc40
            goto label_14282f88f
        case 0x5f
            rdx = &data_1434d3ea0
            goto label_14282f88f
else if (rbp s> 0x72)
    if (rbp == 0x74)
        rdx = &(*U""\tv 0")[1]
        goto label_14282f88f
    
    if (rbp == 0x75)
        r8_1 = 4
    label_14282f7bf:
        sub_14282f93c(arg1, arg2, r8_1)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return arg1
    
    if (rbp == 0x76)
        rdx = &data_1434d3e8c
        goto label_14282f88f
    
    r8_1 = 2
    
    if (rbp == 0x78)
        goto label_14282f7bf
else
    switch (rbp)
        case 0x61
            rdx = &data_1434d3e84
            goto label_14282f88f
        case 0x62
            rdx = &data_1434d3e88
            goto label_14282f88f
        case 0x65
            rdx = &data_1434d3e98
            goto label_14282f88f
        case 0x66
            rdx = &data_1434d3e90
            goto label_14282f88f
        case 0x6e
            rdx = &data_14370209c
            goto label_14282f88f
        case 0x72
            rdx = &data_1434d3e94
            goto label_14282f88f
void* var_1b8
sub_140589420(&var_1b8, 1)
void var_b8
void var_98
int64_t* rax_6 = sub_140687ae0(&var_98, sub_14058a5c0(&var_b8, "unknown escape character: "), rbp.b)
struct std::exception::VTable* exceptionObject
sub_1428244f0(&exceptionObject, sub_1427bde30(arg2, &var_1c8), rax_6)
_CxxThrowException(&exceptionObject, &data_143946450)
noreturn
