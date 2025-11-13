// 函数: sub_141deb800
// 地址: 0x141deb800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax =
    sub_140af5690(data_143ddb400, Animation.DefaultObjectSettings", 0, 1, &data_143de5780)
void* rdx_2
void* const rbx

if (rax == 0)
    rbx = nullptr
    rdx_2 = nullptr
else
    int32_t arg_10
    void arg_18
    sub_14093f560(rax, &arg_10, *sub_140b58260(&arg_18, arg1, 1))
    int64_t rax_2 = sx.q(arg_10)
    rbx = nullptr
    
    if (rax_2.d == 0xffffffff)
        rdx_2 = nullptr
    else
        void* rax_5 = rax_2 * 0x30 + *rax
        rdx_2 = rax_5 + 8
        
        if (rax_5 == 0)
            rdx_2 = nullptr

if (rdx_2 == 0)
    sub_140af98a0("Unknown", 0x374, 
        Couldn't find default compression setting for '%s' under '[Animation.DefaultObjectSettings]'", 
        arg1)
    sub_140afbb40()
    return 0

int32_t rax_8 = *(rdx_2 + 0x18)
void* rdi_1 = rdx_2 + 0x10
int16_t* const rbp = &data_142d40450
int32_t rcx_3 = rax_8 - 1

if (rax_8 == 0)
    rcx_3 = 0

if (rcx_3 s<= 0)
    rdi_1 = rdx_2

int16_t* rsi_1

if (*(rdi_1 + 8) == 0)
    rsi_1 = &data_142d40450
else
    rsi_1 = *rdi_1

uint64_t result = sub_140d2f6f0(sub_140d41340(), 0, rsi_1, 0, 0, 0, 1, 0)

if (result == 0)
    if (*(rdi_1 + 8) != result.d)
        rbp = *rdi_1
    
    sub_140af98a0("Unknown", 0x37d, 
        Couldn't load default compression settings asset with path '%s'", rbp)
    sub_140afbb40()

sub_141de7a80(result)
int32_t rax_10 = *(result + 0xc)

if (rax_10 s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_10)
    uint32_t rdx_4 = zx.d(temp0_1)
    int32_t rax_12 = temp1_1 + rdx_4
    rbx = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_4) * 0x18

*(rbx + 8) |= 0x40000000
return result
