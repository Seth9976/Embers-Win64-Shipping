// 函数: sub_140e41c20
// 地址: 0x140e41c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x37].b != 0
arg1[0x36].q = arg1 + 0x3f1
*(arg1 + 0x368) = 0

if (cond:0)
    return 

int64_t* rcx = arg1[0x11].q
int32_t rax_2 = (*(*rcx + 8))(rcx, arg2, 0x2000, &arg1[0x37])

if (rax_2 == 0xffffffff)
label_140e41dd2:
    sub_140e43530(arg1, 0xffffff1f)
    noreturn

while (true)
    int32_t rax_3 = rax_2 + *(arg1 + 0x368)
    *(arg1 + 0x368) = rax_3
    
    if (rax_3 s>= 0x2000 || arg1[0x37].b != 0)
        *(arg1 + 0x3588) += rax_3
        __builtin_memcpy(sx.q(rax_3) + arg1[0x36].q, 
            "\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\x"
        "ff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff"
        "d9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9"
        "ff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff"
        "d9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9"
        "ff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9\xff\xd9", 
            0x80)
        break
    
    int64_t* rcx_1 = arg1[0x11].q
    rax_2 = (*(*rcx_1 + 8))(rcx_1, arg1 + 0x3f1 + sx.q(rax_3), zx.q(0x2000 - rax_3), &arg1[0x37])
    
    if (rax_2 == 0xffffffff)
        goto label_140e41dd2
    
    continue
