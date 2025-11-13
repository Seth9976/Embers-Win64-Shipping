// 函数: sub_140a95770
// 地址: 0x140a95770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = &data_142e65250
Concurrency::details::UMSFreeVirtualProcessorRoot::DeleteThis(&arg1[1])
sub_140a3b880(&result[2], &result[1])
InitializeSRWLock(&result[0x15])
int64_t* rcx_3 = &result[0x1a]
__builtin_memset(&result[0x16], 0, 0x20)
rcx_3[2] = 0
rcx_3[3].d = 0
*(rcx_3 + 0x1c) = 0x80
int64_t* rax = rcx_3[2]

if (rax != 0)
    rcx_3 = rax

*rcx_3 = 0
rcx_3[1] = 0
result[0x1e].d = 0xffffffff
*(result + 0xf4) = 0
result[0x20] = 0
result[0x21].d = 0
sub_140a95630(&result[0x22])
sub_140a95630(&result[0x2d])
int64_t rax_1 = sx.q(data_14399eb50)
int64_t rax_2

if (rax_1.d s<= 0)
    rax_2 = 0x40000
else
    rax_2 = rax_1 << 0xa

result[0x38] = rax_2
result[0x39] = 0
result[0x24] = &result[0x2d]
result[0x2e] = &result[0x22]
__builtin_memset(&result[0x3a], 0, 0x14)
InitializeCriticalSection(&result[0x3d])
SetCriticalSectionSpinCount(&result[0x3d], 0xfa0)
__builtin_memset(&result[0x42], 0, 0x14)
InitializeCriticalSection(&result[0x45])
SetCriticalSectionSpinCount(&result[0x45], 0xfa0)
result[0x4a] = 0
InitializeCriticalSection(&result[0x4b])
SetCriticalSectionSpinCount(&result[0x4b], 0xfa0)
__builtin_memset(&result[0x50], 0, 0x21)
result[0x54].b
sub_140af4b30()
void*** rax_4 = sub_140a84c80(0, 0x20, 0)

if (rax_4 != 0)
    rax_4[1] = result
    *rax_4 = &data_142e66888
    rax_4[3] = sub_140a387b0()
    *rax_4 = &data_142e668e0

if (rax_4 != 0)
    sub_140599630(&data_1439a04c0, 1)
    void arg_8
    (*rax_4)[6](rax_4, &arg_8)
    int64_t rbp_1 = sx.q(data_1439a04c8)
    int32_t rax_7 = (rbp_1 + 1).d
    data_1439a04c8 = rax_7
    
    if (rax_7 s> data_1439a04cc)
        sub_1405a4f90(&data_1439a04c0)
    
    void** rax_10 = (rbp_1 << 4) + data_1439a04c0
    *rax_10 = rax_4
    rax_10[1].d = 2

result[0x4a] = sub_140a6e140(result, u"IoDispatcher", 0, 1, -1, 0)
return result
