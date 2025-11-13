// 函数: sub_1420db980
// 地址: 0x1420db980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2d8dc != 0 && sub_142437330() s> 0)
    arg3 = sub_1423dcef0(data_143f5b298, 0)

int64_t* rcx_1 = *arg1
int32_t rsi = 1
char rax_3

if (*(rcx_1 + 0xba) s>= 0)
    rax_3 = (*(*rcx_1 + 0x278))(rcx_1)

int64_t rbp
int32_t rdi

if (*(rcx_1 + 0xba) s< 0 || rax_3 != 0)
    rdi = 1
    rbp = 1
else if (sub_14242d240(*arg1[1], arg3) != 0)
    rdi = 0
    rbp = 1
else
    rbp.b = 0
    rdi = 0

if (data_143a2d8b8 != 0 && sub_14243ade0(*arg1[1]) != 0)
    rsi = 0

int64_t* rcx_6 = *arg1
char r14 = rcx_6[0x17].b
uint64_t result = sub_1420ebe70(rcx_6, *arg1[1], rbp.b, rdi | rsi, arg2)
void* rdi_2 = *arg1

if (*(rdi_2 + 0xb8) != 3)
    result = arg1[2]
    *result = 1
    rdi_2 = *arg1
    
    if (*(rdi_2 + 0xb8) != r14)
        result = arg1[3]
        *result = 1
        rdi_2 = *arg1

if (*(rdi_2 + 0x128) == 0)
    result = *(rdi_2 + 0x130)
    
    if (result != 0)
        if ((*(result + 0x1f4) & 0x20) == 0)
            result = sub_142442370(result)
            *(rdi_2 + 0x130) = 0
        else
            sub_142440df0(*arg1[1], result, 0)
            result = *(rdi_2 + 0x130)
            
            if ((*(result + 0x1f4) & 0x20) == 0)
                result = sub_142442370(result)
                *(rdi_2 + 0x130) = 0

return result
