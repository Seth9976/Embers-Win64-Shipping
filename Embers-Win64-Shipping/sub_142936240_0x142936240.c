// 函数: sub_142936240
// 地址: 0x142936240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t** r15 = nullptr
uint64_t rbx = zx.q(arg4)

if (arg1 == 0 || arg2 == 0 || arg3 == 0)
    sub_1428a5670(0x22, 0x7e, 0x6b, "crypto\x509v3\v3_sxnet.c", 0x90)
    return 0

int64_t rdi_1 = -1

if (rbx.d == 0xffffffff)
    rbx = -1
    
    do
        rbx += 1
    while (arg3[rbx] != 0)

if (rbx.d s> 0x40)
    sub_1428a5670(0x22, 0x7e, 0x84, "crypto\x509v3\v3_sxnet.c", 0x96)
    return 0

int64_t* r14_1 = *arg1

if (r14_1 != 0)
    goto label_142936313

int64_t* rax_2 = sub_1428db530(&data_1435396a0)
r14_1 = rax_2

if (rax_2 == 0)
label_1429363c8:
    sub_1428a5670(0x22, 0x7e, 0x41, "crypto\x509v3\v3_sxnet.c", 0xb3)
    sub_1428c3d60(r15, &data_143539630)
    sub_1428c3d60(r14_1, &data_1435396a0)
    *arg1 = 0
else
    if (sub_1428e4980(*rax_2, 0) == 0)
        goto label_1429363c8
    
    *arg1 = r14_1
label_142936313:
    
    if (sub_142936420(r14_1, arg2) == 0)
        int32_t** rax_5 = sub_1428db530(&data_143539630)
        r15 = rax_5
        
        if (rax_5 != 0)
            if (rbx.d == 0xffffffff)
                do
                    rdi_1 += 1
                while (arg3[rdi_1] != 0)
                
                rbx = zx.q(rdi_1.d)
            
            if (sub_1428e61a0(rax_5[1], arg3, rbx.d) != 0 && sub_142898d50(r14_1[1], r15) != 0)
                *r15 = arg2
                return 1
        
        goto label_1429363c8
    
    sub_1428a5670(0x22, 0x7e, 0x85, "crypto\x509v3\v3_sxnet.c", 0xa2)

return 0
