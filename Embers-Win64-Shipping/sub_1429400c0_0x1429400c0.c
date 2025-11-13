// 函数: sub_1429400c0
// 地址: 0x1429400c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x270)
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t result = sub_142940360(arg1, arg2)

if (arg3 != 0)
    void var_228
    sub_14293fc50(&var_228, arg2, 0)
    void var_1e8
    void var_128
    sub_14296dba0(&var_128, &var_1e8, &var_228)
    void var_e8
    sub_14296c9a0(&var_e8, &var_228, &var_1e8)
    void var_168
    void var_a8
    sub_14296dfb0(&var_a8, &var_168, 0x13154)
    sub_14296dba0(&var_a8, &data_14353de50, &var_a8)
    int128_t var_1a8
    void var_68
    sub_14296c9a0(&var_68, &var_1a8, &var_1a8)
    int128_t var_268
    sub_14296dcf0(&var_268, &var_1a8, arg1 + 0xc0)
    var_1a8 = var_268
    int128_t var_258
    int128_t var_198_1 = var_258
    int128_t var_248
    int128_t var_188_1 = var_248
    int128_t var_238
    int128_t var_178_1 = var_238
    sub_14293e1b0(&var_228, arg1, 0)
    sub_14296dba0(arg1 + 0x100, &var_1e8, &var_228)
    sub_14296c9a0(arg1 + 0x140, &var_228, &var_1e8)
    sub_14296dfb0(arg1 + 0x180, &var_168, 0x13154)
    sub_14296dba0(arg1 + 0x180, &data_14353de50, arg1 + 0x180)
    sub_14296c9a0(arg1 + 0x1c0, &var_1a8, &var_1a8)
    int32_t rax_2 = 1 << arg3.b
    
    if (rax_2 s> 2)
        void* rbx_1 = arg1 + 0x280
        uint64_t i_1 = zx.q(rax_2 - 2)
        uint64_t i
        
        do
            sub_14296dcf0(&var_268, &var_1a8, &var_68)
            var_1a8 = var_268
            int128_t var_198_2 = var_258
            int128_t var_188_2 = var_248
            int128_t var_178_2 = var_238
            sub_14293e1b0(&var_228, &var_128, 0)
            sub_14296dba0(rbx_1 - 0x80, &var_1e8, &var_228)
            sub_14296c9a0(rbx_1 - 0x40, &var_228, &var_1e8)
            sub_14296dfb0(rbx_1, &var_168, 0x13154)
            sub_14296dba0(rbx_1, &data_14353de50, rbx_1)
            sub_14296c9a0(rbx_1 + 0x40, &var_1a8, &var_1a8)
            rbx_1 += 0x100
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1428b8960(&var_228, 0x100)
    result = sub_1428b8960(&var_128, 0x100)

__security_check_cookie(rax_1 ^ &var_288)
return result
