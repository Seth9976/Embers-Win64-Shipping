// 函数: sub_142951fa0
// 地址: 0x142951fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result_1 = nullptr
int64_t* rsi = nullptr
int32_t r15 = 0
sub_1428cc600(arg1[0xf])
int64_t* rcx_1 = arg1[0x10]
arg1[0xf] = 0
sub_1428901a0(rcx_1)
int64_t* result_2 = arg5
arg1[0x10] = 0

if (result_2 == 0)
    uint64_t result = sub_1428d8d60()
    result_1 = result
    result_2 = result
    
    if (result == 0)
        return result

int32_t* rax_1 = sub_1428cc660()
int32_t* rdi_1 = rax_1

if (rax_1 != 0)
    int32_t rax_2 = sub_1428cc700(rax_1, arg2, result_2)
    
    if (rax_2 != 0)
        int64_t* rax_3 = sub_142890500()
        rsi = rax_3
        
        if (rax_3 != 0 && sub_142890970(rsi, &data_1434e8ea8, rdi_1, result_2) != 0)
            arg1[0xf] = rdi_1
            arg1[0x10] = rsi
            rdi_1 = nullptr
            int32_t var_38
            var_38.q = result_2
            rsi = nullptr
            int32_t rax_5 = sub_14296f4f0(arg1, arg2, arg3, arg4, var_38)
            r15 = rax_5
            
            if (rax_5 == 0)
                sub_1428cc600(arg1[0xf])
                int64_t* rcx_7 = arg1[0x10]
                arg1[0xf] = 0
                sub_1428901a0(rcx_7)
                arg1[0x10] = 0
    else
        sub_1428a5670(rax_2 + 0x10, 0xbd, rax_2 + 3, "crypto\ec\ecp_mont.c", 0x9d)

sub_1428901a0(rsi)
sub_1428d8ae0(result_1)
sub_1428cc600(rdi_1)
return zx.q(r15)
