// 函数: sub_141bb1700
// 地址: 0x141bb1700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141b46500(arg2)
int32_t rsi = sub_1408e52c0(rax)
void var_38
int128_t* rax_2 = sub_141b464f0(rax, &var_38)
int64_t* rdi

if (*(rax_2 + 8) != 0)
    rdi = nullptr
else
    rdi = *rax_2

int64_t* rbx_1 = rdi

if (rdi == 0)
    goto label_141bb177a

int64_t rcx_3 = *(rdi[1] + 0x10)
uint64_t result

if (((rcx_3 u>> 0x30).b & 1) == 0)
    if (((rcx_3 u>> 0x11).b & 1) == 0)
        goto label_141bb177a
    
    result.b = *(rdi + 0x7b) != 0xff
else
    rbx_1 = rdi[0xf]
label_141bb177a:
    int64_t rbx_2 = rbx_1[1]
    sub_140d11100()
    result.b = rbx_2 == &data_143e1ba20

if (result.b == 0)
    result.b = 0
else
    if (rsi == 0xffffffff)
        rsi = 0
    
    if (rdi == 0 || ((zx.q(*(rdi[1] + 0x10)) u>> 0x11).b & 1) == 0)
        result.b = *(rdi + 0x3c) == 1
    else
        result.b = *(rdi + 0x7b) != 0xff
    
    if (result.b == 0 || rsi s>= rdi[7].d)
        result.b = 0
    else
        int64_t rbx_3 = sx.q(*(rdi + 0x4c))
        result = sx.q(*(rdi + 0x3c) * rsi) + arg1
        int64_t rbx_4 = rbx_3 + result
        
        if (rbx_3 == neg.q(result))
            result.b = 0
        else
            sub_140a8cee0(arg2, rbx_4)
            
            if (arg3 == rbx_4)
                *arg4 = rdi
                result.b = 1
            else if (not(test_bit(zx.q(rdi[8].d), 0x1e)))
                (*(*rdi + 0xb0))(rdi, arg3, rbx_4, 1)
                *arg4 = rdi
                result.b = 1
            else
                memcpy(arg3, rbx_4, *(rdi + 0x3c))
                result.b = 1
                *arg4 = rdi

return result
