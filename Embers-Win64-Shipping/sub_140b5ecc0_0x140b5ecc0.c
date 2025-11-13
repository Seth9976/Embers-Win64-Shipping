// 函数: sub_140b5ecc0
// 地址: 0x140b5ecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* rax_2 = sub_140a753a0()
int64_t rdx = *rax_2
(*(rdx + 0x10))(rax_2, rdx)
sub_140599090(&data_14399fc40)
sub_140b19e60()
sub_140b19e60()
void* rdx_1 = data_1439a8bd0
(*(rdx_1 + 0x50))(&data_1439a8bd0, rdx_1)
wchar16 const* const rbp = u"Unhandled exception"
int32_t r12 = 0
int32_t* r14 = nullptr
int32_t* rcx_1 = **(arg1 + 0x28)
int32_t rbx = 2
int32_t rax_4 = *rcx_1

if (rax_4 != 0x4000)
    if (rax_4 == 0x8000)
        if (rcx_1[6] != 1)
            goto label_140b5ed8c
        
        wchar16** rax_6 = *(rcx_1 + 0x20)
        r12 = 3
        rbp = *rax_6
        rbx = &rax_6[1].d[1]
    else if (rax_4 != 1)
        goto label_140b5ed8c
else if (rcx_1[6] != 1)
label_140b5ed8c:
    rbx = 0
    sub_140b5db10(rcx_1)
    rbp = &data_143de3420
else
    wchar16** rax_5 = *(rcx_1 + 0x20)
    r12 = 1
    rbp = *rax_5
    rbx = &rax_5[1].d[1]

char rax_7

if (*(arg1 + 0x48) != 0)
    rax_7 = sub_140b6e7e0(arg1 + 0x48)

if (*(arg1 + 0x48) == 0 || rax_7 == 0)
    void** var_1b8
    sub_140a3b810(&var_1b8, r12, rbp)
    void* rcx_6 = *(arg1 + 0x28)
    int64_t rdx_4 = *(arg1 + 0x38)
    var_1b8 = &data_142e7bda8
    r14 = sub_140b6fe80(*(rcx_6 + 8), rdx_4)
    HANDLE var_1b0_1 = GetCurrentProcess()
    sub_140a3f9b0(&var_1b8, rbx, r14)
    int32_t var_1a4_1 = *(arg1 + 0x30)
    sub_140b5cee0(&var_1b8)
    sub_140a53960(&var_1b8, rbx)
    void*** rcx_12 = &var_1b8
    
    if (data_14399e8c0 == 0)
        sub_140a51530(rcx_12)
        uint32_t rax_14 = GetCurrentThreadId()
        sub_140b640f0(GetCurrentProcess(), rax_14, &var_1b8, &data_143d78ed0, *(arg1 + 0x28))
    else
        sub_140b61dd0(rcx_12, *(arg1 + 0x28), 0)
    
    sub_140a3c3b0(&var_1b8)
else
    int32_t var_1c8_1 = 0
    sub_140b61850(*(arg1 + 0x28), r12, rbp, rbx, (*(arg1 + 0x38)).d, *(arg1 + 0x30), arg1 + 0x48, 
        arg1 + 0x68, *(arg1 + 0x50), (*(arg1 + 0x58)).d)

int64_t* rcx_15 = data_143ddb3f0
char* rax_17 = (*(*rcx_15 + 0x10))(rcx_15, 0xffff, 0)
*rax_17 = 0

if (r14 == 0)
    r14 = sub_140b6fe80(*(*(arg1 + 0x28) + 8), *(arg1 + 0x38))

sub_140b73300(rax_17, 0xffff, 0, r14)
int64_t rdi_1 = -1
int32_t* rcx_19 = **(arg1 + 0x28)
int32_t rax_20 = *rcx_19

if (rax_20 != 1 && rax_20 != 0x4000)
    sub_140b5db10(rcx_19)
    int64_t rcx_20 = -1
    
    do
        rcx_20 += 1
    while ((&data_143ddb420)[rcx_20] != 0)
    
    if (0x4000 - rcx_20.d s> 0)
        int64_t rbx_4 = sx.q(0x4000 - rcx_20.d)
        wcsncpy(&(&data_143ddb420)[sx.q(rcx_20.d)], &data_143de3420, rbx_4 - 1)
        (&data_143ddb420)[sx.q(rcx_20.d) + rbx_4 - 1] = 0
    
    int64_t rcx_22 = -1
    
    do
        rcx_22 += 1
    while ((&data_143ddb420)[rcx_22] != 0)
    
    if (0x4000 - rcx_22.d s> 0)
        int64_t rbx_5 = sx.q(0x4000 - rcx_22.d)
        wcsncpy(&(&data_143ddb420)[sx.q(rcx_22.d)], u"\r\n\r\n", rbx_5 - 1)
        (&data_143ddb420)[sx.q(rcx_22.d) + rbx_5 - 1] = 0

void var_158
sub_1405eb940(&var_158, rax_17)

do
    rdi_1 += 1
while ((&data_143ddb420)[rdi_1] != 0)

if (0x4000 - rdi_1.d s> 0)
    int64_t rbx_6 = sx.q(0x4000 - rdi_1.d)
    wchar16* _Source
    wcsncpy(&(&data_143ddb420)[sx.q(rdi_1.d)], _Source, rbx_6 - 1)
    (&data_143ddb420)[sx.q(rdi_1.d) + rbx_6 - 1] = 0

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t* rcx_27 = data_143ddb3f0
int64_t result = (*(*rcx_27 + 0x30))(rcx_27, rax_17)

if (r14 != 0)
    result = sub_140b721e0(r14)

__security_check_cookie(rax_1 ^ &var_218)
return result
