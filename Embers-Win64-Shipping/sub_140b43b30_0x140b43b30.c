// 函数: sub_140b43b30
// 地址: 0x140b43b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8a8
int64_t rax_1 = __security_cookie ^ &var_8a8
int16_t* rbx = arg3
int16_t* var_868
sub_140b3cab0(arg1, &var_868, arg2)

if (not(0f f<= arg1[0xa].d))
    sub_140af3b00(data_143ddb400, u"RemoteConfiguration", u"Timeout", &arg1[0xa], &data_143de5780)

int64_t var_858 = 0
void var_82e
void* rcx_1 = &var_82e - rbx
int64_t var_850 = 0
int16_t var_830 = 0
int16_t i

do
    i = *rbx
    *(rcx_1 + rbx) = i
    rbx = &rbx[1]
while (i != 0)
int64_t performanceCount = 0
int32_t rdx_1 = 0
int32_t var_870 = 0
int32_t rcx_2 = 0
int32_t var_86c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&performanceCount, rbx_1.d + 1)
        rcx_2 = var_86c
        rdx_1 = var_870
    
    int32_t rax_2 = rbx_1.d + 1 + rdx_1
    int32_t var_870_1 = rax_2
    
    if (rax_2 s> rcx_2)
        sub_140594770(&performanceCount)
    
    UnDecorator::getReferenceType(performanceCount, arg2, (rbx_1.d + 1) * 2)

int64_t* rax_3 = sub_140b2cae0(arg1, &performanceCount, &var_858)
int64_t performanceCount_1 = performanceCount

if (performanceCount_1 != 0)
    sub_140a74f90(performanceCount_1)

int64_t rcx_7 = var_858

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

QueryPerformanceCounter(&performanceCount)
char var_880 = 1
int16_t* r8_4 = &data_142d40450
int64_t* var_888_2 = nullptr
rax_3[3] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
int32_t var_860

if (var_860 != 0)
    r8_4 = var_868

char rax_4 = sub_140b47910(&data_1439a9160, arg2, r8_4, rax_3, var_888_2, var_880)
int16_t* rcx_9 = var_868

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_8a8)
return zx.q(rax_4)
