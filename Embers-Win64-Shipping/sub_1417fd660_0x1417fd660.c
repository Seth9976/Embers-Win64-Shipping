// 函数: sub_1417fd660
// 地址: 0x1417fd660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
data_143ef9cf8 = arg1
char rdi = 0
int32_t var_38 = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x18) = 0x43960000
*(arg1 + 0x1c) = 0xbf800000
*(arg1 + 0x20) = 0xbf800000
*(arg1 + 0x24) = 0xbf800000
__builtin_memcpy(arg1 + 0x2c, 
    "\x0a\xd7\xa3\x3b\x00\x00\x00\x00\x89\x88\x08\x3d\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x04\x00\x"
"01\x00", 
    0x1a)
sub_14180a4f0(arg1)
sub_140af2b60()
int16_t* var_30

if (sub_140b2acc0(&data_143dbb3f0, httpproxy=", arg1 + 0x98, 1) == 0
        && sub_140af5b90(data_143ddb400, HTTP", HttpProxyAddress", arg1 + 0x98, &data_143de5780) == 0)
    sub_141803630(&var_30)
    char var_20
    
    if (var_20 != 0)
        sub_140597da0(arg1 + 0x98, &var_30)
        
        if (var_20 != 0)
            int16_t* rcx_3 = var_30
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)

var_30 = nullptr
int32_t var_28 = 0
sub_140af2b60()
int16_t* rbx
int16_t* var_48

if (sub_140b2acc0(&data_143dbb3f0, u"HTTP=", &var_30, 1) == 0)
    rbx = var_48
else
    var_48 = nullptr
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 8)
    int32_t rdi_1 = var_40_1 + 8
    
    if (rdi_1 s> 0)
        sub_140594770(&var_48)
    
    rbx = var_48
    UnDecorator::getReferenceType(rbx, u"WinInet", 0x10)
    int16_t* const rcx_7 = &data_142d40450
    int16_t* rdx_3 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_3 = rbx
    
    if (var_28 != 0)
        rcx_7 = var_30
    
    sub_140a54510(rcx_7, rdx_3)
    rdi = 1

if ((rdi & 1) != 0 && rbx != 0)
    sub_140a74f90(rbx)

sub_141804c00()
int16_t* rcx_9 = var_30

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

void*** rax_5 = j_sub_140a82f30(0x70)
void*** rdi_2 = rax_5

if (rax_5 == 0)
    rdi_2 = nullptr
else
    memset(rax_5, 0, 0x70)
    sub_1417fe410(rdi_2)
    *rdi_2 = &data_142fe16e0

*(arg1 + 0x10) = rdi_2

if (rdi_2 == 0)
    void*** rax_6 = j_sub_140a82f30(zx.q((&rdi_2[0xe]).d))
    
    if (rax_6 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = sub_1417fe410(rax_6)
    
    *(arg1 + 0x10) = rdi_2

int64_t* rax_9 = (*rdi_2)[6](rdi_2)
char var_50 = 0
rdi_2[5] = rax_9
rax_9[0x10] = sub_140a6e140(rax_9, u"HttpManagerThread", 0x20000, 0, -1, var_50)
int64_t* rcx_16 = *(arg1 + 0x10)
*(arg1 + 0xa8) = (*(*rcx_16 + 0x10))(rcx_16)
void*** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142d42b98
    result_1[1] = sub_141809000
    result_1[3] = sub_140a387b0()
    void** r8_2 = *result_1
    result = r8_2[8](result_1, &data_143de56d8, r8_2)
else if (data_143de56e0 != 0)
    int64_t* rcx_18 = data_143de56d8
    
    if (rcx_18 != 0)
        result = (*(*rcx_18 + 0x38))(rcx_18, 0)
        int64_t rcx_19 = data_143de56d8
        
        if (rcx_19 != 0)
            result = sub_140a84c80(rcx_19, 0, 0)
            data_143de56d8 = result
        
        data_143de56e0 = 0

if (result_1 != 0)
    (*result_1)[7](result_1, 0)
    result = sub_140a84c80(result_1, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_78)
return result
