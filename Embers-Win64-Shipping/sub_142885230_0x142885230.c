// 函数: sub_142885230
// 地址: 0x142885230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = *(arg1 + 0x18)

if (rax != 0)
    goto label_142885271

void* rax_1 = *(arg1 + 0x20)

if (rax_1 != 0)
    rax = *(rax_1 + 0x598)
label_142885271:
    int64_t i = 0
    char const (** const r10_1)[0x5] = &data_1434e7f00
    
    do
        char const (* rax_3)[0x5] = *r10_1
        void* r8_1 = arg2 - rax_3
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_3)
            j = zx.d(*(rax_3 + r8_1))
            
            if (rdx != j)
                break
            
            rax_3 = &(*rax_3)[1]
        while (j != 0)
        
        if (rdx - j == 0)
            int32_t rdx_2 = *(i * 0x10 + 0x1434e7f08)
            
            if (rdx_2 s>= 0)
                return sub_14285f650(**rax, rdx_2, arg3) __tailcall
            
            break
        
        i += 1
        r10_1 = &r10_1[2]
    while (i u< 8)

return 0
