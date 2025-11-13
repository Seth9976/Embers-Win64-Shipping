// 函数: sub_1403d18a0
// 地址: 0x1403d18a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_5c
__builtin_strncpy(&var_5c, "pCAL", 5)

if (arg5 s>= 4)
    png_warning(arg1, "Unrecognized equation type for pCAL chunk")

void* var_68
int64_t rax_2 = sub_1403d00e0(arg1, arg2, &var_68)
int32_t rdi_1
rdi_1.b = arg6 != 0
int32_t rdi_2 = rdi_1 + MultiByteToWideChar(0, 0, arg7, 0xffffffff, nullptr, 0)
int64_t rsi_1 = sx.q(arg6)
int64_t rax_4 = png_malloc(arg1, rsi_1 << 2)
int64_t rax_5 = sx.q(rdi_2)
int64_t rbx_2 = rax_2 + rax_5 + 0xb

if (rsi_1.d s> 0)
    int64_t i = 0
    
    do
        int32_t rcx_3
        rcx_3.b = zx.q(arg6 - 1) != i
        uint64_t rcx_4 =
            zx.q(rcx_3 + MultiByteToWideChar(0, 0, *(arg8 + (i << 3)), 0xffffffff, nullptr, 0))
        *(rax_4 + (i << 2)) = rcx_4.d
        rbx_2 += rcx_4
        i += 1
    while (zx.q(arg6) != i)

uint8_t var_52
int32_t var_4e

if (arg1 != 0)
    *(arg1 + 0x4a8) = 0x22
    var_52 = (rbx_2.d u>> 0x18).b
    uint8_t var_51_1 = (rbx_2.d u>> 0x10).b
    char var_50_1 = rbx_2:1.b
    char var_4f_1 = rbx_2.b
    __builtin_strncpy(&var_4e, "pCAL", 4)
    sub_1403cc370(arg1, &var_52, 8)
    __builtin_strncpy(arg1 + 0x254, "pCAL", 4)
    sub_1403be750(arg1)
    sub_1403be770(arg1, &var_5c, 4)
    *(arg1 + 0x4a8) = 0x42

void* rdi_3 = var_68

if (rax_2 != -1 && arg1 != 0 && rdi_3 != 0)
    sub_1403cc370(arg1, rdi_3, rax_2 + 1)
    sub_1403be770(arg1, rdi_3, (rax_2 + 1).d)

var_52 = (arg3 u>> 0x18).b
uint8_t var_51_2 = (arg3 u>> 0x10).b
char var_50_2 = arg3:1.b
char var_4f_2 = arg3.b
var_4e.b = (arg4 u>> 0x18).b
var_4e:1.b = (arg4 u>> 0x10).b
var_4e:2.b = arg4:1.b
var_4e:3.b = arg4.b
char var_4a = arg5.b
char var_49 = arg6.b

if (arg1 != 0)
    sub_1403cc370(arg1, &var_52, 0xa)
    sub_1403be770(arg1, &var_52, 0xa)
    
    if (arg7 != 0 && rdi_2 != 0)
        sub_1403cc370(arg1, arg7, rax_5)
        sub_1403be770(arg1, arg7, rax_5.d)

png_free(arg1, rdi_3)

if (arg6 s> 0)
    int64_t i_1 = 0
    
    do
        uint64_t rbx_6 = zx.q(*(rax_4 + (i_1 << 2)))
        
        if (rbx_6 != 0 && arg1 != 0)
            void* rsi_8 = *(arg8 + (i_1 << 3))
            
            if (rsi_8 != 0)
                sub_1403cc370(arg1, rsi_8, rbx_6)
                sub_1403be770(arg1, rsi_8, rbx_6.d)
        
        i_1 += 1
    while (zx.q(arg6) != i_1)

int64_t result = png_free(arg1, rax_4)

if (arg1 != 0)
    *(arg1 + 0x4a8) = 0x82
    int32_t rax_13 = *(arg1 + 0x244)
    uint8_t var_56 = (rax_13 u>> 0x18).b
    uint8_t var_55_1 = (rax_13 u>> 0x10).b
    char var_54_1 = rax_13:1.b
    char var_53_1 = rax_13.b
    result = sub_1403cc370(arg1, &var_56, 4)

__security_check_cookie(rax_1 ^ &var_b8)
return result
