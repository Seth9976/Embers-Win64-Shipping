// 函数: sub_14203f100
// 地址: 0x14203f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x10)
int32_t rdi = var_10 + 0x10

if (rdi s> 0)
    sub_140594770(&var_18)

int16_t* rsi = var_18
UnDecorator::getReferenceType(rsi, u"SpectatorOnly=1", 0x20)
int16_t* const rdx_1 = &data_142d40450

if (rdi != 0)
    rdx_1 = rsi

if (sub_140a23cf0(arg3, rdx_1, 1, 0, 0xffffffff) == 0xffffffff || arg1[0x4d] == 0)
    rdi.b = 0
else
    void* rax_1 = sub_14256a090()
    
    if (rax_1 == 0)
        rdi.b = 0
    else
        void* rdx_2 = arg1[0x4d]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                || rdx_2 == 0)
            rdi.b = 0
        else
            rdi.b = 1

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t rax_4 = *arg1
uint64_t rdx_3 = zx.q(arg2)

if (rdi.b == 0)
    return (*(rax_4 + 0x758))(arg1, rdx_3, &data_143dbb1f8, &data_143dbb208)

return (*(rax_4 + 0x768))(arg1, rdx_3, &data_143dbb1f8, &data_143dbb208)
