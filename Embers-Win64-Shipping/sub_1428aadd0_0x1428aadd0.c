// 函数: sub_1428aadd0
// 地址: 0x1428aadd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
int32_t rdi = 0
void* i_1 = nullptr
int64_t* rax = sub_14289a500(&data_143507b90)
int32_t rax_1

if (rax != 0)
    rax_1 = sub_142899cf0(rax, 0x6c, 3, arg2)

if (rax == 0 || rax_1 s<= 0)
    sub_1428a5670(0xb, 0x6f, 2, "crypto\x509\by_file.c", 0x54)
else if (arg3 == 1)
    void* i_2 = sub_1428c76f0(rax, 0, 0, &data_1437020ab, arg4)
    i_1 = i_2
    
    if (i_2 != 0)
        void* i
        
        do
            int32_t rax_2
            int512_t zmm1
            rax_2, zmm1 = sub_14289d850(*(arg1 + 0x18), i_1)
            
            if (rax_2 == 0)
                goto label_1428aaf47
            
            rdi += 1
            sub_1428a2c50(i_1)
            i = sub_1428c76f0(rax, 0, 0, &data_1437020ab, zmm1)
            i_1 = i
        while (i != 0)
    
    if ((sub_1428a5510() & 0xfff) == 0x6c && rdi s> 0)
        sub_1428a49e0()
        rbp = rdi
        goto label_1428aaefe
    
    sub_1428a5670(0xb, 0x6f, 9, "crypto\x509\by_file.c", 0x61)
else if (arg3 != 2)
    sub_1428a5670(0xb, 0x6f, 0x64, "crypto\x509\by_file.c", 0x78)
else
    void* i_3 = sub_1428a2500(rax, nullptr)
    i_1 = i_3
    
    if (i_3 != 0)
        int32_t rax_5 = sub_14289d850(*(arg1 + 0x18), i_3)
        
        if (rax_5 != 0)
            rbp = rax_5
        label_1428aaefe:
            
            if (rbp == 0)
                sub_1428a5670(0xb, 0x6f, 0x87, "crypto\x509\by_file.c", 0x7c)
    else
        sub_1428a5670(0xb, 0x6f, arg3 + 0xb, "crypto\x509\by_file.c", 0x70)

label_1428aaf47:
sub_1428a2c50(i_1)
sub_142899e70(rax)
return zx.q(rbp)
