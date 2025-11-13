// 函数: sub_1425f1460
// 地址: 0x1425f1460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx = zx.q(data_14401b1a0)
data_143f70b29 = 1
int32_t* rdi_1 = *(ThreadLocalStoragePointer + (rcx << 3)) + 0x14

if (data_143f70b98 s> *rdi_1)
    _Init_thread_header(&data_143f70b98)
    
    if (data_143f70b98 == 0xffffffff)
        data_143f70b90 = &data_14344a360
        atexit(sub_142d11ab0)
        _Init_thread_footer(&data_143f70b98)
    
    if (data_143f70b29 == 0)
        sub_1425f1460()

int64_t* r8 = data_143f70b58
int64_t* rcx_1 = r8
void* rdx = &r8[sx.q(data_143f70b60)]

if (r8 != rdx)
    while (*rcx_1 != &data_143f70b90)
        rcx_1 = &rcx_1[1]
        
        if (rcx_1 == rdx)
            goto label_1425f14ec

if (r8 == rdx || ((rcx_1 - r8) s>> 3).d == 0xffffffff)
label_1425f14ec:
    int64_t rbx_1 = sx.q(data_143f70b60)
    int32_t rax_2 = (rbx_1 + 1).d
    bool cond:0_1 = rax_2 s<= data_143f70b64
    data_143f70b60 = rax_2
    
    if (not(cond:0_1))
        sub_1405a4d70(&data_143f70b58)
    
    *(data_143f70b58 + (rbx_1 << 3)) = &data_143f70b90

if (data_143f70ba8 s> *rdi_1)
    _Init_thread_header(&data_143f70ba8)
    
    if (data_143f70ba8 == 0xffffffff)
        data_143f70ba0 = &data_143449f68
        atexit(sub_142d11aa0)
        _Init_thread_footer(&data_143f70ba8)

if (data_143f70b29 == 0)
    sub_1425f1460()

int64_t* r8_1 = data_143f70b58
int64_t* rcx_4 = r8_1
void* rdx_2 = &r8_1[sx.q(data_143f70b60)]

if (r8_1 != rdx_2)
    while (*rcx_4 != &data_143f70ba0)
        rcx_4 = &rcx_4[1]
        
        if (rcx_4 == rdx_2)
            goto label_1425f157c

if (r8_1 == rdx_2 || ((rcx_4 - r8_1) s>> 3).d == 0xffffffff)
label_1425f157c:
    int64_t rbx_2 = sx.q(data_143f70b60)
    int32_t rax_6 = (rbx_2 + 1).d
    bool cond:1_1 = rax_6 s<= data_143f70b64
    data_143f70b60 = rax_6
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f70b58)
    
    *(data_143f70b58 + (rbx_2 << 3)) = &data_143f70ba0

int32_t result = *rdi_1

if (data_143f70bb8 s> result)
    result = _Init_thread_header(&data_143f70bb8)
    
    if (data_143f70bb8 == 0xffffffff)
        data_143f70bb0 = &data_14344a728
        atexit(sub_142d11ac0)
        result = _Init_thread_footer(&data_143f70bb8)

if (data_143f70b29 == 0)
    result = sub_1425f1460()

int64_t* rdx_5 = data_143f70b68
int64_t rbx_3 = sx.q(data_143f70b70)
int64_t* rcx_7 = rdx_5
void* r8_2 = &rdx_5[rbx_3]

if (rdx_5 != r8_2)
    while (*rcx_7 != &data_143f70bb0)
        rcx_7 = &rcx_7[1]
        
        if (rcx_7 == r8_2)
            goto label_1425f160c

if (rdx_5 == r8_2 || ((rcx_7 - rdx_5) s>> 3).d == 0xffffffff)
label_1425f160c:
    result = (rbx_3 + 1).d
    bool cond:2_1 = result s<= data_143f70b74
    data_143f70b70 = result
    
    if (not(cond:2_1))
        result = sub_1405a4d70(&data_143f70b68)
        rdx_5 = data_143f70b68
    
    rdx_5[rbx_3] = &data_143f70bb0

return result
