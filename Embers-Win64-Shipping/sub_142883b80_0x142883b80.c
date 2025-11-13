// 函数: sub_142883b80
// 地址: 0x142883b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
uint64_t rsi = arg5 + 0x40

if (arg8 != 0)
    rsi = rsi + 2 + arg7

int128_t* buffer1 = sub_1428a6730(rsi)
int32_t rdi_1

if (buffer1 != 0)
    memcpy(buffer1, arg4, arg5.d)
    void* rax = *(arg1 + 0xa8)
    *(buffer1 + arg5) = *(rax + 0xb8)
    *(buffer1 + arg5 + 0x10) = *(rax + 0xc8)
    void* rax_1 = *(arg1 + 0xa8)
    *(arg5 + 0x20 + buffer1) = *(rax_1 + 0x98)
    *(arg5 + 0x20 + buffer1 + 0x10) = *(rax_1 + 0xa8)
    
    if (arg8 != 0)
        *(arg5 + 0x20 + buffer1 + 0x20) = (arg7 u>> 8).b
        *(arg5 + 0x20 + buffer1 + 0x21) = arg7.b
        
        if (arg7 != 0 || arg6 != 0)
            memcpy(arg5 + 0x42 + buffer1, arg6, arg7.d)
    
    if (memcmp(buffer1, "client finished", 0xf) == 0)
    label_142883d93:
        sub_1428a5670(0x14, 0x13a, 0x16f, "ssl\t1_enc.c", 0x25f)
        rdi_1 = 0
    else
        if (memcmp(buffer1, "server finished", 0xf) == 0 || (*buffer1 == 0x732072657473616d
                && *(buffer1 + 8) == 0x65726365 && *(buffer1 + 0xc) == 0x74))
            goto label_142883d93
        
        if (memcmp(buffer1, "extended master secret", 0x16) == 0 || (*buffer1 == 0x617078652079656b
                && *(buffer1 + 8) == 0x6f69736e && *(buffer1 + 0xc) == 0x6e))
            goto label_142883d93
        
        void* rax_13 = *(arg1 + 0x508)
        int32_t var_30_1 = 0
        rdi_1 = sub_142883000(arg1, buffer1, rsi.d, 0, 0, 0, 0, 0, 0, 0, 0, rax_13 + 0x50, 
            (*(rax_13 + 8)).d, arg2, arg3)
else
    sub_1428a5670(0x14, 0x13a, (buffer1 + 0x41).d, "ssl\t1_enc.c", 0x263)
    rdi_1 = 0

sub_1428a6890(buffer1, rsi, "ssl\t1_enc.c", 0x266)
return zx.q(rdi_1)
