// 函数: sub_1421486e0
// 地址: 0x1421486e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
label_142148701:
void* rax_1
int64_t rax_2
void* rdx

if (rsi != 0)
    rax_1 = sub_142543020()
    rdx = *(rsi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

int128_t result

if (rsi == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    result = *(arg1 + 0x20)
    *arg3 = result
    return result

int32_t rbx_1 = 0

if (*(rsi + 0xf8) s> 0)
    int64_t r14_1 = 0
    int32_t* rdi_2
    
    while (true)
        rdi_2 = *(rsi + 0xf0) + r14_1
        void arg_10
        int64_t* rax_4
        
        if (*sub_140b4c620(&arg_10, rdi_2) != *arg1 || rdi_2[3] != arg1[1].d
                || rdi_2[2].b != *(arg1 + 0xc))
            rax_4.b = 0
        else
            rax_4.b = 1
        
        if (rax_4.b != 0)
            break
        
        rbx_1 += 1
        r14_1 += 0x30
        
        if (rbx_1 s>= *(rsi + 0xf8))
            rsi = *(rsi + 0xd0)
            goto label_142148701
    
    if (rdi_2 != 0)
        result = *(rdi_2 + 0x10)
        *arg3 = result
        return result

*(rsi + 0xd0)
