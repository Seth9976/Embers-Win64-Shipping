// 函数: sub_141b34850
// 地址: 0x141b34850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c73c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c73c)
    
    if (data_143f2c73c == 0xffffffff)
        sub_141a387d0(&data_143f2c738)
        _Init_thread_footer(&data_143f2c73c)

int64_t* rdi = *(arg2 + 0x10)
int32_t rsi = data_143f2c738
int32_t var_34 = 0
int64_t var_68 = 0
int64_t var_60 = 0
uint128_t var_44 = var_68.o
void* const rdx_2

if (rdi[1].d == *(rdi + 0x34))
label_141b349fd:
    rdx_2 = nullptr
else
    int32_t rax_3
    rax_3, arg4 = sub_1405be5b0(&var_44)
    void* rdx = rdi[8]
    void* r8 = &rdi[7]
    int32_t r10_3 = (rax_3 - rsi) ^ rsi u>> 0xd
    int32_t r9_4 = (0x9e3779b9 - r10_3 - rsi) ^ r10_3 << 8
    int32_t rsi_3 = (rsi - r9_4 - r10_3) ^ r9_4 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_4 - rsi_3) ^ rsi_3 u>> 0xc
    int32_t r9_7 = (r9_4 - r10_6 - rsi_3) ^ r10_6 << 0x10
    int32_t rsi_6 = (rsi_3 - r9_7 - r10_6) ^ r9_7 u>> 5
    int32_t r10_9 = (r10_6 - r9_7 - rsi_6) ^ rsi_6 u>> 3
    int32_t r9_10 = (r9_7 - r10_9 - rsi_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_20 =
        *(r8 + (((sx.q(rsi_6 - r9_10 - r10_9) ^ zx.q(r9_10) u>> 0xf) & (sx.q(rdi[9].d) - 1)) << 2))
    
    if (rax_20 == 0xffffffff)
    label_141b349fd_1:
        rdx_2 = nullptr
    else
        int64_t r11_1 = *rdi
        
        while (true)
            int64_t r8_1 = sx.q(rax_20) * 5
            rdx_2 = r11_1 + (r8_1 << 3)
            
            if (*(r11_1 + (r8_1 << 3)) == rsi && *(rdx_2 + 0x14) == var_34 && ((*(rdx_2 + 8)
                    ^ var_44:4.d) | (*(rdx_2 + 0xc) ^ var_44:8.d) | (*(rdx_2 + 0x10) ^ var_44:0xc.d)
                    | (var_44.d ^ *(rdx_2 + 4))) == 0)
                break
            
            rax_20 = *(rdx_2 + 0x20)
            
            if (rax_20 == 0xffffffff)
                goto label_141b349fd_2
        
        if (rax_20 == 0xffffffff)
        label_141b349fd_2:
            rdx_2 = nullptr

void* result = rdx_2 + 0x18

if (rdx_2 == 0)
    result = nullptr

void* const rdi_2

if (result == 0)
    rdi_2 = nullptr
else
    rdi_2 = *result

if (rdi_2 == 0)
    return result

void* rax_23 = sub_141a4c440(*((*(*arg3 + 8))(arg3) + 8) + 0xd0, arg2 + 0x24)

if (rax_23 != 0)
    *(rax_23 + 0x94)

uint128_t zmm0 = zx.o(*(arg2 + 0x24))
int64_t* r8_8 = zx.q(*(arg1 + 0x20))
int32_t var_70_1 = *(arg2 + 0x2c)
var_68 = *(arg1 + 0x28)
var_60.d = *(arg1 + 0x30)
uint64_t var_78 = zmm0.q
var_68.o = var_68.o
uint64_t* var_88_1 = &var_78
sub_141b35100(rdi_2, &var_68, r8_8)
return sub_141b05910(rdi_2, arg3, arg4)
