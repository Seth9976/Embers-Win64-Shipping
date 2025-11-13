// 函数: sub_1428f3ac0
// 地址: 0x1428f3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
int64_t* result = arg1

if (arg1 != 0)
    goto label_1428f3b11

int64_t* result_1 = sub_1428f3cc0()
result = result_1
int32_t rax_1
int32_t r8

if (result_1 != 0)
    rbp = 1
    *(result_1 + 0x14) = arg4
label_1428f3b11:
    int64_t rdi_1 = result[6]
    
    if (rdi_1 == 0)
        if (arg2 == 0)
            goto label_1428f3ba4
        
        int32_t rax_2
        int32_t r8_1
        
        if (result[7] == 0)
            int64_t rax_3 = sub_1428a6ba0(arg2)
            rdi_1 = rax_3
            
            if (rax_3 == 0)
                rax_2 = 0xff
                r8_1 = (rdi_1 + 0x41).d
                goto label_1428f3b7a
            
            sub_1428a6780(result[6])
            result[6] = rdi_1
        label_1428f3ba4:
            
            if (rdi_1 != 0)
                int64_t rdx_2 = *(*result + 8)
                
                if (rdx_2 != 0)
                    if (rdx_2(result) != 0)
                        return result
                    
                    rax_1 = 0xa2
                    r8 = 0x67
                else
                    rax_1 = 0x9e
                    r8 = (rdx_2 + 0x6c).d
            else
                rax_1 = 0x9a
                r8 = (rdi_1 + 0x6f).d
        else
            rax_2 = 0xf9
            r8_1 = 0x6e
        label_1428f3b7a:
            sub_1428a5670(0x25, 0x81, r8_1, "crypto\dso\dso_lib.c", rax_2)
            rax_1 = 0x95
            r8 = 0x70
    else
        rax_1 = 0x8c
        r8 = 0x6e
else
    rax_1 = 0x7f
    r8 = 0x41

sub_1428a5670(0x25, 0x70, r8, "crypto\dso\dso_lib.c", rax_1)

if (rbp != 0)
    sub_1428f39b0(result)

return nullptr
