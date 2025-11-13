// 函数: sub_1422b7e50
// 地址: 0x1422b7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_143a2fdc8
int32_t result = 1

if (rdx s> 1)
    void* r9_1 = data_143a2fdc0
    int64_t* rcx = r9_1 + 0x128
    
    while (*rcx != *arg1)
        result += 1
        rcx = &rcx[0x13]
        
        if (result s>= rdx)
            return result
    
    if (result != 0xffffffff)
        int32_t var_6c_1 = 0x3f99999a
        int128_t var_58_1 = data_1432d8650
        int128_t var_68_1 = data_1432d8640
        int32_t var_30_1 = 0x3f6e147b
        int128_t var_2c_1 = data_143318890
        int64_t rcx_1 = sx.q(result) * 0x98
        *(rcx_1 + r9_1 + 0x90) = 0
        void* rdx_2 = data_143a2fdc0 + rcx_1
        int128_t var_48_1 = data_14399f5c0
        int32_t var_34_1 = 0x3da3d70a
        int128_t var_98
        __builtin_memcpy(&var_98, 
            "\xc5\x1b\x69\x3f\x61\x32\xad\x3e\x5f\x29\x8b\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\x94\x32\x"
        "b6\x3d\x99\xa6\x93\x3d\x00\x00\x80\x3f\xed\x2f\x2b\x40\xcd\xcc\xcc\x3d\x00", 
            0x29)
        int128_t var_1c_1 = data_142d3f670
        __builtin_memcpy(rdx_2, 
            "\xc5\x1b\x69\x3f\x61\x32\xad\x3e\x5f\x29\x8b\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\x94\x32\x"
        "b6\x3d\x99\xa6\x93\x3d\x00\x00\x80\x3f", 
            0x20)
        int32_t var_78
        *(rdx_2 + 0x20) = var_78.o
        __builtin_memcpy(rdx_2 + 0x30, 
            "\x8f\xc2\xf5\x3e\x85\xeb\xd1\x3e\x29\x5c\x8f\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\xa4\x70\x"
        "bd\x3e\x9a\x99\x99\x3e\x00\x00\x80\x3f", 
            0x20)
        *(rdx_2 + 0x50) = var_48_1
        *(rdx_2 + 0x60) = 0x3f800000.o
        *(rdx_2 + 0x70) = var_2c_1
        *(rdx_2 + 0x80) = var_1c_1:4.q
        result = var_1c_1:0xc.d
        *(rdx_2 + 0x88) = result

return result
