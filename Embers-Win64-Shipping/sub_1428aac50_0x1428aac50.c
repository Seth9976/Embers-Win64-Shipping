// 函数: sub_1428aac50
// 地址: 0x1428aac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0

if (arg3 != 1)
    return sub_1428aadd0(arg1, arg2, arg3, arg4) __tailcall

int64_t* rax_2 = sub_1428b6d90(arg2, &data_142d948d8)

if (rax_2 == 0)
    sub_1428a5670((rax_2 + 0xb).d, 0x84, (rax_2 + 2).d, "crypto\x509\by_file.c", 0xc7)
    return 0

int32_t* rax_4 = sub_1428f66c0(rax_2, nullptr, 0, &data_1437020ab, arg4)
sub_142899e70(rax_2)

if (rax_4 == 0)
    sub_1428a5670((rax_4 + 0xb).d, 0x84, (rax_4 + 9).d, "crypto\x509\by_file.c", 0xcd)
    return 0

int32_t rdi_1 = 0

if (sub_142898c70(rax_4) s> 0)
    while (true)
        int64_t* rax_7 = sub_142898ea0(rax_4, rdi_1)
        void* rdx_2 = *rax_7
        
        if (rdx_2 != 0)
            if (sub_14289d850(*(arg1 + 0x18), rdx_2) == 0)
                goto label_1428aadac
            
            rbx += 1
        
        void* rdx_3 = rax_7[1]
        
        if (rdx_3 != 0)
            if (sub_14289d8a0(*(arg1 + 0x18), rdx_3) == 0)
                goto label_1428aadac
            
            rbx += 1
        
        rdi_1 += 1
        
        if (rdi_1 s>= sub_142898c70(rax_4))
            if (rbx != 0)
                goto label_1428aadac
            
            break

sub_1428a5670(0xb, 0x84, 0x88, "crypto\x509\by_file.c", 0xdf)
label_1428aadac:
sub_142898cb0(rax_4, sub_1428f6600)
return zx.q(rbx)
