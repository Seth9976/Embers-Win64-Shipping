// 函数: ?write_string@?$string_output_adapter@_W@__crt_stdio_output@@QEBAXQEB_WHQEAH1@Z
// 地址: 0x142a219e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg5
int32_t rbp = arg4.d
int64_t* rbx = arg3
void* rdi = arg1
int64_t i_1 = 4
int16_t result
int64_t i

do
    int16_t rax_1 = *rsi
    
    if (rax_1 != 0)
        int128_t* rcx = rdi
        
        if ((0xfefe & rax_1) == 0)
            sub_1403bb7a0(rcx, arg2, rbx, rbp)
        else
            sub_1403bb861(rcx, arg2, rbx, rbp)
    
    result = rsi[1]
    
    if (result != 0)
        if ((0xfefe & result) == 0)
            result = sub_1403bb7a0(rdi + 0x40, arg2, &rbx[1], rbp)
        else
            result = sub_1403bb861(rdi + 0x40, arg2, &rbx[1], rbp)
    
    rdi -= -0x80
    rbx += sx.q((arg4 << 2).d)
    rsi = &rsi[2]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
