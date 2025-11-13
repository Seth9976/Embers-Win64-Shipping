// 函数: sub_141cc5d50
// 地址: 0x141cc5d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f35928 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f35928)
    
    if (data_143f35928 == 0xffffffff)
        sub_1405947f0(&data_143f35918, 0x30)
        int32_t rax_3 = data_143f35920 + 0x30
        bool cond:1_1 = rax_3 s<= data_143f35924
        data_143f35920 = rax_3
        
        if (not(cond:1_1))
            sub_140594770(&data_143f35918)
        
        UnDecorator::getReferenceType(data_143f35918, 
            UGameplayTagsManager::PopulateTreeFromDataTable", 0x60)
        atexit(sub_142cf74a0)
        _Init_thread_footer(&data_143f35928)

int64_t rdi = 0
int16_t* const rdx = &data_142d40450
bool cond:0 = data_143f35920 != 0
uint64_t var_28 = 0

if (cond:0)
    rdx = data_143f35918

int32_t result_1 = 0
sub_141cbd8a0(arg2, rdx, &var_28)
void* rax_2 = sub_140d21d80(arg2)
int64_t* rcx_2 = *(arg1 + 0xc0)
int64_t rdx_1 = sx.q(*(arg1 + 0xc8))
int64_t i = *(rax_2 + 0x18)
int64_t r14_1 = rdx_1 << 5
int64_t i_1 = i
void* r8_3 = &rcx_2[rdx_1 * 4]

if (rcx_2 == r8_3)
label_141cc5e05:
    int32_t rcx_3 = (rdx_1 + 1).d
    *(arg1 + 0xc8) = rcx_3
    
    if (rcx_3 s> *(arg1 + 0xcc))
        sub_1405c4e40(arg1 + 0xc0)
        i_1 = i
    
    void* rdx_2 = *(arg1 + 0xc0)
    int64_t* rdx_3 = rdx_2 + r14_1
    
    if (rdx_2 != neg.q(r14_1))
        *rdx_3 = i_1
        rdx_3[1].b = 4
        rdx_3[2] = 0
        rdx_3[3] = 0
else
    while (*rcx_2 != i)
        rcx_2 = &rcx_2[4]
        
        if (rcx_2 == r8_3)
            goto label_141cc5e05

uint64_t r14_2 = var_28
int64_t result = sx.q(result_1)
uint64_t rsi_1 = r14_2
int64_t rcx_5 = r14_2 + (result << 3)
uint64_t rbp_3 = (rcx_5 - r14_2 + 7) u>> 3

if (r14_2 u> rcx_5)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        void* rdx_4 = *rsi_1
        
        if (rdx_4 != 0)
            result = sub_141cbf650(arg1, rdx_4, i.b, 0)
        
        rsi_1 += 8
        rdi += 1
    while (rdi != rbp_3)

if (r14_2 == 0)
    return result

return sub_140a74f90(r14_2)
