// 函数: sub_141951bd0
// 地址: 0x141951bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c4) = 0x10
void* r14 = &arg1[0x1cc]
int32_t i = 0
*(arg1 + 0x1c0) = 0
__builtin_memset(r14, 0, 0x20)
int16_t r15 = 0

if (*(arg2 + 0x80) s> 0)
    void* rsi_1 = arg2 + 6
    
    do
        uint64_t r9_1 = zx.q(*(rsi_1 - 4))
        uint32_t var_54_1 = zx.d(*(rsi_1 - 6))
        uint32_t var_50_1 = zx.d(*(rsi_1 - 5))
        char var_3d_1 = 0
        int32_t rax_3
        rax_3.b = *rsi_1 != 0
        char var_3f_1 = *(rsi_1 - 3)
        uint32_t var_44_1 = zx.d(*(rsi_1 - 2))
        int32_t rax_6 = (r9_1 - 1).d
        int32_t var_58
        char var_40
        
        if (rax_6 u> 0x13)
            sub_140af98a0("Unknown", 0x61, u"Unknown RHI vertex element type %u", r9_1)
            sub_140afbb40()
        else
            switch (rax_6)
                case 0
                    var_58 = 0x1406
                    int32_t var_4c_1 = 1
                    var_40 = 0
                    char var_3e_1 = 1
                case 1
                    var_58 = 0x1406
                    int32_t var_4c_2 = 2
                    var_40 = 0
                    char var_3e_2 = 1
                case 2
                    var_58 = 0x1406
                    int32_t var_4c_3 = 3
                    var_40 = 0
                    char var_3e_3 = 1
                case 3
                    var_58 = 0x1406
                    int32_t var_4c_4 = 4
                    var_40 = 0
                    char var_3e_4 = 1
                case 4
                    var_58 = 0x1400
                    int32_t var_4c_5 = 4
                    var_40 = 1
                    char var_3e_5 = 1
                case 5
                    var_58 = 0x1401
                    int32_t var_4c_6 = 4
                    var_40 = 0
                    char var_3e_6 = 0
                case 6
                    var_58 = 0x1401
                    int32_t var_4c_7 = 4
                    var_40 = 1
                    char var_3e_7 = 1
                case 7
                    var_58 = 0x1401
                    int32_t var_4c_8 = 0x80e1
                    var_40 = 1
                    char var_3e_8 = 1
                case 8
                    var_58 = 0x1402
                    int32_t var_4c_9 = 2
                    var_40 = 0
                    char var_3e_9 = 0
                case 9
                    var_58 = 0x1402
                    int32_t var_4c_10 = 4
                    var_40 = 0
                    char var_3e_10 = 0
                case 0xa
                    var_58 = 0x1402
                    int32_t var_4c_11 = 2
                    var_40 = 1
                    char var_3e_11 = 1
                case 0xb
                    var_58 = 0x140b
                    int32_t var_4c_12 = 2
                    var_40 = 0
                    char var_3e_12 = 1
                case 0xc
                    var_58 = 0x140b
                    int32_t var_4c_13 = 4
                    var_40 = 0
                    char var_3e_13 = 1
                case 0xd
                    var_58 = 0x1402
                    int32_t var_4c_14 = 4
                    var_40 = 1
                    char var_3e_14 = 1
                case 0xe
                    var_58 = 0x1403
                    int32_t var_4c_15 = 2
                    var_40 = 0
                    char var_3e_15 = 0
                case 0xf
                    var_58 = 0x1403
                    int32_t var_4c_16 = 4
                    var_40 = 0
                    char var_3e_16 = 0
                case 0x10
                    var_58 = 0x1403
                    int32_t var_4c_17 = 2
                    var_40 = 1
                    char var_3e_17 = 1
                case 0x11
                    var_58 = 0x1403
                    int32_t var_4c_18 = 4
                    var_40 = 1
                    char var_3e_18 = 1
                case 0x12
                    var_58 = 0x8368
                    int32_t var_4c_19 = 4
                    var_40 = 1
                    char var_3e_19 = 1
                case 0x13
                    var_58 = 0x1405
                    int32_t var_4c_20 = 1
                    var_40 = 0
                    char var_3e_20 = 0
        
        uint32_t rax_8 = zx.d(*(rsi_1 - 6))
        uint32_t rcx_2 = zx.d(r15)
        
        if (not(test_bit(rcx_2, rax_8)))
            r15 = rcx_2.w | (1 << (rax_8 u% 0x20)).w
            *(arg1 + (zx.q(rax_8) << 1) + 0x1cc) = *(rsi_1 - 2)
        
        int64_t rdi_1 = sx.q(*(arg1 + 0x1c0))
        int32_t rax_10 = (rdi_1 + 1).d
        *(arg1 + 0x1c0) = rax_10
        
        if (rax_10 s> *(arg1 + 0x1c4))
            sub_14195ae90(arg1)
        
        i += 1
        int128_t* rcx_5 = rdi_1 * 0x1c
        rsi_1 += 8
        *(rcx_5 + arg1) = var_58.o
        *(rcx_5 + arg1 + 0x10) = rax_3.q
        *(rcx_5 + arg1 + 0x18) = var_40.d
    while (i s< *(arg2 + 0x80))
    
    r14 = &arg1[0x1cc]

void arg_8
void* arg_10 = &arg_8
sub_1419513f0(arg1, *(arg1 + 0x1c0))
int32_t rax_12 = sub_140b212b0(arg1, *(arg1 + 0x1c0) * 0x1c, 0)
*(arg1 + 0x1c8) = rax_12
*(arg1 + 0x1c8) = sub_140b212b0(r14, 0x20, rax_12)
return arg1
